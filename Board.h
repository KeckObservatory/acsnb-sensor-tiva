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

#ifndef __BOARD_H
#define __BOARD_H

#ifdef __cplusplus
extern "C" {
#endif

#include "EK_TM4C123.h"

#define Board_initDMA               EK_TM4C123_initDMA
#define Board_initGeneral           EK_TM4C123_initGeneral
#define Board_initGPIO              EK_TM4C123_initGPIO
#define Board_initI2C               EK_TM4C123_initI2C
#define Board_initPWM               EK_TM4C123_initPWM
#define Board_initSDSPI             EK_TM4C123_initSDSPI
#define Board_initSPI               EK_TM4C123_initSPI
#define Board_initUART              EK_TM4C123_initUART
#define Board_initUSB               EK_TM4C123_initUSB
#define Board_initWatchdog          EK_TM4C123_initWatchdog
#define Board_initWiFi              EK_TM4C123_initWiFi

#define Board_LED_ON                EK_TM4C123_LED_ON
#define Board_LED_OFF               EK_TM4C123_LED_OFF
#define Board_LED0                  EK_TM4C123_LED_ORANGE
#define Board_LED1                  EK_TM4C123_LED_GREEN
#define Board_LED2                  EK_TM4C123_LED_BLUE
#define Board_LED3                  EK_TM4C123_LED_RED
#define Board_PININ0                EK_TM4C123_PININ0
#define Board_PININ1                EK_TM4C123_PININ1
#define Board_PININ2                EK_TM4C123_PININ2
#define Board_PININ3                EK_TM4C123_PININ3
#define Board_PININ4                EK_TM4C123_PININ4
#define Board_PININ5                EK_TM4C123_PININ5

#define Board_I2C0                  EK_TM4C123_I2C0
#define Board_I2C1                  EK_TM4C123_I2C1
#define Board_I2C2                  EK_TM4C123_I2C2
#define Board_I2C3                  EK_TM4C123_I2C3
#define Board_I2C4                  EK_TM4C123_I2C4
#define Board_I2C5                  EK_TM4C123_I2C5

#define Board_I2C_TMP               EK_TM4C123_I2C0
#define Board_I2C_NFC               EK_TM4C123_I2C3
#define Board_I2C_TPL0401           EK_TM4C123_I2C3

#define Board_PWM0                  EK_TM4C123_PWM6
#define Board_PWM1                  EK_TM4C123_PWM7

#define Board_SDSPI0                EK_TM4C123_SDSPI0

#define Board_SPI0                  EK_TM4C123_SPI0
#define Board_SPI1                  EK_TM4C123_SPI3
#define Board_SPI_CC3100            EK_TM4C123_SPI2

#define Board_USBDEVICE             EK_TM4C123_USBDEVICE

#define Board_UART0                 EK_TM4C123_UART0

#define Board_WATCHDOG0             EK_TM4C123_WATCHDOG0

#define Board_WIFI                  EK_TM4C123_WIFI

/* Board specific I2C addresses */
#define Board_TMP006_ADDR           (0x40)
#define Board_RF430CL330_ADDR       (0x28)
#define Board_TPL0401_ADDR          (0x40)
#define TARGET_IS_TM4C123_RA1 1
#ifdef __cplusplus
}
#endif

#endif /* __BOARD_H */
