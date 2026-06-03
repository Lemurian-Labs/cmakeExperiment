# SHARED: this is the final delivered artifact (.so) - the assembled
# public face of the library that utilities and external consumers link against
add_library(scandinavia SHARED)

# PUBLIC: propagates include/ to dependent users at compile time so they
# find the interface headers without specifying the path themselves.
# Unlike static libs which are absorbed into this .so, users of scandinavia
# must also explicitly link it via target_link_libraries - the .so remains
# a separate runtime dependency that is not propagated automatically
target_include_directories(scandinavia PUBLIC include)

add_subdirectory(src)
