// TEACHER_MAC

#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* ZOOM MODE
    Mod√      Toggle part.√   XXXXXXX
    Tog. SS√  Toggle view√    Toggle microphone√
    Left√     Toggle chat√    Right√
    */

    [0] = LAYOUT(
        MO(5)  , LCMD(KC_U), XXXXXXX,
        KC_F16 , LCMD(S(KC_W)), LCMD(S(KC_X)),
        KC_LEFT, KC_F15, KC_RGHT
    ),

    /* MOD LAYER
    TRNS√      Volume mute√  Toggle video√
    Pause SS√  Volume up√    Next page√
    Reset√     Volume down√  Prev page√
    */

    [5] = LAYOUT(
        KC_TRNS, KC_MUTE, LCMD(S(KC_V)),
        KC_F17 , KC_VOLU, C(KC_P),
        RESET  , KC_VOLD, C(KC_N)
    ),
};
