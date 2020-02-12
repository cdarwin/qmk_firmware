/* Copyright 2018 Holten Campbell
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H
#include "crd.h"

#define BLINK_DURATION 512
#define CAPS_LED_PIN B1
#define NUM_LED_PIN B2
#define SCROLL_LED_PIN B3

uint8_t CAPS;
uint16_t BLINK_TIMER = 0;
uint8_t CAPS_LED_STATE = 0;

// Init togg_indicator so the compiler doesn't complain when I declare it last.
static void togg_indicator(uint8_t *state, uint8_t pin);

#define KC_CTES CTL_T(KC_ESC)
#define KC_SPM1 LT(1, KC_SPC)
#define KC_BSM2 LT(2, KC_BSPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT_wrapper(
    __________________3x6_QWERTY_L1_____________________, __________________3x6_QWERTY_R1_____________________, KC_RBRC,
    __________________3x6_QWERTY_L2_____________________, __________________3x6_QWERTY_R2_____________________,
    __________________3x6_QWERTY_L3_____________________, XXXXXXX, __________________3x6_QWERTY_R3_____________________,
/*                 */ XXXXXXX, ______3_THUMB_DEF_L______, ______3_THUMB_DEF_R______, XXXXXXX),
[1] = LAYOUT_wrapper(
    __________________3x6_NUM_NAV_L1____________________, __________________3x6_NUM_NAV_R1____________________, RESET,
    __________________3x6_NUM_NAV_L2____________________, __________________3x6_NUM_NAV_R2____________________,
    __________________3x6_NUM_NAV_L3____________________, XXXXXXX, __________________3x6_NUM_NAV_R3____________________,
/*                 */ XXXXXXX, ______3_THUMB_LR1_L______, ______3_THUMB_LR1_R______, XXXXXXX),
};

void matrix_init_user(void) {
  // set CapsLock LED to output and low
  setPinOutput(CAPS_LED_PIN);
  writePinLow(CAPS_LED_PIN);
  // set NumLock LED to output and low
  setPinOutput(NUM_LED_PIN);
  writePinLow(NUM_LED_PIN);
  // set ScrollLock LED to output and low
  setPinOutput(SCROLL_LED_PIN);
  writePinLow(SCROLL_LED_PIN);
}

void matrix_scan_user(void) {
    if (CAPS == 1) {
        // Blink the first led when capslock is active
        if (BLINK_TIMER >= BLINK_DURATION) {
            togg_indicator(&CAPS_LED_STATE, CAPS_LED_PIN);
            BLINK_TIMER = 0;
        }
        BLINK_TIMER++;
    }
}

//function for layer indicator LED
layer_state_t layer_state_set_user(layer_state_t state) {
    if (layer_state_cmp(state, 1)) {
        writePinHigh(CAPS_LED_PIN);
    } else {
        writePinLow(CAPS_LED_PIN);
    }
    if (layer_state_cmp(state, 2)) {
        writePinHigh(NUM_LED_PIN);
    } else {
        writePinLow(NUM_LED_PIN);
    }
    if (layer_state_cmp(state, 3)) {
        writePinHigh(SCROLL_LED_PIN);
    } else {
        writePinLow(SCROLL_LED_PIN);
    }
    return state;
}

void led_set_user(uint8_t usb_led) {
    if (IS_LED_ON(usb_led, USB_LED_CAPS_LOCK)) {
        CAPS = 1;
    }
    else {
        CAPS = 0;
    }
}

void togg_indicator(uint8_t *state, uint8_t pin) {
    // Toggles a pin based on the current state
    if (*state == 0){
        *state = 1;
        writePinHigh(pin);
    }
    else if (*state == 1){
        *state = 0;
        writePinLow(pin);
    }
}
