/* Copyright (C) 2023 jonylee@hfd
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

enum __layers {
    WIN_B,
    WIN_W,
    WIN_FN,
    MAC_B,
    MAC_W,
    MAC_FN
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [WIN_B] = LAYOUT_tkl_ansi( /* Base */
		KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,           KC_PSCR, KC_SCRL, KC_PAUS,
		KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_INS,  KC_HOME, KC_PGUP,
		KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL,  KC_END,  KC_PGDN,
		KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
		KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,                   KC_RSFT,          KC_UP,
		KC_LCTL, KC_LGUI, KC_LALT,                   KC_SPC,                             KC_RALT, KC_RGUI, MO(WIN_FN),       KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT),

    [WIN_W] = LAYOUT_tkl_ansi( /* Base */
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, KC_UP,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                   _______,          KC_W,
		_______, _______, _______,                   _______,                            _______, _______, MO(WIN_FN),       _______, KC_A,    KC_S,    KC_D),


    [WIN_FN] = LAYOUT_tkl_ansi( /* FN */
	    _______, KC_MYCM, KC_MAIL, KC_WSCH, KC_WHOM, KC_MSEL, KC_MPLY, KC_MPRV, KC_MNXT, _______,_______,  _______, _______,          _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_SPD, RGB_SPI, _______, _______, _______, _______,
		_______, _______,TG(WIN_W),_______, _______, _______, _______, _______, _______, DF(MAC_B),_______,_______, _______, RGB_MOD, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_TOG, _______, _______,          RGB_HUI,
		_______, _______, _______, KC_CALC, _______, _______, _______, KC_MUTE, KC_VOLD, KC_VOLU, _______,                   _______,          RGB_VAI,
		_______, GU_TOGG, _______,                   _______,                            _______, _______, _______,          _______, RGB_SAD, RGB_VAD, RGB_SAI),

    [MAC_B] = LAYOUT_tkl_ansi( /* Base */
		KC_ESC,  KC_BRID, KC_BRIU, KC_MCTL, KC_LPAD, KC_F5,   KC_F6,   KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU,          KC_PSCR, KC_SCRL, KC_PAUS,
		KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_INS,  KC_HOME, KC_PGUP,
		KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL,  KC_END,  KC_PGDN,
		KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
		KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,                   KC_RSFT,          KC_UP,
		KC_LCTL, KC_LALT, KC_LGUI,                   KC_SPC,                             KC_RGUI, KC_RALT, MO(MAC_FN),       KC_RCTL, KC_LEFT, KC_DOWN,   KC_RGHT),

    [MAC_W] = LAYOUT_tkl_ansi( /* Base */
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, KC_UP,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                   _______,          KC_W,
		_______, _______, _______,                   _______,                            _______, _______, MO(MAC_FN),       _______, KC_A,    KC_S,    KC_D),
    [MAC_FN] = LAYOUT_tkl_ansi( /* FN */
		KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,  _______,  _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,           _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_SPD, RGB_SPI, _______, _______, _______, _______,
		_______, _______,TG(MAC_W),_______, _______, _______, _______, _______, _______, DF(WIN_B),_______,_______, _______, RGB_MOD, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_TOG, _______, _______,          RGB_HUI,
		_______, _______, _______, KC_CALC, _______, _______, _______, KC_MUTE, KC_VOLD, KC_VOLU, _______,                   _______,          RGB_VAI,
		_______, _______, _______,                   _______,                            _______, _______, _______,          _______, RGB_SAD, RGB_VAD, RGB_SAI)
};
// clang-format on

#define CAPS_LOCK_LED_INDEX 50
#define SCRLK_LED_INDEX 14
#define GUI_LEFT 77
#define GUI_RIGHT 81
#define INDICATOR_HSV 255, 0, 0
#define INDICATOR_OFF 0, 0, 0

void matrix_scan_user(void) {
    static bool prev_no_gui_status = false;
    if(keymap_config.no_gui != prev_no_gui_status) {
        if(keymap_config.no_gui) {
            rgb_matrix_set_color(GUI_LEFT, INDICATOR_HSV);
            rgb_matrix_set_color(GUI_RIGHT, INDICATOR_HSV);
        } else {
            rgb_matrix_set_color(GUI_LEFT, INDICATOR_OFF);
            rgb_matrix_set_color(GUI_RIGHT, INDICATOR_OFF);
        }
        prev_no_gui_status = keymap_config.no_gui;
    }
}

bool led_update_kb(led_t led_state) {
    static led_t prev_state = { .raw = 0 };
    if(prev_state.caps_lock != led_state.caps_lock) {
        if(led_state.caps_lock) {
            rgb_matrix_set_color(CAPS_LOCK_LED_INDEX, INDICATOR_HSV);
        } else {
            rgb_matrix_set_color(CAPS_LOCK_LED_INDEX, INDICATOR_OFF);
        }
    }
    if(prev_state.scroll_lock != led_state.scroll_lock) {
        if(led_state.scroll_lock) {
            rgb_matrix_set_color(SCRLK_LED_INDEX, INDICATOR_HSV);
        } else {
            rgb_matrix_set_color(SCRLK_LED_INDEX, INDICATOR_OFF);
        }
    }
    prev_state = led_state;
    return true;
}

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    led_t led_state = host_keyboard_led_state();
    if(led_min <= CAPS_LOCK_LED_INDEX && CAPS_LOCK_LED_INDEX < led_max && led_state.caps_lock) {
        rgb_matrix_set_color(CAPS_LOCK_LED_INDEX, INDICATOR_HSV);
    }
    if(led_min <= SCRLK_LED_INDEX && SCRLK_LED_INDEX < led_max && led_state.scroll_lock) {
        rgb_matrix_set_color(SCRLK_LED_INDEX, INDICATOR_HSV);
    }
    if(led_min <= GUI_LEFT && GUI_LEFT < led_max && keymap_config.no_gui) {
        rgb_matrix_set_color(GUI_LEFT, INDICATOR_HSV);
    }
    if(led_min <= GUI_RIGHT && GUI_RIGHT < led_max && keymap_config.no_gui) {
        rgb_matrix_set_color(GUI_RIGHT, INDICATOR_HSV);
    }
    return false;
}
