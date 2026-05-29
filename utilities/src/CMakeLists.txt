# Links against the shared library, not the static subsystem libs directly -
# exercises the real public API boundary that external consumers would use
add_executable(hello_scandinavia hello_scandinavia.cpp)
target_link_libraries(hello_scandinavia PRIVATE scandinavia)
