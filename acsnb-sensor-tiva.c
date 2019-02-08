/*
 * acsnb-sensor-tiva.c
 *
 * Copyright (c) 2018, W. M. Keck Observatory
 * All rights reserved.
 *
 * Authors: Sylvain Cetre & Paul Richards
 *
 */

#include <stdint.h>
#include <stdbool.h>
#include <strings.h>

/* XDCtools Header files */
#include <xdc/std.h>
#include <xdc/cfg/global.h>
#include <xdc/runtime/System.h>

/* BIOS Header files */
#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/knl/Semaphore.h>

/* TI-RTOS Header files */
#include <ti/drivers/GPIO.h>
#include <ti/drivers/I2C.h>
#include <ti/drivers/SPI.h>
#include "inc/hw_ints.h"
#include "inc/hw_types.h"
#include "inc/hw_memmap.h"
#include "driverlib/sysctl.h"
#include "driverlib/gpio.h"
#include "driverlib/i2c.h"
#include "driverlib/timer.h"
#include "driverlib/pin_map.h"

/* Board Header file */
#include "Board.h"

// Uncomment this line to enable debugging a single port in CC Studio, with diagnostic printfs
//#define DEBUG_INTERRUPT 1

// -----------------------------------------------------------------------------
// High level defines

// Firmware revision is 0-0-2 (as of 2019-02-07 PMR)
#define FIRMWARE_REV_0 0
#define FIRMWARE_REV_1 0
#define FIRMWARE_REV_2 2

#define MAX_SENSORS               6

#ifdef DEBUG_INTERRUPT
#define MAX_SENSOR_TIMEOUT_MS     5000
#define MAX_FAILED_INIT_WAIT_MS   5000
#else
// Run the sensor timeouts faster when debugging
#define MAX_SENSOR_TIMEOUT_MS     1000
#define MAX_FAILED_INIT_WAIT_MS   1000
#endif

#define MIN_TASK_SLEEP_MS         1
#define MIN_TEMP_READ_PERIOD_MS   1000
#define FILTER_COEFF              0.99333

// Signature pattern to determine if it's a real message
#define SIGNATURE0               (0xA5)
#define SIGNATURE1               (0x5A)

// -----------------------------------------------------------------------------
// HDC1080 - Temperature and humidity sensor
#define HDC1080_ADDR              0x40
#define HDC1080_TMP_REG           0x00
#define HDC1080_HUM_REG           0x01

// HDC1080 configuration register definitions
// Bit 15: RST (1 = software reset)
// Bit 13: HEAT (0 = heater disabled)
// Bit 12: MODE (0 = temp OR humidity, 1 = temp AND humidity in sequence)
// Bit 11: BTST (0 = battery voltage > 2.8V)
// Bit 10: TRES (0 = 14 bit temperature measurement resolution)
// Bit 9+8: HRES (00 = 14 bit humidity  measurement resolution)
// All other bits reserved and must be 0
#define HDC1080_CFG_REG           0x02
#define HDC1080_CFG_MODE_T_OR_H   0b0000000000000000
#define HDC1080_CFG_MODE_T_AND_H  0b0001000000000000
#define HDC1080_TRIGGER_BOTH      0x00
#define HDC1080_TRIGGER_ONE       0x01
#define HDC1080_SB1               0xFB
#define HDC1080_SB2               0xFC
#define HDC1080_SB3               0xFD
#define HDC1080_MANUFID           0xFE
#define HDC1080_DEVICEID          0xFF

// -----------------------------------------------------------------------------
// AD7746 - Capacitance sensor
#define AD7746_ADDR               0x48
#define AD7746_WRITE              0x00
#define AD7746_READ               0x01

// Register definitions
#define AD7746_STATUS_REG         0x00
#define AD7746_CAP_SETUP_REG      0x07

// Voltage setup register definitions (spec pg 16)
// Bit 7: VTEN (1 = enables voltage/temperature channel for single conversion)
// Bit 6-5: VTMD1, VTMD0 Channel Input (00 = Internal temperature sensor)
// Bit 4: EXTREF (0 = select the on-chip internal reference)
// Bit 3-2: (00 - These bits must be 0 for proper operation)
// Bit 1: VTSHORT (0 = disable internal short of the voltage/temperature channel input for test purposes)
// Bit 0 VTCHOP (1 = sets internal chopping on the voltage/temperature channel / must be set to 1 for the specified voltage/temperature channel performance)

#define AD7746_VT_SETUP_REG       0x08
#define AD7746_VT_SETUP_DISABLE   0x00
#define AD7746_VT_SETUP_INT_TEMP  0b10000001

// Excitation setup register definitions (spec pg 17)
// Bit 7: CLKCTRL (0 = default, 1 = decrease frequencies by factor of 2)
// Bit 6: EXCON   (1 = excitation signal present on output during cap channel conversion AND during voltage/temp conversion)
// Bit 5: EXCB    (0 = disable EXCB pin as the excitation output)
// Bit 4: NOTEXCB (0 = disable EXCB pin as the inverted excitation output)
// Bit 3: EXCA    (1 = enable EXCA pin as the excitation output)
// Bit 2: NOTEXCA (0 = disable EXCA pin as the inverted excitation output)
// Bit 1,0: EXCLV1 EXCLV0 (excitation voltage level)
//          11 = Voltage on cap     = (+/- Vdd)/2
//               EXC Pin Low Level  = 0
//               EXC Pin High Level = Vdd

#define AD7746_EXC_SETUP_REG      0x09
#define AD7746_EXC_SET_A          0b01001011

#define AD7746_CFG_REG            0x0A
#define AD7746_CAP_OFFSET_H       0x0D
#define AD7746_CAP_OFFSET_L       0x0E
#define AD7746_CAP_GAIN_H         0x0F
#define AD7746_CAP_GAIN_L         0x10
#define AD7746_VOLT_GAIN_H        0x11
#define AD7746_VOLT_GAIN_L        0x12


/* Temperature conversion time selections (spec page 18) */
typedef enum {

  adtct20msSingle               = 0b00000010, // 20ms single conversion
  adtct32msSingle               = 0b01000010, // 32ms single conversion
  adtct62msSingle               = 0b10000010, // 62ms single conversion
  adtct122msSingle              = 0b11000010  // 122ms single conversion

} adTemperatureConversionTime;
#define DEFAULT_TEMPERATURE_CONVERSION_TIME adtct32msSingle
#define AD7746_CAP_VS_TEMP_TRIGGER_INTERVAL 10   // Trigger one temperature read every 10 cap reads


/* Conversion time selection choices (spec page 18) */
typedef enum {

  adct11msCont                  = 0x01, // 11ms continuous
  adct11msSingle                = 0x02, // 11ms single
  adct38msCont                  = 0x19, // 38.0ms continuous
  adct38msSingle                = 0x1A, // 38ms single
  adct109msSingle               = 0x3A  // 109.6ms single

} adConversionTime;

// Conversion time is selected via the SPI interface
#define FAST_CONVERSION_TIME      adct38msSingle
#define DEFAULT_CONVERSION_TIME   adct109msSingle
adConversionTime adAllSensorConversionTime = DEFAULT_CONVERSION_TIME;


/* Single / differential capacitance selection choices */
typedef enum {
  //adcsC1D1                      = 0xA0, // CIN1, DIFF=1
  adcsC2D1                      = 0xE0, // CIN2, DIFF=1
  adcsC1D0                      = 0x80, // CIN1, DIFF=0
  adcsC2D0                      = 0xC0  // CIN2, DIFF=0

} adCapSelect;

