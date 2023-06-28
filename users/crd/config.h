#pragma once

#include "wrappers.h"

#if defined(SPLIT_KEYBOARD)
    #undef MASTER_RIGHT
    #define MASTER_LEFT
#endif

#if defined(KEYBOARD_handwired_dactyl_manuform_4x5)
    #define USE_SERIAL
#endif

#if defined(KEYBOARD_splitkb_kyria)
    #ifdef RGBLIGHT_ENABLE
        #define RGBLIGHT_ANIMATIONS
        #define RGBLIGHT_HUE_STEP 8
        #define RGBLIGHT_SAT_STEP 8
        #define RGBLIGHT_VAL_STEP 8
        #define RGBLIGHT_LIMIT_VAL 150
    #endif
    #ifdef ENCODER_ENABLE
        #define ENCODER_DIRECTION_FLIP
        #define ENCODER_RESOLUTION 2
    #endif
#endif

#if defined(KEYBOARD_jd45)
#   ifdef ENCODER_ENABLE
#       define ENCODERS_PAD_A { F6, D3, B2 }
#       define ENCODERS_PAD_B { F7, B1, B3 }
#       define ENCODER_RESOLUTION 2
#   endif
#endif

#define TAPPING_TERM 200
//#define IGNORE_MOD_TAP_INTERRUPT
// #define TAPPING_FORCE_HOLD
#define PERMISSIVE_HOLD
//#define HOLD_ON_OTHER_KEY_PRESS

