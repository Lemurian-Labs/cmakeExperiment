# target_sources appends to the target declared in the parent CMakeLists.txt,
# keeping the source list close to the sources themselves
target_sources(common PRIVATE language.cpp language_native.cpp)
