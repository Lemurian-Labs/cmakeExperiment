add_executable(test_language test_language.cpp)
target_link_libraries(test_language PRIVATE common GTest::gtest_main)
add_test(NAME language COMMAND test_language)
