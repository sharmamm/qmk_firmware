/* Definitely not the most efficient use of layers but 
   has most of the functionality needed */
#include QMK_KEYBOARD_H

#define _______ KC_TRNS

#define LW_TAB  LGUI_T(KC_TAB)  // Super key if held, Tab if tapped

#define SUPER_1 LGUI(KC_1)      // Super/CMD + 1
#define SUPER_2 LGUI(KC_2)      // Super/CMD + 2
#define SUPER_3 LGUI(KC_3)      // Super/CMD + 3
#define SUPER_4 LGUI(KC_4)      // Super/CMD + 4
#define SUPER_5 LGUI(KC_5)      // Super/CMD + 5
#define SUPER_6 LGUI(KC_6)      // Super/CMD + 6
#define SUPER_7 LGUI(KC_7)      // Super/CMD + 7
#define SUPER_8 LGUI(KC_8)      // Super/CMD + 8
#define SUPER_9 LGUI(KC_9)      // Super/CMD + 9

#define W_PREV  LCTL(KC_LEFT)   // Move to previous workspace on Mac OS
#define W_NEXT  LCTL(KC_RGHT)   // Move to next workspace on Mac OS
#define M_CTRL  LALT(KC_UP)     // Open Mission Control on Mac OS

/* Macros for email IDs */
enum custom_keycodes{
  UCMAIL = SAFE_RANGE,
  GMAIL1,
  GMAIL2
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Layer 0
     * ,-----------------------------------------------------------------------------------.
     * | Esc  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
     * |------+------+------+------+------+-------------+------+------+------+------+------|
     * |TAB/OS|   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |Enter |
     * |------+------+------+------+------+------|------+------+------+------+------+------|
     * |Shift |   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Shift |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * | Ctrl | PgUp | PgDn | Alt  |Layer1|Space |Space |Layer2|Layer3|   [  |   ]  |  ""  |
     * `-----------------------------------------------------------------------------------'
     */
    [0] = LAYOUT_ortho_4x12(
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,  KC_T,   KC_Y,   KC_U,  KC_I,    KC_O,    KC_P,    KC_BSPC,
        LW_TAB,  KC_A,    KC_S,    KC_D,    KC_F,  KC_G,   KC_H,   KC_J,  KC_K,    KC_L,    KC_SCLN, KC_ENT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,  KC_B,   KC_N,   KC_M,  KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_LCTL, KC_PGUP, KC_PGDN, KC_LALT, MO(1), KC_SPC, KC_SPC, MO(2), MO(3),   KC_LBRC, KC_RBRC, KC_QUOT
    ),

    /* Layer 1
     * ,-----------------------------------------------------------------------------------.
     * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |      |      |LGUI+7|LGUI+8|LGUI+9|      |
     * |------+------+------+------+------+-------------+------+------+------+------+------|
     * | LGUI |      | Prev | Play | Next |GMAIL1|      |      |LGUI+4|LGUI+5|LGUI+6|      |
     * |------+------+------+------+------+------|------+------+------+------+------+------|
     * |      |      | Vol- | Mute | Vol+ |      |      |      |LGUI+1|LGUI+2|LGUI+3|      |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |      |      |      |      |      |      |      |      |      |  \   |
     * `-----------------------------------------------------------------------------------'
     */
    [1] = LAYOUT_ortho_4x12(
        KC_F1,   KC_F2  , KC_F3  , KC_F4,   KC_F5,   KC_F6,   _______, UCMAIL,  SUPER_7, SUPER_8, SUPER_9, _______,
        KC_LGUI, _______, KC_MPRV, KC_MPLY, KC_MNXT, GMAIL1,  _______, _______, SUPER_4, SUPER_5, SUPER_6, _______,
        _______, _______, KC_VOLD, KC_MUTE, KC_VOLU, _______, _______, _______, SUPER_1, SUPER_2, SUPER_3, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_BSLS
    ),

    /* Layer 2 
     * ,-----------------------------------------------------------------------------------.
     * |  `   |      |      |      |      |      |  F7  |  F8  |  F9  | F10  | F11  | F12  |
     * |------+------+------+------+------+-------------+------+------+------+------+------|
     * |      |      |      |      |      |GMAIL2| Left | Down |  Up  |Right |      |      |
     * |------+------+------+------+------+------|------+------+------+------+------+------|
     * |      |      |W_Prev|M_Ctrl|W_Next|      | RGB  |Mode- |Mode+ | Hue- | Hue+ |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |      |      |      |      |      |      | Sat- | Sat+ |Brite-|Brite+|
     * `-----------------------------------------------------------------------------------'
     */
    [2] = LAYOUT_ortho_4x12(
        KC_GRV,  _______, _______, _______, _______, _______, KC_F7,   KC_F8,    KC_F9,   KC_F10,  KC_F11,  KC_F12,
        _______, _______, _______, _______, _______, GMAIL2,  KC_LEFT, KC_UP,    KC_DOWN, KC_RGHT, _______, _______,
        _______, _______, W_PREV,  M_CTRL,  W_NEXT,  _______, RGB_TOG, RGB_RMOD, RGB_MOD, RGB_HUD, RGB_HUI, _______,
        _______, _______, _______, _______, _______, _______, _______, _______,  RGB_SAD, RGB_SAI, RGB_VAD, RGB_VAI
    ),
    
    /* Layer 3 
     * ,-----------------------------------------------------------------------------------.
     * |  ~   |      |      |      |      |      |      |      |  7   |  8   |  9   |  0   |
     * |------+------+------+------+------+-------------+------+------+------+------+------|
     * |      |      |      |      |      |      |      |      |  4   |  5   |  6   |  -   |
     * |------+------+------+------+------+------|------+------+------+------+------+------|
     * |      |Plain |Breath|Rainbo|Swirl |Snake |Grad  |      |  1   |  2   |  3   |  =   |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |      |      |      |      |      |      |      |      |      |Reset |
     * `-----------------------------------------------------------------------------------'
     */
    [3] = LAYOUT_ortho_4x12(
        KC_TILD, _______, _______, _______, _______,  _______,  _______, _______,  KC_7,    KC_8,    KC_9,    KC_0,
        _______, _______, _______, _______, _______,  _______,  _______, _______,  KC_4,    KC_5,    KC_6,    KC_MINS,
        _______, RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW, RGB_M_SN, RGB_M_G, _______,  KC_1,    KC_2,    KC_3,    KC_EQL,
        _______, _______, _______, _______, _______,  _______,  _______, _______,  _______, RGB_SPD, RGB_SPI, RESET
    ) 
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

void led_set_user(uint8_t usb_led) {

    if (IS_LED_ON(usb_led, USB_LED_NUM_LOCK)) {

    } else {

    }

    if (IS_LED_ON(usb_led, USB_LED_CAPS_LOCK)) {

    } else {

    }

    if (IS_LED_ON(usb_led, USB_LED_SCROLL_LOCK)) {

    } else {

    }

    if (IS_LED_ON(usb_led, USB_LED_COMPOSE)) {

    } else {

    }

    if (IS_LED_ON(usb_led, USB_LED_KANA)) {

    } else {

    }

}
