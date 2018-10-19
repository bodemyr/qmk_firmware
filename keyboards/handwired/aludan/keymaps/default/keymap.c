#include "aludan.h"
#include "action_layer.h"
#include "eeconfig.h"
#include "process_unicode.h"
#include "quantum.h"
#include "fauxclicky.h"
#include "outputselect.h"
#include "led.h"
#define COUNT(x) (sizeof (x) / sizeof (*(x)))

// Fillers to make layering clearer
#define _______ KC_TRNS
#define XXXXXXX KC_NO
#define G(x) LGUI(x)
#define KC_WWWB KC_WWW_BACK
#define KC_WWWF KC_WWW_FORWARD

// hybrid right-alt & scroll lock (mapped to Compose in OS)
#define C_RALT MT(MOD_RALT, KC_SLCK)

// dual use right-shift & del key
// #define C_RSFT MT(MOD_RSFT, KC_DEL)

bool capslock = false;

extern keymap_config_t keymap_config;

// double-space layer
#define _SPACE _GUI

enum planck_keycodes {
  // layouts
  QWERTY = SAFE_RANGE,
  DVORAK,
  COLEMAK,
  WORKMAN,
  NORMAN,

  // layer switchers
  EMOJI,
  GUI,
  GREEK,

  // os switchers
  LINUX,
  WIN,
  OSX,

  // others
  LSPACE,
  RSPACE,
  GLOW,

  // stub
#ifndef FAUXCLICKY_ENABLE
  FC_TOG,
#endif
#ifndef MODULE_ADAFRUIT_BLE
  OUT_BT,
#endif
  RGBDEMO,
  KEYCODE_END
};

#define EMPTY MO(_EMPTY)
#define NUM MO(_NUM)
#define FUN MO(_FUN)
#define FUN0 LT(_FUN, KC_0)

// keymaps

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = KEYMAP_CUSTOM(
	KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC,
	KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
	KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_ENT,
  KC_TAB, KC_LSFT, KC_LALT, KC_LGUI, KC_BSPC, KC_SPC, MO(1), MO(2), KC_LCTL),

[1] = KEYMAP_CUSTOM(
	_______, _______, _______, _______, _______, _______, _______, KC_UP  , KC_MINS, KC_EQL, KC_RBRC,
	_______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, KC_BSLS,
	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
	_______, _______, _______, _______, KC_DEL, _______, _______, _______, _______),

[2] = KEYMAP_CUSTOM(
	OUT_USB, OUT_BT, _______, _______, _______, _______, _______, KC_7 , KC_8, KC_9, KC_RBRC,
	_______, _______, _______, _______, _______, _______, KC_LEFT, KC_4, KC_5, KC_6, KC_BSLS,
	_______, _______, _______, _______, _______, _______, KC_0, KC_1, KC_2, KC_3, _______,
	_______, _______, _______, _______, _______, _______, _______, _______, _______),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void matrix_init_user() {
  _delay_ms(500); // give time for usb to initialize

  // auto detect output on init
#ifdef MODULE_ADAFRUIT_BLE
  uint8_t output = auto_detect_output();
  if (output == OUTPUT_USB) {
    set_output(OUTPUT_USB);
  } else {
    set_output(OUTPUT_BLUETOOTH);
  }
#endif
}
