#include QMK_KEYBOARD_H

#define _______ KC_TRNS

#define LG_ESC  LGUI_T(KC_ESC)      // Super key if held, Esc if tapped
#define LS_TAB  LSFT_T(KC_TAB)      // Shift key if held, Tab if tapped
#define RS_QUOT RSFT_T(KC_QUOT)     // Shift key if held, Enter if tapped
#define LAYER1  LT(1, KC_LBRC)      // Activate layer 1 if held, left bracket if tapped
#define LAYER2  LT(2, KC_RBRC)      // Activate layer 2 if held, right bracket if tapped
#define LAYER3  LT(3, KC_SPC)       // Activate layer 3 if held, space if tapped

#define SUPER_1 LGUI(KC_1)          // Super/CMD + 1
#define SUPER_2 LGUI(KC_2)          // Super/CMD + 2
#define SUPER_3 LGUI(KC_3)          // Super/CMD + 3
#define SUPER_4 LGUI(KC_4)          // Super/CMD + 4
#define SUPER_5 LGUI(KC_5)          // Super/CMD + 5
#define SUPER_6 LGUI(KC_6)          // Super/CMD + 6
#define SUPER_7 LGUI(KC_7)          // Super/CMD + 7
#define SUPER_8 LGUI(KC_8)          // Super/CMD + 8
#define SUPER_9 LGUI(KC_9)          // Super/CMD + 9
#define SUPER_0 LGUI(KC_0)          // Super/CMD + 0

#define WKSPC11 LCAG(KC_1)          // Super + Control + Alt + 1
#define WKSPC12 LCAG(KC_2)          // Super + Control + Alt + 2
#define WKSPC13 LCAG(KC_3)          // Super + Control + Alt + 3
#define WKSPC14 LCAG(KC_4)          // Super + Control + Alt + 4
#define WKSPC15 LCAG(KC_5)          // Super + Control + Alt + 5
#define WKSPC16 LCAG(KC_6)          // Super + Control + Alt + 6
#define WKSPC17 LCAG(KC_7)          // Super + Control + Alt + 7
#define WKSPC18 LCAG(KC_8)          // Super + Control + Alt + 8
#define WKSPC19 LCAG(KC_9)          // Super + Control + Alt + 9
#define WKSPC20 LCAG(KC_0)          // Super + Control + Alt + 0

#define ALT_1   LALT(KC_1)          // Alt + 1
#define ALT_2   LALT(KC_2)          // Alt + 2
#define ALT_3   LALT(KC_3)          // Alt + 3
#define ALT_4   LALT(KC_4)          // Alt + 4
#define ALT_5   LALT(KC_5)          // Alt + 5
#define ALT_6   LALT(KC_6)          // Alt + 6
#define ALT_7   LALT(KC_7)          // Alt + 7
#define ALT_8   LALT(KC_8)          // Alt + 8
#define ALT_9   LALT(KC_9)          // Alt + 9

#define SSHIFT1 SGUI(KC_1)          // Super + Shift + 1
#define SSHIFT2 SGUI(KC_2)          // Super + Shift + 2
#define SSHIFT3 SGUI(KC_3)          // Super + Shift + 3
#define SSHIFT4 SGUI(KC_4)          // Super + Shift + 4
#define SSHIFT5 SGUI(KC_5)          // Super + Shift + 5
#define SSHIFT6 SGUI(KC_6)          // Super + Shift + 6
#define SSHIFT7 SGUI(KC_7)          // Super + Shift + 7
#define SSHIFT8 SGUI(KC_8)          // Super + Shift + 8
#define SSHIFT9 SGUI(KC_9)          // Super + Shift + 9
#define SSHIFT0 SGUI(KC_0)          // Super + Shift + 0

