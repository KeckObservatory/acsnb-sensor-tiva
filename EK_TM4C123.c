/*
 * Copyright (c) 2015, Texas Instruments Incorporated
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*
 *  ======== EK_TM4C123.c ========
 *  This file is responsible for setting up the board specific items for the
 *  EK_TM4C123 board.
 */

#include <stdint.h>
#include <stdbool.h>
#include <inc/hw_memmap.h>
#include <inc/hw_types.h>
#include <inc/hw_ints.h>
#include <inc/hw_gpio.h>

#include <driverlib/gpio.h>
#include <driverlib/sysctl.h>
#include <driverlib/i2c.h>
#include <driverlib/ssi.h>
#include <driverlib/uart.h>
#include <driverlib/udma.h>
#include <driverlib/pin_map.h>

#include <xdc/std.h>
#include <xdc/cfg/global.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/System.h>
#include <ti/sysbios/family/arm/m3/Hwi.h>

#include "EK_TM4C123.h"


#ifndef TI_DRIVERS_UART_DMA
#define TI_DRIVERS_UART_DMA 0
#endif

/*
 *  =============================== DMA ===============================
 */
#if defined(__TI_COMPILER_VERSION__)
#pragma DATA_ALIGN(dmaControlTable, 1024)
#elif defined(__IAR_SYSTEMS_ICC__)
#pragma data_alignment=1024
#elif defined(__GNUC__)
__attribute__ ((aligned (1024)))
#endif
static tDMAControlTable dmaControlTable[32];
static bool dmaInitialized = false;

/* Hwi_Struct used in the initDMA Hwi_construct call */
static Hwi_Struct hwiStruct;

/*
 *  ======== dmaErrorHwi ========
 */
static Void dmaErrorHwi(UArg arg)
{
    System_printf("DMA error code: %d\n", uDMAErrorStatusGet());
    uDMAErrorStatusClear();
    System_abort("DMA error!!");
}

/*
 *  ======== EK_TM4C123_initDMA ========
 */
void EK_TM4C123_initDMA(void)
{
    Error_Block eb;
    Hwi_Params  hwiParams;

    if (!dmaInitialized) {

        Error_init(&eb);

        Hwi_Params_init(&hwiParams);
        Hwi_construct(&(hwiStruct), INT_UDMAERR, dmaErrorHwi,
                      &hwiParams, &eb);
        if (Error_check(&eb)) {
            System_abort("Couldn't create DMA error hwi");
        }

        SysCtlPeripheralEnable(SYSCTL_PERIPH_UDMA);
        uDMAEnable();
        uDMAControlBaseSet(dmaControlTable);

        dmaInitialized = true;
    }
}

/*
 *  =============================== General ===============================
 */
/*
 *  ======== EK_TM4C123_initGeneral ========
 */
void EK_TM4C123_initGeneral(void)
{
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOA);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOB);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOC);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOD);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOE);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOG);
}

/*
 *  =============================== GPIO ===============================
 */
/* Place into subsections to allow the TI linker to remove items properly */
#if defined(__TI_COMPILER_VERSION__)
#pragma DATA_SECTION(GPIOTiva_config, ".const:GPIOTiva_config")
#endif

#include <ti/drivers/GPIO.h>
#include <ti/drivers/gpio/GPIOTiva.h>

/*
 * Array of Pin configurations
 * NOTE: The order of the pin configurations must coincide with what was
 *       defined in EK_TM4C123.h
 * NOTE: Pins not used for interrupts should be placed at the end of the
 *       array.  Callback entries can be omitted from callbacks array to
 *       reduce memory usage.
 */
