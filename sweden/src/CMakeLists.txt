# city_names.cpp is a separate translation unit because city_name() is called
# from sweden.cpp across TU boundaries - static linkage is not an option here
target_sources(sweden PRIVATE sweden.cpp city_names.cpp)

# PRIVATE: CMAKE_CURRENT_SOURCE_DIR resolves to this src/ directory, giving
# sweden.cpp access to city_names.hpp without exposing it to consumers.
# Using the absolute variable rather than a relative path because this
# CMakeLists.txt is already inside src/ - a bare "src" would resolve wrongly
target_include_directories(sweden PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

# PRIVATE: brings in common's and localization's PUBLIC include dirs at compile
# time (language.hpp, lang.hpp). common.a itself is not linked here — that
# happens at the scandinavia.so level where all static libs are assembled.
target_link_libraries(sweden PRIVATE common)
