// Copyright 2023 ◤◢◤◢◤◢◤◢ (@yynmt)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#ifdef AUDIO_ENABLE
#include "audio.h"

#define COIN_SND E__NOTE(_A5), HD_NOTE(_E6)
#define PUZZLE_SND Q__NOTE(_G5), Q__NOTE(_FS5), Q__NOTE(_F5), Q__NOTE(_CS5), Q__NOTE(_C5), Q__NOTE(_E5), Q__NOTE(_G5), HD_NOTE(_B5)
float coin[][2] = SONG(COIN_SND);
float zelda_puzzle[][2] = SONG(PUZZLE_SND);
#endif

enum custom_keycodes {
    QWERTY = SAFE_RANGE,
    COIN
};

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
                                COIN
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case COIN:
            if (record->event.pressed) {
                #ifdef AUDIO_ENABLE
                PLAY_SONG(coin);
                #endif
            }
            break;
    }
    return true;
}

void keyboard_post_init_user(void) {
    rgblight_enable();
    rgblight_mode(RGBLIGHT_MODE_SNAKE+5);
}
