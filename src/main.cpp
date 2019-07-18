#include <pybind11/pybind11.h>

#include "addition.hpp"
#include "production.hpp"

PYBIND11_MODULE(pybind11_example, m) {
  m.doc() = "Example pybind11"; // optional module docstring
  m.def("sum_arrays", &sum_arrays);
  m.def("product_arrays", &product_arrays);
}

