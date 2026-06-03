target_sources(scandinavia PRIVATE scandinavia.cpp)

# PRIVATE sweden denmark common: sweden/include and denmark/include propagate
# automatically to scandinavia's compile step via the PUBLIC declarations in
# those targets - no need to list them explicitly here.
# This is where the actual symbol resolution happens: libsweden.a, libdenmark.a
# and libcommon.a are all linked into this shared library, resolving the
# Language::instance symbols left dangling in the static libs.
# common is listed explicitly here because sweden/denmark no longer link it -
# they only take its include path for compilation
target_link_libraries(scandinavia PRIVATE sweden denmark common)
