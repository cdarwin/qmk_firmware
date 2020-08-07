#pragma once
#include "crd.h"

#if (!defined(LAYOUT) && defined(KEYMAP))
#    define LAYOUT KEYMAP
#endif

#define KEYMAP_wrapper(...)                  LAYOUT(__VA_ARGS__)
#define LAYOUT_wrapper(...)                  LAYOUT(__VA_ARGS__)

/* Base Layers */
#define _____________3x5_QWERTY_L1_________________      KC_Q,    KC_W,    KC_E,    KC_R,    KC_T
#define _____________3x5_QWERTY_L2_________________      KC_A,    KC_S,    KC_D,    KC_F,    KC_G
#define _____________3x5_QWERTY_L3_________________   KC_LSHZ,    KC_X,    KC_C,    KC_V,    KC_B

#define _____________3x5_QWERTY_R1_________________      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P
#define _____________3x5_QWERTY_R2_________________      KC_H,    KC_J,    KC_K,    KC_L, KC_CTSC
#define _____________3x5_QWERTY_R3_________________      KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SHSL

/* Numbers and Navigation */
#define _____________3x5_NUM_NAV_L1________________      KC_1,    KC_2,    KC_3,    KC_4,    KC_5
#define _____________3x5_NUM_NAV_L2________________   KC_GESC, KC_HOME, KC_PGDN, KC_PGUP,  KC_END
#define _____________3x5_NUM_NAV_L3________________   KC_LSFT, XXXXXXX,  KC_GRV, KC_MINS, XXXXXXX

#define _____________3x5_NUM_NAV_R1________________      KC_6,    KC_7,    KC_8,    KC_9,    KC_0
#define _____________3x5_NUM_NAV_R2________________   KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, KC_QUOT
#define _____________3x5_NUM_NAV_R3________________   XXXXXXX,  KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS

/* Function, Volume, Mouse */
#define ____________3x5_FN_VOL_MS_L1_______________     KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5
#define ____________3x5_FN_VOL_MS_L2_______________   KC_VOLD, KC_VOLU, KC_MUTE, KC_BTN1, KC_BTN2
#define ____________3x5_FN_VOL_MS_L3_______________     KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11

#define ____________3x5_FN_VOL_MS_R1_______________     KC_F6, XXXXXXX, XXXXXXX, KC_MINS,  KC_EQL
#define ____________3x5_FN_VOL_MS_R2_______________   KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_BTN3
#define ____________3x5_FN_VOL_MS_R3_______________    KC_F12, KC_WH_D, KC_WH_U, XXXXXXX,  KC_GRV

/* Thumb fans */
#define _2_THUMB_DEF_L__   KC_GUEN, KC_BSM1
#define _2_THUMB_DEF_R__   KC_SPM1, KC_ALTA

#define _2_THUMB_LR1_L__   _______, KC_BSM2
#define _2_THUMB_LR1_R__   KC_BSM2, _______

#define _2_THUMB_LR2_L__   _______, XXXXXXX
#define _2_THUMB_LR2_R__   XXXXXXX, _______

#define ______3_THUMB_DEF_L______   KC_CLBS, _2_THUMB_DEF_L__
#define ______3_THUMB_DEF_R______   _2_THUMB_DEF_R__, KC_CLGV

#define ______3_THUMB_LR1_L______   _______, _2_THUMB_LR1_L__
#define ______3_THUMB_LR1_R______   _2_THUMB_LR1_R__, _______

#define ______3_THUMB_LR2_L______   _______, _2_THUMB_LR2_L__
#define ______3_THUMB_LR2_R______   _2_THUMB_LR2_R__, _______

/* Larger Layouts */
#define __________________3x6_QWERTY_L0_____________________    KC_GRV, _____________3x5_NUM_NAV_L1________________
#define __________________3x6_QWERTY_R0_____________________   _____________3x5_NUM_NAV_R1________________, KC_BSLS

#define __________________3x6_QWERTY_L1_____________________    KC_TAB, _____________3x5_QWERTY_L1_________________
#define __________________3x6_QWERTY_L2_____________________   KC_GESC, _____________3x5_QWERTY_L2_________________
#define __________________3x6_QWERTY_L3_____________________   KC_LSFT, _____________3x5_QWERTY_L3_________________

#define __________________3x6_QWERTY_R1_____________________   _____________3x5_QWERTY_R1_________________, KC_BSPC
#define __________________3x6_QWERTY_R2_____________________   _____________3x5_QWERTY_R2_________________, KC_CTEN
#define __________________3x6_QWERTY_R3_____________________   _____________3x5_QWERTY_R3_________________, KC_RSFT

#define __________________3x6_NUM_NAV_L1____________________   _______, _____________3x5_NUM_NAV_L1________________
#define __________________3x6_NUM_NAV_L2____________________   _______, _____________3x5_NUM_NAV_L2________________
#define __________________3x6_NUM_NAV_L3____________________   _______, _____________3x5_NUM_NAV_L3________________

#define __________________3x6_NUM_NAV_R1____________________   _____________3x5_NUM_NAV_R1________________, _______
#define __________________3x6_NUM_NAV_R2____________________   _____________3x5_NUM_NAV_R2________________, _______
#define __________________3x6_NUM_NAV_R3____________________   _____________3x5_NUM_NAV_R3________________, _______


#define _________________3x6_FN_VOL_MS_L1___________________     RESET, ____________3x5_FN_VOL_MS_L1_______________
#define _________________3x6_FN_VOL_MS_L2___________________   RGB_HUI, ____________3x5_FN_VOL_MS_L2_______________
#define _________________3x6_FN_VOL_MS_L3___________________   RGB_SAI, ____________3x5_FN_VOL_MS_L3_______________

#define _________________3x6_FN_VOL_MS_R1___________________   ____________3x5_FN_VOL_MS_R1_______________, RGB_TOG
#define _________________3x6_FN_VOL_MS_R2___________________   ____________3x5_FN_VOL_MS_R2_______________, RGB_MOD
#define _________________3x6_FN_VOL_MS_R3___________________   ____________3x5_FN_VOL_MS_R3_______________, RGB_VAI
