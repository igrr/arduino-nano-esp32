/*
 * SPDX-FileCopyrightText: 2023 Ivan Grokhotkov <ivan@igrr.me>
 *
 * SPDX-License-Identifier: Unlicense OR CC0-1.0
 */

#include <stdio.h>
#include <unistd.h>
#include <inttypes.h>
#include "esp_err.h"
#include "esp_log.h"
#include "esp_system.h"
#include "bsp/arduino-nano-esp32.h"

static const char* TAG = "example";

void app_main(void)
{
    ESP_LOGI(TAG, "Hello from Arduino Nano ESP32 board!");
    ESP_LOGI(TAG, "Free heap: %" PRIu32 " bytes", esp_get_free_heap_size());

    ESP_ERROR_CHECK(bsp_leds_init());

    const int blink_pattern[][4] = {
        // BSP_LED_RED, BSP_LED_GREEN, BSP_LED_BLUE, BSP_LED_YELLOW
        { 1, 0, 0, 0 },
        { 0, 1, 0, 0 },
        { 0, 0, 1, 0 },
        { 0, 0, 0, 1 },
        { 0, 0, 0, 0 },
    };
    const unsigned pattern_length = sizeof(blink_pattern) / sizeof(blink_pattern[0]);

    for (unsigned i = 0; ; i++) {
        bsp_led_set(BSP_LED_RED, blink_pattern[i % pattern_length][0]);
        bsp_led_set(BSP_LED_GREEN, blink_pattern[i % pattern_length][1]);
        bsp_led_set(BSP_LED_BLUE, blink_pattern[i % pattern_length][2]);
        bsp_led_set(BSP_LED_YELLOW, blink_pattern[i % pattern_length][3]);
        usleep(300000);
    }
}
