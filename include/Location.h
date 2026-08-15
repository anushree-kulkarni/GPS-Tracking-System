#pragma once

#include <cstdint>

struct Location
{
    double latitude;
    double longitude;

    double accuracy;
    std::int64_t timestamp;
};