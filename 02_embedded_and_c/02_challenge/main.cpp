#include <iostream>
#include "tire_pressure.hpp"
#include "cpu_temperature.hpp"
#include "cabin_temperature.hpp"
#include "units.hpp"

int main() {
  TirePressure tire_press = TirePressure(30.0);
  std::cout << tire_press.read().value << std::endl;

  CPUTemperature cpu_temp = CPUTemperature(80.0);
  std::cout << cpu_temp.read().value << std::endl;

  CabinTemperature cabin_temp = CabinTemperature(20.0);
  std::cout << cabin_temp.read().value << std::endl;

  return 0;
}
