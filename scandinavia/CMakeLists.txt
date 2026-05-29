# SHARED: this is the final delivered artifact (.so/.dylib) - the assembled
# public face of the library that utilities and external consumers link against
add_library(scandinavia SHARED)

# PUBLIC: utilities need scandinavia.hpp to call the top-level API, so the
# include path must propagate when they link scandinavia
target_include_directories(scandinavia PUBLIC include)

add_subdirectory(src)
