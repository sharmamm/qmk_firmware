/* Copyright 2015-2017 Jack Humbert
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
#include "muse.h"

#define _______ KC_TRNS
#define W_PREV  LCTL(KC_LEFT) // Move to previous workspace on Mac OS
#define W_NEXT  LCTL(KC_RGHT) // Move to next workspace on Mac OS
#define M_CTRL  LALT(KC_UP)   // Open Mission Control on Mac OS

/* Macros for email IDs */
enum custom_keycodes {
  UCMAIL = SAFE_RANGE,
  GMAIL1,
  GMAIL2
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |  -   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | GUI  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |Enter |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Shift |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl | PgUp | PgDn | Alt  |Lower |    Space    |Raise | Alt  |  [   |   ]  |  "   |
 * `-----------------------------------------------------------------------------------'
 */
[0] = LAYOUT_preonic_1x2uC( \
  KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, \
  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC, \
  KC_LGUI, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,  \
  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, \
  KC_LCTL, KC_PGUP, KC_PGDN, KC_LALT, MO(2),      KC_SPC    ,   MO(1),    KC_RALT, KC_LBRC, KC_RBRC, KC_QUOT  \
),

/* Layer 2
 * ,-----------------------------------------------------------------------------------.
 * |   ~  |      |      |      |      |      |  F7  |  F8  |  F9  | F10  | F11  | F12  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      !      |      |      |      |      |      |UCMAIL|      |      |      | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |      |      |GMAIL1| Left | Down |  Up  | Right|      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |  \   |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |Reset |
 * `-----------------------------------------------------------------------------------'
 */
[1] = LAYOUT_preonic_1x2uC( \
  KC_GRV,  _______, _______, _______, _______,  _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  \
  _______, _______, _______, _______, _______,  _______, _______, UCMAIL,  _______, _______, _______, KC_DEL,  \
  _______, _______, _______, _______, _______,  GMAIL1,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______, \
  _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, KC_BSLS, _______, \
  _______, _______, _______, _______, _______,      _______     , _______, _______, _______, _______, RESET    \
),

/* Layer 1
 * ,-----------------------------------------------------------------------------------.
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |      |      |      |      |      |  =   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |   `  |      | Prev | Play | Next |      |      |      |      |      |      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      | Mute | Vol- | Vol+ |GMAIL2|W_Prev|      |M_Ctrl|W_Next|      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
 
[2] = LAYOUT_preonic_1x2uC( \
  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,    KC_F6,   _______, _______, _______, _______, _______, KC_EQL,  \
  _______, _______, KC_MPRV, KC_MPLY, KC_MNXT,  _______, _______, _______, _______, _______, _______, _______, \
  _______, _______, KC_MUTE, KC_VOLD, KC_VOLU,  GMAIL2,  W_PREV,  _______, M_CTRL,  W_NEXT,  _______, _______, \
  _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______,      _______     , _______, _______, _______, _______, _______  \
),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
        case UCMAIL:
          if (record->event.pressed) {
            // when UCMAIL is pressed
            SEND_STRING ("sharmamm@mail.uc.edu");
          } else {
            // when UCMAIL is released
          }
          break;
        case GMAIL1:
          if (record->event.pressed) {
            // when GMAIL1 is pressed
            SEND_STRING ("mayanksharma1806@gmail.com");
          } else {
            // when GMAIL1 is released
          }
          break;
        case GMAIL2:
          if (record->event.pressed) {
            // when GMAIL2 is pressed
            SEND_STRING ("onlyforotherapps2016@gmail.com");
          } else {
            // when GMAIL2 is released
          }
          break;
      }
    return true;
};
