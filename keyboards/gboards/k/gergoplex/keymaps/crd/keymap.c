#include QMK_KEYBOARD_H
#include "g/keymap_combo.h"

#define KC_CTSL RCTL_T(KC_SCLN)
#define KC_LSHZ SFT_T(KC_Z)
#define KC_SHSL RSFT_T(KC_SLSH)
#define KC_SPM1 LT(1, KC_SPC)
#define KC_BSM1 LT(1, KC_BSPC)
#define KC_GUEN GUI_T(KC_ENT)
#define KC_ALTA ALGR_T(KC_TAB)
#define KC_BSM2 LT(2, KC_BSPC)
#define KC_CLGV CTL_T(KC_GRV)
#define KC_CLBS CTL_T(KC_BSLS)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT_gergoplex(
       KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,     KC_P,
       KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,  KC_CTSL,
    KC_LSHZ,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M, KC_COMM,  KC_DOT,  KC_SHSL,
    /*             */ KC_CLBS, KC_GUEN, KC_BSM1, KC_SPM1, KC_ALTA, KC_CLGV),
[1] = LAYOUT_gergoplex(
       KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
     KC_ESC, KC_HOME, KC_PGDN, KC_PGUP,  KC_END, KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, KC_QUOT,
    KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LBRC, KC_RBRC, KC_BSLS,
    /*             */ _______, _______, KC_BSM2, KC_BSM2, _______, _______),
[2] = LAYOUT_gergoplex(
      KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6, XXXXXXX, XXXXXXX, KC_MINS,  KC_EQL,
    KC_VOLD, KC_VOLU, KC_MUTE, KC_BTN1, KC_BTN2, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_BTN3,
      KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12, KC_WH_D, KC_WH_U, XXXXXXX,  KC_GRV,
    /*             */ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX)
};

