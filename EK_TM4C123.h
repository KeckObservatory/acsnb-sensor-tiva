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
/** ============================================================================
 *  @file       EK_TM4C123.h
 *
 *  @brief      EK_TM4C123 Board Specific APIs
 *
 *  The EK_TM4C123 header file should be included in an application as
 *  follows:
 *  @code
 *  #include <EK_TM4C123.h>
 *  @endcode
 *
 *  ============================================================================
 */
#ifndef __EK_TM4C123_H
#define __EK_TM4C123_H

#ifdef __cplusplus
extern "C" {
#endif

/* LEDs on EK_TM4C123 are active high. */
#define EK_TM4C123_LED_OFF (0)
#define EK_TM4C123_LED_ON  (1)

/*!
 *  @def    EK_TM4C123_GPIOName
 *  @brief  Enum of GPIO names on the EK_TM4C123 dev board
 */
typedef enum EK_TM4C123_GPIOName {
	EK_TM4C123_PININ0 = 0,
    EK_TM4C123_PININ1,
	EK_TM4C123_PININ2,
	EK_TM4C123_PININ3,
	EK_TM4C123_PININ4,
	EK_TM4C123_PININ5,
    EK_TM4C123_LED_ORANGE,
	EK_TM4C123_LED_GREEN,
	EK_TM4C123_LED_BLUE,
	EK_TM4C123_LED_RED,

    EK_TM4C123_GPIOCOUNT
} EK_TM4C123_GPIOName;

/*!
 *  @def    EK_TM4C123_I2CName
 *  @brief  Enum of I2C names on the EK_TM4C123 dev board
 */
typedef enum EK_TM4C123_I2CName {
    EK_TM4C123_I2C0 = 0,
	EK_TM4C123_I2C1,
	EK_TM4C123_I2C2,
    EK_TM4C123_I2C3,
	EK_TM4C123_I2C4,
	EK_TM4C123_I2C5,

    EK_TM4C123_I2CCOUNT
} EK_TM4C123_I2CName;

/*!
 *  @def    EK_TM4C123_PWMName
 *  @brief  Enum of PWM names on the EK_TM4C123 dev board
 */
typedef enum EK_TM4C123_PWMName {
    EK_TM4C123_PWM6 = 0,
    EK_TM4C123_PWM7,

    EK_TM4C123_PWMCOUNT
} EK_TM4C123_PWMName;

/*!
 *  @def    EK_TM4C123_SDSPIName
 *  @brief  Enum of SDSPI names on the EK_TM4C123 dev board
 */
typedef enum EK_TM4C123_SDSPIName {
    EK_TM4C123_SDSPI0 = 0,

    EK_TM4C123_SDSPICOUNT
} EK_TM4C123_SDSPIName;

/*!
 *  @def    EK_TM4C123_SPIName
 *  @brief  Enum of SPI names on the EK_TM4C123 dev board
 */
typedef enum EK_TM4C123_SPIName {
    EK_TM4C123_SPI0 = 0,

    EK_TM4C123_SPICOUNT
} EK_TM4C123_SPIName;

/*!
 *  @def    EK_TM4C123_UARTName
 *  @brief  Enum of UARTs on the EK_TM4C123 dev board
 */
typedef enum EK_TM4C123_UARTName {
    EK_TM4C123_UART0 = 0,

    EK_TM4C123_UARTCOUNT
} EK_TM4C123_UARTName;

/*!
 *  @def    EK_TM4C123_USBMode
 *  @brief  Enum of USB setup function on the EK_TM4C123 dev board
 */
typedef enum EK_TM4C123_USBMode {
    EK_TM4C123_USBDEVICE,
    EK_TM4C123_USBHOST
} EK_TM4C123_USBMode;

/*!
 *  @def    EK_TM4C123_WatchdogName
 *  @brief  Enum of Watchdogs on the EK_TM4C123 dev board
 */
typedef enum EK_TM4C123_WatchdogName {
    EK_TM4C123_WATCHDOG0 = 0,

    EK_TM4C123_WATCHDOGCOUNT
} EK_TM4C123_WatchdogName;

/*!
 *  @def    EK_TM4C123_WiFiName
 *  @brief  Enum of WiFi names on the EK_TM4C123 dev board
 */
typedef enum EK_TM4C123_WiFiName {
    EK_TM4C123_WIFI = 0,

    EK_TM4C123_WIFICOUNT
} EK_TM4C123_WiFiName;

/*!
 *  @brief  Initialize board specific DMA settings
 *
 *  This function creates a hwi in case the DMA controller creates an error
 *  interrrupt, enables the DMA and supplies it with a uDMA control table.
 */
extern void EK_TM4C123_initDMA(void);

/*!
 *  @brief  Initialize the general board specific settings
 *
 *  This function initializes the general board specific settings.
 *  This includes:
 *     - Flash wait states based on the process
 *     - Disable clock source to watchdog module
 *     - Enable clock sources for peripherals
 */
extern void EK_TM4C123_initGeneral(void);

/*!
 *  @brief  Initialize board specific GPIO settings
 *
 *  This function initializes the board specific GPIO settings and
 *  then calls the GPIO_init API to initialize the GPIO module.
 *
 *  The GPIOs controlled by the GPIO module are determined by the GPIO_PinConfig
 *  variable.
 */
extern void EK_TM4C123_initGPIO(void);

/*!
 *  @brief  Initialize board specific I2C settings
 *
 *  This function initializes the board specific I2C settings and then calls
 *  the I2C_init API to initialize the I2C module.
 *
 *  The I2C peripherals controlled by the I2C module are determined by the
 *  I2C_config variable.
 */
extern void EK_TM4C123_initI2C(void);

/*!
 *  @brief  Initialize board specific PWM settings
 *
 *  This function initializes the board specific PWM settings and then calls
 *  the PWM_init API to initialize the PWM module.
 *
 *  The PWM peripherals controlled by the PWM module are determined by the
 *  PWM_config variable.
 */
extern void EK_TM4C123_initPWM(void);

/*!
 *  @brief  Initialize board specific SDSPI settings
 *
 *  This function initializes the board specific SDSPI settings and then calls
 *  the SDSPI_init API to initialize the SDSPI module.
 *
 *  The SDSPI peripherals controlled by the SDSPI module are determined by the
 *  SDSPI_config variable.
 */
extern void EK_TM4C123_initSDSPI(void);

/*!
 *  @brief  Initialize board specific SPI settings
 *
 *  This function initializes the board specific SPI settings and then calls
 *  the SPI_init API to initialize the SPI module.
 *
 *  The SPI peripherals controlled by the SPI module are determined by the
 *  SPI_config variable.
 */
extern void EK_TM4C123_initSPI(void);

#ifdef __cplusplus
}
#endif

#endif /* __EK_TM4C123_H */
