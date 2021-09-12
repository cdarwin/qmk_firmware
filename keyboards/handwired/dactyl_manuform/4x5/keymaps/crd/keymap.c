#include QMK_KEYBOARD_H

#include "crd.h"

#define XXX KC_NO

// clang-format off
#define LAYOUT_base(\
K00, K01, K02, K03, K04,                         K05, K06, K07, K08, K09,\
K10, K11, K12, K13, K14,                         K15, K16, K17, K18, K19,\
K20, K21, K22, K23, K24,                         K25, K26, K27, K28, K29,\
          K32, K33,                                   K36, K37          \
)\
LAYOUT( \
K00, K01, K02, K03, K04,                         K05, K06, K07, K08, K09,\
K10, K11, K12, K13, K14,                         K15, K16, K17, K18, K19,\
K20, K21, K22, K23, K24,                         K25, K26, K27, K28, K29,\
     XXX, XXX,                                             XXX, XXX, \
               K32, K33,                         K36, K37, \
                         XXX, XXX,     XXX, XXX, \
                         XXX, XXX,     XXX, XXX                          \
)

#define LAYOUT_wrapper(...)       LAYOUT_base(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_wrapper(
        _____________3x5_QWERTY_L1_________________, _____________3x5_QWERTY_R1_________________,
        _____________3x5_QWERTY_L2_________________, _____________3x5_QWERTY_R2_________________,
        _____________3x5_QWERTY_L3_________________, _____________3x5_QWERTY_R3_________________,
/*                              */ KC_TAM3, KC_BSM1, KC_SPM2, KC_ENM3),
    [1] = LAYOUT_wrapper(
        _____________3x5_____NAV_L1________________, _____________3x5_____NAV_R1________________,
        _____________3x5_____NAV_L2________________, _____________3x5_____NAV_R2________________,
        _____________3x5_____NAV_L3________________, _____________3x5_____NAV_R3________________,
/*                              */ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
    ),
    [2] = LAYOUT_wrapper(
        _____________3x5_____NUM_L1________________, _____________3x5_____NUM_R1________________,
        _____________3x5_____NUM_L2________________, _____________3x5_____NUM_R2________________,
        _____________3x5_____NUM_L3________________, _____________3x5_____NUM_R3________________,
/*                              */ XXXXXXX,    KC_0, XXXXXXX, XXXXXXX
    ),
    [3] = LAYOUT_wrapper(
        _____________3x5_____SYM_L1________________, _____________3x5_____SYM_R1________________,
        _____________3x5_____SYM_L2________________, _____________3x5_____SYM_R2________________,
        _____________3x5_____SYM_L3________________, _____________3x5_____SYM_R3________________,
/*                              */ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
    ),
};
