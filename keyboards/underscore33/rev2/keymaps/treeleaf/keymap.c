/* Copyright 2020 tominabox1
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

#define KC_SPM1 LT(1, KC_SPC)
#define KC_SLM1 LT(2, KC_SLASH)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_33_split_space(
       KC_Q,    KC_D,    KC_R,   KC_W,     KC_B,   KC_J,    KC_F,    KC_U,    KC_P,    KC_BSPC,
       KC_A,    KC_S,    KC_H,   KC_T,     KC_G,   KC_Y,    KC_N,    KC_E,    KC_O,    KC_I,
       KC_Z,    KC_X,    KC_M,   KC_C,     KC_V,   KC_K,    KC_L,    KC_COMM, KC_DOT,  KC_SLM1,
    KC_LCTL, KC_LALT, KC_SPM1, KC_RSFT, KC_TAB, KC_ENT
  ),

  [1] = LAYOUT_33_split_space(
    KC_TRNS,   KC_UP,  KC_TRNS, KC_TRNS, KC_TRNS,  KC_EQL,    KC_1,    KC_2,    KC_3,    KC_0,
    KC_LEFT, KC_DOWN,  KC_RGHT, KC_TRNS,  KC_GRV, KC_MINS,    KC_4,    KC_5,    KC_6, KC_SCLN,
    KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_LBRC, KC_RBRC,    KC_7,    KC_8,    KC_9, KC_QUOT,
    KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  ),

  [2] = LAYOUT_33_split_space(
    KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,      KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_0,
    KC_TRNS,    KC_TRNS,  KC_TRNS,   KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,   KC_TRNS,
    KC_TRNS,   KC_TRNS,  KC_TRNS, KC_TRNS,   KC_TRNS,   KC_TRNS
  ),
  [3] = LAYOUT_33_split_space(
    KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,      KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_0,
    KC_TRNS,    KC_TRNS,  KC_TRNS,   KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,   KC_TRNS,
    KC_TRNS,   KC_TRNS,  KC_TRNS, KC_TRNS,   KC_TRNS,   KC_TRNS
  ),

};
