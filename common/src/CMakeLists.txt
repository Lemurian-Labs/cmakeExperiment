target_sources(common PRIVATE language.cpp localization/${LANGUAGE_GROUP}/language.cpp)

# PRIVATE: lang_lookup.hpp is only needed to build common itself, not by consumers
target_include_directories(common PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/localization)

# FUTURE: if localization tables grow large enough to hurt incremental build times,
# localization can be extracted into its own static library. CMake will propagate
# it transparently to any final binary that links common — no other CMakeLists
# needs to change. As a further option the two archives can be merged into a single
# common.a (hiding localization entirely from consumers) at the cost of an extra
# ar pass on every build.
