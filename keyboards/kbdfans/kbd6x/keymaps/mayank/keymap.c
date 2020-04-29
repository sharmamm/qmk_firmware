/* Copyright 2018 MechMerlin
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

#define W_PREV LCTL(KC_LEFT) // Move to previous workspace on Mac OS
#define W_NEXT LCTL(KC_RGHT) // Move to next workspace on Mac OS
#define M_CTRL LALT(KC_UP)   // Open Mission Control on Mac OS

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
  [0] = LAYOUT(
      KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,     KC_6,   KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_PGUP, KC_PGDOWN,
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,     KC_Y,   KC_U,   KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,
      KC_LGUI, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,     KC_H,   KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
      KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,     KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_BSLS,
      KC_LCTL, KC_TRNS, KC_LALT,                   KC_SPACE,                 MO(1),   KC_TRNS, MO(2)
      ),

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
  [1] = LAYOUT(
      KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_HOME, KC_END,
      KC_TRNS, KC_TRNS, KC_MPRV, KC_MPLY, KC_MNXT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_UP,   KC_TRNS, KC_TRNS, RESET,
      KC_TRNS, KC_TRNS, KC_MUTE, KC_VOLD, KC_VOLU, GMAIL2,  KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_TOG, KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS
      ),
  
  /*
      ----------------------------------------------------------------------------------------------------------
      |      |      |      |      |      |      |      |      |      |      |      |      |      |      |      | 
      ----------------------------------------------------------------------------------------------------------
      |         |      |      |      |      |      |      |UCMAIL|      |      |M_Ctrl|      |      |          |
      ----------------------------------------------------------------------------------------------------------
      |            |      |      |      |      |GMAIL2|      |      |      |W_Prev|      |W_Next|              |
      ----------------------------------------------------------------------------------------------------------
      |               |      |      |      |      |      |      |      |      |      |      |           |      |
      ----------------------------------------------------------------------------------------------------------
      |         |         |         |                                            |         |         |         | 
      -----------         ------------------------------------------------------------------         -----------
  */
  [2] = LAYOUT(
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, UCMAIL,  KC_TRNS, KC_TRNS, M_CTRL,  KC_TRNS, KC_TRNS, KC_DEL,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, GMAIL2,  KC_TRNS, KC_TRNS, KC_TRNS, W_PREV,  KC_TRNS, W_NEXT,  KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS
      ),
};


void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

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
