#include "DistanceCalculator.h"

#include <cmath>

namespace
{
    constexpr double EARTH_RADIUS_METERS = 6371000.0;
    constexpr double PI = 3.14159265358979323846;

    double toRadians(double degrees)
    {
        return degrees * PI / 180.0;
    }
}

double DistanceCalculator::calculate(
    const Coordinates& truck,
    const Coordinates& customer) const
{
       // Dummy distance for now.
    return 21.0;
}