#pragma once
#include <cstdint>
#include "rtos_api.h"// Provides access to RTOS semaphore/mutex API

extern volatile uint32_t g_lastHeartbeatTick;
extern volatile.int g_system_cycle_count;

//Declare Mutex Handle
extern SemaphoreHandle_t g_sharedResourceMutex;
// Function to initialize shared resources
void InitSharedResources();
