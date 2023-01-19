#include "keycodes.h"
#include QMK_KEYBOARD_H


/* TOP { . . . . .   . . . . . } */
/* MID { . . . . .   . . . . . } */
/* BTM { . . . . .   . . . . . } */
/* TMB {       . .   . .       } */

// TODO:
// + home row mods: Shift Alt Gui Ctrl
// - layers to thumbs
// - I also need symbols more often than navigation...
// - Colemak toggle
// + move esc/enter/tab to better positions (where? combos?)
// - CAPSWORD
// - cut/copy/paste keys to util layer
// - I do need ctrl-enter shortcut somewhere (for now compensated with mods on util layer)

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
    /* MID { . * . . .   . . . . . } */ LALT_T(KC_S),
    /* MID { . . * . .   . . . . . } */ LGUI_T(KC_D),
    /* MID { . . . * .   . . . . . } */ LSFT_T(KC_F),
    /* MID { . . . . *   . . . . . } */ KC_G,
    /* MID { . . . . .   * . . . . } */ KC_H,
    /* MID { . . . . .   . * . . . } */ RSFT_T(KC_J),
    /* MID { . . . . .   . . * . . } */ RGUI_T(KC_K),
    /* MID { . . . . .   . . . * . } */ LALT_T(KC_L),
    /* MID { . . . . .   . . . . * } */ RCTL_T(KC_SCLN),

    /* BTM { * . . . .   . . . . . } */ KC_Z,
    /* BTM { . * . . .   . . . . . } */ KC_X,
    /* BTM { . . * . .   . . . . . } */ KC_C,
    /* BTM { . . . * .   . . . . . } */ KC_V,
    /* BTM { . . . . *   . . . . . } */ KC_B,
    /* BTM { . . . . .   * . . . . } */ KC_N,
    /* BTM { . . . . .   . * . . . } */ KC_M,
    /* BTM { . . . . .   . . * . . } */ KC_COMM,
    /* BTM { . . . . .   . . . * . } */ KC_DOT,
    /* BTM { . . . . .   . . . . * } */ KC_SLSH,

    /* TMB {       * .   . .       } */ LT(LYR_SYMBOLS, KC_NO),
    /* TMB {       . *   . .       } */ LT(LYR_UTIL, KC_BSPC),
    /* TMB {       . .   * .       } */ LT(LYR_UTIL, KC_SPC),
    /* TMB {       . .   . *       } */ LT(LYR_GUI, KC_NO)
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
    /* MID { . * . . .   . . . . . } */ LALT_T(KC_R),
    /* MID { . . * . .   . . . . . } */ LGUI_T(KC_S),
    /* MID { . . . * .   . . . . . } */ LSFT_T(KC_T),
    /* MID { . . . . *   . . . . . } */ KC_G,
    /* MID { . . . . .   * . . . . } */ KC_M,
    /* MID { . . . . .   . * . . . } */ RSFT_T(KC_N),
    /* MID { . . . . .   . . * . . } */ RGUI_T(KC_E),
    /* MID { . . . . .   . . . * . } */ LALT_T(KC_I),
    /* MID { . . . . .   . . . . * } */ RCTL_T(KC_O),

    /* BTM { * . . . .   . . . . . } */ KC_Z,
    /* BTM { . * . . .   . . . . . } */ KC_X,
    /* BTM { . . * . .   . . . . . } */ KC_C,
    /* BTM { . . . * .   . . . . . } */ KC_D,
    /* BTM { . . . . *   . . . . . } */ KC_V,
    /* BTM { . . . . .   * . . . . } */ KC_K,
    /* BTM { . . . . .   . * . . . } */ KC_H,
    /* BTM { . . . . .   . . * . . } */ KC_COMM,
    /* BTM { . . . . .   . . . * . } */ KC_DOT,
    /* BTM { . . . . .   . . . . * } */ KC_SLSH,

    /* TMB {       * .   . .       } */ LT(LYR_SYMBOLS, KC_NO),
    /* TMB {       . *   . .       } */ LT(LYR_UTIL, KC_BSPC),
    /* TMB {       . .   * .       } */ LT(LYR_UTIL, KC_SPC),
    /* TMB {       . .   . *       } */ LT(LYR_GUI, KC_NO)
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

    /* MID { * . . . .   . . . . . } */ KC_1,
    /* MID { . * . . .   . . . . . } */ KC_2,
    /* MID { . . * . .   . . . . . } */ KC_3,
    /* MID { . . . * .   . . . . . } */ KC_4,
    /* MID { . . . . *   . . . . . } */ KC_5,
    /* MID { . . . . .   * . . . . } */ KC_6,
    /* MID { . . . . .   . * . . . } */ KC_7,
    /* MID { . . . . .   . . * . . } */ KC_8,
    /* MID { . . . . .   . . . * . } */ KC_9,
    /* MID { . . . . .   . . . . * } */ KC_0,

    /* BTM { * . . . .   . . . . . } */ KC_EXLM,
    /* BTM { . * . . .   . . . . . } */ KC_NO,
    /* BTM { . . * . .   . . . . . } */ KC_UNDS,
    /* BTM { . . . * .   . . . . . } */ KC_MINS,
    /* BTM { . . . . *   . . . . . } */ KC_NO,
    /* BTM { . . . . .   * . . . . } */ KC_NO,
    /* BTM { . . . . .   . * . . . } */ KC_EQL,
    /* BTM { . . . . .   . . * . . } */ KC_PLUS,
    /* BTM { . . . . .   . . . * . } */ KC_QUOT,
    /* BTM { . . . . .   . . . . * } */ KC_BSLS,

    /* TMB {       * .   . .       } */ KC_TRNS,
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

    /* MID { * . . . .   . . . . . } */ KC_NO,
    /* MID { . * . . .   . . . . . } */ KC_F5,
    /* MID { . . * . .   . . . . . } */ KC_F6,
    /* MID { . . . * .   . . . . . } */ KC_F7,
    /* MID { . . . . *   . . . . . } */ KC_F8,
    /* MID { . . . . .   * . . . . } */ KC_NO,
    /* MID { . . . . .   . * . . . } */ KC_NO,
    /* MID { . . . . .   . . * . . } */ KC_NO,
    /* MID { . . . . .   . . . * . } */ KC_NO,
    /* MID { . . . . .   . . . . * } */ KC_NO,

    /* BTM { * . . . .   . . . . . } */ KC_NO,
    /* BTM { . * . . .   . . . . . } */ KC_F9,
    /* BTM { . . * . .   . . . . . } */ KC_F10,
    /* BTM { . . . * .   . . . . . } */ KC_F11,
    /* BTM { . . . . *   . . . . . } */ KC_F12,
    /* BTM { . . . . .   * . . . . } */ KC_NO,
    /* BTM { . . . . .   . * . . . } */ KC_NO,
    /* BTM { . . . . .   . . * . . } */ KC_NO,
    /* BTM { . . . . .   . . . * . } */ KC_NO,
    /* BTM { . . . . .   . . . . * } */ KC_NO,

    /* TMB {       * .   . .       } */ KC_NO,
    /* TMB {       . *   . .       } */ KC_TRNS,
    /* TMB {       . .   * .       } */ KC_TRNS,
    /* TMB {       . .   . *       } */ KC_TRNS
  ),
  [LYR_UTIL] = LAYOUT(
    /* TOP { * . . . .   . . . . . } */ KC_NO,
    /* TOP { . * . . .   . . . . . } */ KC_NO,
    /* TOP { . . * . .   . . . . . } */ KC_NO,
    /* TOP { . . . * .   . . . . . } */ KC_NO,
    /* TOP { . . . . *   . . . . . } */ KC_NO,
    /* TOP { . . . . .   * . . . . } */ KC_NO,
    /* TOP { . . . . .   . * . . . } */ KC_NO,
    /* TOP { . . . . .   . . * . . } */ KC_NO,
    /* TOP { . . . . .   . . . * . } */ KC_NO,
    /* TOP { . . . . .   . . . . * } */ KC_NO,

    /* MID { * . . . .   . . . . . } */ LCTL_T(KC_NO),
    /* MID { . * . . .   . . . . . } */ LALT_T(KC_TAB),
    /* MID { . . * . .   . . . . . } */ LGUI_T(KC_ESC),
    /* MID { . . . * .   . . . . . } */ LSFT_T(KC_ENT),
    /* MID { . . . . *   . . . . . } */ KC_NO,
    /* MID { . . . . .   * . . . . } */ KC_LEFT,
    /* MID { . . . . .   . * . . . } */ RSFT_T(KC_DOWN),
    /* MID { . . . . .   . . * . . } */ RGUI_T(KC_UP),
    /* MID { . . . . .   . . . * . } */ LALT_T(KC_RGHT),
    /* MID { . . . . .   . . . . * } */ RCTL_T(KC_ENT),

    /* BTM { * . . . .   . . . . . } */ KC_NO,
    /* BTM { . * . . .   . . . . . } */ KC_NO,
    /* BTM { . . * . .   . . . . . } */ KC_NO,
    /* BTM { . . . * .   . . . . . } */ KC_NO,
    /* BTM { . . . . *   . . . . . } */ KC_NO,
    /* BTM { . . . . .   * . . . . } */ KC_NO,
    /* BTM { . . . . .   . * . . . } */ KC_NO,
    /* BTM { . . . . .   . . * . . } */ KC_NO,
    /* BTM { . . . . .   . . . * . } */ KC_NO,
    /* BTM { . . . . .   . . . . * } */ KC_NO,

    /* TMB {       * .   . .       } */ KC_NO,
    /* TMB {       . *   . .       } */ KC_TRNS,
    /* TMB {       . .   * .       } */ KC_TRNS,
    /* TMB {       . .   . *       } */ KC_NO
  ),
};
// clang-format on
