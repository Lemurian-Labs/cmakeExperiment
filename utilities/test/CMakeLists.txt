# Integration test: links the final .so, not the static subsystem libs.
# Shared fixture in test_utilities.cpp; expected values in ${LANGUAGE_GROUP}/greetings_data.cpp.
# Gate on file existence so a latin build silently skips until data is provided.
if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/${LANGUAGE_GROUP}/greetings_data.cpp)
    add_executable(test_utilities
        test_utilities.cpp
        ${LANGUAGE_GROUP}/greetings_data.cpp
    )
    target_link_libraries(test_utilities PRIVATE scandinavia GTest::gtest_main)
    add_test(NAME utilities COMMAND test_utilities)
endif()
