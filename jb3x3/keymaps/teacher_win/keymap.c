// TEACHER_WIN
// SPECIAL ZOOM KEYPAD
// KEYMAP FOR 3x3

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
                       LAYER 0 - General Use
        | Mod√           | Gallery view √       | Toggle participants√ |
        | Open chat√     | Speaker view √       | Toggle mute √        |
        | Left √          | Toggle screen share √  | Right               |
     */
    [0] = LAYOUT(
        MO(5)  , A(KC_F2), A(KC_U),
        KC_F15, A(KC_F1), A(KC_A),
        KC_LEFT, KC_F16, KC_RIGHT
    ),

    /*
                        LAYER 5 - MOD
        | XXXXXXX  | XXXXXXX     | Next page    |
        | Vol up √  | Toggle video √ | Previous page |
        | Vol dn √  | XXXXXXX      | XXXXXXX       |
    */
    [5] = LAYOUT(
        KC_TRNS, KC_MUTE, KC_PGUP ,
        A(KC_V), KC_VOLU, KC_PGDN,
        RESET,   KC_VOLD, XXXXXXX
    ),
};
