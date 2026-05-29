cmake_minimum_required(VERSION 3.15)
project(scandinavia CXX)

# C++17 set once at the root so every target inherits it without repetition
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# add_subdirectory order encodes the dependency graph - CMake enforces build
# ordering based on target_link_libraries, but listing dependents first makes
# the intent readable without inspecting individual CMakeLists files
add_subdirectory(common)        # no dependencies - must come first
add_subdirectory(sweden)        # depends on common
add_subdirectory(denmark)       # depends on common
add_subdirectory(scandinavia)   # depends on sweden and denmark
add_subdirectory(utilities)     # depends on scandinavia
