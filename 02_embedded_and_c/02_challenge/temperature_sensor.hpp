#pragma once
#include "units.hpp"

class TemperatureSensor {
 public:
  TemperatureSensor() : temp(temperature::kelvin(0)) {}
  TemperatureSensor(double initial_temp) : temp(temperature::kelvin(initial_temp)) {}
  virtual temperature::kelvin read(void) const = 0;

 protected:
  temperature::kelvin temp;
};
