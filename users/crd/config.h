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
    #ifdef OLED_DRIVER_ENABLE
        #define OLED_DISPLAY_128X64
    #endif
    #ifdef RGBLIGHT_ENABLE
        #define RGBLIGHT_ANIMATIONS
        #define RGBLIGHT_HUE_STEP 8
        #define RGBLIGHT_SAT_STEP 8
        #define RGBLIGHT_VAL_STEP 8
        #define RGBLIGHT_LIMIT_VAL 150
    #endif
    #ifdef ENCODER_ENABLE
        #include "encoders.c"
        #define ENCODER_DIRECTION_FLIP
        #define ENCODER_RESOLUTION 2
    #endif
#endif


// Configure the global tapping term (default: 200ms)
#define TAPPING_TERM 200

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
// #define TAPPING_FORCE_HOLD

// Apply the modifier on keys that are tapped during a short hold of a modtap
#define PERMISSIVE_HOLD
