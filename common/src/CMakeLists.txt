# Build-time tool: reads translations.txt and writes language_table.gen.inc
add_executable(gen_table gen_table.cpp)

add_custom_command(
    OUTPUT  ${CMAKE_CURRENT_BINARY_DIR}/language_table.gen.inc
    COMMAND gen_table
            ${CMAKE_CURRENT_SOURCE_DIR}/translations.txt
            ${CMAKE_CURRENT_BINARY_DIR}/language_table.gen.inc
    DEPENDS gen_table ${CMAKE_CURRENT_SOURCE_DIR}/translations.txt
    COMMENT "Generating language_table.gen.inc from translations.txt"
)

# language.cpp #includes the generated file - record the dependency explicitly
# so CMake compiles it only after gen_table has run
set_source_files_properties(
    language.cpp
    PROPERTIES OBJECT_DEPENDS ${CMAKE_CURRENT_BINARY_DIR}/language_table.gen.inc
)

# target_sources appends to the target declared in the parent CMakeLists.txt,
# keeping the source list close to the sources themselves
target_sources(common PRIVATE language.cpp)

# Expose the binary dir so #include "language_table.gen.inc" resolves inside language.cpp
target_include_directories(common PRIVATE ${CMAKE_CURRENT_BINARY_DIR})
