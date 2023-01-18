#include "keycodes.h"
#include QMK_KEYBOARD_H


/* TOP { . . . . .   . . . . . } */
/* MID { . . . . .   . . . . . } */
/* BTM { . . . . .   . . . . . } */
/* TMB {       . .   . .       } */


/* Defines names for use in layer keycodes and the keymap */
enum layer_names {
  LYR_QWERTY,
  LYR_COLEMAK,
  LYR_SYMBOLS,
  LYR_GUI,
  LYR_UTIL,
};


// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [LYR_QWERTY] = LAYOUT(
    /* TOP { * . . . .   . . . . . } */ KC_Q,
    /* TOP { . * . . .   . . . . . } */ KC_W,
    /* TOP { . . * . .   . . . . . } */ KC_E,
    /* TOP { . . . * .   . . . . . } */ KC_R,
    /* TOP { . . . . *   . . . . . } */ KC_T,
    /* TOP { . . . . .   * . . . . } */ KC_Y,
    /* TOP { . . . . .   . * . . . } */ KC_U,
    /* TOP { . . . . .   . . * . . } */ KC_I,
    /* TOP { . . . . .   . . . * . } */ KC_O,
    /* TOP { . . . . .   . . . . * } */ KC_P,

    /* MID { * . . . .   . . . . . } */ LCTL_T(KC_A),
    /* MID { . * . . .   . . . . . } */ LT(LYR_SYMBOLS, KC_S),
    /* MID { . . * . .   . . . . . } */ LT(LYR_GUI, KC_D),
    /* MID { . . . * .   . . . . . } */ KC_F,
    /* MID { . . . . *   . . . . . } */ KC_G,
    /* MID { . . . . .   * . . . . } */ KC_H,
    /* MID { . . . . .   . * . . . } */ KC_J,
    /* MID { . . . . .   . . * . . } */ LT(LYR_GUI, KC_K),
    /* MID { . . . . .   . . . * . } */ LT(LYR_SYMBOLS, KC_L),
    /* MID { . . . . .   . . . . * } */ RCTL_T(KC_SCLN),

    /* BTM { * . . . .   . . . . . } */ LSFT_T(KC_Z),
    /* BTM { . * . . .   . . . . . } */ LALT_T(KC_X),
    /* BTM { . . * . .   . . . . . } */ KC_C,
    /* BTM { . . . * .   . . . . . } */ LGUI_T(KC_V),
    /* BTM { . . . . *   . . . . . } */ KC_B,
    /* BTM { . . . . .   * . . . . } */ KC_N,
    /* BTM { . . . . .   . * . . . } */ RGUI_T(KC_M),
    /* BTM { . . . . .   . . * . . } */ KC_COMM,
    /* BTM { . . . . .   . . . * . } */ RALT_T(KC_DOT),
    /* BTM { . . . . .   . . . . * } */ RSFT_T(KC_SLSH),

    /* TMB {       * .   . .       } */ KC_NO,
    /* TMB {       . *   . .       } */ LT(LYR_UTIL, KC_BSPC),
    /* TMB {       . .   * .       } */ LT(LYR_UTIL, KC_SPC),
    /* TMB {       . .   . *       } */ KC_NO
  ),
  [LYR_COLEMAK] = LAYOUT(
    /* TOP { * . . . .   . . . . . } */ KC_Q,
    /* TOP { . * . . .   . . . . . } */ KC_W,
    /* TOP { . . * . .   . . . . . } */ KC_F,
    /* TOP { . . . * .   . . . . . } */ KC_P,
    /* TOP { . . . . *   . . . . . } */ KC_B,
    /* TOP { . . . . .   * . . . . } */ KC_J,
    /* TOP { . . . . .   . * . . . } */ KC_L,
    /* TOP { . . . . .   . . * . . } */ KC_U,
    /* TOP { . . . . .   . . . * . } */ KC_Y,
    /* TOP { . . . . .   . . . . * } */ KC_SCLN,

    /* MID { * . . . .   . . . . . } */ LCTL_T(KC_A),
    /* MID { . * . . .   . . . . . } */ LT(LYR_SYMBOLS, KC_R),
    /* MID { . . * . .   . . . . . } */ LT(LYR_GUI, KC_S),
    /* MID { . . . * .   . . . . . } */ KC_T,
    /* MID { . . . . *   . . . . . } */ KC_G,
    /* MID { . . . . .   * . . . . } */ KC_M,
    /* MID { . . . . .   . * . . . } */ KC_N,
    /* MID { . . . . .   . . * . . } */ LT(LYR_GUI, KC_E),
    /* MID { . . . . .   . . . * . } */ LT(LYR_SYMBOLS, KC_I),
    /* MID { . . . . .   . . . . * } */ RCTL_T(KC_O),

    /* BTM { * . . . .   . . . . . } */ LSFT_T(KC_Z),
    /* BTM { . * . . .   . . . . . } */ LALT_T(KC_X),
    /* BTM { . . * . .   . . . . . } */ KC_C,
    /* BTM { . . . * .   . . . . . } */ LGUI_T(KC_D),
    /* BTM { . . . . *   . . . . . } */ KC_V,
    /* BTM { . . . . .   * . . . . } */ KC_K,
    /* BTM { . . . . .   . * . . . } */ RGUI_T(KC_H),
    /* BTM { . . . . .   . . * . . } */ KC_COMM,
    /* BTM { . . . . .   . . . * . } */ RALT_T(KC_DOT),
    /* BTM { . . . . .   . . . . * } */ RSFT_T(KC_SLSH),

    /* TMB {       * .   . .       } */ KC_NO,
    /* TMB {       . *   . .       } */ LT(LYR_UTIL, KC_BSPC),
    /* TMB {       . .   * .       } */ LT(LYR_UTIL, KC_SPC),
    /* TMB {       . .   . *       } */ KC_NO
  ),
  [LYR_SYMBOLS] = LAYOUT(
    /* TOP { * . . . .   . . . . . } */ KC_GRV,
    /* TOP { . * . . .   . . . . . } */ KC_LBRC,
    /* TOP { . . * . .   . . . . . } */ KC_LCBR,
    /* TOP { . . . * .   . . . . . } */ KC_LPRN,
    /* TOP { . . . . *   . . . . . } */ KC_LT,
    /* TOP { . . . . .   * . . . . } */ KC_GT,
    /* TOP { . . . . .   . * . . . } */ KC_RPRN,
    /* TOP { . . . . .   . . * . . } */ KC_RCBR,
    /* TOP { . . . . .   . . . * . } */ KC_RBRC,
    /* TOP { . . . . .   . . . . * } */ KC_QUES,

    /* MID { * . . . .   . . . . . } */ LCTL_T(KC_1),
    /* MID { . * . . .   . . . . . } */ KC_2,
    /* MID { . . * . .   . . . . . } */ KC_3,
    /* MID { . . . * .   . . . . . } */ KC_4,
    /* MID { . . . . *   . . . . . } */ KC_5,
    /* MID { . . . . .   * . . . . } */ KC_6,
    /* MID { . . . . .   . * . . . } */ KC_7,
    /* MID { . . . . .   . . * . . } */ KC_8,
    /* MID { . . . . .   . . . * . } */ KC_9,
    /* MID { . . . . .   . . . . * } */ RCTL_T(KC_0),

    /* BTM { * . . . .   . . . . . } */ LSFT_T(KC_EXLM),
    /* BTM { . * . . .   . . . . . } */ LALT_T(KC_NO),
    /* BTM { . . * . .   . . . . . } */ KC_UNDS,
    /* BTM { . . . * .   . . . . . } */ LGUI_T(KC_MINS),
    /* BTM { . . . . *   . . . . . } */ KC_NO,
    /* BTM { . . . . .   * . . . . } */ KC_NO,
    /* BTM { . . . . .   . * . . . } */ RGUI_T(KC_EQL),
    /* BTM { . . . . .   . . * . . } */ KC_PLUS,
    /* BTM { . . . . .   . . . * . } */ RALT_T(KC_QUOT),
    /* BTM { . . . . .   . . . . * } */ RSFT_T(KC_BSLS),

    /* TMB {       * .   . .       } */ KC_NO,
    /* TMB {       . *   . .       } */ KC_TRNS,
    /* TMB {       . .   * .       } */ KC_TRNS,
    /* TMB {       . .   . *       } */ KC_NO
  ),
  [LYR_GUI] = LAYOUT(
    /* TOP { * . . . .   . . . . . } */ CW_TOGG,
    /* TOP { . * . . .   . . . . . } */ KC_F1,
    /* TOP { . . * . .   . . . . . } */ KC_F2,
    /* TOP { . . . * .   . . . . . } */ KC_F3,
    /* TOP { . . . . *   . . . . . } */ KC_F4,
    /* TOP { . . . . .   * . . . . } */ KC_NO,
    /* TOP { . . . . .   . * . . . } */ KC_NO,
    /* TOP { . . . . .   . . * . . } */ KC_NO,
    /* TOP { . . . . .   . . . * . } */ KC_NO,
    /* TOP { . . . . .   . . . . * } */ KC_NO,

    /* MID { * . . . .   . . . . . } */ LCTL_T(KC_NO),
    /* MID { . * . . .   . . . . . } */ KC_F5,
    /* MID { . . * . .   . . . . . } */ KC_F6,
    /* MID { . . . * .   . . . . . } */ KC_F7,
    /* MID { . . . . *   . . . . . } */ KC_F8,
    /* MID { . . . . .   * . . . . } */ KC_NO,
    /* MID { . . . . .   . * . . . } */ KC_NO,
    /* MID { . . . . .   . . * . . } */ KC_NO,
    /* MID { . . . . .   . . . * . } */ KC_NO,
    /* MID { . . . . .   . . . . * } */ LCTL_T(KC_NO),

    /* BTM { * . . . .   . . . . . } */ LSFT_T(KC_NO),
    /* BTM { . * . . .   . . . . . } */ LALT_T(KC_F9),
    /* BTM { . . * . .   . . . . . } */ KC_F10,
    /* BTM { . . . * .   . . . . . } */ LGUI_T(KC_F11),
    /* BTM { . . . . *   . . . . . } */ KC_F12,
    /* BTM { . . . . .   * . . . . } */ KC_NO,
    /* BTM { . . . . .   . * . . . } */ RGUI_T(KC_NO),
    /* BTM { . . . . .   . . * . . } */ KC_NO,
    /* BTM { . . . . .   . . . * . } */ LALT_T(KC_NO),
    /* BTM { . . . . .   . . . . * } */ LSFT_T(KC_NO),

    /* TMB {       * .   . .       } */ KC_NO,
    /* TMB {       . *   . .       } */ KC_TRNS,
    /* TMB {       . .   * .       } */ KC_TRNS,
    /* TMB {       . .   . *       } */ KC_NO
  ),
  [LYR_UTIL] = LAYOUT(
    /* TOP { * . . . .   . . . . . } */ KC_TAB,
    /* TOP { . * . . .   . . . . . } */ KC_NO,
    /* TOP { . . * . .   . . . . . } */ KC_NO,
    /* TOP { . . . * .   . . . . . } */ KC_NO,
    /* TOP { . . . . *   . . . . . } */ KC_NO,
    /* TOP { . . . . .   * . . . . } */ KC_NO,
    /* TOP { . . . . .   . * . . . } */ KC_NO,
    /* TOP { . . . . .   . . * . . } */ KC_NO,
    /* TOP { . . . . .   . . . * . } */ KC_NO,
    /* TOP { . . . . .   . . . . * } */ KC_DEL,

    /* MID { * . . . .   . . . . . } */ LCTL_T(KC_ESC),
    /* MID { . * . . .   . . . . . } */ KC_NO,
    /* MID { . . * . .   . . . . . } */ KC_NO,
    /* MID { . . . * .   . . . . . } */ KC_NO,
    /* MID { . . . . *   . . . . . } */ KC_NO,
    /* MID { . . . . .   * . . . . } */ KC_LEFT,
    /* MID { . . . . .   . * . . . } */ KC_DOWN,
    /* MID { . . . . .   . . * . . } */ KC_UP,
    /* MID { . . . . .   . . . * . } */ KC_RGHT,
    /* MID { . . . . .   . . . . * } */ RCTL_T(KC_ENT),

    /* BTM { * . . . .   . . . . . } */ LSFT_T(KC_NO),
    /* BTM { . * . . .   . . . . . } */ LALT_T(KC_NO),
    /* BTM { . . * . .   . . . . . } */ KC_NO,
    /* BTM { . . . * .   . . . . . } */ LGUI_T(KC_APP),
    /* BTM { . . . . *   . . . . . } */ KC_NO,
    /* BTM { . . . . .   * . . . . } */ KC_NO,
    /* BTM { . . . . .   . * . . . } */ RGUI_T(KC_APP),
    /* BTM { . . . . .   . . * . . } */ KC_NO,
    /* BTM { . . . . .   . . . * . } */ RALT_T(KC_NO),
    /* BTM { . . . . .   . . . . * } */ RSFT_T(KC_NO),

    /* TMB {       * .   . .       } */ KC_NO,
    /* TMB {       . *   . .       } */ KC_TRNS,
    /* TMB {       . .   * .       } */ KC_TRNS,
    /* TMB {       . .   . *       } */ KC_NO
  ),
};
// clang-format on
