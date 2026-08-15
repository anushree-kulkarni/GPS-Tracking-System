#include <crow.h>

#include "CoordinateCapture.h"
#include "DistanceCalculator.h"

#include <string>

int main()
{
    crow::SimpleApp app;

    CROW_ROUTE(app, "/location")
    ([]()
    {
        CoordinateCapture capture;
        DistanceCalculator calculator;

        Coordinates truck = capture.getCurrentLocation();
        Coordinates customer = capture.getCustomerCoordinates(); // Assuming this method retrieves the customer's coordinates, will add later.

        double distance = calculator.calculate(truck, customer);

        if (distance <= 20.0)
        {
            return std::string("Truck is within 20 meters. Distance: ") +
                   std::to_string(distance) + " m";
        }

        return std::string("Truck is outside 20 meters. Distance: ") +
               std::to_string(distance) + " m";
    });

    app.port(18080).run();

    return 0;
}