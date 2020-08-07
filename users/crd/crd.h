#pragma once
#include QMK_KEYBOARD_H

#include "wrappers.h"

#define KC_CTSL RCTL_T(KC_SCLN)
#define KC_CTES CTL_T(KC_ESC)
#define KC_CTEN RCTL_T(KC_ENT)
#define KC_CTSC RCTL_T(KC_SCLN)
#define KC_LSBS SFT_T(KC_BSLS)
#define KC_LSHZ SFT_T(KC_Z)
#define KC_SHSL RSFT_T(KC_SLSH)
#define KC_SPM1 LT(1, KC_SPC)
#define KC_BSM1 LT(1, KC_BSPC)
#define KC_GUEN GUI_T(KC_ENT)
#define KC_ALTA ALGR_T(KC_TAB)
#define KC_BSM2 LT(2, KC_BSPC)
#define KC_CLGV CTL_T(KC_GRV)
#define KC_CLBS CTL_T(KC_BSLS)
