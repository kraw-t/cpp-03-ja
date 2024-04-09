#include "cpu_temperature.hpp"
#include "units.hpp"

CPUTemperature::CPUTemperature() : TemperatureSensor() {}
CPUTemperature::CPUTemperature(double initial_temp) : TemperatureSensor(initial_temp) {}

temperature::kelvin CPUTemperature::read(void) const {
  return this->temp;
}