#define DEFAULT_CAPACITOR_SELECT adcsC2D1

// Flags to indicate whether to only get the differential cap, or get all 3 (for each sensor)
bool adGetAllCaps[MAX_SENSORS] = { false, false, false, false, false, false };


// -----------------------------------------------------------------------------
// PCA9536 - Relay driver to switch back to old ACS connection
#define PCA9536_ADDR              0x41
#define PCA9536_OUT_PORT_REG      0x01
#define PCA9536_OUT_PORT_RESET    0x00
#define PCA9536_OUT_PORT_NEW_ACS  0x05
#define PCA9536_OUT_PORT_OLD_ACS  0x0A
#define PCA9536_CONFIG_REG        0x03
#define PCA9536_CONFIG_ALL_OUTPUT 0x00

/* PCA9536 state, sets the old/new ACS relay positions */
typedef enum {

  swOldACS    = 0x00,
  swNewACS    = 0x01

} swRelayPositions;


// -----------------------------------------------------------------------------
// I2C structures x6 for the 6 sensors
I2C_Handle      i2c0, i2c1, i2c2, i2c3, i2c4, i2c5;
I2C_Params      i2cParams0, i2cParams1, i2cParams2, i2cParams3, i2cParams4, i2cParams5;
I2C_Transaction i2cTransaction0, i2cTransaction1, i2cTransaction2, i2cTransaction3, i2cTransaction4, i2cTransaction5;

// SPI structures to handle the SPI slave communication
SPI_Handle      slaveSpi;
SPI_Params      slaveSpiParams;
SPI_Transaction slaveTransaction1;


// -----------------------------------------------------------------------------
// SPI messaging

// Define a structure which represents the data going back down the SPI, contains
// all the values of capacitance and temperature and humidity.  Packing
// is used here to prevent any padding that might be inserted by the compiler.
union spiMessageOut_u {

  struct {

      // 5 bytes of Header information first
      uint8_t signature0;
      uint8_t signature1;
      uint8_t version0;
      uint8_t version1;
      uint8_t version2;

      struct {

        // Bytes 0 and 1 are the temperature
        uint8_t humidityHigh;
        uint8_t humidityLow;

        // Bytes 2, 3 and 4 are the differential capacitance, a 24 bit value
        uint8_t diffCapHigh;
        uint8_t diffCapMid;
        uint8_t diffCapLow;

        // Bytes 5, 6 and 7 are the C1 cap single capacitance
        uint8_t c1High;
        uint8_t c1Mid;
        uint8_t c1Low;

        // Bytes 8, 9 and 10 are the C2 cap single capacitance
        uint8_t c2High;
        uint8_t c2Mid;
        uint8_t c2Low;

        // Byte 11, 12 and 13 are the filtered differential capacitance, a 24 bit value
        uint8_t filtCapHigh;
        uint8_t filtCapMid;
        uint8_t filtCapLow;

        // Bytes 14, 15 are the temperature
        uint8_t tempHigh;
        uint8_t tempLow;

        // Bytes 16, 17, and 18 are the on-chip temperature from the capacitance sensor
        uint8_t chiptempHigh;
        uint8_t chiptempMid;
        uint8_t chiptempLow;

      } sensor[MAX_SENSORS];

  } msg;

  uint8_t buf[5 + (MAX_SENSORS * 19)];

} __attribute__((packed));

typedef union spiMessageOut_u spiMessageOut_t;

spiMessageOut_t spiMessageOut;

#define SPI_MESSAGE_LENGTH sizeof(spiMessageOut)

union spiMessageIn_u {
  struct {

    /* Currently only the first 4 bytes are used for commanding the device */
    uint8_t cmd0;
    uint8_t cmd1;
    uint8_t cmd2;
    uint8_t cmd3;
  };

  /* Make the input buffer match the size of the output by mapping an array on top of it */
  uint8_t buf[sizeof(spiMessageOut)];

} __attribute__((packed));

typedef union spiMessageIn_u spiMessageIn_t;

spiMessageIn_t spiMessageIn;


// -----------------------------------------------------------------------------
// Filtering of capacitance

typedef struct {

  /* Keep track of the current capacitance and the previous value */
  float c;
  float cprev;

} capFilter_t;

capFilter_t filter[MAX_SENSORS];


// -----------------------------------------------------------------------------
// Switch states

// Current switch command; set this flag to trigger the thread to switch its value
bool switchcmd0 = false;
bool switchcmd1 = false;
bool switchcmd2 = false;
bool switchcmd3 = false;
bool switchcmd4 = false;
bool switchcmd5 = false;

// New switch value
swRelayPositions switchNew0 = swNewACS;
swRelayPositions switchNew1 = swNewACS;
swRelayPositions switchNew2 = swNewACS;
swRelayPositions switchNew3 = swNewACS;
swRelayPositions switchNew4 = swNewACS;
swRelayPositions switchNew5 = swNewACS;

// Interrupt flags, one for each sensor
bool intflag0 = false;
bool intflag1 = false;
bool intflag2 = false;
bool intflag3 = false;
bool intflag4 = false;
bool intflag5 = false;


// -----------------------------------------------------------------------------
// Task control structure

// Semaphore for locking the message structure
Semaphore_Struct semStruct;
Semaphore_Handle semHandle;


// Task state machine discrete states
typedef enum {

  tsPOR                 = 0,
  tsInit                = 1,
  tsInitFailed          = 2,
  tsInitFailedWait      = 3,
  tsStart               = 4,
  tsRunning             = 5,
  tsRunFailed           = 6,
  tsRunFailedWait       = 7

} taskState;

// Task state data
typedef struct {

  uint32_t         device;
  uint32_t         board;
  uint32_t         intline;
  bool            *intflag;
  I2C_Handle       handle;
  I2C_Params       i2cparams;
  I2C_Transaction  trans;
  bool            *switchcmd;
  swRelayPositions *switchnew;
  adCapSelect      cap;
  adCapSelect      cap_prev;

  // State machine
  taskState        state;
  uint32_t         wait;

  // Time since last AD7746 interrupt
  uint32_t         inttime;

  // Count the number of AD7746 capacitance reads
  uint32_t         capreads;

  // Time since last HDC1080 read
  bool             hdc1080initialized;
  uint32_t         temptime;

} taskParams;


/* Function prototypes */
void taskI2Ccommon(taskParams p);
void taskI2C0(UArg arg0, UArg arg1);
void taskI2C1(UArg arg0, UArg arg1);
void taskI2C2(UArg arg0, UArg arg1);
void taskI2C3(UArg arg0, UArg arg1);
void taskI2C4(UArg arg0, UArg arg1);
void taskI2C5(UArg arg0, UArg arg1);

void ledActivities(int LED);
void slaveTaskFxn (UArg arg0, UArg arg1);
void slaveTaskCommand(void);

int setupAD7746(I2C_Handle i2c, I2C_Transaction i2cTransaction, uint8_t device);
int triggerAD7746capacitance(I2C_Handle i2c, I2C_Transaction i2cTransaction, adConversionTime ctim, adCapSelect cap, uint8_t device);
int triggerAD7746temperature(I2C_Handle i2c, I2C_Transaction i2cTransaction, uint8_t device);
int readAD7746(I2C_Handle i2c, I2C_Transaction i2cTransaction, adCapSelect cap, uint8_t device);

