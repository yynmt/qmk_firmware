// Copyright 2023 ◤◢◤◢◤◢◤◢ (@yynmt)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#ifdef AUDIO_ENABLE
#include "audio.h"

#define COIN E__NOTE(_A5), HD_NOTE(_E6)
float coin[][2] = SONG(COIN);
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
    ┌──┬──┬──┐┌──┬──┬──┐
    ├──┴──┴──┴┴──┴──┴──┤
    │                  │
    │                  │
    │                  │
    │                  │
    │                  │
    │                  │
    └──────────────────┘
    */

    [0] = LAYOUT(
        RGB_HUD, RGB_SAD, RGB_VAD,   RGB_HUI, RGB_SAI, RGB_VAI,
                                USER00
    ),
    [1] = LAYOUT(
        KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO,
                        KC_NO
    ),
    [2] = LAYOUT(
        KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO,
                        KC_NO
    ),
    [3] = LAYOUT(
        KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO,
                        KC_NO
    ),
    [4] = LAYOUT(
        KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO,
                        KC_NO
    ),
    [5] = LAYOUT(
        KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO,
                        KC_NO
    ),
    [6] = LAYOUT(
        KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO,
                        KC_NO
    ),
    [7] = LAYOUT(
        KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO,
                        KC_NO
    ),
    [8] = LAYOUT(
        KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO,
                        KC_NO
    ),
    [9] = LAYOUT(
        KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO,
                        KC_NO
    ),
    [10] = LAYOUT(
        KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO,
                        KC_NO
    ),
    [11] = LAYOUT(
        KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO,
                        KC_NO
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case USER00:
            if (record->event.pressed) {
            #ifdef AUDIO_ENABLE
                PLAY_SONG(coin);
            #endif
            }
            break;
        case USER01:
            if (record->event.pressed) {
                rgblight_toggle();
                #ifdef AUDIO_ENABLE
                PLAY_SONG(coin);
                #endif
            }
            break;
    }
    return true;
}
