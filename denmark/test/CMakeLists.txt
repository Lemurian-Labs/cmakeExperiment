# Unit test for denmark in isolation - links the static lib directly, not
# through scandinavia.so, so it tests the subsystem without the wrapping layer.
# Also has access to symbols not exported by the .so (e.g. city_name)
add_executable(test_denmark test_denmark.cpp)
target_link_libraries(test_denmark PRIVATE denmark)
add_test(NAME denmark COMMAND test_denmark)
