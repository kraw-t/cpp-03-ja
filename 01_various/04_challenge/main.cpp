#include <iostream>
#include "unique_int_ptr.hpp"
#include "unique_ptr.hpp"

int main() {
  unique_int_ptr my_int(3);
  std::cout << *my_int << std::endl;


  *my_int = 5;
  std::cout << *my_int << std::endl;
  std::cout << my_int.get() << std::endl;
  std::cout << my_int.release() << std::endl;
  std::cout << my_int.get() << std::endl;

  unique_ptr<int> my_int2(8);
  std::cout << *my_int2 << std::endl;
  *my_int2 = 99;
  std::cout << *my_int2 << std::endl;
  std::cout << my_int2.get() << std::endl;
  std::cout << my_int2.release() << std::endl;
  std::cout << my_int2.get() << std::endl;

  unique_ptr<double> my_dbl(3.14);
  std::cout << *my_dbl << std::endl;
  *my_dbl = 2.74;
  std::cout << *my_dbl << std::endl;
  std::cout << my_dbl.get() << std::endl;
  std::cout << my_dbl.release() << std::endl;
  std::cout << my_dbl.get() << std::endl;

  return 0;
}
