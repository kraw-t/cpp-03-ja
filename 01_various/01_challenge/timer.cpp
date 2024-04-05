#include <iostream>
#include "timer.hpp"

Timer::Timer() : generated_time(std::chrono::high_resolution_clock::now()) {}

Timer::~Timer() {
  std::chrono::high_resolution_clock::time_point now = std::chrono::high_resolution_clock::now();
  double elapsed_time = std::chrono::duration_cast<std::chrono::milliseconds>(now - this->generated_time).count();
  std::cout << elapsed_time << std::endl;
}
