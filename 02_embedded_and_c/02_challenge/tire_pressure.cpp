#include "tire_pressure.hpp"
#include "units.hpp"

TirePressure::TirePressure() : PressureSensor() {}
TirePressure::TirePressure(double initial_press) : PressureSensor(initial_press) {}

pressure::psi TirePressure::read(void) const {
  return this->press;
}
