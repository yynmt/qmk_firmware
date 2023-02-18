// Copyright 2023 ◤◢◤◢◤◢◤◢ (@yynmt)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

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
                                RGB_MOD
    )
};
