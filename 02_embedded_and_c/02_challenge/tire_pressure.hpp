#pragma once
#include "pressure_sensor.hpp"
#include "units.hpp"

class TirePressure : public PressureSensor {
 public:
  TirePressure();
  TirePressure(double initial_pressure);
  pressure::psi read(void) const override;
};
