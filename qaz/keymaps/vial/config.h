#pragma once

#define VENDOR_ID 0x7431
#define PRODUCT_ID 0x0001
#define DEVICE_VER 0x0001

#define VIAL_KEYBOARD_UID {0xF7, 0x6F, 0x00, 0xB3, 0x63, 0x4E, 0x21, 0x39}
#define VIAL_UNLOCK_COMBO_ROWS {0,4}
#define VIAL_UNLOCK_COMBO_COLS {0,2}

#ifdef COMBO_ENABLE
#    define VIAL_COMBO_ENTRIES 4
#    define COMBO_TERM 200
#endif

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define RGB_DI_PIN F7

#ifdef RGB_DI_PIN
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 1
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#undef RGBLIGHT_EFFECT_STATIC_GRADIENT
#undef RGBLIGHT_EFFECT_RAINBOW_SWIRL
#undef RGBLIGHT_EFFECT_KNIGHT
#undef RGBLIGHT_EFFECT_CHRISTMAS
#undef RGBLIGHT_EFFECT_SNAKE
#endif
		

#define RGBLIGHT_LIMIT_VAL 255