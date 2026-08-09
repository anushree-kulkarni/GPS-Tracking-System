#pragma once

#include "Coordinates.h"

class DistanceCalculator
{
public:
    double calculate(const Coordinates& truck,
                     const Coordinates& customer) const;
};