int setupHDC1080(I2C_Handle i2c, I2C_Transaction i2cTransaction, uint8_t device, bool reportfail);
int readHDC1080(I2C_Handle i2c, I2C_Transaction i2cTransaction, uint8_t device);

int setupPCA9536(I2C_Handle i2c, I2C_Transaction i2cTransaction, uint8_t device);
int switchPCA9536(I2C_Handle i2c, I2C_Transaction i2cTransaction, uint8_t device, swRelayPositions pos);


/*
 * Show activity on a LED gave as parameter
 *
 * Toggle 4 times the LED in order to see it on the board
 */
void ledActivities(int LED) {

  GPIO_toggle(LED);
  Task_sleep(200);
  GPIO_toggle(LED);
  Task_sleep(200);
  GPIO_toggle(LED);
  Task_sleep(200);
  GPIO_toggle(LED);
}


/* *  ======== slaveTaskFxn ========
 *  Task function for slave task.
 *
 *  This task runs on a higher priority, since slave
 *  has to be ready for master. Slave SPI sends a
 *  message to master and also receives message from
 *  master. Task for this function is created
 *  statically. See the project's .cfg file.
 */
void slaveTaskFxn (UArg arg0, UArg arg1) {

  slaveTransaction1.count = SPI_MESSAGE_LENGTH;

  /* Wait 5 seconds to allow time to initialize the I2C devices */
  Task_sleep(5000);

  /* Initialize SPI handle with slave mode */
  SPI_Params_init(&slaveSpiParams);
  slaveSpiParams.mode        = SPI_SLAVE;
  //slaveSpiParams.transferMode = SPI_MODE_BLOCKING;
  slaveSpiParams.frameFormat = SPI_POL1_PHA1;

  slaveSpi = SPI_open(Board_SPI0, &slaveSpiParams);
  if (slaveSpi == NULL) {
    System_abort("slave: Error initializing SPI\n");
  }

  slaveTransaction1.txBuf = spiMessageOut.buf;
  slaveTransaction1.rxBuf = spiMessageIn.buf;

  while (1) {

    /* Initiate SPI transfer, this could wait forever if the master isn't talking */
    SPI_transfer(slaveSpi, &slaveTransaction1);

    /* If the first byte of the rx buffer is not a 0, it is a command */
    if (spiMessageIn.cmd0 != 0) {

      /* Get access to resource */
      Semaphore_pend(semHandle, BIOS_WAIT_FOREVER);

      /* Process the task commands */
      slaveTaskCommand();

      /* Invalidate the command after processing */
      spiMessageIn.cmd0 = 0;

      /* Unlock resource */
      Semaphore_post(semHandle);

    }
  }

}


/*
 * List of command, first bit should be 1
 * - 110 use all old switch
 * - 111X use particular switch (0 = all new [for legacy compatibility], else bit position indicates on/off values)
 * - 1011 fast conv time
 * - 1010 slow cnv time
 * - 12X retrieve differential capacitance only
 * - 13X retrieve diff plus both single capacitances
 */
void slaveTaskCommand(void) {

  bool switchToNew, switchAllToOld, switchAllToNew, useFastConvTime, useSlowConvTime, getDiffOnly, getAllCaps;
  uint8_t diffDevice;

  switchAllToOld  = (spiMessageIn.cmd0 == 1) && (spiMessageIn.cmd1 == 1) && (spiMessageIn.cmd2 == 0);
  switchToNew     = (spiMessageIn.cmd0 == 1) && (spiMessageIn.cmd1 == 1) && (spiMessageIn.cmd2 == 1);
  useFastConvTime = (spiMessageIn.cmd0 == 1) && (spiMessageIn.cmd1 == 0) && (spiMessageIn.cmd2 == 1) && (spiMessageIn.cmd3 == 1);
  useSlowConvTime = (spiMessageIn.cmd0 == 1) && (spiMessageIn.cmd1 == 0) && (spiMessageIn.cmd2 == 1) && (spiMessageIn.cmd3 == 0);
  getDiffOnly     = (spiMessageIn.cmd0 == 1) && (spiMessageIn.cmd1 == 2);
  getAllCaps      = (spiMessageIn.cmd0 == 1) && (spiMessageIn.cmd1 == 3);

  // When setting differential vs diff+C1+C2, the device number is in cmd2
  diffDevice = spiMessageIn.cmd2;
  if (diffDevice > MAX_SENSORS)
    diffDevice = 0;

  /* Process the commands */
  if (switchToNew) {

    // Set the flags to indicate all the values are getting updated
    switchcmd0 = true;
    switchcmd1 = true;
    switchcmd2 = true;
    switchcmd3 = true;
    switchcmd4 = true;
    switchcmd5 = true;

    // By convention, 0x00 and 0xFF both equal "set all to new ACS"
    switchAllToNew = (spiMessageIn.cmd3 == 0);

    // New switch value,
    switchNew0 = (switchAllToNew || (spiMessageIn.cmd3 & 0b00000001)) ? swNewACS : swOldACS;
    switchNew1 = (switchAllToNew || (spiMessageIn.cmd3 & 0b00000010)) ? swNewACS : swOldACS;
    switchNew2 = (switchAllToNew || (spiMessageIn.cmd3 & 0b00000100)) ? swNewACS : swOldACS;
    switchNew3 = (switchAllToNew || (spiMessageIn.cmd3 & 0b00001000)) ? swNewACS : swOldACS;
    switchNew4 = (switchAllToNew || (spiMessageIn.cmd3 & 0b00010000)) ? swNewACS : swOldACS;
    switchNew5 = (switchAllToNew || (spiMessageIn.cmd3 & 0b00100000)) ? swNewACS : swOldACS;

  } else if (switchAllToOld) {

    // Set the flags to indicate all the values are getting updated
    switchcmd0 = true;
    switchcmd1 = true;
    switchcmd2 = true;
    switchcmd3 = true;
    switchcmd4 = true;
    switchcmd5 = true;

    switchNew0 = swOldACS;
    switchNew1 = swOldACS;
    switchNew2 = swOldACS;
    switchNew3 = swOldACS;
    switchNew4 = swOldACS;
    switchNew5 = swOldACS;

  // Use fast conversion time (38.0ms i.e 26.3Hz)
  } else if (useFastConvTime) {

    adAllSensorConversionTime = FAST_CONVERSION_TIME; // adct38msSingle

  // Use slow conversion time (109ms i.e 9Hz)
  } else if (useSlowConvTime) {

    adAllSensorConversionTime = DEFAULT_CONVERSION_TIME; // adct109msSingle

  } else if (getDiffOnly) {

    adGetAllCaps[diffDevice] = false;

  } else if (getAllCaps) {

    adGetAllCaps[diffDevice] = true;

  } else {

    System_printf("Bad command: %d %d %d %d\n", spiMessageIn.cmd0, spiMessageIn.cmd1, spiMessageIn.cmd2, spiMessageIn.cmd3 );
    System_flush();
  }

}


