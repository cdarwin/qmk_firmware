#include QMK_KEYBOARD_H

#include "crd.h"

#define LAYOUT_wrapper(...)       LAYOUT_split_3x6_3(__VA_ARGS__)
#define LAYOUT_crkbd_base( \
  L01, L02, L03, L04, L05,           R00, R01, R02, R03, R04, \
  L11, L12, L13, L14, L15,           R10, R11, R12, R13, R14, \
  L21, L22, L23, L24, L25,           R20, R21, R22, R23, R24, \
                 L30, L31, L32, R30, R31, R32 \
  ) \
  LAYOUT_wrapper( \
   KC_TAB, L01, L02, L03, L04, L05,           R00, R01, R02, R03, R04, KC_BSPC, \
  KC_GESC, L11, L12, L13, L14, L15,           R10, R11, R12, R13, R14,  KC_ENT, \
  KC_LSFT, L21, L22, L23, L24, L25,           R20, R21, R22, R23, R24, KC_RSFT, \
                          L30, L31, L32, R30, R31, R32 \
  )
#define LAYOUT_base_wrapper(...)       LAYOUT_crkbd_base(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT_base_wrapper(
        _____________3x5_QWERTY_L1_________________, _____________3x5_QWERTY_R1_________________,
        _____________3x5_QWERTY_L2_________________, _____________3x5_QWERTY_R2_________________,
        _____________3x5_QWERTY_L3_________________, _____________3x5_QWERTY_R3_________________,
/*                     */ KC_TAM3, KC_BSM1, KC_TAM3, KC_ENM3, KC_SPM2, KC_ENM3),
[1] = LAYOUT_base_wrapper(
        _____________3x5_____NAV_L1________________, _____________3x5_____NAV_R1________________,
        _____________3x5_____NAV_L2________________, _____________3x5_____NAV_R2________________,
        _____________3x5_____NAV_L3________________, _____________3x5_____NAV_R3________________,
/*                     */ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX),
[2] = LAYOUT_base_wrapper(
        _____________3x5_____NUM_L1________________, _____________3x5_____NUM_R1________________,
        _____________3x5_____NUM_L2________________, _____________3x5_____NUM_R2________________,
        _____________3x5_____NUM_L3________________, _____________3x5_____NUM_R3________________,
/*                     */ XXXXXXX,    KC_0, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX),
[3] = LAYOUT_base_wrapper(
        _____________3x5_____SYM_L1________________, _____________3x5_____SYM_R1________________,
        _____________3x5_____SYM_L2________________, _____________3x5_____SYM_R2________________,
        _____________3x5_____SYM_L3________________, _____________3x5_____SYM_R3________________,
/*                     */ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX)
};
