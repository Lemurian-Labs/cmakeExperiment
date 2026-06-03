# Integration test: links the final .so, not the static subsystem libs.
# This validates the assembled ABI - the same path a real consumer would take.
# Contrast with test_sweden/test_denmark which test subsystems in isolation
add_executable(test_utilities test_utilities.cpp)
target_link_libraries(test_utilities PRIVATE scandinavia)
add_test(NAME utilities COMMAND test_utilities)
