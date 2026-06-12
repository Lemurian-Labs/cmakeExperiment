# Real group takes priority; _empty_stub is the fallback when no localization
# exists for LANGUAGE_GROUP yet. Both use the same target and test name —
# the path makes clear which is active.
if(IS_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/${LANGUAGE_GROUP})
    set(_test_group ${LANGUAGE_GROUP})
elseif(IS_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/_empty_stub)
    set(_test_group _empty_stub)
endif()

if(DEFINED _test_group)
    add_executable(test_language ${_test_group}/test_language.cpp)
    target_link_libraries(test_language PRIVATE common)
    add_test(NAME language COMMAND test_language)
    if(_test_group STREQUAL "_empty_stub")
        # _empty_stub asserts at runtime — abort is the expected outcome.
        # Requires assert enabled (Debug build, not Release).
        set_tests_properties(language PROPERTIES WILL_FAIL TRUE)
    endif()
endif()
