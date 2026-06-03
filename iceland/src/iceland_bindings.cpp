#include <pybind11/pybind11.h>
#include "scandinavia.hpp"

namespace py = pybind11;

PYBIND11_MODULE(iceland_bindings, m)
{
    m.def("greet_sweden", &scandinavia_greet_sweden);
    m.def("greet_denmark", &scandinavia_greet_denmark);
}
