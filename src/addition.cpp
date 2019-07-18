#include <pybind11/stl.h>

#include "addition.hpp"

int sum_arrays(std::vector<int> lst) {
  int sum = 0;
  for (auto& n: lst) {
    sum += n;
  }
  return sum;
}

