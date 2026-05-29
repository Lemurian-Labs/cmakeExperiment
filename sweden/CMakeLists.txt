# Target declared here without sources - implementation is added by
# src/CMakeLists.txt via target_sources, keeping identity separate from detail
add_library(sweden STATIC)

# PUBLIC: scandinavia needs sweden.hpp at compile time when it links sweden,
# so the include path must propagate to consumers
target_include_directories(sweden PUBLIC include)

add_subdirectory(src)

# Separate subdirectory so tests can be conditionally skipped:
#   option(BUILD_TESTS "Build unit tests" ON)
#   if(BUILD_TESTS) add_subdirectory(test) endif()
add_subdirectory(test)
