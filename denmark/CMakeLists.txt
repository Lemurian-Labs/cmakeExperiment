add_library(denmark STATIC src/denmark.cpp)
target_include_directories(denmark PUBLIC include)

add_executable(test_denmark test/test_denmark.cpp)
target_link_libraries(test_denmark PRIVATE denmark)
