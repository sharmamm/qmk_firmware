#include QMK_KEYBOARD_H

extern uint8_t is_master;

#define _______ KC_TRNS

#define LG_ESC  LGUI_T(KC_ESC)      // Super key if held, Escape if tapped
#define LS_TAB  LSFT_T(KC_TAB)      // Shift if held, Tab if tapped
#define RS_QUOT RSFT_T(KC_QUOT)     // Shift if held, quotation if tapped
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

#define ALT_1   LALT(KC_1)          // Alt + 1
#define ALT_2   LALT(KC_2)          // Alt + 2
#define ALT_3   LALT(KC_3)          // Alt + 3
#define ALT_4   LALT(KC_4)          // Alt + 4
#define ALT_5   LALT(KC_5)          // Alt + 5
#define ALT_6   LALT(KC_6)          // Alt + 6
#define ALT_7   LALT(KC_7)          // Alt + 7
#define ALT_8   LALT(KC_8)          // Alt + 8
#define ALT_9   LALT(KC_9)          // Alt + 9

#define ALT_X   LALT(KC_X)          // Alt + x: mainly for Emacs

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
  [0] = LAYOUT ( \
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       LG_ESC,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       LS_TAB,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_ENT, \
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, RS_QUOT,\
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                            MO(5),  LAYER1,   MO(3),     LAYER3,  LAYER2,   MO(4)                                                  \
                                      //`--------------------------'  `--------------------------'

  ),

  [1] = LAYOUT ( \
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_TILD,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_PGUP,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, _______, KC_MPRV, KC_MPLY, KC_MNXT,  GMAIL1,                      _______, _______, _______, _______, _______, KC_PGDN,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, _______, KC_VOLD, KC_MUTE, KC_VOLU, _______,                      _______,  UCMAIL, _______, _______, _______,   RESET,\
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______                                                  \
                                      //`--------------------------'  `--------------------------'

  ),

  [2] = LAYOUT ( \
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_GRV, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,  PASSWD,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______,  GMAIL2,                      KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, _______,  NUMBER,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, _______,   ALT_X, _______, _______, _______,                      _______, _______, _______, _______, KC_BSLS, _______,\
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______                                                  \
                                      //`--------------------------'  `--------------------------'

  ),

  [3] = LAYOUT (\
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      SUPER_0, SUPER_1, SUPER_2, SUPER_3, SUPER_4, SUPER_5,                      SUPER_6, SUPER_7, SUPER_8, SUPER_9, KC_MINS,  KC_EQL,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______,   ALT_1,   ALT_2,   ALT_3,   ALT_4,   ALT_5,                        ALT_6,   ALT_7,   ALT_8,   ALT_9, KC_UNDS, KC_PLUS,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, WKSPC11, WKSPC12, WKSPC13, WKSPC14, WKSPC15,                      WKSPC16, WKSPC17, WKSPC18, WKSPC19, WKSPC20, _______,\
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______                                                  \
                                      //`--------------------------'  `--------------------------'

  ),

  [4] = LAYOUT ( \
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      SSHIFT0, SSHIFT1, SSHIFT2, SSHIFT3, SSHIFT4, SSHIFT5,                      SSHIFT6, SSHIFT7, SSHIFT8, SSHIFT9, _______,  ZOOMIN,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, MVETO11, MVETO12, MVETO13, MVETO14, MVETO15,                      MVETO16, MVETO17, MVETO18, MVETO19, MVETO20, ZOOMOUT,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                        KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,\
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______                                                  \
                                      //`--------------------------'  `--------------------------'

  ),

  [5] = LAYOUT ( \
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, RGB_TOG, RGB_HUD, RGB_HUI, RGB_M_R,RGB_M_SW,                      RGB_M_P, _______, _______, _______, _______, _______,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, _______, RGB_SAD, RGB_SAI, RGB_VAD, RGB_VAI,                      RGB_SPD, RGB_SPI, _______, _______, _______, _______,\
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______                                                  \
                                      //`--------------------------'  `--------------------------'

  )
};

#ifdef OLED_DRIVER_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    //if (is_keyboard_master()) {
    //    return OLED_ROTATION_270;
    //} else {
    //    return OLED_ROTATION_270;
    //}
    return OLED_ROTATION_270;
}

void render_crkbd_logo(void) {
    static const char PROGMEM crkbd_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4,
        0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4, 0};
    //static const char PROGMEM crkbd_logo[] = {
    //    0x80, 0x81, 0x82, 0x83, 0x84,
    //    0xa0, 0xa1, 0xa2, 0xa3, 0xa4,
    //    0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0};
    oled_write_P(crkbd_logo, false);
    //oled_write_P(PSTR("corne"), false);
}

