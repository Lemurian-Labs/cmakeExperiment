target_sources(common PRIVATE language.cpp)

# PRIVATE: lang_lookup.hpp is the internal interface to the localization impl,
# not part of common's public API
target_include_directories(common PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(localization)
