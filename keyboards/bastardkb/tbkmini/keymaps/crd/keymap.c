#include QMK_KEYBOARD_H

// Thumbs
#define KC_BSM1 LT(1, KC_BSPC)
#define KC_SPM2 LT(2, KC_SPC)
#define KC_TBM2 LT(3, KC_TAB)
#define KC_ENM2 LT(4, KC_ENT)

// Left-hand home row mods
#define CTL_A LCTL_T(KC_A)
#define ALT_S LALT_T(KC_S)
#define GUI_D LGUI_T(KC_D)
#define SFT_F LSFT_T(KC_F)
#define L2_V LT(2, KC_V)
#define L2_M LT(2, KC_M)

// Right-hand home row mods
#define SFT_J RSFT_T(KC_J)
#define GUI_K RGUI_T(KC_K)
#define ALT_L LALT_T(KC_L)
#define CTL_SCL RCTL_T(KC_SCLN)
#define CTL_QUT RCTL_T(KC_QUOT)

#define ZM_MUTE LSG(KC_A)
#define ZM_VMUT LSG(KC_V)
#define ZM_SHAR LSG(KC_S)
#define DC_PRV LSA(KC_UP)
#define DC_NXT LSA(KC_DOWN)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
         KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_BSPC,
        KC_GESC,   CTL_A,   ALT_S,   GUI_D,   SFT_F,    KC_G,    KC_H,   SFT_J,   GUI_K,   ALT_L, CTL_QUT,  KC_ENT,
        KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT,
/*                              */ KC_GESC, KC_BSM1, KC_TBM2, KC_ENM2, KC_SPM2, KC_LALT),
    [1] = LAYOUT_split_3x6_3(
        XXXXXXX,  KC_END, KC_PGUP, KC_PGDN, KC_HOME,  DC_PRV, ZM_MUTE, KC_HOME, KC_PGDN, KC_PGUP,  KC_END, XXXXXXX,
        XXXXXXX, KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, XXXXXXX, ZM_VMUT, KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, XXXXXXX,
        XXXXXXX, G(KC_Z), G(KC_X), G(KC_C), G(KC_V),  DC_NXT, ZM_SHAR, G(KC_V), G(KC_C), G(KC_X), G(KC_Z), XXXXXXX,
/*                              */ _______, XXXXXXX, _______, _______, KC_BSPC, _______),
    [2] = LAYOUT_split_3x6_3(
        XXXXXXX, KC_LBRC,    KC_7,    KC_8,    KC_9, KC_RBRC, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, KC_SCLN,    KC_4,    KC_5,    KC_6,  KC_EQL, XXXXXXX, KC_LSFT, KC_LGUI, KC_LALT, KC_LCTL, XXXXXXX,
        XXXXXXX,  KC_GRV,    KC_1,    KC_2,    KC_3, KC_BSLS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
/*                              */  KC_DOT,    KC_0, KC_MINS, XXXXXXX, XXXXXXX, XXXXXXX)
    [3] = LAYOUT_split_3x6_3(
        _______,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, _______,
        _______, KC_GESC, KC_HOME, KC_PGDN, KC_PGUP,  KC_END, KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, KC_QUOT, _______,
        _______, KC_LSFT,  KC_TAB,  KC_GRV, KC_MINS,  KC_TAB,  KC_ENT,  KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS, _______,
/*                              */ _______, KC_BSPC, _______, _______, KC_BSPC, _______),
    [4] = LAYOUT_split_3x6_3(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BRIU, KC_VOLU, XXXXXXX, XXXXXXX, XXXXXXX,   RESET, XXXXXXX,
        XXXXXXX,   CMD_A,  DC_PRV,  DC_NXT, XXXXXXX, XXXXXXX, KC_MUTE, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, XXXXXXX,
        XXXXXXX,   CMD_Z,   CMD_X,   CMD_C,   CMD_V, KC_BRID, KC_VOLD, ZM_MUTE, ZM_VMUT, ZM_SHAR, ZM_WMIN, XXXXXXX,
/*                              */ XXXXXXX, KC_BSPC, XXXXXXX, XXXXXXX, KC_BSPC, XXXXXXX)
    [5] = LAYOUT_split_3x6_3(
        _______,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, _______,
        _______, KC_GESC, KC_HOME, KC_PGDN, KC_PGUP,  KC_END, KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, KC_QUOT, _______,
        _______, KC_LSFT,  KC_TAB,  KC_GRV, KC_MINS,  KC_TAB,  KC_ENT,  KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS, _______,
/*                              */ _______, KC_BSPC, _______, _______, KC_BSPC, _______),
    [6] = LAYOUT_split_3x6_3(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BRIU, KC_VOLU, XXXXXXX, XXXXXXX, XXXXXXX,   RESET, XXXXXXX,
        XXXXXXX,   CMD_A,  DC_PRV,  DC_NXT, XXXXXXX, XXXXXXX, KC_MUTE, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, XXXXXXX,
        XXXXXXX,   CMD_Z,   CMD_X,   CMD_C,   CMD_V, KC_BRID, KC_VOLD, ZM_MUTE, ZM_VMUT, ZM_SHAR, ZM_WMIN, XXXXXXX,
/*                              */ XXXXXXX, KC_BSPC, XXXXXXX, XXXXXXX, KC_BSPC, XXXXXXX)
};
