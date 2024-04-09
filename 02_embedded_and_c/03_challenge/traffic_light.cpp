#include "traffic_light.hpp"

double trafficLightDuration(TrafficLightState traffic_light) {
  double elapsed_time {0};

  switch (traffic_light)
  {
  case TrafficLightState::red:
    elapsed_time = 1.0;
    break;

  case TrafficLightState::yellow:
    elapsed_time = 2.0;
    break;

  default:  // TrafficLightState::green
    elapsed_time = 3.0;
    break;
  }

  return elapsed_time;
}
