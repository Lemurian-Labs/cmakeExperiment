# No library to declare here - utilities are leaf executables.
# Dispatches to src/ and test/ to keep the same structure as the subsystems
add_subdirectory(src)

if(BUILD_TESTING)
    add_subdirectory(test)
endif()