void taskI2Ccommon(taskParams p) {

  /* Infinite loop around the state machine */
  while (1) {

    switch(p.state) {

      // ------------------------------------------------
      case tsPOR:

#ifdef DEBUG_INTERRUPT
        // Skip over all but device 0 when debugging
        if (p.device != 0) break;
#endif

        System_printf("(%d) Init device I2C.\n", p.device);
        System_flush();

        /* Create I2C for usage */
        I2C_Params_init(&p.i2cparams);

        // Set I2C communication speed
        p.i2cparams.bitRate = I2C_100kHz;

        // Open the I2C
        p.handle = I2C_open(p.board, &p.i2cparams);

        // Check that opening was successful, else kill the system
        if (p.handle == NULL) {
          System_abort("(%d) Error initializing I2C.\n");
        }

        // Pre-load the message header so all messages going out (even if sensors are disconnected)
        // are still valid.
        spiMessageOut.msg.signature0 = SIGNATURE0;
        spiMessageOut.msg.signature1 = SIGNATURE1;
        spiMessageOut.msg.version0   = FIRMWARE_REV_0;
        spiMessageOut.msg.version1   = FIRMWARE_REV_1;
        spiMessageOut.msg.version2   = FIRMWARE_REV_2;

        /* Power on reset state; drop into init immediately, don't even need to break */
        p.state = tsInit;


      // ------------------------------------------------
      case tsInit:
      default:

        /* Setup ACS connection relay control device */
        if (setupPCA9536(p.handle, p.trans, p.device) == -1) {

#ifndef DEBUG_INTERRUPT
          // Suppress these during debugging
          System_printf("(%d) Error initializing PCA9536 relay controller.\n", p.device);
          System_flush();
#endif

          /* Skip to init failed state to wait for next init pass */
          p.state = tsInitFailed;
          break;
        }

        /* Setup the capacitance sensing */
        if (setupAD7746(p.handle, p.trans, p.device) == -1) {
          System_printf("(%d) Error initializing AD7746 capacitance sensor.\n", p.device);
          System_flush();

          /* Skip to init failed state to wait for next init pass */
          p.state = tsInitFailed;
          break;
        }

        /* Setup the temperature/humidity sensing */
        if (setupHDC1080(p.handle, p.trans, p.device, true) == -1) {
          p.hdc1080initialized = false;
          System_printf("(%d) Error initializing HDC1080 temperature/humidity sensor (non fatal).\n", p.device);
          System_flush();

        } else {
          p.hdc1080initialized = true;
        }

        /* Got this far, it's now safe to start the device messaging */
        p.state = tsStart;

        System_printf("(%d) Init successful.\n", p.device);
        System_flush();


        // TODO: Why is this here?   Maybe don't need to wait 100ms before starting.
        Task_sleep(100);
        break;


      // ------------------------------------------------
      case tsInitFailed:

        /* Init failed, probably due to a disconnected sensor */

        /* Setup the wait for a while before re-init attempt */
        p.wait = MAX_FAILED_INIT_WAIT_MS;
        p.state = tsInitFailedWait;
        break;


      // ------------------------------------------------
      case tsInitFailedWait:

        /* Running down the timer before we try init again */
        if (p.wait < MIN_TASK_SLEEP_MS) {
          p.wait = 0;
        } else {
          p.wait = p.wait - MIN_TASK_SLEEP_MS;
        }

        if (p.wait == 0) {
          /* Time to try init again */
          p.state = tsInit;
        }

        break;


      // ------------------------------------------------
      case tsStart:

        /* Perform an initial setup of the device and discard the result; this should
         * disable any continuous triggering that might cause the interrupts to fire
         * repeatedly */
        p.cap = DEFAULT_CAPACITOR_SELECT; // adcsC2D1
        p.cap_prev = p.cap;
        triggerAD7746capacitance(p.handle, p.trans, adAllSensorConversionTime, p.cap, p.device);

        /* Clear the interrupt and sleep exceptionally long before re-enabling */
        GPIO_clearInt(p.intline);
        Task_sleep(5);
        GPIO_enableInt(p.intline);

        /* Ready for normal running */
        p.temptime = 0;
        p.inttime = 0;
        p.state = tsRunning;

        /* Assert the interrupt flag once to get the sequence rolling (with the side effect of the first read
         * being bogus) */
        *p.intflag = 1;
        break;


      // ------------------------------------------------
      case tsRunning:

        // SPI has set a flag to switch the node box relay
        if (*p.switchcmd == true) {
          *p.switchcmd = false;

          //TODO: What's with the long delay here?
          Task_sleep(500);
          switchPCA9536(p.handle, p.trans, p.device, *p.switchnew);
          Task_sleep(100);
        }

        // If we go for more than 5 seconds without a conversion, something fell off the rails, start over.
        if (p.inttime > MAX_SENSOR_TIMEOUT_MS) {
          p.inttime = 0;

          System_printf("(%d) Timeout triggering AD7746 device (%dms), re-initializing.\n", p.device, MAX_SENSOR_TIMEOUT_MS);
          System_flush();

          p.state = tsRunFailed;
          break;
        }

        /* A conversion has completed and interrupted.  Clear it and read out the converted value */
        if (*p.intflag == 1) {

#ifdef DEBUG_INTERRUPT
System_printf("Thread int flag 0\n"); System_flush();
#endif

          // As long as interrupts are coming in, don't accumulate time
          p.inttime = 0;

          // Setup for the next cap while reading the current one
          p.cap_prev = p.cap;

          // If only getting differential cap, force it here
          if (!adGetAllCaps[p.device]) {
            p.cap = DEFAULT_CAPACITOR_SELECT;

          } else switch (p.cap) {

            // Loop around the 3 values infinitely
            case adcsC2D1:
            default:
              p.cap = adcsC1D0;  // Get the C1 single next
              break;

            case adcsC1D0:
              p.cap = adcsC2D0;  // Get the C2 single next
              break;

            case adcsC2D0:
              p.cap = adcsC2D1;  // Get the differential next
              break;
          }

          // Clear interrupt flag now that we've handled it
          *p.intflag = 0;
          GPIO_disableInt(p.intline);
          Task_sleep(1);

          // Read back the converted value from the AD7746, this refers to the previous cap in the sequence
          if (readAD7746(p.handle, p.trans, p.cap_prev, p.device) == -1) {
            p.state = tsRunFailed;
            System_printf("(%d) Timeout reading AD7746 device, re-initializing.\n", p.device);
            System_flush();
          }

#ifdef DEBUG_INTERRUPT
System_printf("Thread read 0\n"); System_flush();
#endif

          Task_sleep(1);


          // --------------------------------------------------------------------------------------
          // Periodically read the humidity and temperature, but ONLY when the conversion is done.
          // Do this in order to 'stay off the bus' during a capacitance acquisition.  We will pick up
          // temperature and humidity after at least 1 second has passed, plus whatever time is left
          // on the most recent cap conversion.
          if (p.temptime > MIN_TEMP_READ_PERIOD_MS) {

            // Reset the time counter
            p.temptime = 0;

            /* Setup the temperature/humidity sensing, if a device needs it */
            if (!p.hdc1080initialized) {

              if (setupHDC1080(p.handle, p.trans, p.device, false) == 0) {
                p.hdc1080initialized = true;
                System_printf("(%d) HDC1080 temperature/humidity sensor reconnected.\n", p.device);
                System_flush();
              }

            } else {

              // Attempt to read temp/humidity; if it fails, hold the values in reset
              if (readHDC1080(p.handle, p.trans, p.device) == -1) {
                p.hdc1080initialized = false;
                System_printf("(%d) HDC1080 temperature/humidity sensor DISCONNECTED!\n", p.device);
                System_flush();

                /* Get access to resource */
                Semaphore_pend(semHandle, BIOS_WAIT_FOREVER);

                spiMessageOut.msg.sensor[p.device].tempHigh     = 0;
                spiMessageOut.msg.sensor[p.device].tempLow      = 0;
                spiMessageOut.msg.sensor[p.device].humidityHigh = 0;
                spiMessageOut.msg.sensor[p.device].humidityLow  = 0;

                /* Unlock resource */
                Semaphore_post(semHandle);

              }
            }
          }
          // End of temperature/humidity conversion code.
          // --------------------------------------------------------------------------------------

          // Setup interrupt for next conversion completion
          GPIO_clearInt(p.intline);
          GPIO_enableInt(p.intline);

          // Trigger the next conversion
          if (p.capreads++ == AD7746_CAP_VS_TEMP_TRIGGER_INTERVAL) {

#ifdef DEBUG_INTERRUPT
System_printf("Trigger temp 0\n"); System_flush();
#endif

            // Every Nth capacitance reading, trigger a temperature conversion instead
            if (triggerAD7746temperature(p.handle, p.trans, p.device) == -1) {
              p.state = tsRunFailed;
              System_printf("(%d) Timeout triggering AD7746 device (temperature), re-initializing.\n", p.device);
              System_flush();

              p.capreads = 0;
            }

          } else {

#ifdef DEBUG_INTERRUPT
System_printf("Trigger cap 0\n"); System_flush();
#endif

            // Normal case is to trigger capacitance reads over and over
            if (triggerAD7746capacitance(p.handle, p.trans, adAllSensorConversionTime, p.cap, p.device) == -1) {
              p.state = tsRunFailed;
              System_printf("(%d) Timeout triggering AD7746 device (caps), re-initializing.\n", p.device);
              System_flush();
            }

          }

          Task_sleep(1);

          p.inttime += 3;
          p.temptime += 3;
        }

        break;


      // ------------------------------------------------
      case tsRunFailed:

        /* Runtime failure, probably due to a disconnected sensor */

        /* Hold the cap/temp/hum in reset */

        /* Get access to resource */
        Semaphore_pend(semHandle, BIOS_WAIT_FOREVER);

        spiMessageOut.msg.signature0                    = SIGNATURE0;
        spiMessageOut.msg.signature1                    = SIGNATURE1;
        spiMessageOut.msg.version0                      = FIRMWARE_REV_0;
        spiMessageOut.msg.version1                      = FIRMWARE_REV_1;
        spiMessageOut.msg.version2                      = FIRMWARE_REV_2;
        spiMessageOut.msg.sensor[p.device].diffCapHigh  = 0;
        spiMessageOut.msg.sensor[p.device].diffCapMid   = 0;
        spiMessageOut.msg.sensor[p.device].diffCapLow   = 0;
        spiMessageOut.msg.sensor[p.device].c1High       = 0;
        spiMessageOut.msg.sensor[p.device].c1Mid        = 0;
        spiMessageOut.msg.sensor[p.device].c1Low        = 0;
        spiMessageOut.msg.sensor[p.device].c2High       = 0;
        spiMessageOut.msg.sensor[p.device].c2Mid        = 0;
        spiMessageOut.msg.sensor[p.device].c2Low        = 0;
        spiMessageOut.msg.sensor[p.device].tempHigh     = 0;
        spiMessageOut.msg.sensor[p.device].tempLow      = 0;
        spiMessageOut.msg.sensor[p.device].humidityHigh = 0;
        spiMessageOut.msg.sensor[p.device].humidityLow  = 0;
        spiMessageOut.msg.sensor[p.device].chiptempHigh = 0;
        spiMessageOut.msg.sensor[p.device].chiptempMid  = 0;
        spiMessageOut.msg.sensor[p.device].chiptempLow  = 0;

        /* Unlock resource */
        Semaphore_post(semHandle);

        /* Setup the wait for a while before re-init attempt */
        p.wait = MAX_FAILED_INIT_WAIT_MS;
        p.state = tsRunFailedWait;
        break;


      // ------------------------------------------------
      case tsRunFailedWait:

        /* Running down the timer before we try to init again */
        if (p.wait < MIN_TASK_SLEEP_MS) {
          p.wait = 0;
        } else {
          p.wait = p.wait - MIN_TASK_SLEEP_MS;
        }

        if (p.wait == 0) {
          /* Time to try init again */
          p.state = tsInit;
        }

        break;
    }

    /* Yield for 1ms before starting state machine again */
    Task_sleep(MIN_TASK_SLEEP_MS);
    p.inttime += MIN_TASK_SLEEP_MS;
    p.temptime += MIN_TASK_SLEEP_MS;
  }

}



