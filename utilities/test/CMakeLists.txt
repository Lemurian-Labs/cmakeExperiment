# Integration test: links the final .so, not the static subsystem libs.
# This is a way to support tests where only the final results syntax varies. If the difference is larger
# it is probably better to create separate tests for each language/architecture.
# Shared fixture in test_utilities.cpp; expected values in ${LANGUAGE_GROUP}/greetings_data.cpp.
# Gate on file existence so a latin build silently skips until data is provided.
if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/${LANGUAGE_GROUP}/greetings_data.cpp)
    add_executable(test_utilities
        test_utilities.cpp
        ${LANGUAGE_GROUP}/greetings_data.cpp
    )
    # Note that GTest::gtest_main could be captued as a library test_deps, but since it would
    # only capture one dependency and the test is already gated on BUILD_TESTING, it's not worth the indirection here.
    target_link_libraries(test_utilities PRIVATE scandinavia GTest::gtest_main)
    add_test(NAME utilities COMMAND test_utilities)
endif()
