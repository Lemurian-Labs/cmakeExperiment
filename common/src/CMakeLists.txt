# target_sources appends to the target declared in the parent CMakeLists.txt,
# keeping the source list close to the sources themselves
target_sources(common PRIVATE language.cpp localization/${LANGUAGE_GROUP}/language.cpp)

# PRIVATE: lang_lookup.hpp is only needed to build common itself, not by consumers
target_include_directories(common PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/localization)
