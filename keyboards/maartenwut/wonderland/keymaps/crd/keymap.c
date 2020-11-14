#include QMK_KEYBOARD_H
#include "crd.h"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT_wrapper(
  KC_ESC, __________________3x6_QWERTY_L0_____________________, _____________3x5_NUM_NAV_R1________________, KC_MINS, KC_EQL,  KC_BSLS,  KC_GRV, \
 KC_PGUP, __________________3x6_QWERTY_L1_____________________, _____________3x5_QWERTY_R1_________________, KC_LBRC, KC_RBRC, KC_BSPC, \
 KC_PGDN, __________________3x6_QWERTY_L2_____________________, _____________3x5_QWERTY_R2_________________, KC_QUOT,          KC_ENT, \
          __________________3x6_QWERTY_L3_____________________, KC_B, _____________3x5_QWERTY_R3_________________, KC_RSFT, MO(1), \
          ______3_THUMB_DEF_L______, KC_LGUI,     ______3_THUMB_DEF_R______ \
   ),
[1] = LAYOUT_wrapper(
 RGB_TOG, VLK_TOG,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12, XXXXXXX, RESET, \
 RGB_MOD, __________________3x6_NUM_NAV_L1____________________, __________________3x6_NUM_NAV_R1____________________, XXXXXXX, XXXXXXX, \
RGB_RMOD, __________________3x6_NUM_NAV_L2____________________, __________________3x6_NUM_NAV_R2____________________, XXXXXXX, \
          __________________3x6_NUM_NAV_L3____________________, __________________3x6_NUM_NAV_R3____________________,KC_RIGHT, XXXXXXX, \
          ______3_THUMB_LR1_L______, _______,          ______3_THUMB_LR1_R______ \
   )
};

#ifdef USE_LEDS_FOR_LAYERS
// example of how to use LEDs as layer indicators
static uint8_t top = 1;
static uint8_t middle = 0;
static uint8_t bottom = 0;

layer_state_t layer_state_set_user(layer_state_t state) {
    top = middle = bottom = 0;
    switch (get_highest_layer(state)) {
    case 0:
        top = 1;
        break;
    case 1:
        middle = 1;
        break;
    default: //  for any other layers, or the default layer
        break;
    }
  return state;
}

// override kb level function
bool led_update_user(led_t usb_led) {
    writePin(B1, !top);
    writePin(B2, !middle);
    writePin(B3, !bottom);
    return false; // we are using LEDs for something else override kb
}
#endif
