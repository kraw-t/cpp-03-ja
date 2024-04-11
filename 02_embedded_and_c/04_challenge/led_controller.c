#include "led_controller.h"

static bool led_state = false;

void led_init(void) {
    led_state = false;
}

void led_on(void) {
    led_state = true;
}

void led_off(void) {
    led_state = false;
}

bool led_get_state(void) {
    return led_state;
}