/*
 *  ======== taskI2C0 ========
 *  Task for this function is created statically. See the project's .cfg file.
 */
void taskI2C0(UArg arg0, UArg arg1) {
  taskParams p;

  p.device    = 0;
  p.board     = Board_I2C0;
  p.intline   = Board_PININ0;
  p.intflag   = &intflag0;
  p.handle    = i2c0;
  p.i2cparams = i2cParams0;
  p.trans     = i2cTransaction0;
  p.switchcmd = &switchcmd0;
  p.switchnew = &switchNew0;
  p.inttime   = 0;
  p.state     = tsPOR;

  taskI2Ccommon(p);
}

/*
 *  ======== taskI2C1 ========
 *  Task for this function is created statically. See the project's .cfg file.
 */
void taskI2C1(UArg arg0, UArg arg1) {
  taskParams p;

  p.device    = 1;
  p.board     = Board_I2C1;
  p.intline   = Board_PININ1;
  p.intflag   = &intflag1;
  p.handle    = i2c1;
  p.i2cparams = i2cParams1;
  p.trans     = i2cTransaction1;
  p.switchcmd = &switchcmd1;
  p.switchnew = &switchNew1;
  p.inttime   = 0;
  p.state     = tsPOR;

  taskI2Ccommon(p);
}

/*
 *  ======== taskI2C2 ========
 *  Task for this function is created statically. See the project's .cfg file.
 */
void taskI2C2(UArg arg0, UArg arg1) {
  taskParams p;

  // References to the i2c particulars for this task
  p.device    = 2;
  p.board     = Board_I2C2;
  p.intline   = Board_PININ2;
  p.intflag   = &intflag2;
  p.handle    = i2c2;
  p.i2cparams = i2cParams2;
  p.trans     = i2cTransaction2;
  p.switchcmd = &switchcmd2;
  p.switchnew = &switchNew2;
  p.inttime   = 0;
  p.state     = tsPOR;

  taskI2Ccommon(p);
}

/*
 *  ======== taskI2C3 ========
 *  Task for this function is created statically. See the project's .cfg file.
 */
void taskI2C3(UArg arg0, UArg arg1) {
  taskParams p;

  p.device    = 3;
  p.board     = Board_I2C3;
  p.intline   = Board_PININ3;
  p.intflag   = &intflag3;
  p.handle    = i2c3;
  p.i2cparams = i2cParams3;
  p.trans     = i2cTransaction3;
  p.switchcmd = &switchcmd3;
  p.switchnew = &switchNew3;
  p.inttime   = 0;
  p.state     = tsPOR;

  taskI2Ccommon(p);
}

/*
 *  ======== taskI2C4 ========
 *  Task for this function is created statically. See the project's .cfg file.
 */
void taskI2C4(UArg arg0, UArg arg1) {
  taskParams p;

  p.device    = 4;
  p.board     = Board_I2C4;
  p.intline   = Board_PININ4;
  p.intflag   = &intflag4;
  p.handle    = i2c4;
  p.i2cparams = i2cParams4;
  p.trans     = i2cTransaction4;
  p.switchcmd = &switchcmd4;
  p.switchnew = &switchNew4;
  p.inttime   = 0;
  p.state     = tsPOR;

  taskI2Ccommon(p);
}