GPIO_PinConfig gpioPinConfigs[] = {
    /* Input pins */

    /* EK_TM4C123_GPIO_PININ0 */
    GPIOTiva_PA_7 | GPIO_CFG_IN_PU | GPIO_CFG_IN_INT_RISING,

    /* EK_TM4C123_GPIO_PININ1 */
    GPIOTiva_PB_5 | GPIO_CFG_IN_PU | GPIO_CFG_IN_INT_RISING,

    /* EK_TM4C123_GPIO_PININ2 */
    GPIOTiva_PC_4 | GPIO_CFG_IN_PU | GPIO_CFG_IN_INT_RISING,

    /* EK_TM4C123_GPIO_PININ3 */
    GPIOTiva_PD_7 | GPIO_CFG_IN_PU | GPIO_CFG_IN_INT_RISING,

    /* EK_TM4C123_GPIO_PININ4 */
    GPIOTiva_PE_0 | GPIO_CFG_IN_PU | GPIO_CFG_IN_INT_RISING,

    /* EK_TM4C123_GPIO_PININ5 */
    GPIOTiva_PF_4 | GPIO_CFG_IN_PU | GPIO_CFG_IN_INT_RISING,


    /* Output pins */

    /* EK_TM4C123_LED_ORANGE */
    GPIOTiva_PD_0 | GPIO_CFG_OUT_STD | GPIO_CFG_OUT_STR_HIGH | GPIO_CFG_OUT_LOW,

    /* EK_TM4C123_LED_GREEN */
    GPIOTiva_PD_1 | GPIO_CFG_OUT_STD | GPIO_CFG_OUT_STR_HIGH | GPIO_CFG_OUT_LOW,

    /* EK_TM4C123_LED_BLUE */
    GPIOTiva_PD_2 | GPIO_CFG_OUT_STD | GPIO_CFG_OUT_STR_HIGH | GPIO_CFG_OUT_LOW,

    /* EK_TM4C123_LED_RED */
    GPIOTiva_PD_3 | GPIO_CFG_OUT_STD | GPIO_CFG_OUT_STR_HIGH | GPIO_CFG_OUT_LOW
};

/*
 * Array of callback function pointers
 * NOTE: The order of the pin configurations must coincide with what was
 *       defined in EK_TM4C123.h
 * NOTE: Pins not used for interrupts can be omitted from callbacks array to
 *       reduce memory usage (if placed at end of gpioPinConfigs array).
 */
GPIO_CallbackFxn gpioCallbackFunctions[] = {
    NULL,  /* EK_TM4C123_GPIO_PININ0 */
    NULL,  /* EK_TM4C123_GPIO_PININ1 */
    NULL,  /* EK_TM4C123_GPIO_PININ2 */
    NULL,  /* EK_TM4C123_GPIO_PININ3 */
    NULL,  /* EK_TM4C123_GPIO_PININ4 */
    NULL   /* EK_TM4C123_GPIO_PININ5 */
};

/* The device-specific GPIO_config structure */
const GPIOTiva_Config GPIOTiva_config = {
    .pinConfigs = (GPIO_PinConfig *) gpioPinConfigs,
    .callbacks = (GPIO_CallbackFxn *) gpioCallbackFunctions,
    .numberOfPinConfigs = sizeof(gpioPinConfigs) / sizeof(GPIO_PinConfig),
    .numberOfCallbacks = sizeof(gpioCallbackFunctions)/sizeof(GPIO_CallbackFxn),
    .intPriority = (~0)
};

/*
 *  ======== EK_TM4C123_initGPIO ========
 */
void EK_TM4C123_initGPIO(void)
{
    /*PD7 requires unlocking before configuration */
    HWREG(GPIO_PORTD_BASE + GPIO_O_LOCK) = GPIO_LOCK_KEY;
    HWREG(GPIO_PORTD_BASE + GPIO_O_CR) |= GPIO_PIN_7;

    /* Initialize peripheral and pins */
    GPIO_init();
}

/*
 *  =============================== I2C ===============================
 */
/* Place into subsections to allow the TI linker to remove items properly */
#if defined(__TI_COMPILER_VERSION__)
#pragma DATA_SECTION(I2C_config, ".const:I2C_config")
#pragma DATA_SECTION(i2cTivaHWAttrs, ".const:i2cTivaHWAttrs")
#endif

#include <ti/drivers/I2C.h>
#include <ti/drivers/i2c/I2CTiva.h>

/* I2C objects */
I2CTiva_Object i2cTivaObjects[EK_TM4C123_I2CCOUNT];

