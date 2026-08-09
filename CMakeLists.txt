cmake_minimum_required(VERSION 3.20)

project(GPSNotification LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Crow CONFIG REQUIRED)

add_executable(GPSNotification
    src/main.cpp
)

target_link_libraries(GPSNotification PRIVATE
    Crow::Crow
    ws2_32
    mswsock
)