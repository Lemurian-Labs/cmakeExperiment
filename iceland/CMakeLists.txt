# Ask the active Python environment where pybind11's CMake config files are
execute_process(
    COMMAND python3 -c "import pybind11; print(pybind11.get_cmake_dir())"
    OUTPUT_VARIABLE pybind11_DIR         # CMake's find_package searches this dir
    OUTPUT_STRIP_TRAILING_WHITESPACE     # remove trailing newline from python output
)
# Load pybind11 targets and make pybind11_add_module() available
find_package(pybind11 CONFIG REQUIRED)  # CONFIG = look for pybind11Config.cmake, not a Find module

add_subdirectory(src)
