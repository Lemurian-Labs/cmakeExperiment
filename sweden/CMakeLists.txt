# Target declared here without sources - implementation is added by
# src/CMakeLists.txt via target_sources, keeping identity separate from details
add_library(sweden STATIC)

# PUBLIC: when a consumer links sweden via target_link_libraries, CMake
# automatically adds include/ to their compile step - no explicit include
# path needed on the consumer side
target_include_directories(sweden PUBLIC include)

add_subdirectory(src)

if(BUILD_TESTING)
    add_subdirectory(test)
endif()
