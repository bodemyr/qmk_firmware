/* Copyright 2017 Wunder
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
#include "xd75.h"

// Layer shorthand
#define _QW 0
#define _FN 1
#define _GN 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * | ESC    | 1      | 2      | 3      | 4      | 5      | -      | `      | =      | 6      | 7      | 8      | 9      | 0      | BACKSP |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
 * | TAB    | Q      | W      | E      | R      | T      | [      | \      | ]      | Y      | U      | I      | O      | P      | '      |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
 * | CAP LK | A      | S      | D      | F      | G      | HOME   | DEL    | PG UP  | H      | J      | K      | L      | ;      | ENTER  |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
 * | LSHIFT | Z      | X      | C      | V      | B      | END    | UP     | PG DN  | N      | M      | ,      | .      | /      | RSHIFT |
 * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|
 * | LCTRL  | LGUI   | LALT   | FN     | SPACE  | SPACE  | LEFT   | DOWN   | RIGHT  | SPACE  | SPACE  | FN     | RALT   | RGUI   | RCTRL  |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

 [_QW] = { /* QWERTY */
  { KC_ESC,     KC_1,    KC_2,    KC_3,    KC_4,   KC_5,          KC_NUBS, _______,    LSFT(KC_NUBS),   KC_6,    KC_7,  KC_8,    KC_9,    KC_0,    KC_BSPC },
  { KC_TAB,     KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,       LSFT(KC_8), _______,       LSFT(KC_9),   KC_Y,    KC_U,  KC_I,    KC_O,    KC_P,    KC_LBRC },
  { MO(_FN),    KC_A,    KC_S,    KC_D,    KC_F,   KC_G,       RALT(KC_8), _______,       RALT(KC_9),   KC_H,    KC_J,  KC_K,    KC_L,    KC_SCLN, KC_QUOT },
  { KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,   KC_B,       RALT(KC_7),   KC_UP,       RALT(KC_0),   KC_N,    KC_M,  KC_COMM, KC_DOT,  KC_SLSH, KC_ENT  },
  { _______, KC_LCTL, KC_LALT, KC_LGUI, MO(_FN), KC_SPC,          KC_LEFT, KC_DOWN,          KC_RGHT, KC_SPC, MO(_GN),  KC_RALT, KC_RGUI, KC_RCTL, KC_RBRC },
 },

/* FUNCTION
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * | F1     | F2     | F3     | F4     | F5     | F6     | NUM LK | P/     | P*     | F7     | F8     | F9     | F10    | F11    | F12    |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | SELECT | CALC   | MYCOMP | MAIL   | RGB HD | RGB HI | P7     | P8     | P9     | -      |        |        | PR SCR | SCR LK | PAUSE  |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | PREV   | PLAY   | NEXT   | STOP   | RGB SD | RGB SI | P4     | P5     | P6     | +      |        | RESET  |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | VOL-   | MUTE   | VOL+   | APP    | RGB VD | RGB VI | P1     | P2     | P3     | PENT   |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        | RGB TG | FN     | RGB RMD| RGB MD | P0     |        | P.     | PENT   | PENT   | FN     |        |        |        |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

 [_FN] = { /* FUNCTION */
  {   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12, KC_MINS, KC_EQL , KC_DEL   },
  { _______, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______,    KC_7,    KC_8,    KC_9, _______, KC_HOME, KC_UP  , KC_END , KC_PGUP, _______  },
  { _______, _______, KC_VOLD, KC_VOLU, _______, _______,    KC_4,    KC_5,    KC_6, _______, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_BSLS  },
  { _______, KC_NUBS, _______, _______, _______, _______,    KC_1,    KC_2,    KC_3, _______, _______, _______, _______, _______, _______  },
  { RGB_TOG, _______, _______, _______, _______,  KC_DEL, _______,    KC_0, _______, KC_BSPC, _______, _______, _______, _______, RESET    },
},

[_GN] = { /* FUNCTION */
 {   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12, KC_UNDS, KC_EQL , KC_DEL   },
 { _______, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______, _______, _______, _______, _______, KC_HOME, KC_UP  , KC_END , KC_PGUP, _______  },
 { _______, _______, KC_VOLD, KC_VOLU, _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_BSLS  },
 { _______, KC_NUBS, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______  },
 { RGB_TOG, _______, _______, _______, _______,  KC_DEL, _______, _______, _______, _______, _______, _______, _______, _______, RESET    },
}
};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
            #ifdef BACKLIGHT_ENABLE
              backlight_step();
            #endif
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};
