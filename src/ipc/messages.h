#pragma once
#include <cstdint>

struct SystemMessage
{
    uint32_t seq;
    uint32_t tick;
    uint32_t payload; // simple data for now
};
