#include QMK_KEYBOARD_H

#include "crd.h"

#define LAYOUT_wrapper(...)       LAYOUT_split_3x6_3(__VA_ARGS__)
#define LAYOUT_tbkmini_base( \
	k01, k02, k03, k04, k05,			k45, k44, k43, k42, k41, \
	k11, k12, k13, k14, k15,			k55, k54, k53, k52, k51, \
	k21, k22, k23, k24, k25,			k65, k64, k63, k62, k61, \
		      k33, k34, k31,	        k71, k74, k73  \
    ) \
    LAYOUT_wrapper( \
	 KC_TAB, k01, k02, k03, k04, k05,			k45, k44, k43, k42, k41, KC_BSPC, \
	KC_GESC, k11, k12, k13, k14, k15,			k55, k54, k53, k52, k51,  KC_ENT, \
	KC_LSFT, k21, k22, k23, k24, k25,			k65, k64, k63, k62, k61, KC_RSFT, \
		               k33, k34, k31,	        k71, k74, k73  \
    )
#define LAYOUT_base_wrapper(...)       LAYOUT_tbkmini_base(__VA_ARGS__)

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
