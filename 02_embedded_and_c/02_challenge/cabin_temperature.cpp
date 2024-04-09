#include "cabin_temperature.hpp"
#include "units.hpp"

CabinTemperature::CabinTemperature() : TemperatureSensor() {}
CabinTemperature::CabinTemperature(double initial_temp) : TemperatureSensor(initial_temp) {}

temperature::kelvin CabinTemperature::read(void) const {
  return this->temp;
}
