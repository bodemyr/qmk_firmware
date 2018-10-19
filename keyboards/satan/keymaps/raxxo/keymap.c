#include "satan.h"
#include "rgblight.h"

extern keymap_config_t keymap_config;
extern rgblight_config_t rgblight_config;

#define BASE    0    // Default layer
#define SPACE   1    // Space layer
#define NUMPAD  2    // Alt layer
#define CAPS    3    // Caps layer
#define FN1     4    // Generic function layer

#define MAC0 M(0) //
#define MAC1 M(1) //
#define MAC2 M(2) //
#define MAC3 M(3) //
#define MAC4 M(4) //
#define MAC5 M(5) //
#define MAC6 M(6) //
#define MAC7 M(7) //
#define MAC8 M(8) //
#define MAC9 M(9) //
#define GRAV KC_GRV //
#define MEDI F(FNO1)//

// General shortenings
#define ESCA KC_ESC
#define MINS KC_MINS
#define EQUL KC_EQL
#define BSPC KC_BSPC
#define DELE KC_DEL
#define LBRC KC_LBRC
#define RBRC KC_RBRC
#define ALTR KC_RALT
#define SCLN KC_SCLN
#define QUOT KC_QUOT
#define NUHS KC_NUHS
#define ENTE KC_ENT
#define NUBS KC_NUBS  // Less/ greater sign
#define COMM KC_COMM  // Comma
#define FSTO KC_DOT   // Full stop
#define SLSH KC_SLSH
#define ALTL KC_LALT
#define GUIL KC_LGUI
#define GUIR KC_RGUI
#define MENO KC_MENU

// Special Actions and Media Keys
#define INSE KC_INS   // Insert here
#define HOME KC_HOME  // Go to beginning of line
#define ENDI  KC_END  // go to end of line
#define PSCR  KC_PSCR   // Print Screen
#define SLCK  KC_SLCK   // go to end of line
#define PGDN  KC_PGDN   // go to end of line
#define PGUP  KC_PGUP   // go to end of line
#define PLPS KC_MPLY  // Play/Pause
#define PAUS KC_PAUS  // Pause button
#define MUTE KC_MUTE  // Mute sound
#define VOLU KC_VOLU  // Volume increase
#define VOLD KC_VOLD  // Volume decrease
#define MNXT KC_MNXT  // next track
#define MPRV KC_MPRV  // prev track
#define MSTP KC_MSTP  // stop playing
#define MSEL KC_MSEL  // Select media (Start playing it)
#define MAIL KC_MAIL  // Open default mail app
#define CALC KC_CALC  // Open default calculator app
#define MYCM KC_MYCM  // Open default file manager

#define KC_RST RESET
#define KC_BL_S BL_STEP
#define KC_DBUG DEBUG
#define KC_RTOG RGB_TOG
#define KC_RMOD RGB_MOD
#define KC_RHUI RGB_HUI
#define KC_RHUD RGB_HUD
#define KC_RSAI RGB_SAI
#define KC_RSAD RGB_SAD
#define KC_RVAI RGB_VAI
#define KC_RVAD RGB_VAD

// increase readability
#define _______  KC_TRNS
#define XXXXX    KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[ BASE ] = LAYOUT_60_iso( \
  KC_ESC,   KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,    KC_MINS, KC_EQL,      KC_BSPC, \
  KC_TAB,   KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,    KC_LBRC, KC_RBRC,    \
  MO(CAPS), KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN, KC_QUOT, KC_NUHS,     KC_ENT,  \
  KC_LSPO,  KC_NUBS,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT,  KC_SLSH,              KC_RSPC, \
  KC_LCTL,  KC_LGUI,KC_LALT,                    KC_SPC,                             KC_RALT, KC_RGUI, MO(FN1),     KC_RCTL),


[ CAPS ] = LAYOUT_60_iso( //Mostly mouse layer with option for caps too
  _______,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,    KC_F10, KC_F11, KC_F12,   DELE,\
  _______,  KC_MPRV, KC_MPLY, KC_MNXT, _______, _______, _______, HOME   , KC_UP,   ENDI,     PGUP,   _______, _______,\
  _______,  _______, VOLD,    VOLU,    _______, _______, _______, KC_LEFT, KC_DOWN, KC_RIGHT, PGDN,   _______, _______, _______,\
  KC_LSPO,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,\
  KC_LCTL,  KC_LGUI, KC_LALT,          _______,                                     _______, _______, _______, _______),


[ FN1 ] = LAYOUT_60_iso( //Functions/settings
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,\
  KC_RTOG,KC_RMOD,KC_RHUI,KC_RSAI,KC_RVAI,  _______, _______, _______, _______, _______, _______, _______, _______,\
  _______,KC_DBUG,KC_RHUD,KC_RSAD,KC_RVAD, _______, _______, _______, _______, _______, _______, _______, _______, _______,\
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,\
  _______, _______, _______,           _______,           _______, _______, _______, _______),
};
