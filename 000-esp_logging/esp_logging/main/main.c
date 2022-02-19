#include <stdio.h>

#include "esp_log.h"

static void app0(void);
static void app1(void);

void app_main(void) {
    app0();
    app1();
}

static const char *APP0_TAG = "APP0";

void app0(void) {
    esp_log_level_set(APP0_TAG, ESP_LOG_INFO);

    ESP_LOGE(APP0_TAG, "This is an error");             // error
    ESP_LOGW(APP0_TAG, "This is a warning");            // warning
    ESP_LOGI(APP0_TAG, "This is an information");       // information
    ESP_LOGD(APP0_TAG, "This is a debug message");      // CAN NOT PRINT debug
    ESP_LOGV(APP0_TAG, "This is a verbose");            // CAN NOT PRINT verbose
}

static const char *APP1_TAG = "APP1";

void app1(void) {
    esp_log_level_set(APP1_TAG, ESP_LOG_VERBOSE);

    ESP_LOGE(APP1_TAG, "This is an error");             // error
    ESP_LOGW(APP1_TAG, "This is a warning");            // warning
    ESP_LOGI(APP1_TAG, "This is an information");       // information
    ESP_LOGD(APP1_TAG, "This is a debug message");      // debug
    ESP_LOGV(APP1_TAG, "This is a verbose");            // verbose
}