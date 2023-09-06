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

/**
 * @brief LED pin definitions
 */
typedef enum {
    BSP_LED_RED = GPIO_NUM_46,          /*< Red LED, active low */
    BSP_LED_GREEN = GPIO_NUM_0,         /*< Green LED, active low */
    BSP_LED_BLUE = GPIO_NUM_45,         /*< Blue LED, active low */
    BSP_LED_YELLOW = GPIO_NUM_48        /*< Yellow LED next to the USB port, active high */
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
 *
 * @param led_io Which LED to manipulate
 * @param on True to turn LED on, false to turn it off. Note that the polarity of the LED is already taken into account by this function.
 * @return
 *     - ESP_OK Success
 *     - ESP_ERR_INVALID_ARG Parameter error
 */
esp_err_t bsp_led_set(const bsp_led_t led_io, const bool on);


#ifdef __cplusplus
}
#endif
