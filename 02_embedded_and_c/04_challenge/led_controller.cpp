#include "led_controller.hpp"
#include "led_controller.h"

LedController::LedController() {
  led_init();
}

void LedController::turnOff() {
  led_off();
}

void LedController::turnOn() {
  led_on();
}

bool LedController::getState() {
  return led_get_state();
}
