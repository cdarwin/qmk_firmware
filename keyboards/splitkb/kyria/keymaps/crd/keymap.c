#include QMK_KEYBOARD_H

#include "crd.h"

// clang-format off
#define LAYOUT_wrapper(...)            LAYOUT(__VA_ARGS__)
#define LAYOUT_kyria_base( \
    K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, \
    K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, \
    K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, \
    K31, K32, K33, K34, K35, K36 \
  ) \
  LAYOUT_wrapper( \
       KC_TAB, K01, K02, K03, K04, K05,                                           K06, K07, K08, K09, K0A, KC_BSPC, \
      KC_GESC, K11, K12, K13, K14, K15,                                           K16, K17, K18, K19, K1A,  KC_ENT, \
      KC_LSFT, K21, K22, K23, K24, K25, XXXXXXX, XXXXXXX, /* */ XXXXXXX, XXXXXXX, K26, K27, K28, K29, K2A, KC_RSFT, \
                         KC_MPLY, XXXXXXX, K31, K32, K33, /* */ K34, K35, K36, XXXXXXX, KC_MUTE \
    )
/* Re-pass though to allow templates to be used */
#define LAYOUT_base_wrapper(...)       LAYOUT_kyria_base(__VA_ARGS__)

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
/*                     */ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX),
};

#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_MNXT);
        } else {
            tap_code(KC_MPRV);
        }
    } else if (index == 1) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
    return true;
}
#endif
