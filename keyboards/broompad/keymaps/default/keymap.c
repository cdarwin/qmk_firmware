#include "macro3.h"

enum custom_keycodes {
    ZM_MUTE = SAFE_RANGE,
    ZM_VMUT,
    ZM_SHAR,
    ZM_WMIN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	KEYMAP(
        KC_BRMD, KC_MUTE, KC_MPLY, KC_MFFD,
        ZM_MUTE, ZM_VMUT, ZM_SHAR, ZM_WMIN )};

void matrix_init_user(void) {}

void matrix_scan_user(void) {}

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
    }
    return true;
}



#ifdef ENCODER_ENABLE
void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 1) {
        // Volume control
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
    else if (index == 0) {
        // Page up/Page down
        if (clockwise) {
            tap_code(KC_SLCK);
        } else {
            tap_code(KC_PAUS);
        }
    }
}
#endif