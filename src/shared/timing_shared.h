#pragma once
#include <cstdint>
#include <mutex>

// External declarations only (no variables created here)
extern volatile uint32_t g_lastHeartbeatTick;
extern volatile int g_system_cycle_count;
extern std::mutex g_sharedResourceMutex;

void InitSharedResources();
