# city_names.cpp is a separate translation unit because city_name() is called
# from denmark.cpp across TU boundaries - static linkage is not an option here
target_sources(denmark PRIVATE denmark.cpp city_names.cpp)

# PRIVATE: CMAKE_CURRENT_SOURCE_DIR resolves to this src/ directory, giving
# denmark.cpp access to city_names.hpp without exposing it to consumers.
# Using the absolute variable rather than a relative path because this
# CMakeLists.txt is already inside src/ - a bare "src" would resolve wrongly
target_include_directories(denmark PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

# Only the include path is needed here - language.hpp must be visible at compile
# time but libcommon.a is not linked until scandinavia.so is assembled.
# Using the raw path avoids a build-order dependency on the common target,
# allowing denmark and common to compile in parallel
target_include_directories(denmark PRIVATE ${CMAKE_SOURCE_DIR}/common/include)

# Provides lang.hpp (Lang enum) for the selected localization group,
# mirroring the raw-path pattern used above to preserve parallel build ordering
target_include_directories(denmark PRIVATE ${CMAKE_SOURCE_DIR}/common/src/localization/${LANGUAGE_GROUP})
