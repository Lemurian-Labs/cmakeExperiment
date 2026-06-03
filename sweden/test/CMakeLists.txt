# Unit test for sweden in isolation - links the static lib directly, not
# through scandinavia.so, so it tests the subsystem without the wrapping layer.
# Also has access to symbols not exported by the .so (e.g. city_name)
add_executable(test_sweden test_sweden.cpp)
target_link_libraries(test_sweden PRIVATE sweden)
add_test(NAME sweden COMMAND test_sweden)
