#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xCB10
#define PRODUCT_ID      0x1133
#define DEVICE_VER      0x0100
#define MANUFACTURER    Jacob Boxerman
#define PRODUCT         JB 3x3
#define DESCRIPTION     3x3 Macropad

/* key matrix size */
#define MATRIX_ROWS 3
#define MATRIX_COLS 3

/* Keyboard Matrix Assignments */
#define DIRECT_PINS { \
    { D1, C6, F4 }, \
    { D0, B5, F5 }, \
    { D4, F7, F6 } \
}

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
