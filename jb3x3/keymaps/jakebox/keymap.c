#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* ZOOM MODE
    Mod                 Toggle fullscreen Leave call
    Toggle video        Push to talk      Toggle microphone
    Show windows (C-up) Toggle chat       Toggle participants/speaker view
    */

    [0] = LAYOUT(
        MO(5)         ,  LCMD(S(KC_F)), LCMD(KC_W),
        LCMD(S(KC_V)) ,  KC_SPC       , LCMD(S(KC_X)),
        C(KC_UP)      ,  LCMD(S(KC_H)), LCMD(S(KC_W))
    ),

    // /* EXTRA MODE
    // XXXXX       Toggle fullscreen  XXXXX
    // To layer 0  XXXXX              Toggle mute
    // Left        XXXXX              Right

    // */

    // [1] = LAYOUT(
    //     XXXXXXX, LCMD(S(KC_F)), XXXXXXX,
    //     TO(0)  , XXXXXXX      , LCMD(S(KC_X)),
    //     KC_LEFT, XXXXXXX      , KC_RIGHT
    // ),



    /* MOD LAYER
    TRNS        Volume mute  Quit
    To layer 1  Volume up    XXXXXXX
    Reset       Volume down  Spotlight
    */

    [5] = LAYOUT(
        KC_TRNS, KC_MUTE, LCMD(KC_Q),
        XXXXXXX, KC_VOLU, XXXXXXX,
        RESET  , KC_VOLD, LCMD(KC_SPC)
    ),
};