/* I2C configuration structure, describing which pins are to be used */
const I2CTiva_HWAttrs i2cTivaHWAttrs[EK_TM4C123_I2CCOUNT] = {
    {I2C0_BASE, INT_I2C0, ~0 /* Interrupt priority */},
    {I2C1_BASE, INT_I2C1, ~0 /* Interrupt priority */},
    {I2C2_BASE, INT_I2C2, ~0 /* Interrupt priority */},
    {I2C3_BASE, INT_I2C3, ~0 /* Interrupt priority */},
    {I2C4_BASE, INT_I2C4, ~0 /* Interrupt priority */},
    {I2C5_BASE, INT_I2C5, ~0 /* Interrupt priority */},
};

const I2C_Config I2C_config[] = {
    {&I2CTiva_fxnTable, &i2cTivaObjects[0], &i2cTivaHWAttrs[0]},
    {&I2CTiva_fxnTable, &i2cTivaObjects[1], &i2cTivaHWAttrs[1]},
    {&I2CTiva_fxnTable, &i2cTivaObjects[2], &i2cTivaHWAttrs[2]},
    {&I2CTiva_fxnTable, &i2cTivaObjects[3], &i2cTivaHWAttrs[3]},
    {&I2CTiva_fxnTable, &i2cTivaObjects[4], &i2cTivaHWAttrs[4]},
    {&I2CTiva_fxnTable, &i2cTivaObjects[5], &i2cTivaHWAttrs[5]},
    {NULL, NULL, NULL}
};

/*
 *  ======== EK_TM4C123_initI2C ========
 */
void EK_TM4C123_initI2C(void)
{
  /* I2C0 Init */
  /* Enable the peripheral */
  SysCtlPeripheralEnable(SYSCTL_PERIPH_I2C0);
  //reset I2C module
    //SysCtlPeripheralReset(SYSCTL_PERIPH_I2C0);
  /* Configure the appropriate pins to be I2C instead of GPIO. */
  GPIOPinConfigure(GPIO_PB2_I2C0SCL);
  GPIOPinConfigure(GPIO_PB3_I2C0SDA);
  GPIOPinTypeI2CSCL(GPIO_PORTB_BASE, GPIO_PIN_2);
  GPIOPinTypeI2C(GPIO_PORTB_BASE, GPIO_PIN_3);

  // Enable and initialize the I2C0 master module.  Use the system clock for
  // the I2C0 module.  The last parameter sets the I2C data transfer rate.
  // If false the data rate is set to 100kbps and if true the data rate will
  // be set to 400kbps.
  //I2CMasterInitExpClk(I2C0_BASE, SysCtlClockGet(), true);

  /*
   * These GPIOs are connected to PD0 and PD1 and need to be brought into a
   * GPIO input state so they don't interfere with I2C communications.
   */
//  GPIOPinTypeGPIOInput(GPIO_PORTB_BASE, GPIO_PIN_6);
//  GPIOPinTypeGPIOInput(GPIO_PORTB_BASE, GPIO_PIN_7);
//  GPIOPinTypeGPIOInput(GPIO_PORTB_BASE, GPIO_PIN_2);
//  GPIOPinTypeGPIOInput(GPIO_PORTB_BASE, GPIO_PIN_3);

  /* I2C1 Init */
  /* Enable the peripheral */
  SysCtlPeripheralEnable(SYSCTL_PERIPH_I2C1);
  /* Configure the appropriate pins to be I2C instead of GPIO. */
  GPIOPinConfigure(GPIO_PG4_I2C1SCL);
  GPIOPinConfigure(GPIO_PG5_I2C1SDA);
  GPIOPinTypeI2CSCL(GPIO_PORTG_BASE, GPIO_PIN_4);
  GPIOPinTypeI2C(GPIO_PORTG_BASE, GPIO_PIN_5);

  /* I2C2 Init */
  /* Enable the peripheral */
  SysCtlPeripheralEnable(SYSCTL_PERIPH_I2C2);
  /* Configure the appropriate pins to be I2C instead of GPIO. */
  GPIOPinConfigure(GPIO_PE4_I2C2SCL);
  GPIOPinConfigure(GPIO_PE5_I2C2SDA);
  GPIOPinTypeI2CSCL(GPIO_PORTE_BASE, GPIO_PIN_4);
  GPIOPinTypeI2C(GPIO_PORTE_BASE, GPIO_PIN_5);

  /* I2C3 Init */
  /*
   * NOTE: TI-RTOS examples configure pins PD0 & PD1 for SSI3 or I2C3.  Thus,
   * a conflict occurs when the I2C & SPI drivers are used simultaneously in
   * an application.  Modify the pin mux settings in this file and resolve the
   * conflict before running your the application.
   */
  /* Enable the peripheral */
  SysCtlPeripheralEnable(SYSCTL_PERIPH_I2C3);
  /* Configure the appropriate pins to be I2C instead of GPIO. */
  GPIOPinConfigure(GPIO_PG0_I2C3SCL);
  GPIOPinConfigure(GPIO_PG1_I2C3SDA);
  GPIOPinTypeI2CSCL(GPIO_PORTG_BASE, GPIO_PIN_0);
  GPIOPinTypeI2C(GPIO_PORTG_BASE, GPIO_PIN_1);

  /* I2C4 Init */
    /* Enable the peripheral */
  SysCtlPeripheralEnable(SYSCTL_PERIPH_I2C4);
  /* Configure the appropriate pins to be I2C instead of GPIO. */
  GPIOPinConfigure(GPIO_PG2_I2C4SCL);
  GPIOPinConfigure(GPIO_PG3_I2C4SDA);
  GPIOPinTypeI2CSCL(GPIO_PORTG_BASE, GPIO_PIN_2);
  GPIOPinTypeI2C(GPIO_PORTG_BASE, GPIO_PIN_3);

  /* I2C5 Init */
  /* Enable the peripheral */
  SysCtlPeripheralEnable(SYSCTL_PERIPH_I2C5);
  /* Configure the appropriate pins to be I2C instead of GPIO. */
  GPIOPinConfigure(GPIO_PB6_I2C5SCL);
  GPIOPinConfigure(GPIO_PB7_I2C5SDA);
  GPIOPinTypeI2CSCL(GPIO_PORTB_BASE, GPIO_PIN_6);
  GPIOPinTypeI2C(GPIO_PORTB_BASE, GPIO_PIN_7);

  I2C_init();
}

