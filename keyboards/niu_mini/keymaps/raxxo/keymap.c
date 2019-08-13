#include QMK_KEYBOARD_H

// readability
#define _______ KC_TRNS
#define XXXXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT_ortho_4x12(
		KC_TAB       , KC_Q,    KC_W,    KC_E,    KC_R,  KC_T,    KC_Y,   KC_U,  KC_I,    KC_O,    KC_P,    KC_LBRC,
		LT(3, KC_ESC), KC_A,    KC_S,    KC_D,    KC_F,  KC_G,    KC_H,   KC_J,  KC_K,    KC_L,    KC_SCLN, KC_QUOT,
		KC_LSFT      , KC_Z,    KC_X,    KC_C,    KC_V,  KC_B,    KC_N,   KC_M,  KC_COMM, KC_DOT,  KC_SLSH,  KC_ENT,
		_______      , KC_LCTL, KC_LALT, KC_LGUI, MO(1), KC_BSPC, KC_SPC, MO(2), KC_RALT, KC_RGUI, KC_RCTL, KC_RBRC
  ),

	[1] = LAYOUT_ortho_4x12(
		KC_GRV , _______, _______, _______, _______, _______, _______, _______, _______, KC_MINS, KC_EQL ,  KC_DEL,
		_______, KC_EXLM, KC_AT  , KC_HASH, KC_DLR , KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
		_______, KC_NUBS, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		RESET  , _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
	),

	[2] = LAYOUT_ortho_4x12(
 		_______, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______, _______, _______, KC_UP  , KC_UNDS, KC_EQL ,  KC_DEL,
 		_______, _______, KC_VOLD, KC_VOLU, _______, _______, KC_PGUP, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_BSLS,
 		_______, KC_NUBS, _______, _______, _______, _______, KC_PGDN, KC_HOME, KC_END , _______, _______, _______,
 		RGB_TOG, _______, _______, _______, _______, _______, _______, _______, _______, RGB_HUD, RGB_HUI, RGB_MOD
 	),

	[3] = LAYOUT_ortho_4x12(
		_______,  KC_1  , KC_2   , KC_3   , KC_4   , KC_5      , KC_6      , KC_7   , KC_8   , KC_9   , KC_0   , KC_BSPC,
		_______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , LSFT(KC_8), LSFT(KC_9), KC_F5  , KC_F6  , KC_F7  , KC_F8  , _______,
		_______, KC_F9  , KC_F10 , KC_F11 , KC_F12 , RALT(KC_8), RALT(KC_9), _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, RALT(KC_7), RALT(KC_0), _______, _______, _______, _______, _______
	)
};


void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_KANA)) {

	} else {

	}

}
