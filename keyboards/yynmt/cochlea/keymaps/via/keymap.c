#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_VOLD, KC_VOLU,
    KC_MUTE
  ),
  [1] = LAYOUT(
    KC_NO, KC_NO,
    KC_NO
  ),
  [2] = LAYOUT(
    KC_NO, KC_NO,
    KC_NO
  ),
  [3] = LAYOUT(
    KC_NO, KC_NO,
    KC_NO
  )
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        keypos_t key;
        if (clockwise) {
            key.row = 0;
            key.col = 2;
        } else {
            key.row = 0;
            key.col = 1;
        }
        uint8_t  layer   = layer_switch_get_layer(key);
        uint16_t keycode = keymap_key_to_keycode(layer, key);
        tap_code16(keycode);
    }
    return false;
}
