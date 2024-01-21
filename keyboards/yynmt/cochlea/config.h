// Copyright 2024 yynmt (@yynmt)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/* Encoder */
#ifdef ENCODER_ENABLE
#   define TAP_CODE_DELAY 10
#endif

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
