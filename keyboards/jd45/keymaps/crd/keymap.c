#include QMK_KEYBOARD_H

// Thumbs
#define KC_SPM1 LT(1, KC_SPC)
#define KC_BSM1 LT(1, KC_BSPC)
#define KC_ENT2 LT(2, KC_ENT)
#define KC_TAB2 LT(2, KC_TAB)

// Left-hand home row mods
#define CTL_A LCTL_T(KC_A)
#define ALT_S LALT_T(KC_S)
#define GUI_D LGUI_T(KC_D)
#define SFT_F LSFT_T(KC_F)

// Right-hand home row mods
#define SFT_J RSFT_T(KC_J)
#define GUI_K RGUI_T(KC_K)
#define ALT_L LALT_T(KC_L)
#define CTL_SCL RCTL_T(KC_SCLN)

enum custom_keycodes {
    ZM_MUTE = SAFE_RANGE,  // Zoom voice mute
    ZM_VMUT,               // Zoom video mute
    ZM_SHAR,               // Zoom share window
    ZM_WMIN,               // Zoom window toggle
    DC_NXT,                // Discord next unread channel
    DC_PRV,                // Discords previous unread channel
    CMD_A,
    CMD_C,
    CMD_V,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT(
        KC_TAB,     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_BSPC, KC_MUTE,
        KC_GESC,   CTL_A,   ALT_S,   GUI_D,   SFT_F,    KC_G,    KC_H,   SFT_J,   GUI_K,   ALT_L, CTL_SCL,  KC_ENT,
        KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT,
        /*    */ XXXXXXX, XXXXXXX, XXXXXXX, KC_ENT2, KC_BSM1, KC_SPM1, KC_TAB2, XXXXXXX, XXXXXXX, XXXXXXX
),

[1] = LAYOUT(
        _______,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, _______, KC_MPLY,
        _______, KC_GESC, KC_HOME, KC_PGDN, KC_PGUP,  KC_END, KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, KC_QUOT, _______,
        _______, KC_LSFT, XXXXXXX,  KC_GRV, KC_MINS, XXXXXXX, XXXXXXX,  KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS, _______,
        /*    */ XXXXXXX, XXXXXXX, XXXXXXX, _______, KC_BSPC, KC_BSPC, _______, XXXXXXX, XXXXXXX, XXXXXXX
),

[2] = LAYOUT(
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BRIU, KC_VOLU, XXXXXXX, XXXXXXX, XXXXXXX,   RESET, _______, _______,
        _______,   CMD_A,  DC_PRV, XXXXXXX,  DC_NXT, XXXXXXX, KC_MUTE, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, _______,
        _______, XXXXXXX, XXXXXXX,   CMD_C,   CMD_V, KC_BRID, KC_VOLD, ZM_MUTE, ZM_VMUT, ZM_SHAR, ZM_WMIN, _______,
        /*    */ XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX
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

#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {
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
        switch (biton32(layer_state)) {
            case 1:
                clockwise ? tap_code(KC_MNXT) : tap_code(KC_MPRV);
                break;
            case 2:
                clockwise ? tap_code(KC_VOLU) : tap_code(KC_VOLD);
                break;
            default:
                clockwise ? tap_code(KC_VOLU) : tap_code(KC_VOLD);
                break;
        }
    }
    return true;
}
#endif