/* Copyright 2018 REPLACE_WITH_YOUR_NAME
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


#define LWR 1
#define RSE 2

#define _______ KC_TRNS

enum my_keycodes {
  QUERTY = SAFE_RANGE,
  LOWER,
  RAISE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT( /* Base */
  KC_ESC , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                 KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_BSPC, \
  KC_TAB , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                 KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_LBRC, \
  KC_LCTL, KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,                 KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,KC_QUOT, \
  KC_LSFT, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,KC_LGUI,KC_ENT , KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH,KC_RBRC, \
                                  KC_LALT, LOWER , KC_SPC, KC_SPC, RAISE , KC_RALT
),
[LWR] = LAYOUT(
  KC_TILD, KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                 KC_F6 , KC_F7 , KC_F8 ,KC_MINS, KC_EQL ,KC_DEL ,
  _______,KC_MPRV,KC_MPLY,KC_MNXT,_______,_______,                _______,KC_HOME, KC_UP ,KC_END ,KC_PGUP,_______,
  _______,_______,KC_VOLD,KC_VOLU,_______,_______,                _______,KC_LEFT,KC_DOWN,KC_RGHT,KC_PGDN,KC_BSLS,
  _______,KC_NUBS,_______,_______,_______,_______,KC_LGUI,RGB_HUI,RGB_SAI,RGB_VAI,RGB_HUI,_______,RGB_MOD,RGB_TOG,
                                  KC_LALT,_______,_______,RGB_HUD,RGB_SAD,RGB_VAD
),
[RSE] = LAYOUT(
  KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                 KC_F6 , KC_F7 , KC_F8 ,KC_UNDS,KC_EQL ,KC_DEL ,
  _______,KC_EXLM, KC_AT ,KC_HASH,KC_DLR ,KC_PERC,                KC_CIRC,KC_HOME,KC_UP ,KC_END ,KC_PGUP,_______,
  _______,KC_MPRV,KC_MNXT,KC_VOLU,KC_PGUP,KC_UNDS,                 KC_EQL,KC_LEFT,KC_DOWN,KC_RGHT,KC_PGDN,KC_BSLS,
  _______,KC_NUBS,KC_MPLY,KC_VOLD,KC_PGDN,KC_MINS,_______,_______,KC_PLUS,KC_END , KC_F9 ,KC_F10 ,KC_F11 ,KC_F12 ,
                                  _______,_______,_______,_______,_______,_______
)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case LOWER:
      if (record->event.pressed) {
        layer_on(LWR);
      } else {
        layer_off(LWR);
      }
      return false;
    case RAISE:
      if (record->event.pressed) {
        layer_on(RSE);
      } else {
        layer_off(RSE);
      }
      return false;
    default:
      return true; // Process all other keycodes normally
  }
}
