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
  LYR_ALWAYS_ACCESSIBLE,
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

    /* MID { * . . . .   . . . . . } */ LSFT_T(KC_A),
    /* MID { . * . . .   . . . . . } */ LT(LYR_SYMBOLS, KC_S),
    /* MID { . . * . .   . . . . . } */ LT(LYR_GUI, KC_D),
    /* MID { . . . * .   . . . . . } */ LCTL_T(KC_F),
    /* MID { . . . . *   . . . . . } */ KC_G,
    /* MID { . . . . .   * . . . . } */ KC_H,
    /* MID { . . . . .   . * . . . } */ RCTL_T(KC_J),
    /* MID { . . . . .   . . * . . } */ LT(LYR_GUI, KC_K),
    /* MID { . . . . .   . . . * . } */ LT(LYR_SYMBOLS, KC_L),
    /* MID { . . . . .   . . . . * } */ RSFT_T(KC_SCLN),

    /* BTM { * . . . .   . . . . . } */ LALT_T(KC_Z),
    /* BTM { . * . . .   . . . . . } */ LGUI_T(KC_X),
    /* BTM { . . * . .   . . . . . } */ KC_C,
    /* BTM { . . . * .   . . . . . } */ KC_V,
    /* BTM { . . . . *   . . . . . } */ KC_B,
    /* BTM { . . . . .   * . . . . } */ KC_N,
    /* BTM { . . . . .   . * . . . } */ KC_M,
    /* BTM { . . . . .   . . * . . } */ KC_COMM,
    /* BTM { . . . . .   . . . * . } */ RGUI_T(KC_DOT),
    /* BTM { . . . . .   . . . . * } */ RALT_T(KC_SLSH),

    /* TMB {       * .   . .       } */ KC_ESC,
    /* TMB {       . *   . .       } */ LT(LYR_ALWAYS_ACCESSIBLE, KC_BSPC),
    /* TMB {       . .   * .       } */ LT(LYR_ALWAYS_ACCESSIBLE, KC_SPC),
    /* TMB {       . .   . *       } */ KC_ENT
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

    /* MID { * . . . .   . . . . . } */ LSFT_T(KC_A),
    /* MID { . * . . .   . . . . . } */ LT(LYR_SYMBOLS, KC_R),
    /* MID { . . * . .   . . . . . } */ LT(LYR_GUI, KC_S),
    /* MID { . . . * .   . . . . . } */ LCTL_T(KC_T),
    /* MID { . . . . *   . . . . . } */ KC_G,
    /* MID { . . . . .   * . . . . } */ KC_M,
    /* MID { . . . . .   . * . . . } */ RCTL_T(KC_N),
    /* MID { . . . . .   . . * . . } */ LT(LYR_GUI, KC_E),
    /* MID { . . . . .   . . . * . } */ LT(LYR_SYMBOLS, KC_I),
    /* MID { . . . . .   . . . . * } */ RSFT_T(KC_O),

    /* BTM { * . . . .   . . . . . } */ LALT_T(KC_Z),
    /* BTM { . * . . .   . . . . . } */ LGUI_T(KC_X),
    /* BTM { . . * . .   . . . . . } */ KC_C,
    /* BTM { . . . * .   . . . . . } */ KC_D,
    /* BTM { . . . . *   . . . . . } */ KC_V,
    /* BTM { . . . . .   * . . . . } */ KC_K,
    /* BTM { . . . . .   . * . . . } */ KC_H,
    /* BTM { . . . . .   . . * . . } */ KC_COMM,
    /* BTM { . . . . .   . . . * . } */ RGUI_T(KC_DOT),
    /* BTM { . . . . .   . . . . * } */ RALT_T(KC_SLSH),

    /* TMB {       * .   . .       } */ KC_ESC,
    /* TMB {       . *   . .       } */ LT(LYR_ALWAYS_ACCESSIBLE, KC_BSPC),
    /* TMB {       . .   * .       } */ LT(LYR_ALWAYS_ACCESSIBLE, KC_SPC),
    /* TMB {       . .   . *       } */ KC_ENT
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

    /* MID { * . . . .   . . . . . } */ LSFT_T(KC_1),
    /* MID { . * . . .   . . . . . } */ KC_2,
    /* MID { . . * . .   . . . . . } */ KC_3,
    /* MID { . . . * .   . . . . . } */ LCTL_T(KC_4),
    /* MID { . . . . *   . . . . . } */ KC_5,
    /* MID { . . . . .   * . . . . } */ KC_6,
    /* MID { . . . . .   . * . . . } */ RCTL_T(KC_7),
    /* MID { . . . . .   . . * . . } */ KC_8,
    /* MID { . . . . .   . . . * . } */ KC_9,
    /* MID { . . . . .   . . . . * } */ RSFT_T(KC_0),

    /* BTM { * . . . .   . . . . . } */ LALT_T(KC_EXLM),
    /* BTM { . * . . .   . . . . . } */ LGUI_T(KC_NO),
    /* BTM { . . * . .   . . . . . } */ KC_UNDS,
    /* BTM { . . . * .   . . . . . } */ KC_MINS,
    /* BTM { . . . . *   . . . . . } */ KC_NO,
    /* BTM { . . . . .   * . . . . } */ KC_NO,
    /* BTM { . . . . .   . * . . . } */ KC_EQL,
    /* BTM { . . . . .   . . * . . } */ KC_PLUS,
    /* BTM { . . . . .   . . . * . } */ RGUI_T(KC_QUOT),
    /* BTM { . . . . .   . . . . * } */ RALT_T(KC_BSLS),

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

    /* MID { * . . . .   . . . . . } */ LSFT(KC_NO),
    /* MID { . * . . .   . . . . . } */ KC_F5,
    /* MID { . . * . .   . . . . . } */ KC_F6,
    /* MID { . . . * .   . . . . . } */ LCTL_T(KC_F7),
    /* MID { . . . . *   . . . . . } */ KC_F8,
    /* MID { . . . . .   * . . . . } */ KC_NO,
    /* MID { . . . . .   . * . . . } */ KC_NO,
    /* MID { . . . . .   . . * . . } */ KC_NO,
    /* MID { . . . . .   . . . * . } */ KC_NO,
    /* MID { . . . . .   . . . . * } */ KC_NO,

    /* BTM { * . . . .   . . . . . } */ LALT_T(KC_NO),
    /* BTM { . * . . .   . . . . . } */ LGUI_T(KC_F9),
    /* BTM { . . * . .   . . . . . } */ KC_F10,
    /* BTM { . . . * .   . . . . . } */ KC_F11,
    /* BTM { . . . . *   . . . . . } */ KC_F12,
    /* BTM { . . . . .   * . . . . } */ KC_NO,
    /* BTM { . . . . .   . * . . . } */ KC_NO,
    /* BTM { . . . . .   . . * . . } */ KC_NO,
    /* BTM { . . . . .   . . . * . } */ KC_NO,
    /* BTM { . . . . .   . . . . * } */ KC_NO,

    /* TMB {       * .   . .       } */ KC_NO,
    /* TMB {       . *   . .       } */ KC_NO,
    /* TMB {       . .   * .       } */ KC_NO,
    /* TMB {       . .   . *       } */ KC_NO
  ),
  [LYR_ALWAYS_ACCESSIBLE] = LAYOUT(
    /* TOP { * . . . .   . . . . . } */ KC_NO,
    /* TOP { . * . . .   . . . . . } */ KC_TAB,
    /* TOP { . . * . .   . . . . . } */ KC_ESC,
    /* TOP { . . . * .   . . . . . } */ KC_ENT,
    /* TOP { . . . . *   . . . . . } */ KC_NO,
    /* TOP { . . . . .   * . . . . } */ KC_NO,
    /* TOP { . . . . .   . * . . . } */ KC_ENT,
    /* TOP { . . . . .   . . * . . } */ KC_ESC,
    /* TOP { . . . . .   . . . * . } */ KC_TAB,
    /* TOP { . . . . .   . . . . * } */ KC_NO,

    /* MID { * . . . .   . . . . . } */ LSFT_T(KC_TAB),
    /* MID { . * . . .   . . . . . } */ KC_LGUI,
    /* MID { . . * . .   . . . . . } */ KC_S,
    /* MID { . . . * .   . . . . . } */ LCTL_T(KC_ENT),
    /* MID { . . . . *   . . . . . } */ KC_NO,
    /* MID { . . . . .   * . . . . } */ KC_LEFT,
    /* MID { . . . . .   . * . . . } */ RCTL_T(KC_DOWN),
    /* MID { . . . . .   . . * . . } */ KC_UP,
    /* MID { . . . . .   . . . * . } */ KC_RGHT,
    /* MID { . . . . .   . . . . * } */ RSFT_T(KC_TAB),

    /* BTM { * . . . .   . . . . . } */ LALT_T(KC_NO),
    /* BTM { . * . . .   . . . . . } */ LGUI_T(KC_APP),
    /* BTM { . . * . .   . . . . . } */ KC_SPC,
    /* BTM { . . . * .   . . . . . } */ KC_NO,
    /* BTM { . . . . *   . . . . . } */ KC_NO,
    /* BTM { . . . . .   * . . . . } */ KC_NO,
    /* BTM { . . . . .   . * . . . } */ KC_NO,
    /* BTM { . . . . .   . . * . . } */ KC_SPC,
    /* BTM { . . . . .   . . . * . } */ RGUI_T(KC_APP),
    /* BTM { . . . . .   . . . . * } */ RALT_T(KC_NO),

    /* TMB {       * .   . .       } */ KC_NO,
    /* TMB {       . *   . .       } */ KC_NO,
    /* TMB {       . .   * .       } */ KC_NO,
    /* TMB {       . .   . *       } */ KC_NO
  ),
};
// clang-format on
