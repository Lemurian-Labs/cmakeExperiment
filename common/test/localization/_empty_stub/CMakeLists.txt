add_executable(test_language test_language.cpp)
target_link_libraries(test_language PRIVATE common)
add_test(NAME language COMMAND test_language)
# _empty_stub asserts at runtime — abort is the expected outcome
set_tests_properties(language PROPERTIES WILL_FAIL TRUE)
