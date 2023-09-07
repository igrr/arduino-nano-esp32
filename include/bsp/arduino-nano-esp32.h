/*
 * SPDX-FileCopyrightText: 2023 Ivan Grokhotkov <ivan@igrr.me>
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file
 * @brief Arduino Nano ESP32 Board Support Package
 */

#pragma once

#include "esp_err.h"
#include "driver/gpio.h"
#include "sdkconfig.h"

#ifdef __cplusplus
extern "C" {
#endif

#define PIN_A0 GPIO_NUM_1       /**< GPIO labelled as A0 */
#define PIN_A1 GPIO_NUM_2       /**< GPIO labelled as A1 */
#define PIN_A2 GPIO_NUM_3       /**< GPIO labelled as A2 */
#define PIN_A3 GPIO_NUM_4       /**< GPIO labelled as A3 */
#define PIN_A4 GPIO_NUM_11      /**< GPIO labelled as A4 */
#define PIN_A5 GPIO_NUM_12      /**< GPIO labelled as A5 */
#define PIN_A6 GPIO_NUM_13      /**< GPIO labelled as A6 */
#define PIN_A7 GPIO_NUM_14      /**< GPIO labelled as A7 */

#define PIN_B0 GPIO_NUM_46      /**< GPIO labelled as B0 */
#define PIN_B1 GPIO_NUM_0       /**< GPIO labelled as B1 */

#define PIN_RX0 GPIO_NUM_44     /**< GPIO labelled as RX0 */
#define PIN_D0 PIN_RX0          /**< Alias for RX0 */
#define PIN_TX0 GPIO_NUM_43     /**< GPIO labelled as TX0 */
#define PIN_D1 PIN_TX0          /**< Alias for TX0 */
#define PIN_D2 GPIO_NUM_5       /**< GPIO labelled as D2 */
#define PIN_D3 GPIO_NUM_6       /**< GPIO labelled as D3 */
#define PIN_D4 GPIO_NUM_7       /**< GPIO labelled as D4 */
#define PIN_D5 GPIO_NUM_8       /**< GPIO labelled as D5 */
#define PIN_D6 GPIO_NUM_9       /**< GPIO labelled as D6 */
#define PIN_D7 GPIO_NUM_10      /**< GPIO labelled as D7 */
#define PIN_D8 GPIO_NUM_17      /**< GPIO labelled as D8 */
#define PIN_D9 GPIO_NUM_18      /**< GPIO labelled as D9 */
#define PIN_D10 GPIO_NUM_21     /**< GPIO labelled as D10 */
#define PIN_D11 GPIO_NUM_38     /**< GPIO labelled as D11 */
#define PIN_D12 GPIO_NUM_47     /**< GPIO labelled as D12 */

/**
 * @brief LED pin definitions
 */
typedef enum {
    BSP_LED_RED = GPIO_NUM_46,          /**< Red LED, active low */
    BSP_LED_GREEN = GPIO_NUM_0,         /**< Green LED, active low */
    BSP_LED_BLUE = GPIO_NUM_45,         /**< Blue LED, active low */
    BSP_LED_YELLOW = GPIO_NUM_48        /**< Yellow LED next to the USB port, active high */
} bsp_led_t;

/**
 * @brief Set LEDs' GPIOs as push-pull outputs
 *
 * @return
 *     - ESP_OK Success
 */
esp_err_t bsp_leds_init(void);

/**
 * @brief Turn LED on/off
 * @param led_io    Which LED to manipulate (one of BSP_LED_*)
 * @param on        True to turn LED on, false to turn it off. Note that the polarity of the LED is already taken into account by this function.
 * @return
 *     - ESP_OK Success
 *     - ESP_ERR_INVALID_ARG Parameter error
 */
esp_err_t bsp_led_set(bsp_led_t led_io, bool on);


#ifdef __cplusplus
}
#endif
