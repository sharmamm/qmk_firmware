/*
Copyright 2019 Bubnick

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include QMK_KEYBOARD_H

#define _______ KC_TRNS

/* Macros for email IDs */
enum custom_keycodes {
  UCMAIL = SAFE_RANGE,
  GMAIL1,
  GMAIL2
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	/*
	    ----------------------------------------------------------------------------------------------------------
	    | Esc  |  1   |  2   |  3   |  4   |  5   |  6   |  7   |  8   |  9   |  10  |  -   |  =   | PgUp | PgDn |
	    ----------------------------------------------------------------------------------------------------------
	    |   Tab   |  Q   |  W   |  E   |  R   |  T   |  Y   |  U   |  I   |  O   |  P   |  [   |  ]   |Backspace |
	    ----------------------------------------------------------------------------------------------------------
	    | CapsLock   |  A   |  S   |  D   |  F   |  G   |  H   |  J   |  K   |  L   |  ;   |  '   |     Enter    |
	    ----------------------------------------------------------------------------------------------------------
	    |     Shift     |  Z   |  X   |  C   |  V   |  B   |  N   |  M   |  ,   |  .   |  /   |   Shift   |  \   |
	    ----------------------------------------------------------------------------------------------------------
	    |   Ctrl  |         |   Alt   |                   Space                    |  MO(1)  |         |  MO(2)  |
	    -----------         ------------------------------------------------------------------         -----------
	*/
	[0] = LAYOUT_tsangan(
		KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,     KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_PGUP, KC_PGDN,
		KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,     KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,
		KC_LGUI, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,     KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
		KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM,  KC_DOT,  KC_SLSH, KC_RSFT, KC_BSLS,
		KC_LCTL, _______, KC_LGUI, KC_SPC,  KC_RGUI, _______, KC_RCTL),

	/*
	    ----------------------------------------------------------------------------------------------------------
	    |  `   |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  | F10  | F11  | F12  | Home | End  |
	    ----------------------------------------------------------------------------------------------------------
	    |         |      | Prev | Play | Next |      |      |      |      |      |  Up  |      |      |  Reset   |
	    ----------------------------------------------------------------------------------------------------------
	    |            |      | Mute | Vol- | Vol+ |GMAIL1|      |      |      | Left | Down |Right |              |
	    ----------------------------------------------------------------------------------------------------------
	    |               |      |      |      |      |      |      |      |      | RGB  |      |           |      |
	    ----------------------------------------------------------------------------------------------------------
	    |         |         |         |                                            |         |         |         |
	    -----------         ------------------------------------------------------------------         -----------
	*/
	[1] = LAYOUT_tsangan(
	    KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_HOME, KC_END,
	    _______, _______, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______, _______, _______, _______, KC_UP,   _______, _______, RESET,
	    _______, _______, KC_MUTE, KC_VOLD, KC_VOLU, GMAIL1,  _______, _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______,
	    _______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_TOG, _______, _______, _______,
	    _______, _______, _______,                   _______,                   _______, _______, _______
	    ),

	/*
	    ----------------------------------------------------------------------------------------------------------
	    |      |      |      |      |      |      |      |      |      |      |      |      |      |      |      |
	    ----------------------------------------------------------------------------------------------------------
	    |         |      |      |      |      |      |      |UCMAIL|      |      |      |      |      |  Delete  |
	    ----------------------------------------------------------------------------------------------------------
	    |            |      |      |      |      |GMAIL2|      |      |      |      |      |      |              |
	    ----------------------------------------------------------------------------------------------------------
	    |               |      |      |      |      |      |      |      |      |      |      |           |      |
	    ----------------------------------------------------------------------------------------------------------
	    |         |         |         |                                            |         |         |         |
	    -----------         ------------------------------------------------------------------         -----------
	*/
	[2] = LAYOUT_tsangan(
	    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
	    _______, _______, _______, _______, _______, _______, _______, UCMAIL,  _______, _______, _______, _______, _______, KC_DEL,
	    _______, _______, _______, _______, _______, GMAIL2,  _______, _______, _______, _______, _______, _______, _______,
	    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
	    _______, _______, _______,                   _______,                   _______, _______, _______
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
}
