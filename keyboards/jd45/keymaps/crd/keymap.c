#include QMK_KEYBOARD_H
#include "crd.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_wrapper(
    __________________3x6_QWERTY_L1_____________________, __________________3x6_QWERTY_R1_____________________, KC_MUTE,
    __________________3x6_QWERTY_L2_____________________, __________________3x6_QWERTY_R2_____________________,
    __________________3x6_QWERTY_L3_____________________, __________________3x6_QWERTY_R3_____________________,
    /*    */ XXXXXXX, XXXXXXX, ______3_THUMB_DEF_L______, ______3_THUMB_DEF_R______, XXXXXXX, XXXXXXX
  ),
  [1] = LAYOUT_wrapper(
    __________________3x6_NUM_NAV_L1____________________, __________________3x6_NUM_NAV_R1____________________, RESET,
    __________________3x6_NUM_NAV_L2____________________, __________________3x6_NUM_NAV_R2____________________,
    __________________3x6_NUM_NAV_L3____________________, __________________3x6_NUM_NAV_R3____________________,
    /*    */ XXXXXXX, XXXXXXX, ______3_THUMB_LR1_L______, ______3_THUMB_LR1_R______, XXXXXXX, XXXXXXX
),
};

#ifdef ENCODER_ENABLE
void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* Bottom Left Encoder */
        if (clockwise) {
            tap_code(KC_PGDN);
        } else {
            tap_code(KC_PGUP);
        }
    } else if (index == 1) { /* Bottom Right Encoder */
        if (clockwise) {
            tap_code(KC_DOWN);
        } else {
            tap_code(KC_UP);
        }
    } else if (index == 2) { /* Top Right Encoder */
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
}
#endif