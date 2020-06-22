#include QMK_KEYBOARD_H
#include "g/keymap_combo.h"

#define KC_LSHZ SFT_T(KC_Z)
#define KC_CTSC RCTL_T(KC_SCLN)
#define KC_SHSL RSFT_T(KC_SLSH)
#define KC_SPM1 LT(1, KC_SPC)
#define KC_BSM1 LT(1, KC_BSPC)
#define KC_BSM2 LT(2, KC_BSPC)
#define KC_LCEN CTL_T(KC_ENT)
#define KC_ALGV ALGR_T(KC_GRV)
#define KC_CLGV CTL_T(KC_GRV)
#define KC_VD KC__VOLDOWN
#define KC_VU KC__VOLUP
#define KC_MU KC__MUTE

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    XXXXXXX,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  XXXXXXX,
    XXXXXXX,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L, KC_CTSC, XXXXXXX,
    XXXXXXX, KC_LSHZ,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SHSL, XXXXXXX,
    /*                      */ KC_LGUI, KC_BSM1, KC_LCEN,  KC_TAB, KC_SPM1, KC_ALGR),
  [1] = LAYOUT(
    XXXXXXX,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, XXXXXXX,
    XXXXXXX,  KC_ESC, KC_HOME, KC_PGDN, KC_PGUP,  KC_END, KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, KC_QUOT, XXXXXXX,
    XXXXXXX, KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LBRC, KC_RBRC, KC_BSLS, XXXXXXX,
    /*                      */ KC_LCTL, KC_BSM2, KC_TAB,  KC_ENT,  KC_BSM2, _______),
  [2] = LAYOUT(
    XXXXXXX,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6, XXXXXXX, XXXXXXX, KC_MINS,  KC_EQL, XXXXXXX,
    XXXXXXX,   KC_VD,   KC_VU,   KC_MU, KC_BTN1, KC_BTN2, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_BTN3, XXXXXXX,
    XXXXXXX,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11, KC_F12, KC_WH_D, KC_WH_U, XXXXXXX, XXXXXXX, XXXXXXX,
    /*                      */ _______, _______, _______, _______, _______, _______)
};
