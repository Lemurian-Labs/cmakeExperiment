# Target declared here without sources - implementation is added by
# src/CMakeLists.txt via target_sources, keeping identity separate from details
add_library(common STATIC)

# PUBLIC: propagates include/ to dependent users at compile time so they
# find the interface headers without specifying the path themselves
target_include_directories(common PUBLIC include)

add_subdirectory(src)

if(BUILD_TESTING)
    add_subdirectory(test)
endif()