/*
 *  =============================== PWM ===============================
 */
/* Place into subsections to allow the TI linker to remove items properly */
#if defined(__TI_COMPILER_VERSION__)
#pragma DATA_SECTION(PWM_config, ".const:PWM_config")
#pragma DATA_SECTION(pwmTivaHWAttrs, ".const:pwmTivaHWAttrs")
#endif

#include <ti/drivers/PWM.h>
#include <ti/drivers/pwm/PWMTiva.h>
#include <driverlib/pwm.h>

PWMTiva_Object pwmTivaObjects[EK_TM4C123_PWMCOUNT];

/* PWM configuration structure */
const PWMTiva_HWAttrs pwmTivaHWAttrs[EK_TM4C123_PWMCOUNT] = {
    {
        PWM1_BASE,
        PWM_OUT_6,
        PWM_GEN_MODE_DOWN | PWM_GEN_MODE_DBG_RUN
    },
    {
        PWM1_BASE,
        PWM_OUT_7,
        PWM_GEN_MODE_DOWN | PWM_GEN_MODE_DBG_RUN
    }
};

const PWM_Config PWM_config[] = {
    {&PWMTiva_fxnTable, &pwmTivaObjects[0], &pwmTivaHWAttrs[0]},
    {&PWMTiva_fxnTable, &pwmTivaObjects[1], &pwmTivaHWAttrs[1]},
    {NULL, NULL, NULL}
};

/*
 *  ======== EK_TM4C123_initPWM ========
 */
void EK_TM4C123_initPWM(void)
{
    /* Enable PWM peripherals */
//    SysCtlPeripheralEnable(SYSCTL_PERIPH_PWM1);

    /*
     * Enable PWM output on GPIO pins.  Board_LED1 and Board_LED2 are now
     * controlled by PWM peripheral - Do not use GPIO APIs.
     */
    //GPIOPinConfigure(GPIO_PF2_M1PWM6);
    //GPIOPinConfigure(GPIO_PF3_M1PWM7);
    //GPIOPinTypePWM(GPIO_PORTD_BASE, GPIO_PIN_2 |GPIO_PIN_3);

//    PWM_init();
}

