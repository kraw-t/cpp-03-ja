#pragma once
#include "units.hpp"

class PressureSensor {
 public:
  PressureSensor() : press(pressure::psi(0)) {}
  PressureSensor(double initial_press) : press(pressure::psi(initial_press)) {}
  virtual pressure::psi read(void) const = 0;
  
 protected:
  pressure::psi press;
};