/*
 *  ======== taskI2C5 ========
 *  Task for this function is created statically. See the project's .cfg file.
 */
void taskI2C5(UArg arg0, UArg arg1) {
  taskParams p;

  p.device    = 5;
  p.board     = Board_I2C5;
  p.intline   = Board_PININ5;
  p.intflag   = &intflag5;
  p.handle    = i2c5;
  p.i2cparams = i2cParams5;
  p.trans     = i2cTransaction5;
  p.switchcmd = &switchcmd5;
  p.switchnew = &switchNew5;
  p.inttime   = 0;
  p.state     = tsPOR;

  taskI2Ccommon(p);
}



/*
 *  ======== setupAD7746 ========
 *
 */
int setupAD7746(I2C_Handle i2c, I2C_Transaction i2cTransaction, uint8_t device)
{
  uint8_t txBuffer[2];
  uint8_t rxBuffer[4];
  uint8_t offsH, offsL, gainH, gainL;

  Task_sleep(100);

  // Configure CAPACITANCE MEASUREMENT
  // -----------------------------------------------
  txBuffer[0]                 = AD7746_CAP_SETUP_REG;
  txBuffer[1]                 = adcsC2D1;
  i2cTransaction.slaveAddress = AD7746_ADDR;
  i2cTransaction.writeBuf     = txBuffer;
  i2cTransaction.writeCount   = 2;
  i2cTransaction.readBuf      = rxBuffer;
  i2cTransaction.readCount    = 0;

  if (!I2C_transfer(i2c, &i2cTransaction)) {
    System_printf("(%d) Error in setup of AD7746 (default capacitors).\n", device);
    System_flush();
    return -1;
  }
  System_flush();

  Task_sleep(100);

  // Configure VOLTAGE/TEMPERATURE (enable internal temperature sensor)
  // -----------------------------------------------
  txBuffer[0] = AD7746_VT_SETUP_REG;
  txBuffer[1] = AD7746_VT_SETUP_INT_TEMP;

  if (!I2C_transfer(i2c, &i2cTransaction)) {
    System_printf("(%d) Error in setup of AD7746 (setup for temperature reading).\n", device);
    System_flush();
    return -1;
  }
  System_flush();

  Task_sleep(100);

  // Configure EXCITATION
  // -----------------------------------------------
  txBuffer[0] = AD7746_EXC_SETUP_REG;
  txBuffer[1] = AD7746_EXC_SET_A;

  if (!I2C_transfer(i2c, &i2cTransaction)) {
    System_printf("(%d) Error in setup of AD7746 (configuring excitation).\n", device);
    System_flush();
    return -1;
  }
  System_flush();

  Task_sleep(100);

  // Configure CONVERSION TIME
  // -----------------------------------------------
  txBuffer[0] = AD7746_CFG_REG;
  txBuffer[1] = adAllSensorConversionTime;

  if (!I2C_transfer(i2c, &i2cTransaction)) {
    System_printf("(%d) Error in setup of AD7746 (setting conversion time).\n", device);
    System_flush();
    return -1;
  }
  System_flush();

  Task_sleep(100);


  // Read CAPACITATIVE OFFSET CALIBRATION/GAIN
  // -----------------------------------------------

  /* Read AD7746 register starting at Cap Offset H, total of 4 bytes */
  txBuffer[0]                 = AD7746_CAP_OFFSET_H;
  i2cTransaction.writeBuf     = txBuffer;
  i2cTransaction.writeCount   = 1;
  i2cTransaction.readBuf      = rxBuffer;
  i2cTransaction.readCount    = 4;

  if (!I2C_transfer(i2c, &i2cTransaction)) {
    System_printf("(%d) Error in setup of AD7746 (reading calibration).\n", device);
    System_flush();
    return -1;
  }

  offsH = rxBuffer[0];
  offsL = rxBuffer[1];
  gainH = rxBuffer[2];
  gainL = rxBuffer[3];

  System_printf("(%d) Calibrations: offset H: %d, offset L: %d, gain H: %d, gain L: %d\n", device, offsH, offsL, gainH, gainL);
  System_flush();

  return 0;
}



/*
 *  ======== triggerAD7746capacitance ========
 *
 */
int triggerAD7746capacitance(I2C_Handle i2c, I2C_Transaction i2cTransaction, adConversionTime convTim, adCapSelect cap, uint8_t device) {

    uint8_t txBuffer[2];
    uint8_t rxBuffer[4];

    /* Common message setup fields */
    i2cTransaction.slaveAddress = AD7746_ADDR;
    i2cTransaction.writeBuf     = txBuffer;
    i2cTransaction.writeCount   = 2;
    i2cTransaction.readBuf      = rxBuffer;
    i2cTransaction.readCount    = 0;

    /* Build first message to device: set capacitor configuration */
    txBuffer[0] = AD7746_CAP_SETUP_REG;
    txBuffer[1] = cap;

    if (!I2C_transfer(i2c, &i2cTransaction)) {
      System_printf("(%d) Error in AD7746 trigger (cap selection) of AD7746.\n", device);
      System_flush();
      return -1;
    }

    /* Build second message to device: set conversion time and trigger conversion */
    txBuffer[0] = AD7746_CFG_REG;
    txBuffer[1] = convTim;

    if (!I2C_transfer(i2c, &i2cTransaction)) {
      System_printf("(%d) Error in AD7746 trigger (set conversion time) of AD7746.\n", device);
      System_flush();
      return(-1);
    }

    return 0;
}


/*
 *  ======== triggerAD7746 ========
 *
 */
int triggerAD7746temperature(I2C_Handle i2c, I2C_Transaction i2cTransaction, uint8_t device) {

    uint8_t txBuffer[2];
    uint8_t rxBuffer[4];

    /* Common message setup fields */
    i2cTransaction.slaveAddress = AD7746_ADDR;
    i2cTransaction.writeBuf     = txBuffer;
    i2cTransaction.writeCount   = 2;
    i2cTransaction.readBuf      = rxBuffer;
    i2cTransaction.readCount    = 0;

    //TODO: Probably don't need this since it gets enabled above?
    /* Build message to device, read the temperature */
    /*
    txBuffer[0] = AD7746_VT_SETUP_REG;
    txBuffer[1] = AD7746_VT_SETUP_INT_TEMP;

    if (!I2C_transfer(i2c, &i2cTransaction)) {
      System_printf("(%d) Error in AD7746 trigger (temperature enable) of AD7746.\n", device);
      System_flush();
      return -1;
    }
    */

    /* Build message to device: set conversion time and trigger conversion */
    txBuffer[0] = AD7746_CFG_REG;
    txBuffer[1] = DEFAULT_TEMPERATURE_CONVERSION_TIME;

    if (!I2C_transfer(i2c, &i2cTransaction)) {
      System_printf("(%d) Error in AD7746 trigger (set temperature conversion time) of AD7746.\n", device);
      System_flush();
      return(-1);
    }

    return 0;
}

/*  ======== readAD7746 ========
 *  function to read AD7746 capacitance & temperature
 *
 */