/*
 *  =============================== SDSPI ===============================
 */
/* Place into subsections to allow the TI linker to remove items properly */
#if defined(__TI_COMPILER_VERSION__)
#pragma DATA_SECTION(SDSPI_config, ".const:SDSPI_config")
#pragma DATA_SECTION(sdspiTivaHWattrs, ".const:sdspiTivaHWattrs")
#endif

#include <ti/drivers/SDSPI.h>
#include <ti/drivers/sdspi/SDSPITiva.h>

/* SDSPI objects */
SDSPITiva_Object sdspiTivaObjects[EK_TM4C123_SDSPICOUNT];

/* SDSPI configuration structure, describing which pins are to be used */
const SDSPITiva_HWAttrs sdspiTivaHWattrs[EK_TM4C123_SDSPICOUNT] = {
    {
        SSI2_BASE,          /* SPI base address */

        GPIO_PORTB_BASE,    /* SPI SCK PORT */
        GPIO_PIN_4,         /* SCK PIN */
        GPIO_PORTB_BASE,    /* SPI MISO PORT*/
        GPIO_PIN_6,         /* MISO PIN */
        GPIO_PORTB_BASE,    /* SPI MOSI PORT */
        GPIO_PIN_7,         /* MOSI PIN */
        GPIO_PORTA_BASE,    /* GPIO CS PORT */
        GPIO_PIN_5,         /* CS PIN */
    }
};

const SDSPI_Config SDSPI_config[] = {
    {&SDSPITiva_fxnTable, &sdspiTivaObjects[0], &sdspiTivaHWattrs[0]},
    {NULL, NULL, NULL}
};

/*
 *  ======== EK_TM4C123_initSDSPI ========
 */
void EK_TM4C123_initSDSPI(void)
{
    /* Enable the peripherals used by the SD Card */
//    SysCtlPeripheralEnable(SYSCTL_PERIPH_SSI2);

    /* Configure pad settings */
/*    GPIOPadConfigSet(GPIO_PORTB_BASE,
            GPIO_PIN_4 | GPIO_PIN_7,
            GPIO_STRENGTH_4MA, GPIO_PIN_TYPE_STD);

    GPIOPadConfigSet(GPIO_PORTB_BASE,
            GPIO_PIN_6,
            GPIO_STRENGTH_4MA, GPIO_PIN_TYPE_STD_WPU);

    GPIOPadConfigSet(GPIO_PORTA_BASE,
            GPIO_PIN_5,
            GPIO_STRENGTH_4MA, GPIO_PIN_TYPE_STD);

    GPIOPinConfigure(GPIO_PB4_SSI2CLK);
    GPIOPinConfigure(GPIO_PB6_SSI2RX);
    GPIOPinConfigure(GPIO_PB7_SSI2TX);
*/
    /*
     * These GPIOs are connected to PB6 and PB7 and need to be brought into a
     * GPIO input state so they don't interfere with SPI communications.
     */
/*    GPIOPinTypeGPIOInput(GPIO_PORTD_BASE, GPIO_PIN_0);
    GPIOPinTypeGPIOInput(GPIO_PORTD_BASE, GPIO_PIN_1);

    SDSPI_init();*/
}

/*
 *  =============================== SPI ===============================
 */
/* Place into subsections to allow the TI linker to remove items properly */
#if defined(__TI_COMPILER_VERSION__)
#pragma DATA_SECTION(SPI_config, ".const:SPI_config")
#pragma DATA_SECTION(spiTivaDMAHWAttrs, ".const:spiTivaDMAHWAttrs")
#endif

#include <ti/drivers/SPI.h>
#include <ti/drivers/spi/SPITivaDMA.h>

/* SPI objects */
SPITivaDMA_Object spiTivaDMAObjects[EK_TM4C123_SPICOUNT];
#if defined(__TI_COMPILER_VERSION__)
#pragma DATA_ALIGN(spiTivaDMAscratchBuf, 32)
#elif defined(__IAR_SYSTEMS_ICC__)
#pragma data_alignment=32
#elif defined(__GNUC__)
__attribute__ ((aligned (32)))
#endif
uint32_t spiTivaDMAscratchBuf[EK_TM4C123_SPICOUNT];

