/* Copyright 2019 Ryota Goto
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
#include "crd.h"
/*
    K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, \
    K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, \
    K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, \
    K300, K301, K302,     K304,       K306,       K308,   K309, K310, K311  \
*/


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_wrapper( /* Base */
    __________________3x6_QWERTY_L1_____________________, __________________3x6_QWERTY_R1_____________________,
    __________________3x6_QWERTY_L2_____________________, __________________3x6_QWERTY_R2_____________________,
    KC_LSFT, __________________3x6_QWERTY_L3_____________________, _____________3x5_QWERTY_R3_________________,
    KC_LCTL, XXXXXXX, _2_THUMB_DEF_L__,          MO(2),            _2_THUMB_DEF_R__, XXXXXXX, KC_RCTL
  ),
  [1] = LAYOUT_wrapper( /* Extra Keys */
    __________________3x6_NUM_NAV_L1____________________, __________________3x6_NUM_NAV_R1____________________,
    __________________3x6_NUM_NAV_L2____________________, __________________3x6_NUM_NAV_R2____________________,
    _______, __________________3x6_NUM_NAV_L3____________________, _____________3x5_NUM_NAV_R3________________,
    _______, XXXXXXX, _2_THUMB_LR1_L__,          _______,          _2_THUMB_LR1_R__, XXXXXXX, _______
  ),
  [2] = LAYOUT_wrapper( /* Num and FN */
    RESET,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   _______, _______, KC_MINS, KC_EQL,  KC_BSLS, 
    _______, KC_VOLD, KC_VOLU, KC_MUTE, _______, _______, _______, _______, _______, _______, XXXXXXX, KC_QUOT, 
    _______, _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______, _______, _______, 
    _______, XXXXXXX, _______,          _______,          _______,          _______, _______, XXXXXXX, _______
  )
};
