# GPS Notification System (MVP)

## Project Goal

Build a cost-efficient GPS tracking system where:

- **Phone** acts as the GPS device (vehicle).
- **Windows Laptop** acts as the backend server.
- The laptop will notify the user when the phone comes within **20
  meters**.

------------------------------------------------------------------------

## Current MVP Architecture

``` text
Phone (Browser / Future Android App)
        |
        | HTTP
        v
+---------------------------+
| Windows Laptop            |
| C++ Crow Web Server       |
| Port: 18080               |
+---------------------------+
```

The server is reachable from: - `http://localhost:18080` (Laptop) -
`http://<Laptop-IP>:18080` (Phone on same Wi-Fi)

------------------------------------------------------------------------

## Tech Stack

- C++20
- Crow Web Framework
- Asio
- CMake
- Ninja
- MinGW GCC 14.2
- vcpkg

------------------------------------------------------------------------

## Project Structure

``` text
GPS/
│
├── src/
│   └── main.cpp
│
├── build/
│
├── external/
│   └── Crow/
│
└── CMakeLists.txt
```

------------------------------------------------------------------------

## Features Completed

### Environment Setup

- Configured MinGW GCC
- Configured CMake + Ninja
- Integrated Crow
- Configured vcpkg

### HTTP Server

Implemented a C++ web server.

Current endpoint:

    GET /

Response:

    GPS Server Running!

### Network Access

The server: - Runs successfully. - Can be opened from a browser on the
laptop. - Can be accessed from a phone connected to the same Wi-Fi using
the laptop’s IP address.

This confirms that the phone can communicate with the C++ server.

------------------------------------------------------------------------

## Challenges Solved

- Asio include path issues
- Crow package discovery
- CMake configuration
- vcpkg toolchain setup
- MinGW compiler selection
- Windows Winsock linking (`ws2_32`, `mswsock`)

------------------------------------------------------------------------

## Current Status

✅ C++ server builds successfully.

✅ Server runs on Windows.

✅ Phone accesses the server over Wi-Fi.

This completes the networking foundation for the MVP.

------------------------------------------------------------------------

## Next Milestones

1.  Create REST API:

    - `POST /location`

2.  Phone sends:

    - Latitude
    - Longitude

3.  Server stores latest location.

4.  Laptop calculates distance.

5.  If distance is less than 20 meters:

    - Display a Windows notification.

------------------------------------------------------------------------

## Learning Outcomes

- Modern CMake
- C++ project organization
- HTTP servers
- REST APIs
- Client-server communication
- Networking basics
- Dependency management
- Debugging compiler and linker issues



#----------------------------------#

               GPS Chip

          Android App Installed
                   
         Reads GPS every 5 sec
{
  "deviceId":"CAR001",
  "latitude":17.385,
  "longitude":78.486
}

          HTTPS over Internet

            Cloud Server

        Update location of CAR001
  
         Show on Website/App


 Function

Android Location API

Android Location Service
      │
      ├─ GPS/GNSS
      ├─ Wi-Fi
      ├─ Cell Towers
      └─ Sensors

Returns Location