#define MVETO11 HYPR(KC_1)          // Super + Control + Alt + Shift + 1
#define MVETO12 HYPR(KC_2)          // Super + Control + Alt + Shift + 2
#define MVETO13 HYPR(KC_3)          // Super + Control + Alt + Shift + 3
#define MVETO14 HYPR(KC_4)          // Super + Control + Alt + Shift + 4
#define MVETO15 HYPR(KC_5)          // Super + Control + Alt + Shift + 5
#define MVETO16 HYPR(KC_6)          // Super + Control + Alt + Shift + 6
#define MVETO17 HYPR(KC_7)          // Super + Control + Alt + Shift + 7
#define MVETO18 HYPR(KC_8)          // Super + Control + Alt + Shift + 8
#define MVETO19 HYPR(KC_9)          // Super + Control + Alt + Shift + 9
#define MVETO20 HYPR(KC_0)          // Super + Control + Alt + Shift + 0

#define ALT_X   LALT(KC_X)          // Alt + x; mainly for Emacs

#define ZOOMIN  RCS(KC_PGUP)        // Ctrl + Shift + PgUp
#define ZOOMOUT RCS(KC_PGDN)        // Ctrl + Shift + PgDn

/* Macros for email IDs */
enum custom_keycodes {
  UCMAIL = SAFE_RANGE,
  GMAIL1,
  GMAIL2,
  PASSWD,
  NUMBER
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Layer 0
     * ,-------------------------------------------------------------------------------------.
     * |Esc/OS |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp  |
     * |------+------+------+------+------+-------------+------+------+------+------+--------|
     * |Tab/Sft|   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  | Enter |
     * |------+------+------+------+------+------|------+------+------+------+------+--------|
     * |Control|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  | Sft/" |
     * |------+------+------+------+------+------+------+------+------+------+------+--------|
     * |       |      |      |      |  1/[ |3/Spc |3/Spc |  2/] |      |      |      |       |
     * `-------------------------------------------------------------------------------------'
     */
    [0] = LAYOUT_planck_grid(
        LG_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,    KC_O,    KC_P,    KC_BSPC,
        LS_TAB,  KC_A,    KC_S,    KC_D,    KC_F,   KC_G,   KC_H,   KC_J,   KC_K,    KC_L,    KC_SCLN, KC_ENT,
        KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH, RS_QUOT,
        _______, _______, _______, _______, LAYER1, LAYER3, LAYER3, LAYER2, _______, _______, _______, _______
    ),

    /* Layer 1
     * ,-----------------------------------------------------------------------------------.
     * |  ~   |  1   |  2   |  3   |  4   |  5   |  6   |  7   |  8   |  9   |  0   | PgUp |
     * |------+------+------+------+------+-------------+------+------+------+------+------|
     * |      |      | Prev | Play | Next |GMAIL1|      |      |      |      |      | PgDn |
     * |------+------+------+------+------+------|------+------+------+------+------+------|
     * |      |      | Vol- | Mute | Vol+ |      |      |UCMAIL|      |      |      | Reset|
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |      |      |      |Space |Space |      |      |      |      |      |
     * `-----------------------------------------------------------------------------------'
     */
    [1] = LAYOUT_planck_grid (
        KC_TILD, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_PGUP,
        _______, _______, KC_MPRV, KC_MPLY, KC_MNXT, GMAIL1,  _______, _______, _______, _______, _______, KC_PGDN,
        _______, _______, KC_VOLD, KC_MUTE, KC_VOLU, _______, _______, UCMAIL,  _______, _______, _______, RESET,
        _______, _______, _______, _______, _______, KC_SPC,  KC_SPC,  _______, _______, _______, _______, _______
    ),

