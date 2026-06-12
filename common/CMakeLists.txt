# Target declared here without sources - implementation is added by
# src/CMakeLists.txt via target_sources, keeping identity separate from details
add_library(common STATIC)

# PUBLIC: propagates include/ to dependent users at compile time so they
# find the interface headers without specifying the path themselves
target_include_directories(common PUBLIC include)

# PUBLIC: makes the selected group's lang.hpp available to consumers that want
# the Lang enum for readability — not required since translate() takes int
target_include_directories(common PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src/localization/${LANGUAGE_GROUP})

add_subdirectory(src)

if(BUILD_TESTING)
    add_subdirectory(test)
endif()
