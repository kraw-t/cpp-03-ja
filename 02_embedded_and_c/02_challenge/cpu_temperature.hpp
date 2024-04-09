#pragma once
#include "temperature_sensor.hpp"
#include "units.hpp"

class CPUTemperature : public TemperatureSensor {
 public:
  CPUTemperature();
  CPUTemperature(double initial_temp);
  temperature::kelvin read(void) const override;
};
