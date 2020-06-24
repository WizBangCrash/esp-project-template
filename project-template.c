#include <stdio.h>

#include "espressif/esp_common.h"
#include "esp/uart.h"

#include "FreeRTOS.h"
#include "task.h"


static void loop_forever(void *pvParameters)
{
    uint32_t tick = 0;
    while (1) {
        printf("tick: %d\n", tick++);
        vTaskDelay(5000 / portTICK_PERIOD_MS);
    }
}

void user_init(void)
{
    uart_set_baud(0, 115200);

    // Just some information
    printf("\n");
    printf("SDK version : %s\n", sdk_system_get_sdk_version());
    printf("GIT version : %s\n", GITSHORTREV);

    xTaskCreate(loop_forever, "tick_task", 256, NULL, 2, NULL);
}
