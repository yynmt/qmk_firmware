#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ortho_1x1(QK_KB_0)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QK_KB_0:
      if (record->event.pressed) {
        switch (rand() % 3) {
          case 0:
            send_string("If you accept the pain, I will forgive you.");
            break;
          case 1:
            send_string("If you accept my pain, can forgive you.");
            break;
          case 2:
            send_string("Even if my(yours) vision becomes glazed, our suffering is ours alone.");
            break;
        }
      }
      return false;
      break;
  }
  return true;
}
