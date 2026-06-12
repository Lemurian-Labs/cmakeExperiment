# Unit test for denmark in isolation - links the static lib directly, not
# through scandinavia.so, so it tests the subsystem without the wrapping layer.
# Also has access to symbols not exported by the .so (e.g. city_name)
if(IS_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/${LANGUAGE_GROUP})
    add_executable(test_denmark ${LANGUAGE_GROUP}/test_denmark.cpp)
    target_link_libraries(test_denmark PRIVATE denmark common)
    add_test(NAME denmark COMMAND test_denmark)
endif()
