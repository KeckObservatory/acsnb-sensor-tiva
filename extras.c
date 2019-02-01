/*
 * Copyright (c) 2018, W. M. Keck Observatory
 * All rights reserved.
 *
 * Authors: Sylvain Cetre & Paul Richards
 *
 * Note:
 * -----
 * This file contains code which has been used in the past to communicate with devices that may not
 * be present on the board today.  We do not want to lose the code, but it is otherwise dead.
 */



#ifdef DEAD_CODE_HERE

// Si7020_A
#define Si7020_ADDR          0x40
#define Si7020_HUM_HOLD      0xE5
#define Si7020_HUM_NO_HOLD   0xF5
#define Si7020_TMP_HOLD      0xE3
#define Si7020_TMP_NO_HOLD   0xF3
#define Si7020_TMP_PREVIOUS  0xF0
#define Si7020_RESET         0xFE
#define Si7020_WRITE_USER_1  0xE6
#define Si7020_WRITE_USER_2  0x51
#define Si7020_READ_HEATER   0x11

float      LTC2485IntTemp;
float      LTC2485ExtTemp;
float      Si7020Temp;
float      Si7020Hum;


/* Allocate buffers in .dma section of memory for concerto devices */
#ifdef MWARE
#pragma DATA_SECTION(masterRxBuffer, ".dma");
#pragma DATA_SECTION(masterTxBuffer, ".dma");
#pragma DATA_SECTION(slaveRxBuffer, ".dma");
#pragma DATA_SECTION(slaveTxBuffer, ".dma");
#endif


int readSi7020(I2C_Handle i2c, I2C_Transaction i2cTransaction, int deviceId);

int isAD7745Ready (I2C_Handle i2c, I2C_Transaction i2cTransaction, int deviceId);
int setupLTC2485(I2C_Handle i2c, I2C_Transaction i2cTransaction);
int readLTC2485(I2C_Handle i2c, I2C_Transaction i2cTransaction, int deviceId);

/*
 *  ======== readSi7020 ========
 *  function to read Si7020 Si7020Temp & Si7020Hum
 *
 */
int readSi7020 (I2C_Handle i2c, I2C_Transaction i2cTransaction, int deviceId)
{
  uint8_t         txBuffer[1];
  uint8_t         rxBuffer[2];

  /* Read Si7020 Si7020Temp */
  txBuffer[0] = Si7020_TMP_HOLD;
  i2cTransaction.slaveAddress = Si7020_ADDR;
  i2cTransaction.writeBuf = txBuffer;
  i2cTransaction.writeCount = 1;
  i2cTransaction.readBuf = rxBuffer;
  i2cTransaction.readCount = 2;
  if (!I2C_transfer(i2c, &i2cTransaction))
  {
    System_printf("readSi7020: Error 1\n");
    System_flush();
    return -1;
  }
  //Si7020Temp = (float)((rxBuffer[0] << 8) + (rxBuffer[1]))*175.2/65536-46.85;
  fullBuffer1[14+deviceId*18]=rxBuffer[0];
  fullBuffer1[15+deviceId*18]=rxBuffer[1];

  /* Read Si7020 Si7020Hum */
  txBuffer[0] = Si7020_HUM_HOLD;
  i2cTransaction.slaveAddress = Si7020_ADDR;
  i2cTransaction.writeBuf = txBuffer;
  i2cTransaction.writeCount = 1;
  i2cTransaction.readBuf = rxBuffer;
  i2cTransaction.readCount = 2;
  if (!I2C_transfer(i2c, &i2cTransaction))
  {
    System_printf("readSi7020: Error 2\n");
    System_flush();
    return -1;
  }

  //Si7020Hum = (float)((rxBuffer[0] << 8) + (rxBuffer[1]))*125/65536-6;
  fullBuffer1[2+deviceId*18]=rxBuffer[0];
  fullBuffer1[3+deviceId*18]=rxBuffer[1];

  return 0;
}

int isAD7745Ready (I2C_Handle i2c, I2C_Transaction i2cTransaction, int deviceId)
{
  uint8_t         txBuffer[1];
  uint8_t         rxBuffer[1];
  int ready=0;
  txBuffer[0] = AD7745_STATUS;
  i2cTransaction.slaveAddress = AD7745_ADDR;
  i2cTransaction.writeBuf = txBuffer;
  i2cTransaction.writeCount = 1;
  i2cTransaction.readBuf = rxBuffer;
  i2cTransaction.readCount =1;
  if (!I2C_transfer(i2c, &i2cTransaction))
  {
    System_printf("isAD7745Ready: Error 1\n");
    System_flush();
    return -1;
  }

  if ((rxBuffer[0] == 0) || (rxBuffer[0] == 6) || (rxBuffer[0] == 2) || (rxBuffer[0] == 4))
  {
    ready=1;
  }

  return ready;
}

