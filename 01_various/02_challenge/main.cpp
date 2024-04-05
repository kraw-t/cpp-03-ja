// コードを入力してください
#include <iostream>
#include "templates.hpp"

int main() {
  std::cout << sum(1, 2, 3, 4, 5) << std::endl;
  std::cout << sum(1, 2, 3) << std::endl;
  std::cout << sum(-1, 2, 3, 4) << std::endl;
  std::cout << sum(0, 1, 2, -3, 4, -5) << std::endl;

  return 0;
}
