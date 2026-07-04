#include "TaskB.h"
#include <iostream>
#include <mutex>
#include "rtos_api.h"
#include "timing_shared.h"
#include "timing_utils.h"

void vTaskB(void* pvParameters) {
    (void)pvParameters;

    for (;;) {
        {
            std::lock_guard<std::mutex> lock(g_sharedResourceMutex);
            uint32_t now = GetCurrentTick();

            if ((now - g_lastHeartbeatTick) > 2000) {
                std::cout << "[WATCHDOG] Warning: Task A heartbeat overdue!" << std::endl;
            }
            else {
                std::cout << "[WATCHDOG] Task A heartbeat is healthy." << std::endl;
            }

            if (g_system_cycle_count >= 3) {
                std::cout << "[Task B] Resetting counter.\n";
                g_system_cycle_count = 0;
            }
        }
        vTaskDelay(500);
    }
}
