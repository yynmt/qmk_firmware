// Copyright 2023 ◤◢◤◢◤◢◤◢ (@yynmt)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/* Audio support */
#ifdef AUDIO_ENABLE
    #define AUDIO_PIN GP2
    #define AUDIO_PWM_DRIVER PWMD1
    #define AUDIO_PWM_CHANNEL RP2040_PWM_CHANNEL_A
    #define AUDIO_INIT_DELAY
    #define STARTUP_SONG SONG(ROCK_A_BYE_BABY)
#endif
