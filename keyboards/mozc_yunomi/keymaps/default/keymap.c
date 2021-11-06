/* Copyright 2021 yynmt
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

#ifdef AUDIO_ENABLE
  #include "audio.h"
#endif

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _OPT
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        MO(_OPT), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
    ),
    [_OPT] = LAYOUT(
        KC_NO, RGB_TOG, KC_NO, MU_TOG, CK_TOGG, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, RGB_MOD, RGB_RMOD, MU_MOD, CK_UP, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, RGB_HUI, RGB_HUD, KC_NO, CK_DOWN, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, RGB_SAI, RGB_SAD, KC_NO, CK_RST, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_TRNS, RGB_VAI, RGB_VAD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
    )
};

#ifdef AUDIO_ENABLE
float music_scale[][2]     = SONG(MUSIC_SCALE_SOUND);
#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    return true;
}

void matrix_init_user(void) {
    #ifdef AUDIO_ENABLE
        startup_user();
    #endif
}

#ifdef AUDIO_ENABLE

void startup_user()
{
    _delay_ms(50); // gets rid of tick
}

void shutdown_user()
{
    _delay_ms(150);
    stop_all_notes();
}

void music_on_user(void)
{
    music_scale_user();
}

void music_scale_user(void)
{
    PLAY_SONG(music_scale);
}

#endif

void keyboard_post_init_user(void) {
    rgblight_enable();
    audio_on();
}
