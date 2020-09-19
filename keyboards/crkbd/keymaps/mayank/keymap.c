#include QMK_KEYBOARD_H


#ifdef RGBLIGHT_ENABLE
//Following line allows macro to read current RGB settings
extern rgblight_config_t rgblight_config;
#endif

extern uint8_t is_master;

#define _______ KC_TRNS

#define LG_ESC  LGUI_T(KC_ESC)        // Super key if held, Escape if tapped
#define LS_TAB  LSFT_T(KC_TAB)        // Shift if held, Tab if tapped

#define SUPER_1 LGUI(KC_1)            // Super/CMD + 1
#define SUPER_2 LGUI(KC_2)            // Super/CMD + 2
#define SUPER_3 LGUI(KC_3)            // Super/CMD + 3
#define SUPER_4 LGUI(KC_4)            // Super/CMD + 4
#define SUPER_5 LGUI(KC_5)            // Super/CMD + 5
#define SUPER_6 LGUI(KC_6)            // Super/CMD + 6
#define SUPER_7 LGUI(KC_7)            // Super/CMD + 7
#define SUPER_8 LGUI(KC_8)            // Super/CMD + 8
#define SUPER_9 LGUI(KC_9)            // Super/CMD + 9

#define W_PREV  LGUI(KC_LEFT)         // Move to previous workspace on Mac OS                                      
#define W_NEXT  LGUI(KC_RGHT)         // Move to next workspace on Mac OS                                      
#define M_CTRL  LALT(KC_UP)           // Open Mission Control on Mac OS
#define HLIGHT  LCTL(LGUI(KC_H))      // Highlight text in  Preview on Mac OS
#define SSHOT1  SGUI(KC_3)            // Screenshot entire screen on Mac OS
#define SSHOT2  SGUI(KC_4)            // Screenshot selected area on Mac OS

/* Macros for email IDs */
enum custom_keycodes {
  RGBRST = SAFE_RANGE,
  UCMAIL,
  GMAIL1,
  GMAIL2
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT ( \
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       LG_ESC,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       LS_TAB,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT,\
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                            MO(1),   MO(4),  KC_ENT,     KC_SPC,   MO(2),   MO(3)                                                  \
                                      //`--------------------------'  `--------------------------'

  ),

  [1] = LAYOUT ( \
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                      _______,  UCMAIL, KC_LPRN, KC_RPRN, KC_UNDS, KC_PLUS,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_TOG, _______, KC_MPRV, KC_MPLY, KC_MNXT,  GMAIL1,                      _______, _______, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, _______, KC_VOLD, KC_MUTE, KC_VOLD, _______,                      _______, _______, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR,\
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, KC_LBRC,    KC_RBRC, _______, _______                                                  \
                                      //`--------------------------'  `--------------------------'

  ),

  [2] = LAYOUT ( \
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_TILD, _______, _______, _______, _______, _______,                        KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______,  GMAIL2,                      KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, _______, _______,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, KC_BSLS,   RESET,\
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LALT, _______, _______,    _______, _______, _______                                                  \
                                      //`--------------------------'  `--------------------------'

  ),

  [3] = LAYOUT ( \
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       RGBRST, RGB_TOG,RGB_RMOD, RGB_MOD, RGB_HUD, RGB_HUI,                      _______, _______,    KC_9,    KC_0, KC_MINS,  KC_EQL,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, RGB_SAD, RGB_SAI, RGB_VAD, RGB_VAI, RGB_M_P,                      _______, _______,    KC_5,    KC_6,    KC_7,    KC_8,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, RGB_M_B, RGB_M_R,RGB_M_SW,RGB_M_SN, RGB_M_G,                      _______, _______,    KC_1,    KC_2,    KC_3,    KC_4,\
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, KC_LCBR,    KC_RCBR, _______, _______                                                  \
                                      //`--------------------------'  `--------------------------'

  ),

  [4] = LAYOUT ( \
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______, _______,  SSHOT1, _______, _______, _______,                      _______, _______, SUPER_9,  W_PREV,  M_CTRL,  W_NEXT,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, _______,  SSHOT2, _______, _______, _______,                       HLIGHT, _______, SUPER_5, SUPER_6, SUPER_7, SUPER_8,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, _______,                      _______, _______, SUPER_1, SUPER_2, SUPER_3, SUPER_4,\
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, KC_PGDN,    KC_PGUP, _______, _______                                                  \
                                      //`--------------------------'  `--------------------------'

  )
};

int RGB_current_mode;

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

// Setting ADJUST layer RGB back to default
void update_tri_layer_RGB(uint8_t layer1, uint8_t layer2, uint8_t layer3) {
  if (IS_LAYER_ON(layer1) && IS_LAYER_ON(layer2)) {
    layer_on(layer3);
  } else {
    layer_off(layer3);
  }
}

void matrix_init_user(void) {
    #ifdef RGBLIGHT_ENABLE
      RGB_current_mode = rgblight_config.mode;
    #endif
    //SSD1306 OLED init, make sure to add #define SSD1306OLED in config.h
    #ifdef SSD1306OLED
        iota_gfx_init(!has_usb());   // turns on the display
    #endif
}

//SSD1306 OLED update loop, make sure to add #define SSD1306OLED in config.h
#ifdef SSD1306OLED

// When add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

void matrix_scan_user(void) {
   iota_gfx_task();
}

void matrix_render_user(struct CharacterMatrix *matrix) {
  if (is_master) {
    // If you want to change the display of OLED, you need to change here
    matrix_write_ln(matrix, read_layer_state());
    matrix_write_ln(matrix, read_keylog());
    //matrix_write_ln(matrix, read_keylogs());
    //matrix_write_ln(matrix, read_mode_icon(keymap_config.swap_lalt_lgui));
    //matrix_write_ln(matrix, read_host_led_state());
    //matrix_write_ln(matrix, read_timelog());
  } else {
    matrix_write(matrix, read_logo());
  }
}

void matrix_update(struct CharacterMatrix *dest, const struct CharacterMatrix *source) {
  if (memcmp(dest->display, source->display, sizeof(dest->display))) {
    memcpy(dest->display, source->display, sizeof(dest->display));
    dest->dirty = true;
  }
}

void iota_gfx_task_user(void) {
  struct CharacterMatrix matrix;
  matrix_clear(&matrix);
  matrix_render_user(&matrix);
  matrix_update(&display, &matrix);
}
#endif//SSD1306OLED

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
#ifdef SSD1306OLED
    set_keylog(keycode, record);
#endif
    // set_timelog();
  }

  switch (keycode) {
    case RGB_MOD:
      #ifdef RGBLIGHT_ENABLE
        if (record->event.pressed) {
          rgblight_mode(RGB_current_mode);
          rgblight_step();
          RGB_current_mode = rgblight_config.mode;
        }
      #endif
      return false;
    case RGBRST:
      #ifdef RGBLIGHT_ENABLE
        if (record->event.pressed) {
          eeconfig_update_rgblight_default();
          rgblight_enable();
          RGB_current_mode = rgblight_config.mode;
        }
      #endif
      break;
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
  }
  return true;
}
