/* Copyright 2018 ENDO Katsuhiro <ka2hiro@curlybracket.co.jp>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

#define KC_CTSL RCTL_T(KC_SCLN)
#define KC_LSHZ SFT_T(KC_Z)
#define KC_SHSL RSFT_T(KC_SLSH)
#define KC_GUEN GUI_T(KC_ENT)
#define KC_BSM1 LT(1, KC_BSPC)
#define KC_SPM1 LT(1, KC_SPC)
#define KC_ALTA ALGR_T(KC_TAB)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT(
       KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
       KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L, KC_CTSL,
    KC_LSHZ,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SHSL,
/*                           */ KC_GUEN, KC_BSM1, KC_SPM1, KC_ALTA),
[1] = LAYOUT(
       KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
    KC_GESC, KC_HOME, KC_PGDN, KC_PGUP,  KC_END, KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, KC_QUOT,
    KC_LSFT, XXXXXXX,  KC_GRV, KC_MINS, XXXXXXX, XXXXXXX,  KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS,
/*                          */ _______, KC_BSPC, KC_BSPC, _______),
};

