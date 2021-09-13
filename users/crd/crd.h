#pragma once
#include QMK_KEYBOARD_H

#include "wrappers.h"

// Thumbs
#define KC_BSM1 LT(1, KC_BSPC)
#define KC_SPM2 LT(2, KC_SPC)
#define KC_ENM3 LT(3, KC_ENT)
#define KC_TAM3 LT(3, KC_TAB)

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

// Convenient Shortcuts
#define CTL_ESC LCTL_T(KC_ESC)
#define ZM_MUTE LSG(KC_A)
#define ZM_VMUT LSG(KC_V)
#define DC_NXT LSA(KC_DOWN)
#define DC_PRV LSA(KC_UP)
#define IJ_BCK LGUI(KC_LBRC)
#define IJ_FWD LGUI(KC_RBRC)
