# Top level CMakeLists.txt for the scandinavia project.
cmake_minimum_required(VERSION 3.28)
project(scandinavia CXX)

# Set tool preferences
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON) #Die if compiler doesn't support C++20
set(CMAKE_POSITION_INDEPENDENT_CODE ON) #Neded since top level is a shared object file
set(CMAKE_EXPORT_COMPILE_COMMANDS ON) #Generate compile_commands.json for use with clangd and other tools

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)  # executables
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)  # shared libraries (.so)

# Warn if no preset or explicit -D was used, then fall back to a default
if(NOT DEFINED CACHE{LANGUAGE_GROUP})
    message(WARNING "LANGUAGE_GROUP not set — defaulting to 'native'. "
                    "Use cmake --preset <name> or -DLANGUAGE_GROUP=<group>.")
    set(LANGUAGE_GROUP "native" CACHE STRING "Localization group to build (native or latin)")
endif()

# Lock the value after first configure so ninja-triggered re-runs cannot drift
if(NOT DEFINED CACHE{LANGUAGE_GROUP_LOCKED})
    set(LANGUAGE_GROUP_LOCKED "${LANGUAGE_GROUP}" CACHE INTERNAL "")
elseif(NOT LANGUAGE_GROUP STREQUAL LANGUAGE_GROUP_LOCKED)
    message(FATAL_ERROR
        "LANGUAGE_GROUP cannot change from '${LANGUAGE_GROUP_LOCKED}' to '${LANGUAGE_GROUP}' "
        "in an existing build tree. Delete build/${LANGUAGE_GROUP_LOCKED} and reconfigure.")
endif()

include(CTest)
# include(CTest) calls enable_testing() and creates the BUILD_TESTING option
# (defaults ON). Subsystems check this to gate test compilation:
#   cmake -DBUILD_TESTING=OFF ...  skips all test targets
# This will be replaced as soon as our conatiners have it preinstalled, but for now it allows tests to be built and run with a single command:
if(BUILD_TESTING)
    include(FetchContent)
    FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG        v1.14.0
    )
    FetchContent_MakeAvailable(googletest)
endif()

# add_subdirectory order encodes the definition dependency graph - CMake enforces build
# ordering based on target_link_libraries, but listing dependents first makes
# the intent readable without inspecting individual CMakeLists files
add_subdirectory(common)        # no dependencies - must come first
add_subdirectory(sweden)        # depends on common
add_subdirectory(denmark)       # depends on common
add_subdirectory(scandinavia)   # depends on sweden and denmark
add_subdirectory(utilities)     # depends on scandinavia
