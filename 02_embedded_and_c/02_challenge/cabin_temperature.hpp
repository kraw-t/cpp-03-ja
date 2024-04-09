#pragma once
#include "temperature_sensor.hpp"
#include "units.hpp"

class CabinTemperature : public TemperatureSensor {
 public:
  CabinTemperature();
  CabinTemperature(double initial_temp);
  temperature::kelvin read(void) const override;
};
