#include "aludan.h"
#include "analog.h"
#include "timer.h"
#include "matrix.h"
#include "musical_notes.h"

float fauxclicky_pressed_note[2] = MUSICAL_NOTE(_A4, 0.0625);
float fauxclicky_released_note[2] = MUSICAL_NOTE(_A4, 0.0625);
float fauxclicky_beep_note[2] = MUSICAL_NOTE(_C6, 0.25);


void matrix_init_kb(void) {
	matrix_init_user();
}

void matrix_scan_kb(void) {
    matrix_scan_user();
}

__attribute__ ((weak))
void led_set_user(uint8_t usb_led) {
}
