#include QMK_KEYBOARD_H

enum layers{
  _BASE,
  _NUM_SYM,
  _NAV
};


#define KC_NUM_SPC LT(_NUM_SYM, KC_SPC)
#define KC_GA LGUI_T(KC_A)
#define KC_AS LALT_T(KC_S)
#define KC_CD LCTL_T(KC_D)
#define KC_SF LSFT_T(KC_F)
#define KC_SJ RSFT_T(KC_J)
#define KC_CK RCTL_T(KC_K)
#define KC_AL RALT_T(KC_L)
#define KC_GSCLN RGUI_T(KC_SCLN)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_split_space(
    KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,    KC_I,   KC_O,     KC_P,
    KC_GA,  KC_AS,  KC_CD,  KC_SF,   KC_G,   KC_H,  KC_SJ,   KC_CK,  KC_AL, KC_ENT,
    KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M, KC_COMM, KC_DOT,
    KC_LCTL, KC_LALT, KC_LGUI, KC_BSPC, LT(_NUM_SYM,KC_SPACE), KC_RALT, KC_RGUI, KC_RCTL,
    KC_CK, KC_AL, KC_AS, KC_CD
  ),

  [_NUM_SYM] = LAYOUT_split_space(
    KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0,
    KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_EQUAL, KC_MINS,
    KC_LCBR, KC_LBRC, KC_LPRN, KC_UNDS, KC_RPRN, KC_RBRC, KC_RCBR, KC_SCLN, KC_QUOTE,
    RGB_TOG, RGB_MOD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_CK, KC_AL, KC_AS, KC_CD
  )
};


