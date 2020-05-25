#include QMK_KEYBOARD_H

#define KC_CTES CTL_T(KC_ESC)
#define KC_SPM1 LT(1, KC_SPC)
#define KC_BSM2 LT(2, KC_BSPC)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT(
    XXXXXXX,  KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_MINS,  KC_EQL, KC_BSLS,  KC_GRV, \
    XXXXXXX,  KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_LBRC, KC_RBRC, KC_BSPC, \
    XXXXXXX, KC_CTES,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,          KC_ENT, \
    /*    */ KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   MO(2),    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT, MO(3), \
    /*    */ KC_LCTL, /*    */ KC_LGUI, KC_SPM1,   MO(1), /*    */ KC_SPM1, /*             */ KC_RALT, /*             */  KC_RCTL \
   ),
[1] = LAYOUT(
    RGB_TOG, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BSLS,  KC_GRV, \
    XXXXXXX, _______,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_MINS,  KC_EQL, _______, \
    XXXXXXX, _______, _______, KC_HOME, KC_PGDN, KC_PGUP,  KC_END, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_QUOT, _______, /*    */ _______, \
    /*    */ _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_LBRC, KC_RBRC, KC_BSLS, _______, _______, \
    /*    */ _______, /*    */ KC_LALT, KC_BSM2, _______, /*    */ KC_BSM2, /*             */ KC_RGUI, /*             */ _______ \
   ),
[2] = LAYOUT(
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BSLS,  KC_GRV, \
    XXXXXXX, _______,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6, _______, _______, KC_MINS,  KC_EQL, _______, _______, _______, \
    XXXXXXX, _______, KC_VOLD, KC_VOLU, KC_MUTE, _______, _______, _______, _______, _______, _______, _______, _______, /*    */ _______, \
    /*    */ _______,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12, _______, _______, KC_LBRC, KC_RBRC, KC_BSLS, _______, _______, \
    /*    */ _______, /*    */ _______, _______, _______, /*    */ _______, /*             */ _______, /*             */ _______ \
   ),
[3] = LAYOUT(
    _______, KC_PWR,    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,  KC_INS,  KC_DEL, \
    XXXXXXX, _______, XXXXXXX, XXXXXXX, EEP_RST,   RESET, XXXXXXX, XXXXXXX, XXXXXXX, KC_PSCR, KC_SLCK, KC_PAUS, KC_UP,   XXXXXXX, _______, \
    XXXXXXX, _______, KC_VOLD, KC_VOLU, KC_MUTE, XXXXXXX, XXXXXXX, KC_PAST, KC_PSLS, KC_HOME, KC_PGUP, KC_LEFT, KC_RGHT, /*    */ KC_PENT, \
    /*    */ _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, KC_PPLS, KC_PMNS,  KC_END, KC_PGDN, KC_DOWN, XXXXXXX, XXXXXXX, \
    /*    */ _______, /*    */ _______, _______, _______, /*    */ _______, /*             */ _______, /*             */ _______ \
   )
};

static uint8_t top = 0;
static uint8_t middle = 0;
static uint8_t bottom = 0;

layer_state_t layer_state_set_user(layer_state_t state) {
    top = middle = bottom = 0;
    switch (get_highest_layer(state)) {
    case 1:
        bottom = 1;
        break;
    case 2:
        middle = 1;
        break;
    case 3:
        top = 1;
        break;
    default: //  for any other layers, or the default layer
        break;
    }
  return state;
}

// override kb level function
bool led_update_user(led_t usb_led) {
    writePin(B1, !top);
    writePin(B2, !middle);
    writePin(B3, !bottom);
    return false; // we are using LEDs for something else override kb
}