int readAD7746(I2C_Handle i2c, I2C_Transaction i2cTransaction, adCapSelect cap, uint8_t device) {

  uint8_t txBuffer[1];
  uint8_t rxBuffer[6];
  uint32_t ci;
  float cr,c;

  /* Read Ad7746 */
  txBuffer[0] = AD7746_READ;
  i2cTransaction.slaveAddress = AD7746_ADDR;
  i2cTransaction.writeBuf     = txBuffer;
  i2cTransaction.writeCount   = 1;
  i2cTransaction.readBuf      = rxBuffer;
  i2cTransaction.readCount    = 6; // 3 bytes for cap only, 6 for cap and temp (see spec page 14)

  if (!I2C_transfer(i2c, &i2cTransaction)) {
    System_printf("(%d) Error in reading AD7746.\n", device);
    System_flush();
    return -1;
  }

  /* Get access to resource */
  Semaphore_pend(semHandle, BIOS_WAIT_FOREVER);

  // Put the values into the buffer used to talk back up the SPI
  switch(cap) {

    // Differential capacitor value
    case adcsC2D1:
      spiMessageOut.msg.sensor[device].diffCapHigh = rxBuffer[0];
      spiMessageOut.msg.sensor[device].diffCapMid  = rxBuffer[1];
      spiMessageOut.msg.sensor[device].diffCapLow  = rxBuffer[2];

      // Calculate the capacitance as a float, for usage in the filtered value
      cr = (float) ((rxBuffer[0] << 16) + (rxBuffer[1] << 8) + (rxBuffer[2]));
      c  = -4.096 + (cr * 8.192 / (1 << 24));

      // Apply filtering algorithm to the value and the previous values
      filter[device].c = (FILTER_COEFF * filter[device].cprev) + ((1.0 - FILTER_COEFF) * c);

      // Drop the last values down to the 'previous' value position
      filter[device].cprev = filter[device].c;

      // Reverse convert the floating point filtered capacitance back into 3 bytes of raw value
      c  = (filter[device].c + 4.096) * (1 << 24) / 8.192;
      ci = (uint32_t) c;

      // Assign back to the messaging buffer
      spiMessageOut.msg.sensor[device].filtCapHigh = (ci >> 16) & 0xFF;
      spiMessageOut.msg.sensor[device].filtCapMid  = (ci >>  8) & 0xFF;
      spiMessageOut.msg.sensor[device].filtCapLow  = (ci      ) & 0xFF;
      break;

    // Single C1 value
    case adcsC1D0:
      spiMessageOut.msg.sensor[device].c1High = rxBuffer[0];
      spiMessageOut.msg.sensor[device].c1Mid  = rxBuffer[1];
      spiMessageOut.msg.sensor[device].c1Low  = rxBuffer[2];
      break;

    // Single C2 value:
    case adcsC2D0:
      spiMessageOut.msg.sensor[device].c2High = rxBuffer[0];
      spiMessageOut.msg.sensor[device].c2Mid  = rxBuffer[1];
      spiMessageOut.msg.sensor[device].c2Low  = rxBuffer[2];
      break;
  }

  // Put the temperature values in each time, even if they're stale
  spiMessageOut.msg.sensor[device].chiptempHigh = rxBuffer[3];
  spiMessageOut.msg.sensor[device].chiptempMid  = rxBuffer[4];
  spiMessageOut.msg.sensor[device].chiptempLow  = rxBuffer[5];

  /* Unlock resource */
  Semaphore_post(semHandle);

  return 0;
}



/*
 *  ======== setupHDC1080 ========
 *
 */
int setupHDC1080(I2C_Handle i2c, I2C_Transaction i2cTransaction, uint8_t device, bool reportfail) {

  uint8_t txBuffer[3];
  uint8_t rxBuffer[4];

  // Configure HDC1080
  Task_sleep(100);

  txBuffer[0]                 = HDC1080_CFG_REG;
  txBuffer[1]                 = (HDC1080_CFG_MODE_T_AND_H >> 8) & 0xFF;
  txBuffer[2]                 = (HDC1080_CFG_MODE_T_AND_H     ) & 0xFF;
  i2cTransaction.slaveAddress = HDC1080_ADDR;
  i2cTransaction.writeBuf     = txBuffer;
  i2cTransaction.writeCount   = 3;
  i2cTransaction.readBuf      = rxBuffer;
  i2cTransaction.readCount    = 0;

  if (!I2C_transfer(i2c, &i2cTransaction)) {
    if (reportfail) {
      System_printf("(%d) Error in setup of HDC1080, config failure.\n", device);
      System_flush();
    }
    return -1;
  }


  // Trigger first read
  Task_sleep(100);

  txBuffer[0]                 = HDC1080_TRIGGER_BOTH;
  i2cTransaction.slaveAddress = HDC1080_ADDR;
  i2cTransaction.writeBuf     = txBuffer;
  i2cTransaction.writeCount   = 1;
  i2cTransaction.readBuf      = rxBuffer;
  i2cTransaction.readCount    = 0;

  if (!I2C_transfer(i2c, &i2cTransaction)) {
    System_printf("(%d) Error in setup HDC1080, trigger failure.\n", device);
    System_flush();
    return -1;
  }

  return 0;
}


/*
 *  ======== readHDC1080 ========
 *  function to read HDC1080 Hum
 *
 */
int readHDC1080 (I2C_Handle i2c, I2C_Transaction i2cTransaction, uint8_t device) {

  uint8_t txBuffer[1];
  uint8_t rxBuffer[4];
  float t, h;

  /* Read Si7020 HDC1080_TMP */
  txBuffer[0]                 = HDC1080_TMP_REG;
  i2cTransaction.slaveAddress = HDC1080_ADDR;
  i2cTransaction.writeBuf     = txBuffer;
  i2cTransaction.writeCount   = 0;
  i2cTransaction.readBuf      = rxBuffer;
  i2cTransaction.readCount    = 4;   // Read 4 bytes: temperature AND humidity in one transaction

  if (!I2C_transfer(i2c, &i2cTransaction)) {
    //System_printf("(%d) Error in reading HDC1080 device.\n", device);
    //System_flush();
    return -1;
  }

  t = (float)((rxBuffer[0] << 8) + (rxBuffer[1]))/65536*165-40;
  h = (float)((rxBuffer[2] << 8) + (rxBuffer[3]))*100/65536;
  System_printf("(%d) temp = %f / humidity = %f\n", device, t, h);
  System_flush();


  /* Get access to resource */
  Semaphore_pend(semHandle, BIOS_WAIT_FOREVER);

  spiMessageOut.msg.sensor[device].tempHigh     = rxBuffer[0];
  spiMessageOut.msg.sensor[device].tempLow      = rxBuffer[1];
  spiMessageOut.msg.sensor[device].humidityHigh = rxBuffer[2];
  spiMessageOut.msg.sensor[device].humidityLow  = rxBuffer[3];

  /* Unlock resource */
  Semaphore_post(semHandle);


  // Trigger next read
  // Per HDC1080 spec (pg 5), conversion time for 14 bit resolution is 6.5ms
  txBuffer[0]                 = HDC1080_TRIGGER_BOTH;
  i2cTransaction.slaveAddress = HDC1080_ADDR;
  i2cTransaction.writeBuf     = txBuffer;
  i2cTransaction.writeCount   = 1;
  i2cTransaction.readBuf      = rxBuffer;
  i2cTransaction.readCount    = 0;

  if (!I2C_transfer(i2c, &i2cTransaction)) {
    System_printf("(%d) Error in reading HDC1080, setup next trigger failure.\n", device);
    System_flush();
    return -1;
  }

  return 0;
}


/*
 *  ======== setupPCA936 ========
 *
 */
