cmake_minimum_required(VERSION 3.15)
project(scandinavia CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Subsystems must be built before the shared library that wraps them
add_subdirectory(sweden)
add_subdirectory(denmark)

add_library(scandinavia SHARED src/scandinavia.cpp)
target_include_directories(scandinavia
    PUBLIC  include
    PRIVATE sweden/include denmark/include)
target_link_libraries(scandinavia PRIVATE sweden denmark)

# Utilities depend on the scandinavia shared library
add_subdirectory(utilities)
