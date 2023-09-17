// Copyright 2021 ◤◢◤◢◤◢◤◢ (@yynmt)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* Audio */
#define AUDIO_PIN C5
#define AUDIO_CLICKY
#define AUDIO_TONE_STACKSIZE 4
#define AUDIO_ENABLE_TONE_MULTIPLEXING
#define AUDIO_TONE_MULTIPLEXING_RATE_DEFAULT 10

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

#ifdef TOS_HYMN_RISEN
  #undef TOS_HYMN_RISEN
  #define TOS_HYMN_RISEN
#endif

#ifdef MUSIC_ON_SOUND
  #undef MUSIC_ON_SOUND
  #define MUSIC_ON_SOUND
#endif

#define MUSIC_ON_SONG SONG(NO_SOUND)
#define MUSIC_OFF_SONG SONG(NO_SOUND)
#define MIDI_ON_SONG SONG(NO_SOUND)
#define MIDI_OFF_SONG SONG(NO_SOUND)
#define CHROMATIC_SONG SONG(NO_SOUND)
#define GUITAR_SONG SONG(NO_SOUND)
#define VIOLIN_SONG SONG(NO_SOUND)
#define MAJOR_SONG SONG(NO_SOUND)
#define CG_SWAP_SONG SONG(NO_SOUND)
#define AG_SWAP_SONG SONG(NO_SOUND)
#define STARTUP_SONG SONG(NO_SOUND)
#define GOODBYE_SONG SONG(NO_SOUND)
#define CG_NORM_SONG SONG(NO_SOUND)
#define AG_NORM_SONG SONG(NO_SOUND)
#define VOICE_CHANGE_SONG SONG(NO_SOUND)
#define VIA_DEVICE_INDICATION_SONG SONG(NO_SOUND)
