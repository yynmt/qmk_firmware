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
  float my_song[][2] = SONG(E__NOTE(_E6), E__NOTE(_A6), ED_NOTE(_E7));
#endif

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE
};

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
    MY_CUSTOM_MACRO = SAFE_RANGE,
    MX01_1,
    MX01_2,
    MX01_3,
    MX01_4,
    MX01_5,

    MX02_1,
    MX02_2,
    MX02_3,
    MX02_4,
    MX02_5,

    MX03_1,
    MX03_2,
    MX03_3,
    MX03_4,
    MX03_5,

    MX04_1,
    MX04_2,
    MX04_3,
    MX04_4,
    MX04_5,

    MX05_1,
    MX05_2,
    MX05_3,
    MX05_4,
    MX05_5,

    MX06_1,
    MX06_2,
    MX06_3,
    MX06_4,
    MX06_5,

    MX07_1,
    MX07_2,
    MX07_3,
    MX07_4,
    MX07_5,

    MX08_1,
    MX08_2,
    MX08_3,
    MX08_4,
    MX08_5,

    MX09_1,
    MX09_2,
    MX09_3,
    MX09_4,
    MX09_5,

    MX10_1,
    MX10_2,
    MX10_3,
    MX10_4,
    MX10_5,

    MX11_1,
    MX11_2,
    MX11_3,
    MX11_4,
    MX11_5,

    MX12_1,
    MX12_2,
    MX12_3,
    MX12_4,
    MX12_5
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(
        MX01_1, MX02_1, MX03_1, MX04_1, MX05_1, MX06_1, MX07_1, MX08_1, MX09_1, MX10_1, MX11_1, MX12_1,
        MX01_2, MX02_2, MX03_2, MX04_2, MX05_2, MX06_2, MX07_2, MX08_2, MX09_2, MX10_2, MX11_2, MX12_2,
        MX01_3, MX02_3, MX03_3, MX04_3, MX05_3, MX06_3, MX07_3, MX08_3, MX09_3, MX10_3, MX11_3, MX12_3,
        MX01_4, MX02_4, MX03_4, MX04_4, MX05_4, MX06_4, MX07_4, MX08_4, MX09_4, MX10_4, MX11_4, MX12_4,
        MX01_5, MX02_5, MX03_5, MX04_5, MX05_5, MX06_5, MX07_5, MX08_5, MX09_5, MX10_5, MX11_5, MX12_5
    ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  	  if (record->event.pressed) {
    switch (keycode) {
      case MX01_1:
          SEND_STRING("01-1\n");
          return false;
      case MX01_2:
          SEND_STRING("01-2\n");
          return false;
      case MX01_3:
          SEND_STRING("01-3\n");
          return false;
      case MX01_4:
          SEND_STRING("01-4\n");
          return false;
      case MX01_5:
          SEND_STRING("01-5\n");
          #ifdef AUDIO_ENABLE
            PLAY_SONG(my_song);
          #endif
          return false;

      case MX02_1:
          SEND_STRING("02-1\n");
          return false;
      case MX02_2:
          SEND_STRING("02-2\n");
          return false;
      case MX02_3:
          SEND_STRING("02-3\n");
          return false;
      case MX02_4:
          SEND_STRING("02-4\n");
          return false;
      case MX02_5:
          SEND_STRING("02-5\n");
          return false;

      case MX03_1:
          SEND_STRING("03-1\n");
          return false;
      case MX03_2:
          SEND_STRING("03-2\n");
          return false;
      case MX03_3:
          SEND_STRING("03-3\n");
          return false;
      case MX03_4:
          SEND_STRING("03-4\n");
          return false;
      case MX03_5:
          SEND_STRING("03-5\n");
          return false;

      case MX04_1:
          SEND_STRING("04-1\n");
          return false;
      case MX04_2:
          SEND_STRING("04-2\n");
          return false;
      case MX04_3:
          SEND_STRING("04-3\n");
          return false;
      case MX04_4:
          SEND_STRING("04-4\n");
          return false;
      case MX04_5:
          SEND_STRING("04-5\n");
          return false;

      case MX05_1:
          SEND_STRING("05-1\n");
          return false;
      case MX05_2:
          SEND_STRING("05-2\n");
          return false;
      case MX05_3:
          SEND_STRING("05-3\n");
          return false;
      case MX05_4:
          SEND_STRING("05-4\n");
          return false;
      case MX05_5:
          SEND_STRING("05-5\n");
          return false;

      case MX06_1:
          SEND_STRING("06-1\n");
          return false;
      case MX06_2:
          SEND_STRING("06-2\n");
          return false;
      case MX06_3:
          SEND_STRING("06-3\n");
          return false;
      case MX06_4:
          SEND_STRING("06-4\n");
          return false;
      case MX06_5:
          SEND_STRING("06-5\n");
          return false;

      case MX07_1:
          SEND_STRING("07-1\n");
          return false;
      case MX07_2:
          SEND_STRING("07-2\n");
          return false;
      case MX07_3:
          SEND_STRING("07-3\n");
          return false;
      case MX07_4:
          SEND_STRING("07-4\n");
          return false;
      case MX07_5:
          SEND_STRING("07-5\n");
          return false;

      case MX08_1:
          SEND_STRING("08-1\n");
          return false;
      case MX08_2:
          SEND_STRING("08-2\n");
          return false;
      case MX08_3:
          SEND_STRING("08-3\n");
          return false;
      case MX08_4:
          SEND_STRING("08-4\n");
          return false;
      case MX08_5:
          SEND_STRING("08-5\n");
          return false;

      case MX09_1:
          SEND_STRING("09-1\n");
          return false;
      case MX09_2:
          SEND_STRING("09-2\n");
          return false;
      case MX09_3:
          SEND_STRING("09-3\n");
          return false;
      case MX09_4:
          SEND_STRING("09-4\n");
          return false;
      case MX09_5:
          SEND_STRING("09-5\n");
          return false;

      case MX10_1:
          SEND_STRING("10-1\n");
          return false;
      case MX10_2:
          SEND_STRING("10-2\n");
          return false;
      case MX10_3:
          SEND_STRING("10-3\n");
          return false;
      case MX10_4:
          SEND_STRING("10-4\n");
          return false;
      case MX10_5:
          SEND_STRING("10-5\n");
          return false;

      case MX11_1:
          SEND_STRING("11-1\n");
          return false;
      case MX11_2:
          SEND_STRING("11-2\n");
          return false;
      case MX11_3:
          SEND_STRING("11-3\n");
          return false;
      case MX11_4:
          SEND_STRING("11-4\n");
          return false;
      case MX11_5:
          SEND_STRING("11-5\n");
          return false;

      case MX12_1:
          SEND_STRING("12-1\n");
          return false;
      case MX12_2:
          SEND_STRING("12-2\n");
          return false;
      case MX12_3:
          SEND_STRING("12-3\n");
          return false;
      case MX12_4:
          SEND_STRING("12-4\n");
          return false;
      case MX12_5:
          SEND_STRING("12-5\n");
          return false;
      }
    }
    return true;
}

void keyboard_post_init_user(void) {
    rgblight_enable();
    rgblight_mode(RGBLIGHT_MODE_RGB_TEST);
    audio_on();
}
