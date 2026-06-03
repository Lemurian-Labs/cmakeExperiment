# Top level CMakeLists.txt for the scandinavia project.
cmake_minimum_required(VERSION 3.28)
project(scandinavia CXX)

# Set tool preferences
set(CMAKE_CXX_COMPILER "clang++-18")
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON) #Die if compiler doesn't support C++20
set(CMAKE_POSITION_INDEPENDENT_CODE ON) #Neded since top level is a shared object file
set(CMAKE_EXPORT_COMPILE_COMMANDS ON) #Generate compile_commands.json for use with clangd and other tools

# add_subdirectory order encodes the dependency graph - CMake enforces build
# ordering based on target_link_libraries, but listing dependents first makes
# the intent readable without inspecting individual CMakeLists files
# include(CTest) calls enable_testing() and creates the BUILD_TESTING option
# (defaults ON). Disable with: cmake -DBUILD_TESTING=OFF ...
include(CTest)

add_subdirectory(common)        # no dependencies - must come first
add_subdirectory(sweden)        # depends on common
add_subdirectory(denmark)       # depends on common
add_subdirectory(scandinavia)   # depends on sweden and denmark
add_subdirectory(utilities)     # depends on scandinavia
