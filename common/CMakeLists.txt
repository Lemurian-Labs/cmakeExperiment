# Target declared here without sources - implementation is added by
# src/CMakeLists.txt via target_sources, keeping identity separate from detail
add_library(common STATIC)

# PUBLIC: sweden and denmark need language.hpp at compile time, so the include
# path must propagate when they link common via target_link_libraries PRIVATE
target_include_directories(common PUBLIC include)

add_subdirectory(src)

# Separate subdirectory so tests can be conditionally skipped:
#   option(BUILD_TESTS "Build unit tests" ON)
#   if(BUILD_TESTS) add_subdirectory(test) endif()
add_subdirectory(test)
