# city_names.cpp is a separate translation unit because city_name() is called
# from denmark.cpp across TU boundaries - static linkage is not an option here
target_sources(denmark PRIVATE denmark.cpp city_names.cpp)

# PRIVATE: CMAKE_CURRENT_SOURCE_DIR resolves to this src/ directory, giving
# denmark.cpp access to city_names.hpp without exposing it to consumers.
# Using the absolute variable rather than a relative path because this
# CMakeLists.txt is already inside src/ - a bare "src" would resolve wrongly
target_include_directories(denmark PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

# PRIVATE: gives the compiler -Icommon/include via common's PUBLIC include path
# so language.hpp is found at compile time. Marked PRIVATE because callers of
# denmark have no reason to know about common. The unresolved Language::instance
# symbol in denmark.o is carried forward and resolved when scandinavia.so links
target_link_libraries(denmark PRIVATE common)