/* SPI configuration structure */
const SPITivaDMA_HWAttrs spiTivaDMAHWAttrs[EK_TM4C123_SPICOUNT] = {
    {
        SSI0_BASE,
        INT_SSI0,
        ~0,         /* Interrupt priority */
        &spiTivaDMAscratchBuf[0],
        0,
        UDMA_CHANNEL_SSI0RX,
        UDMA_CHANNEL_SSI0TX,
        uDMAChannelAssign,
        UDMA_CH10_SSI0RX,
        UDMA_CH11_SSI0TX
    },
/*    {
        SSI2_BASE,
        INT_SSI2,*/
//        ~0,         /* Interrupt priority */
/*        &spiTivaDMAscratchBuf[1],
        0,
        UDMA_SEC_CHANNEL_UART2RX_12,
        UDMA_SEC_CHANNEL_UART2TX_13,
        uDMAChannelAssign,
        UDMA_CH12_SSI2RX,
        UDMA_CH13_SSI2TX
    },
    {
        SSI3_BASE,
        INT_SSI3,*/
//        ~0,         /* Interrupt priority */
/*        &spiTivaDMAscratchBuf[2],
        0,
        UDMA_SEC_CHANNEL_TMR2A_14,
        UDMA_SEC_CHANNEL_TMR2B_15,
        uDMAChannelAssign,
        UDMA_CH14_SSI3RX,
        UDMA_CH15_SSI3TX
    }*/
};

const SPI_Config SPI_config[] = {
    {&SPITivaDMA_fxnTable, &spiTivaDMAObjects[0], &spiTivaDMAHWAttrs[0]},

    {NULL, NULL, NULL},
};

/*
 *  ======== EK_TM4C123_initSPI ========
 */
void EK_TM4C123_initSPI(void)
{
    /* SPI0 */
    SysCtlPeripheralEnable(SYSCTL_PERIPH_SSI0);

    /* Need to unlock PF0 */
    GPIOPinConfigure(GPIO_PA2_SSI0CLK);
    GPIOPinConfigure(GPIO_PA3_SSI0FSS);
    GPIOPinConfigure(GPIO_PA4_SSI0RX);
    GPIOPinConfigure(GPIO_PA5_SSI0TX);

    GPIOPinTypeSSI(GPIO_PORTA_BASE, GPIO_PIN_2 | GPIO_PIN_3 |
                                    GPIO_PIN_4 | GPIO_PIN_5);

    /* SSI2 */
/*    SysCtlPeripheralEnable(SYSCTL_PERIPH_SSI2);

    GPIOPinConfigure(GPIO_PB4_SSI2CLK);
    GPIOPinConfigure(GPIO_PB5_SSI2FSS);
    GPIOPinConfigure(GPIO_PB6_SSI2RX);
    GPIOPinConfigure(GPIO_PB7_SSI2TX);

    GPIOPinTypeSSI(GPIO_PORTB_BASE, GPIO_PIN_4 | GPIO_PIN_5 |
                                    GPIO_PIN_6 | GPIO_PIN_7);
*/
    /* SSI3 */
    /*
     * NOTE: TI-RTOS examples configure pins PD0 & PD1 for SSI3 or I2C3.  Thus,
     * a conflict occurs when the I2C & SPI drivers are used simultaneously in
     * an application.  Modify the pin mux settings in this file and resolve the
     * conflict before running your the application.
     */
/*    SysCtlPeripheralEnable(SYSCTL_PERIPH_SSI3);

    GPIOPinConfigure(GPIO_PD0_SSI3CLK);
    GPIOPinConfigure(GPIO_PD1_SSI3FSS);
    GPIOPinConfigure(GPIO_PD2_SSI3RX);
    GPIOPinConfigure(GPIO_PD3_SSI3TX);

    GPIOPinTypeSSI(GPIO_PORTD_BASE, GPIO_PIN_0 | GPIO_PIN_1 |
                                    GPIO_PIN_2 | GPIO_PIN_3);
*/
    EK_TM4C123_initDMA();
    SPI_init();
}

