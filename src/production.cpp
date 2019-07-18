#include <pybind11/stl.h>

#include "production.hpp"

int product_arrays(std::vector<int> lst) {
  int sum = 1;
  for (auto& n: lst) {
    sum *= n;
  }
  return sum;
}