/*
 *  ======== LTC2485 ========
 *
 */
int setupLTC2485(I2C_Handle i2c, I2C_Transaction i2cTransaction)
{
  uint8_t         txBuffer[2];
  uint8_t         rxBuffer[4];
  // Configure external TEMPERATURE sensor
  Task_sleep(100);
  txBuffer[0] = 0x00;
  i2cTransaction.slaveAddress = LTC2485_ADDR;
  i2cTransaction.writeBuf = txBuffer;
  i2cTransaction.writeCount = 1;
  i2cTransaction.readBuf = rxBuffer;
  i2cTransaction.readCount = 0;
  if (!I2C_transfer(i2c, &i2cTransaction))
  {
    System_printf("setupLTC2485: I2C Bus fault1\n");
    System_flush();
    return -1;
  }

  Task_sleep(100);
  txBuffer[0] = 0x04;
  i2cTransaction.slaveAddress = LTC2485_ADDR;
  i2cTransaction.writeBuf = txBuffer;
  i2cTransaction.writeCount = 1;
  i2cTransaction.readBuf = rxBuffer;
  i2cTransaction.readCount = 4;
  Task_sleep(500);
  if (!I2C_transfer(i2c, &i2cTransaction))
  {
    System_printf("setupLTC2485: I2C Bus fault2\n");
    System_flush();
    return -1;
  }
  Task_sleep(100);

  System_printf("setupI2CDevices successull\n");
  System_flush();
  return 0;
}

/*  ======== readLTC2485 ========
 *  function to read LTC2485 Internal and External Si7020Temp.
 *
 */
int readLTC2485 (I2C_Handle i2c, I2C_Transaction i2cTransaction, int deviceId)
{
  uint8_t         txBuffer[2];
  uint8_t         rxBuffer[4];
    //float volt;
  /* Read LTC2485 */
  /*txBuffer[0] = 0x0C;
  i2cTransaction.slaveAddress = LTC2485_ADDR;
  i2cTransaction.writeBuf = txBuffer;
  i2cTransaction.writeCount = 1;
  i2cTransaction.readBuf = rxBuffer;
  i2cTransaction.readCount = 4;
  if (I2C_transfer(i2c, &i2cTransaction))
  {
    LTC2485IntTemp = (float)(((rxBuffer[0] << 24)+(rxBuffer[1] << 16)+(rxBuffer[2] << 8)+(rxBuffer[3])) ^ 0x80000000)*3.3/2147483648/0.0014-273;
    fullBuffer1[10+deviceId*18]=rxBuffer[0];
    fullBuffer1[11+deviceId*18]=rxBuffer[1];
    fullBuffer1[12+deviceId*18]=rxBuffer[2];
    fullBuffer1[13+deviceId*18]=rxBuffer[3];
  }*/

  //Task_sleep(10);
  txBuffer[0] = 0x01;
  i2cTransaction.slaveAddress = LTC2485_ADDR;
  i2cTransaction.writeBuf = txBuffer;
  i2cTransaction.writeCount = 1;
  i2cTransaction.readBuf = rxBuffer;
  i2cTransaction.readCount = 4;
  //Task_sleep(10);
  if (!I2C_transfer(i2c, &i2cTransaction))
  {
    System_printf("readAD7745: Error 1\n");
    System_flush();
    return -1;
  }
  //volt = (float)((rxBuffer[0] << 24)+(rxBuffer[1] << 16)+(rxBuffer[2] << 8)+(rxBuffer[3]))*3.3/2147483648-1.65;
  //LTC2485ExtTemp = 24.3-(1.65-volt)/4.4e-5;
  fullBuffer1[14+deviceId*18]=rxBuffer[0];
  fullBuffer1[15+deviceId*18]=rxBuffer[1];
  fullBuffer1[16+deviceId*18]=rxBuffer[2];
  fullBuffer1[17+deviceId*18]=rxBuffer[3];
  //System_printf("LTC2485 - Int Temp:  %f (C)\n", LTC2485IntTemp);
  return 0;
}

#endif
