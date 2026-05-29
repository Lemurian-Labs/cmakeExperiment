add_library(sweden STATIC src/sweden.cpp)
target_include_directories(sweden PUBLIC include)

add_executable(test_sweden test/test_sweden.cpp)
target_link_libraries(test_sweden PRIVATE sweden)
