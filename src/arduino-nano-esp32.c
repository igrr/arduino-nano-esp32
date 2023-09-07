/*
 * SPDX-FileCopyrightText: 2023 Ivan Grokhotkov <ivan@igrr.me>
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "bsp/arduino-nano-esp32.h"
#include "driver/gpio.h"
#include "esp_err.h"
#include "esp_log.h"

esp_err_t bsp_leds_init(void)
{
    gpio_config_t io_conf = {
        .pin_bit_mask = (1ULL << BSP_LED_RED) | (1ULL << BSP_LED_GREEN) | (1ULL << BSP_LED_BLUE) | (1ULL << BSP_LED_YELLOW),
        .mode = GPIO_MODE_OUTPUT,
        .pull_up_en = GPIO_PULLUP_DISABLE,
        .pull_down_en = GPIO_PULLDOWN_DISABLE,
        .intr_type = GPIO_INTR_DISABLE,
    };
    // Disable logging for gpio_config() to avoid noise on the console
    esp_log_level_t old_log_level = esp_log_level_get("gpio");
    esp_log_level_set("gpio", ESP_LOG_WARN);

    esp_err_t err = gpio_config(&io_conf);

    // Restore logging level
    esp_log_level_set("gpio", old_log_level);
    return err;
}

esp_err_t bsp_led_set(bsp_led_t led_io, bool on)
{
    unsigned level;
    if (led_io == BSP_LED_YELLOW) {
        level = on ? 1 : 0;
    } else {
        level = on ? 0 : 1;
    }
    return gpio_set_level(led_io, level);
}
