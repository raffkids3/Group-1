#include "TaskA.h"
#include <iostream>
#include "rtos_api.h" // the RTOS header

// shared state for coordination
volatile int g_system_cycle_count = 0;

// Helper functions 
int RunAddition(int num1, int num2) {
    return num1 + num2;
}

void PrintTaskOccured() {
    std::cout << "Task A has occurred" << std::endl;
}

void vTaskA(void *pvParameters) {
    for (;;) {
        g_system_cycle_count++;
        std::cout << "[Task A] Cycle: " << g_system_cycle_count << std::endl;
        PrintTaskOccured();

        // Yield for 1000ms 
        vTaskDelay(1000);
    }
}
