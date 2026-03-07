cmake_minimum_required(VERSION 3.20)
project(sunny-shell VERSION 0.1 LANGUAGES CXX)

# 1. Set C++ standard (Slint requires at least C++20)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 2. Locate the Slint installation
find_package(Slint REQUIRED)

# 3. Create the executable
# Note: Since the CMakeLists is in /cmake, we point to ../logic/main.cpp
add_executable(sunny-shell ../logic/main.cpp)

# 4. Process the .slint file
# This generates the header file that you #include in main.cpp
slint_target_sources(sunny-shell ../ui/app_window.slint)

# 5. Link against Slint
target_link_libraries(sunny-shell PRIVATE Slint::Slint)
