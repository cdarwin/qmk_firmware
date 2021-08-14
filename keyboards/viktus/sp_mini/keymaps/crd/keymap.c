#include QMK_KEYBOARD_H

// Thumbs
#define KC_SPM1 LT(1, KC_SPC)
#define KC_BSM1 LT(1, KC_BSPC)

// Left-hand home row mods
#define CTL_A LCTL_T(KC_A)
#define ALT_S LALT_T(KC_S)
#define GUI_D LGUI_T(KC_D)
#define SFT_F LSFT_T(KC_F)
#define L2_V LT(2, KC_V)
#define L2_M LT(2, KC_M)

#define CAGS(k1,k2,k3,k4,k5) CTL_T(k1),ALT_T(k2),GUI_T(k3),SFT_T(k4),k5
#define HRML(...) CAGS(__VA_ARGS__)
#define SGAC(k0,k1,k2,k3,k4) k0,SFT_T(k1),GUI_T(k2),ALT_T(k3),CTL_T(k4)
#define HRMR(...) SGAC(__VA_ARGS__)


// Right-hand home row mods
#define SFT_J RSFT_T(KC_J)
#define GUI_K RGUI_T(KC_K)
#define ALT_L LALT_T(KC_L)
#define CTL_SCL RCTL_T(KC_SCLN)
#define IJ_BCK LGUI(KC_LBRC)
#define IJ_FWD LGUI(KC_RBRC)

enum custom_keycodes {
    ZM_MUTE = SAFE_RANGE,  // Zoom voice mute
    ZM_VMUT,               // Zoom video mute
    ZM_SHAR,               // Zoom share window
    ZM_WMIN,               // Zoom window toggle
    DC_NXT,                // Discord next unread channel
    DC_PRV,                // Discords previous unread channel
    CMD_A,
    CMD_Z,
    CMD_X,
    CMD_C,
    CMD_V,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_all(
    KC_MPLY,    KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_MINS,  KC_EQL,   KC_MUTE,
    ZM_MUTE,    KC_TAB,LT(2,KC_Q),  KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,LT(2,KC_P), KC_BSPC,  KC_DEL,   KC_PGUP,
    ZM_VMUT,   KC_GESC,CAGS(KC_A,   KC_S,    KC_D,    KC_F,   KC_G),SGAC(KC_H,   KC_J,    KC_K,    KC_L,  KC_SCL),           KC_ENT,   KC_PGDN,
    ZM_SHAR,   KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,            KC_UP,
    ZM_WMIN,   KC_LCTL, KC_LALT, KC_LGUI, XXXXXXX,          LT(1,KC_BSPC), LT(1,KC_SPC),          KC_RGUI, KC_RALT,          KC_LEFT, KC_DOWN, KC_RGHT
  ),

  [1] = LAYOUT_all(
    _______,     RESET,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,  _______,
    _______,   _______,  KC_TAB,    KC_7,    KC_8,    KC_9, KC_SCLN, KC_QUOT, XXXXXXX, XXXXXXX, XXXXXXX,  KC_ENT, KC_MINS,  KC_EQL,  _______,
    _______,   _______,HRML(KC_ESC, KC_4,    KC_5,    KC_6,KC_MINS),HRMR(KC_EQL,KC_LEFT,KC_DOWN,  KC_UP, KC_RGHT),          _______,  _______,
    _______,   _______,    KC_0,    KC_1,    KC_2,    KC_3,  KC_GRV,  KC_BSLS, IJ_BCK,  DC_NXT,  DC_PRV,  IJ_FWD,          _______,
    _______,   _______, _______, _______, XXXXXXX,          KC_BSPC, KC_BSPC,          _______, _______,          _______, _______, _______
  ),

  [2] = LAYOUT_all(
    _______,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,
    _______,   _______,   RESET, KC_VOLD, KC_MUTE, KC_VOLU, KC_COLN, KC_DQUO, KC_MPRV, KC_MPLY, KC_MNXT,   RESET, _______, _______,  _______,
    _______,   _______,HRML(KC_LT,KC_LCBR,KC_LBRC, KC_LPRN, KC_UNDS),HRMR(KC_PLUS,KC_RPRN,KC_RBRC,KC_RCBR,KC_GT),          _______,  _______,
    _______,   _______, KC_LSFT, G(KC_X), G(KC_C), G(KC_V), KC_TILD, KC_PIPE, KC_HOME, KC_PGDN, KC_PGUP,  KC_END,          _______,
    _______,   _______, _______, _______, XXXXXXX,          KC_BSPC, KC_BSPC,          _______, _______,          _______, _______, _______
  )

};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case ZM_MUTE:
            if (record->event.pressed) {
                SEND_STRING(SS_LCMD(SS_LSFT("a")));
            } else {
            }
            break;
        case ZM_VMUT:
            if (record->event.pressed) {
                SEND_STRING(SS_LCMD(SS_LSFT("v")));
            } else {
            }
            break;
        case ZM_SHAR:
            if (record->event.pressed) {
                SEND_STRING(SS_LCMD(SS_LSFT("s")));
            } else {
            }
            break;
        case ZM_WMIN:
            if (record->event.pressed) {
                SEND_STRING(SS_LCMD(SS_LSFT("m")));
            } else {
            }
            break;
        case DC_NXT:
            if (record->event.pressed) {
                SEND_STRING(SS_LALT(SS_LSFT(SS_TAP(X_DOWN))));
            } else {
            }
            break;
        case DC_PRV:
            if (record->event.pressed) {
                SEND_STRING(SS_LALT(SS_LSFT(SS_TAP(X_UP))));
            } else {
            }
            break;
        case CMD_A:
            if (record->event.pressed) {
                SEND_STRING(SS_LCMD("a"));
            } else {
            }
            break;
        case CMD_Z:
            if (record->event.pressed) {
                SEND_STRING(SS_LCMD("z"));
            } else {
            }
            break;
        case CMD_X:
            if (record->event.pressed) {
                SEND_STRING(SS_LCMD("x"));
            } else {
            }
            break;
        case CMD_C:
            if (record->event.pressed) {
                SEND_STRING(SS_LCMD("c"));
            } else {
            }
            break;
        case CMD_V:
            if (record->event.pressed) {
                SEND_STRING(SS_LCMD("v"));
            } else {
            }
            break;
    }
    return true;
}



void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code(KC_MPRV);
        } else {
            tap_code(KC_MNXT);
        }
    } else if (index == 1) { /* Second encoder */
        if (clockwise) {
            tap_code(KC_VOLD);
        } else {
            tap_code(KC_VOLU);
        }
    }
}
