// Copyright 2021 ◤◢◤◢◤◢◤◢ (@yynmt)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0x04D8
#define PRODUCT_ID   0xE88D
#define DEVICE_VER   0x0001
#define MANUFACTURER yynmt
#define PRODUCT      daditto

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 13

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */


#define MATRIX_ROW_PINS { C4, B3, D3, D2 }
#define MATRIX_COL_PINS { C6, C7, B7, B6, B5, B4, B2, B1, B0, D6, D5, D4, D1 }
#define UNUSED_PINS

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Audio */
#define AUDIO_PIN C5
#define AUDIO_CLICKY

/* Encoder */
#define ENCODERS 1

#define ENCODERS_PAD_A { D0 }
#define ENCODERS_PAD_B { C2 }

#define ENCODERS_CW_KEY  { { 4, 3 } }
#define ENCODERS_CCW_KEY { { 5, 3 } }

/*
 * Split Keyboard specific options, make sure you have 'SPLIT_KEYBOARD = yes' in your rules.mk, and define SOFT_SERIAL_PIN.
 */
// #define SOFT_SERIAL_PIN D0  // or D1, D2, D3, E6

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* define if matrix has ghost (lacks anti-ghosting diodes) */
//#define MATRIX_HAS_GHOST

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* If defined, GRAVE_ESC will always act as ESC when CTRL is held.
 * This is useful for the Windows task manager shortcut (ctrl+shift+esc).
 */
//#define GRAVE_ESC_CTRL_OVERRIDE

/*
 * Force NKRO
 *
 * Force NKRO (nKey Rollover) to be enabled by default, regardless of the saved
 * state in the bootmagic EEPROM settings. (Note that NKRO must be enabled in the
 * makefile for this to work.)
 *
 * If forced on, NKRO can be disabled via magic key (default = LShift+RShift+N)
 * until the next keyboard reset.
 *
 * NKRO may prevent your keystrokes from being detected in the BIOS, but it is
 * fully operational during normal computer usage.
 *
 * For a less heavy-handed approach, enable NKRO via magic key (LShift+RShift+N)
 * or via bootmagic (hold SPACE+N while plugging in the keyboard). Once set by
 * bootmagic, NKRO mode will always be enabled until it is toggled again during a
 * power-up.
 *
 */
//#define FORCE_NKRO

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

/* disable these deprecated features by default */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

/* Bootmagic Lite key configuration */
//#define BOOTMAGIC_LITE_ROW 0
//#define BOOTMAGIC_LITE_COLUMN 0

#ifdef ODE_TO_JOY
  #undef ODE_TO_JOY
  #define ODE_TO_JOY
#endif

#ifdef ROCK_A_BYE_BABY
  #undef ROCK_A_BYE_BABY
  #define ROCK_A_BYE_BABY
#endif

#ifdef CLUEBOARD_SOUND
  #undef CLUEBOARD_SOUND
  #define CLUEBOARD_SOUND
#endif

#ifdef STARTUP_SOUND
  #undef STARTUP_SOUND
  #define STARTUP_SOUND
#endif

#ifdef GOODBYE_SOUND
  #undef GOODBYE_SOUND
  #define GOODBYE_SOUND
#endif

#ifdef PLANCK_SOUND
  #undef PLANCK_SOUND
  #define PLANCK_SOUND
#endif

#ifdef PREONIC_SOUND
  #undef PREONIC_SOUND
  #define PREONIC_SOUND
#endif

#ifdef QWERTY_SOUND
  #undef QWERTY_SOUND
  #define QWERTY_SOUND
#endif

#ifdef COLEMAK_SOUND
  #undef COLEMAK_SOUND
  #define COLEMAK_SOUND
#endif

#ifdef DVORAK_SOUND
  #undef DVORAK_SOUND
  #define DVORAK_SOUND
#endif

#ifdef WORKMAN_SOUND
  #undef WORKMAN_SOUND
  #define WORKMAN_SOUND
#endif

#ifdef PLOVER_SOUND
  #undef PLOVER_SOUND
  #define PLOVER_SOUND
