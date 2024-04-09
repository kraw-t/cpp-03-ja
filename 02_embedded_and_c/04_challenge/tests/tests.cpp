#include "tests.hpp"

#include <gtest/gtest.h>

#include "led_controller.hpp"

TEST(LedControllerTests, TurnOn) {
    LedController led;
    led.turnOn();
    EXPECT_TRUE(led.getState());
}

TEST(LedControllerTests, TurnOff) {
    LedController led;
    led.turnOn();
    led.turnOff();
    EXPECT_FALSE(led.getState());
}
