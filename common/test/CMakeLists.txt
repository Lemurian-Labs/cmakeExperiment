# Unit test for common in isolation - links the static lib directly, not
# through scandinavia.so, so it tests the subsystem without the wrapping layer
add_executable(test_language test_language.cpp)
target_link_libraries(test_language PRIVATE common)
