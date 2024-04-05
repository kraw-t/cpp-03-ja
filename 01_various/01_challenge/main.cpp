#include <thread>
#include <chrono>
#include "timer.hpp"

int main() {
  Timer* p_timer1 = new Timer();
  Timer* p_timer2 = new Timer();

  delete p_timer1;

  std::this_thread::sleep_for(std::chrono::milliseconds(10));
  delete p_timer2;

  return 0;
}