#endif

#ifdef PLOVER_GOODBYE_SOUND
  #undef PLOVER_GOODBYE_SOUND
  #define PLOVER_GOODBYE_SOUND
#endif

#ifdef AUDIO_ON_SOUND
  #undef AUDIO_ON_SOUND
  #define AUDIO_ON_SOUND
#endif

#ifdef AUDIO_OFF_SOUND
  #undef AUDIO_OFF_SOUND
  #define AUDIO_OFF_SOUND
#endif

#ifdef MUSIC_SCALE_SOUND
  #undef MUSIC_SCALE_SOUND
  #define MUSIC_SCALE_SOUND
#endif

#ifdef MUSIC_OFF_SOUND
  #undef MUSIC_OFF_SOUND
  #define MUSIC_OFF_SOUND
#endif

#ifdef VOICE_CHANGE_SOUND
  #undef VOICE_CHANGE_SOUND
  #define VOICE_CHANGE_SOUND
#endif

#ifdef CHROMATIC_SOUND
  #undef CHROMATIC_SOUND
  #define CHROMATIC_SOUND
#endif

#ifdef MAJOR_SOUND
  #undef MAJOR_SOUND
  #define MAJOR_SOUND
#endif

#ifdef MINOR_SOUND
  #undef MINOR_SOUND
  #define MINOR_SOUND
#endif

#ifdef GUITAR_SOUND
  #undef GUITAR_SOUND
  #define GUITAR_SOUND
#endif

#ifdef VIOLIN_SOUND
  #undef VIOLIN_SOUND
  #define VIOLIN_SOUND
#endif

#ifdef CAPS_LOCK_ON_SOUND
  #undef CAPS_LOCK_ON_SOUND
  #define CAPS_LOCK_ON_SOUND
#endif

#ifdef CAPS_LOCK_OFF_SOUND
  #undef CAPS_LOCK_OFF_SOUND
  #define CAPS_LOCK_OFF_SOUND
#endif

#ifdef SCROLL_LOCK_ON_SOUND
  #undef SCROLL_LOCK_ON_SOUND
  #define SCROLL_LOCK_ON_SOUND
#endif

#ifdef SCROLL_LOCK_OFF_SOUND
  #undef SCROLL_LOCK_OFF_SOUND
  #define SCROLL_LOCK_OFF_SOUND
#endif

#ifdef NUM_LOCK_ON_SOUND
  #undef NUM_LOCK_ON_SOUND
  #define NUM_LOCK_ON_SOUND
#endif

#ifdef NUM_LOCK_OFF_SOUND
  #undef NUM_LOCK_OFF_SOUND
  #define NUM_LOCK_OFF_SOUND
#endif

#ifdef AG_NORM_SOUND
  #undef AG_NORM_SOUND
  #define AG_NORM_SOUND
#endif

#ifdef AG_SWAP_SOUND
  #undef AG_SWAP_SOUND
  #define AG_SWAP_SOUND
#endif

#ifdef UNICODE_WINDOWS
  #undef UNICODE_WINDOWS
  #define UNICODE_WINDOWS
#endif

#ifdef UNICODE_LINUX
  #undef UNICODE_LINUX
  #define UNICODE_LINUX
#endif

#ifdef TERMINAL_SOUND
  #undef TERMINAL_SOUND
  #define TERMINAL_SOUND
#endif

#ifdef CAMPANELLA
  #undef CAMPANELLA
  #define CAMPANELLA
#endif

#ifdef FANTASIE_IMPROMPTU
  #undef FANTASIE_IMPROMPTU
  #define FANTASIE_IMPROMPTU
#endif

#ifdef NOCTURNE_OP_9_NO_1
  #undef NOCTURNE_OP_9_NO_1
  #define NOCTURNE_OP_9_NO_1
#endif

#ifdef USSR_ANTHEM
  #undef USSR_ANTHEM
  #define USSR_ANTHEM
#endif

#ifdef MUSIC_ON_SOUND
  #undef MUSIC_ON_SOUND
  #define MUSIC_ON_SOUND
#endif
