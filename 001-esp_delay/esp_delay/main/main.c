#include <stdio.h>

#include "esp_log.h"

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#define TAG "DELAY"

void app_main(void) {
    uint8_t i = 0;

    for(;;) {
        vTaskDelay(1000 / portTICK_PERIOD_MS);  // 1000ms = 1s delay
        ESP_LOGI(TAG, "loop %d", i++);
    }
}