#    define KEYLOG_LEN 5
char     keylog_str[KEYLOG_LEN] = {};
uint8_t  keylogs_str_idx        = 0;
uint16_t log_timer              = 0;

const char code_to_name[60] = {
    ' ', ' ', ' ', ' ', 'a', 'b', 'c', 'd', 'e', 'f',
    'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
    'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
    '1', '2', '3', '4', '5', '6', '7', '8', '9', '0',
    'R', 'E', 'B', 'T', '_', '-', '=', '[', ']', '\\',
    '#', ';', '\'', '`', ',', '.', '/', ' ', ' ', ' '};

void add_keylog(uint16_t keycode) {
    if ((keycode >= QK_MOD_TAP && keycode <= QK_MOD_TAP_MAX) || (keycode >= QK_LAYER_TAP && keycode <= QK_LAYER_TAP_MAX)) {
        keycode = keycode & 0xFF;
    }

    for (uint8_t i = KEYLOG_LEN - 1; i > 0; i--) {
        keylog_str[i] = keylog_str[i - 1];
    }
    if (keycode < 60) {
        keylog_str[0] = code_to_name[keycode];
    }
    keylog_str[KEYLOG_LEN - 1] = 0;

    log_timer = timer_read();
}

void update_log(void) {
    if (timer_elapsed(log_timer) > 750) {
        add_keylog(0);
    }
}

void render_keylogger_status(void) {
    oled_write_P(PSTR("KLogr"), false);
    oled_write(keylog_str, false);
}

void render_default_layer_state(void) {
    oled_write_P(PSTR("Lyout"), false);
    switch (get_highest_layer(default_layer_state)) {
        case 0:
            oled_write_P(PSTR("Lyr 0"), false);
            break;
    }
}

void render_layer_state(void) {
    oled_write_P(PSTR("LAYER"), false);
    oled_write_P(PSTR("Lyr 1"), layer_state_is(1));
    oled_write_P(PSTR("Lyr 2"), layer_state_is(2));
    oled_write_P(PSTR("Lyr 3"), layer_state_is(3));
    oled_write_P(PSTR("Lyr 4"), layer_state_is(4));
}

void render_mod_status(uint8_t modifiers) {
    oled_write_P(PSTR("Mods:"), false);
    oled_write_P(PSTR(" "), false);
    oled_write_P(PSTR("S"), (modifiers & MOD_MASK_SHIFT));
    oled_write_P(PSTR("C"), (modifiers & MOD_MASK_CTRL));
    oled_write_P(PSTR("A"), (modifiers & MOD_MASK_ALT));
    oled_write_P(PSTR("G"), (modifiers & MOD_MASK_GUI));
}

void render_wtf(void){
    oled_write_P(PSTR("WHAT "), false);
    oled_write_P(PSTR("     "), false);
    oled_write_P(PSTR(" THE "), false);
    oled_write_P(PSTR("     "), false);
    oled_write_P(PSTR("FUCK?"), false);
}

void render_status_main(void) {
    /* Show Keyboard Layout  */
    render_default_layer_state();
    render_layer_state();
    render_mod_status(get_mods());
    render_keylogger_status();
}

void oled_task_user(void) {
    update_log();
    if (is_master) {
        render_status_main();  // Renders the current keyboard state (layer, lock, caps, scroll, etc)
    } else {
        render_status_main();
        //render_wtf();
        //render_crkbd_logo();
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
      add_keylog(keycode);
  }

  switch (keycode) {
    case UCMAIL:
      if (record->event.pressed) {
        //when UCMAIL is pressed
        SEND_STRING ("sharmamm@mail.uc.edu");
      } else {
        // when UCMAIL is released
      }
      break;
    case GMAIL1:
      if (record->event.pressed) {
        //when GMAIL1 is pressed
        SEND_STRING ("mayanksharma1806@gmail.com");
      } else {
        // when GMAIL1 is released
      }
      break;
    case GMAIL2:
      if (record->event.pressed) {
        //when GMAIL2 is pressed
        SEND_STRING ("onlyforotherapps2016@gmail.com");
      } else {
        // when GMAIL2 is released
      }
      break;
    case PASSWD:
      if (record->event.pressed) {
        //when PASSWD is pressed
        SEND_STRING ("aeem15@UC");
      } else {
        // when PASSWD is released
      }
      break;
    case NUMBER:
      if (record->event.pressed) {
        //when NUMBER is pressed
        SEND_STRING ("4088399849");
      } else {
        // when NUMBER is released
      }
      break;
  }
  return true;
}
#endif
