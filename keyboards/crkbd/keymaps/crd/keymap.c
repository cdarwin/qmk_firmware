#include QMK_KEYBOARD_H
#include "g/keymap_combo.h"
#include "crd.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_wrapper(
    __________________3x6_QWERTY_L1_____________________, __________________3x6_QWERTY_R1_____________________,
    __________________3x6_QWERTY_L2_____________________, __________________3x6_QWERTY_R2_____________________,
    __________________3x6_QWERTY_L3_____________________, __________________3x6_QWERTY_R3_____________________,
    /*                      */ ______3_THUMB_DEF_L______, ______3_THUMB_DEF_R______),
  [1] = LAYOUT_wrapper(
    __________________3x6_NUM_NAV_L1____________________, __________________3x6_NUM_NAV_R1____________________,
    __________________3x6_NUM_NAV_L2____________________, __________________3x6_NUM_NAV_R2____________________,
    __________________3x6_NUM_NAV_L3____________________, __________________3x6_NUM_NAV_R3____________________,
    /*                      */ ______3_THUMB_LR1_L______, ______3_THUMB_LR1_R______),
  [2] = LAYOUT_wrapper(
    _________________3x6_FN_VOL_MS_L1___________________, _________________3x6_FN_VOL_MS_R1___________________,
    _________________3x6_FN_VOL_MS_L2___________________, _________________3x6_FN_VOL_MS_R2___________________,
    _________________3x6_FN_VOL_MS_L3___________________, _________________3x6_FN_VOL_MS_R3___________________,
    /*                      */ ______3_THUMB_LR2_L______, ______3_THUMB_LR2_R______)
};

#ifdef OLED_DRIVER_ENABLE

extern uint8_t is_master;
const char *read_logo(void);

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (!is_master) {
        return OLED_ROTATION_180;
    }
    return rotation;
}


void oled_task_user(void) {
    oled_write(read_logo(), false);
}

#endif