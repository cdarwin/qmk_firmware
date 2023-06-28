#include "crd.h"

#ifdef ENCODER_ENABLE
#   if defined(KEYBOARD_splitkb_kyria)
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
#   endif
#   if defined(KEYBOARD_jd45)
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 2) {
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
#   endif
#endif

#ifdef POINTING_DEVICE_AUTO_MOUSE_ENABLE
void pointing_device_init_user(void) {
    set_auto_mouse_enable(true);
}
#endif