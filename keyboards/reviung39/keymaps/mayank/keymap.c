/* Copyright 2019 gtips
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

#define _______ KC_TRNS

#define LG_ESC  LGUI_T(KC_ESC)  // Super key if held, escape if tapped
#define LS_TAB  LSFT_T(KC_TAB)  // Shift key if held, tab if tapped
#define RS_QUOT RSFT_T(KC_QUOT) // Shift key if held, enter if tapped
#define LAYER1  LT(1, KC_LBRC)  // Activate layer 1 if held, left bracket if tapped
#define LAYER2  LT(2, KC_RBRC)  // Activate layer 2 if held, right bracket if tapped
#define LAYER3  LT(3, KC_SPC)   // Activate layer 3 if held, space if tapped

#define SUPER_1 LGUI(KC_1)      // Super/CMD + 1
#define SUPER_2 LGUI(KC_2)      // Super/CMD + 2
#define SUPER_3 LGUI(KC_3)      // Super/CMD + 3
#define SUPER_4 LGUI(KC_4)      // Super/CMD + 4
#define SUPER_5 LGUI(KC_5)      // Super/CMD + 5
#define SUPER_6 LGUI(KC_6)      // Super/CMD + 6
#define SUPER_7 LGUI(KC_7)      // Super/CMD + 7
#define SUPER_8 LGUI(KC_8)      // Super/CMD + 8
#define SUPER_9 LGUI(KC_9)      // Super/CMD + 9

#define ALT_1   LALT(KC_1)      // Alt + 1
#define ALT_2   LALT(KC_2)      // Alt + 2
#define ALT_3   LALT(KC_3)      // Alt + 3
#define ALT_4   LALT(KC_4)      // Alt + 4
#define ALT_5   LALT(KC_5)      // Alt + 5
#define ALT_6   LALT(KC_6)      // Alt + 6
#define ALT_7   LALT(KC_7)      // Alt + 7
#define ALT_8   LALT(KC_8)      // Alt + 8
#define ALT_9   LALT(KC_9)      // Alt + 9

#define SSHIFT1 SGUI(KC_1)      // Super + Shift + 1
#define SSHIFT2 SGUI(KC_2)      // Super + Shift + 2
#define SSHIFT3 SGUI(KC_3)      // Super + Shift + 3
#define SSHIFT4 SGUI(KC_4)      // Super + Shift + 4
#define SSHIFT5 SGUI(KC_5)      // Super + Shift + 5
#define SSHIFT6 SGUI(KC_6)      // Super + Shift + 6
#define SSHIFT7 SGUI(KC_7)      // Super + Shift + 7
#define SSHIFT8 SGUI(KC_8)      // Super + Shift + 8
#define SSHIFT9 SGUI(KC_9)      // Super + Shift + 9

#define ALT_X   LALT(KC_X)      // Alt + x: mainly for Emacs

#define ZOOMIN  RCS(KC_PGUP)    // Ctrl + Shift + PgUp
#define ZOOMOUT RCS(KC_PGDN)    // Ctrl + Shift + PgDn

/* Macros for email IDs */
enum custom_keycodes {
  UCMAIL  = SAFE_RANGE,
  GMAIL1,
  GMAIL2
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_reviung39(
    LG_ESC,   KC_Q,     KC_W,     KC_E,     KC_R,      KC_T,               KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_BSPC,
    LS_TAB,   KC_A,     KC_S,     KC_D,     KC_F,      KC_G,               KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_ENT,
    KC_LCTL,  KC_Z,     KC_X,     KC_C,     KC_V,      KC_B,               KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  RS_QUOT,
                                                       LAYER1,   LAYER3,   LAYER2
  ),
  
  [1] = LAYOUT_reviung39(
    KC_TILD,  KC_1,     KC_2,     KC_3,     KC_4,      KC_5,               KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_PGUP,
    _______,  _______,  KC_MPRV,  KC_MPLY,  KC_MNXT,   GMAIL1,             _______,  _______,  _______,  _______,  _______,  KC_PGDN,
    _______,  _______,  KC_VOLD,  KC_MUTE,  KC_VOLU,   _______,            _______,  UCMAIL,   _______,  _______,  _______,  RESET,
                                                       _______,  KC_SPC,   _______
  ),

  [2] = LAYOUT_reviung39(
    KC_GRV,   KC_EXLM,  KC_AT,    KC_HASH,  KC_DLR,    KC_PERC,            KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_LPRN,  KC_RPRN,  _______,
    _______,  _______,  _______,  _______,  _______,   GMAIL2,             KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,   _______,            _______,  _______,  _______,  _______,  KC_BSLS,  _______,
                                                       KC_LALT,  KC_SPC,   _______
  ),

  [3] = LAYOUT_reviung39(
    _______,  SUPER_1,  SUPER_2,  SUPER_3,  SUPER_4,   SUPER_5,            SUPER_6,  SUPER_7,  SUPER_8,  SUPER_9,  KC_MINS,  KC_EQL,
    _______,  ALT_1,    ALT_2,    ALT_3,    ALT_4,     ALT_5,              ALT_6,    ALT_7,    ALT_8,    ALT_9,    KC_UNDS,  KC_PLUS,
    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,     KC_F6,              KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,
                                                       _______,  _______,  _______
  ),

  [4] = LAYOUT_reviung39(
    _______,  SSHIFT1,  SSHIFT2,  SSHIFT3,  SSHIFT4,   SSHIFT5,            SSHIFT6,  SSHIFT7,  SSHIFT8,  SSHIFT9,  _______,   ZOOMIN,
    _______,  RGB_TOG,  _______,  _______,  _______,   _______,            _______,  _______,  _______,  _______,  _______,  ZOOMOUT,
    _______,  _______,  ALT_X,    _______,  _______,   _______,            _______,  _______,  _______,  _______,  _______,  _______,
                                                       _______,  _______,  _______
  )
};

layer_state_t layer_state_set_user(layer_state_t state){
  return update_tri_layer_state(state, 1, 2, 4);
}

bool process_record_user (uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case UCMAIL:
      if (record->event.pressed) {
        // when UCMAIL is pressed
        SEND_STRING ("sharmamm@mail.uc.edu");
      } else {
        //when UCMAIL is released
      }
      break;
    case GMAIL1:
      if (record->event.pressed) {
        // when GMAIL1 is pressed
        SEND_STRING ("mayanksharma1806@gmail.com");
      } else {
        //when GMAIL1 is released
      }
      break;
    case GMAIL2:
      if (record->event.pressed) {
        // when GMAIL2 is pressed
        SEND_STRING ("onlyforotherapps2016@gmail.com");
      } else {
        //when GMAIL2 is released
      }
      break;
  }
  return true;
}
