#include "timing_shared.h"

// Actual variable definitions
volatile uint32_t g_lastHeartbeatTick = 0;
volatile int g_system_cycle_count = 0;
std::mutex g_sharedResourceMutex;

void InitSharedResources() {
    // std::mutex does not require explicit initialization
}
