#pragma once
#include "led_controller.h"

class LedController {
 public:
  LedController();
  void turnOff(void);
  void turnOn(void);
  bool getState(void);
};
