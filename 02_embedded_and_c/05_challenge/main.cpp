#include <iostream>
#include <array>
#include "double_array.h"

int main() {
  std::array<int, 5> array = {1, 2, 3, 4, 5};

  double_array(array.data(), array.size());

  for (const int elm : array) {
    std::cout << elm << ", ";
  }
  std::cout << std::endl;

  return 0;
}