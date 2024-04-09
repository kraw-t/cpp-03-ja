#include <iostream>
#include "clamp.hpp"
#include "constexpr.hpp"

int main() {
  std::cout << clamp(1, 2, 3) << std::endl;
  std::cout << clamp(2, 1, 3) << std::endl;
  std::cout << clamp(4, 2, 3) << std::endl;
  std::cout << clamp(1.1, 2.1, 3.1) << std::endl;
  std::cout << clamp(2.5f, 1.3f, 3.2f) << std::endl;

  std::cout << calculateCircumference(3.0) << std::endl;
  std::cout << calculateCircumference(10.0) << std::endl;

  return 0;
}