    /* Layer 2 
     * ,-----------------------------------------------------------------------------------.
     * |  `   |  !   |  @   |  #   |  $   |  %   |  ^   |  &   |  *   |  (   |  )   |PASSWD|
     * |------+------+------+------+------+-------------+------+------+------+------+------|
     * |      |      |      |      |      |GMAIL2| Left | Down |  Up  |Right |      |NUMBER|
     * |------+------+------+------+------+------|------+------+------+------+------+------|
     * |      |      |Alt+x |      |      |      |      |      |      |      |  \   |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |      |      | LAlt |Space |Space |      |      |      |      |      |
     * `-----------------------------------------------------------------------------------'
     */
    [2] = LAYOUT_planck_grid (
        KC_GRV,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_HASH, KC_CIRC, KC_AMPR,  KC_ASTR, KC_LPRN, KC_RPRN, PASSWD,
        _______, _______, _______, _______, _______, GMAIL2,  KC_LEFT, KC_DOWN,  KC_UP,   KC_RGHT, _______, NUMBER,
        _______, _______, ALT_X,   _______, _______, _______, _______, _______,  _______, _______, KC_BSLS, _______,
        _______, _______, _______, _______, KC_LALT, KC_SPC,  KC_SPC,  _______,  _______, _______, _______, _______
    ),
    
    /* Layer 3 
     * ,-----------------------------------------------------------------------------------.
     * |LGUI+0|LGUI+1|LGUI+2|LGUI+3|LGUI+4|LGUI+5|LGUI+6|LGUI+7|LGUI+8|LGUI+9|  -   |  =   |
     * |------+------+------+------+------+-------------+------+------+------+------+------|
     * |      |LAtl+1|LAtl+2|LAtl+3|LAtl+4|LAtl+5|LAtl+6|LAtl+7|LAtl+8|LAtl+9|  _   |  +   |
     * |------+------+------+------+------+------|------+------+------+------+------+------|
     * |      |LCAG+1|LCAG+1|LCAG+1|LCAG+1|LCAG+1|LCAG+1|LCAG+1|LCAG+1|LCAG+1|LCAG+1|      |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |      |      |      |      |      |      |      |      |      |      |
     * `-----------------------------------------------------------------------------------'
     */
    [3] = LAYOUT_planck_grid (
        SUPER_0, SUPER_1, SUPER_2, SUPER_3, SUPER_4, SUPER_5, SUPER_6, SUPER_7, SUPER_8, SUPER_9, KC_MINS, KC_EQL,
        _______, ALT_1,   ALT_2,   ALT_3,   ALT_4,   ALT_5,   ALT_6,   ALT_7,   ALT_8,   ALT_9,   KC_UNDS, KC_PLUS,
        _______, WKSPC11, WKSPC12, WKSPC13, WKSPC14, WKSPC15, WKSPC16, WKSPC17, WKSPC18, WKSPC19, WKSPC20, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ), 
    
    /* Layer 4 
     * ,-----------------------------------------------------------------------------------.
     * |Sshft0|Sshft1|Sshft2|Sshft3|Sshft4|Sshft5|Sshft6|Sshft7|Sshft8|Sshft9|      |Zoom+ |
     * |------+------+------+------+------+-------------+------+------+------+------+------|
     * |      |HYPR+1|HYPR+2|HYPR+3|HYPR+4|HYPR+5|HYPR+6|HYPR+7|HYPR+8|HYPR+9|HYPR+0|Zoom- |
     * |------+------+------+------+------+------|------+------+------+------+------+------|
     * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  | F10  | F11  | F12  |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |      |      |      |      |      |      |      |      |      |      |
     * `-----------------------------------------------------------------------------------'
     */
    [4] = LAYOUT_planck_grid (
        SSHIFT0, SSHIFT1, SSHIFT2, SSHIFT3, SSHIFT4, SSHIFT5, SSHIFT6, SSHIFT7, SSHIFT8, SSHIFT9, _______, ZOOMIN,
        _______, MVETO11, MVETO12, MVETO13, MVETO14, MVETO15, MVETO16, MVETO17, MVETO18, MVETO19, MVETO20, ZOOMOUT,
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ) 
};


void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, 1, 2, 4);
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
      case PASSWD:
        if (record->event.pressed) {
          // when PASSWD is pressed
          SEND_STRING ("aeem15@UC");
        } else {
          // when PASSWD is released
        }
        break;
      case NUMBER:
        if (record->event.pressed) {
          // when NUMBER is pressed
          SEND_STRING ("4088399849");
        } else {
          // when NUMBER is released
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