int setupPCA9536(I2C_Handle i2c, I2C_Transaction i2cTransaction, uint8_t device) {

  uint8_t txBuffer[2];
  uint8_t rxBuffer[4];

  // CONFIGURE SWITCH
  i2cTransaction.slaveAddress = PCA9536_ADDR;
  i2cTransaction.writeBuf     = txBuffer;
  i2cTransaction.writeCount   = 2;
  i2cTransaction.readBuf      = rxBuffer;
  i2cTransaction.readCount    = 0;

  txBuffer[0] = PCA9536_OUT_PORT_REG;
  txBuffer[1] = PCA9536_OUT_PORT_RESET;
  if (!I2C_transfer(i2c, &i2cTransaction)) {
#ifndef DEBUG_INTERRUPT
    System_printf("(%d) Error in setup of PCA9536, initial reset of output ports.\n", device);
    System_flush();
#endif
    return -1;
  }
  Task_sleep(100);

  txBuffer[0] = PCA9536_CONFIG_REG;
  txBuffer[1] = PCA9536_CONFIG_ALL_OUTPUT;
  if (!I2C_transfer(i2c, &i2cTransaction)) {
    System_printf("(%d) Error in setup of PCA9536, configure output ports.\n", device);
    System_flush();
    return -1;
  }
  Task_sleep(100);

  txBuffer[0] = PCA9536_OUT_PORT_REG;
  txBuffer[1] = PCA9536_OUT_PORT_NEW_ACS;
  if (!I2C_transfer(i2c, &i2cTransaction)) {
    System_printf("(%d) Error in setup of PCA9536, set of output ports to new ACS.\n", device);
    System_flush();
    return -1;
  }
  Task_sleep(100);

  txBuffer[0] = PCA9536_OUT_PORT_REG;
  txBuffer[1] = PCA9536_OUT_PORT_RESET;
  if (!I2C_transfer(i2c, &i2cTransaction))
  {
    System_printf("(%d) Error in setup of PCA9536, final reset of output ports.\n", device);
    System_flush();
    return -1;
  }

  return 0;
}


/*
 *  ======== switchPCS936 ========
 *  Switch between OLD and NEW NB
 *
 */
int switchPCA9536(I2C_Handle i2c, I2C_Transaction i2cTransaction, uint8_t device, swRelayPositions pos) {

  uint8_t txBuffer[2];
  uint8_t rxBuffer[4];

  i2cTransaction.slaveAddress = PCA9536_ADDR;
  i2cTransaction.writeBuf     = txBuffer;
  i2cTransaction.writeCount   = 2;
  i2cTransaction.readBuf      = rxBuffer;
  i2cTransaction.readCount    = 0;

  /* Configure switch to new ACS position */
  if (pos == swNewACS) {

    txBuffer[0] = PCA9536_OUT_PORT_REG;
    txBuffer[1] = PCA9536_OUT_PORT_NEW_ACS;
    if (!I2C_transfer(i2c, &i2cTransaction)) {
      System_printf("(%d) Error in switching PCA9536, setting to new ACS.\n", device);
      System_flush();
      return -1;
    }
    GPIO_write(Board_LED3, Board_LED_ON);

  /* Else default to old ACS position */
  } else {

    txBuffer[0] = PCA9536_OUT_PORT_REG;
    txBuffer[1] = PCA9536_OUT_PORT_OLD_ACS;
    if (!I2C_transfer(i2c, &i2cTransaction)) {
      System_printf("(%d) Error in switching PCA9536, setting to old ACS.\n", device);
      System_flush();
      return -1;
    }
    GPIO_write(Board_LED3, Board_LED_OFF);
  }

  /* Hold the relay state for 100ms before resetting the driver */
  Task_sleep(100);

  txBuffer[0] = PCA9536_OUT_PORT_REG;
  txBuffer[1] = PCA9536_OUT_PORT_RESET;
  if (!I2C_transfer(i2c, &i2cTransaction)) {
    System_printf("(%d) Error in switching PCA9536, final reset of output ports.\n", device);
    System_flush();
    return -1;
  }

  return 0;
}


/*
 * NOTE:
 * -----
 * Because you can't use timing in the interrupt function, the interrupt is only changing a "flag".
 * This flag change is detected by the I2C task which can do all the timing and readout of the I2C
 * devices.  This flag is set back to 0 once the tasks are done.
 */

/*
 *  ======== sensNcvtDoneItr ========
 *  Callback functions for the GPIO interrupts, set a flag for the task to see
 */
void sens0cvtDoneItr(uint32_t index) { intflag0 = true;
#ifdef DEBUG_INTERRUPT
System_printf("INT0\n");
#endif
} // PA7
void sens1cvtDoneItr(uint32_t index) { intflag1 = true; } // PF4
void sens2cvtDoneItr(uint32_t index) { intflag2 = true; } // D7
void sens3cvtDoneItr(uint32_t index) { intflag3 = true; } // E0
void sens4cvtDoneItr(uint32_t index) { intflag4 = true; } // B5
void sens5cvtDoneItr(uint32_t index) { intflag5 = true; } // C4



/*
 *  ======== main ========
 */
int main(void) {

  /* Construct BIOS objects */
  Semaphore_Params semParams;

  /* Construct a Semaphore object to be use as a resource lock, inital count 1 */
  Semaphore_Params_init(&semParams);
  Semaphore_construct(&semStruct, 1, &semParams);

  /* Obtain instance handle */
  semHandle = Semaphore_handle(&semStruct);


  /* Get access to resource */
  Semaphore_pend(semHandle, BIOS_WAIT_FOREVER);

  /* Unlock resource */
  Semaphore_post(semHandle);



  /* Call board init functions */
  Board_initGeneral();
  Board_initGPIO();
  Board_initI2C();
  Board_initSPI();

  /* Zero out the SPI comm structure */
  bzero(spiMessageIn.buf, sizeof(spiMessageIn.buf));
  bzero(spiMessageOut.buf, sizeof(spiMessageOut.buf));

  bzero(adGetAllCaps, sizeof(adGetAllCaps));

  // All led ON once HW init done
  GPIO_write(Board_LED0, Board_LED_ON);
  GPIO_write(Board_LED1, Board_LED_ON);
  GPIO_write(Board_LED2, Board_LED_ON);
  GPIO_write(Board_LED3, Board_LED_ON);

  // Init Interrupt sensor 0
  GPIO_disableInt(Board_PININ0);
  GPIO_clearInt(Board_PININ0);
  GPIO_setCallback(Board_PININ0, sens0cvtDoneItr);

  // Init Interrupt sensor 1
  GPIO_disableInt(Board_PININ1);
  GPIO_clearInt(Board_PININ1);
  GPIO_setCallback(Board_PININ1, sens1cvtDoneItr);

  // Init Interrupt sensor 2
  GPIO_disableInt(Board_PININ2);
  GPIO_clearInt(Board_PININ2);
  GPIO_setCallback(Board_PININ2, sens2cvtDoneItr);

  // Init Interrupt sensor 3
  GPIO_disableInt(Board_PININ3);
  GPIO_clearInt(Board_PININ3);
  GPIO_setCallback(Board_PININ3, sens3cvtDoneItr);

  // Init Interrupt sensor 4
  GPIO_disableInt(Board_PININ4);
  GPIO_clearInt(Board_PININ4);
  GPIO_setCallback(Board_PININ4, sens4cvtDoneItr);

  // Init Interrupt sensor 5
  GPIO_disableInt(Board_PININ5);
  GPIO_clearInt(Board_PININ5);
  GPIO_setCallback(Board_PININ5, sens5cvtDoneItr);

  /* Start BIOS */
  BIOS_start();

  return (0);
}
