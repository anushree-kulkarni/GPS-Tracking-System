#pragma once

#include "Coordinates.h"

class CoordinateCapture
{
public:
    Coordinates getTruckCoordinates() const;
    Coordinates getCustomerCoordinates() const;
};