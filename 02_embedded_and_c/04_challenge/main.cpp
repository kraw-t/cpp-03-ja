#include <iostream>
#include "led_controller.h"
#include "led_controller.hpp"

int main() {
  std::cout << "task 2" << std::endl;
  led_init();
  std::cout << std::boolalpha << led_get_state() << std::endl;

  led_on();
  std::cout << std::boolalpha << led_get_state() << std::endl;

  led_off();
  std::cout << std::boolalpha << led_get_state() << std::endl;

  led_on();
  std::cout << std::boolalpha << led_get_state() << std::endl;

  std::cout << "\ntask 3, 4" << std::endl;
  LedController led_controller;
  std::cout << std::boolalpha << led_controller.getState() << std::endl;

  led_controller.turnOn();
  std::cout << std::boolalpha << led_controller.getState() << std::endl;

  led_controller.turnOff();
  std::cout << std::boolalpha << led_controller.getState() << std::endl;

  led_controller.turnOn();
  std::cout << std::boolalpha << led_controller.getState() << std::endl;

  return 0;
}
