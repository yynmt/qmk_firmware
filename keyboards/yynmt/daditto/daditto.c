// Copyright 2021 ◤◢◤◢◤◢◤◢ (@yynmt)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "daditto.h"

void matrix_scan_kb(void) {
    encoder_action_unregister();
    matrix_scan_user();
}

bool encoder_update_kb(uint8_t index, bool clockwise) {
//    if (!encoder_update_user(index, clockwise)) return false;
    encoder_action_register(index, clockwise);
    return true;
};
