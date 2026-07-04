#include "timing_shared.h"
#include "rtos_api.h"

volatile uint32_t g_lastHeartbeatTick = 0;
volatile int g_system_cycle_count = 0;

//Define Mutex
SemaphoreHandle_t g_sharedResourceMutex = NULL;

void InitSharedResources() {
  //Create the mutex before tasks begins execution
  g_sharedResourceMutex = xSemaphoreCreateMutex();
}


