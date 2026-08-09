#include <crow.h>

int main()
{
    crow::SimpleApp app;

    CROW_ROUTE(app, "/")
    ([]()
    {
        return "GPS Server Running!";
    });

    app.bindaddr("0.0.0.0")
    .port(18080)
    .multithreaded()
    .run();

    return 0;
}