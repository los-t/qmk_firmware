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
// - alt space is no good, when alt is on home row (silently makes vim unusable,
//   because it switches layouts)

/* Defines names for use in layer keycodes and the keymap */
enum layer_names {
  LYR_QWERTY,
  LYR_COLEMAK,
  LYR_SYMBOLS,
  LYR_GUI,
  LYR_UTIL,
};


enum key_combos {
  CMB_DF_ESC,
  CMB_JK_ENTER,

  CMB_TOTAL
};
uint16_t COMBO_LEN = CMB_TOTAL;
const uint16_t PROGMEM cmb_df[] = {LGUI_T(KC_D), LSFT_T(KC_F), COMBO_END};
const uint16_t PROGMEM cmb_jk[] = {RSFT_T(KC_J), RGUI_T(KC_K), COMBO_END};
combo_t key_combos[] = {
  [CMB_DF_ESC] = COMBO(cmb_df, KC_ESC),
  [CMB_JK_ENTER] = COMBO(cmb_jk, KC_ENT),
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

    /* TMB {       * .   . .       } */ LT(LYR_GUI, KC_DEL),
    /* TMB {       . *   . .       } */ LT(LYR_SYMBOLS, KC_BSPC),
    /* TMB {       . .   * .       } */ LT(LYR_UTIL, KC_SPC),
    /* TMB {       . .   . *       } */ LT(LYR_GUI, KC_TAB)
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

    /* TMB {       * .   . .       } */ LT(LYR_GUI, KC_DEL),
    /* TMB {       . *   . .       } */ LT(LYR_SYMBOLS, KC_BSPC),
    /* TMB {       . .   * .       } */ LT(LYR_UTIL, KC_SPC),
    /* TMB {       . .   . *       } */ LT(LYR_GUI, KC_TAB)
  ),
  [LYR_SYMBOLS] = LAYOUT(
    /* TOP { * . . . .   . . . . . } */ KC_GRV,
    /* TOP { . * . . .   . . . . . } */ KC_PERC,
    /* TOP { . . * . .   . . . . . } */ KC_EXLM,
    /* TOP { . . . * .   . . . . . } */ KC_AMPR,
    /* TOP { . . . . *   . . . . . } */ KC_CIRC,
    /* TOP { . . . . .   * . . . . } */ KC_HASH,
    /* TOP { . . . . .   . * . . . } */ KC_EQL,
    /* TOP { . . . . .   . . * . . } */ KC_PLUS,
    /* TOP { . . . . .   . . . * . } */ KC_MINS,
    /* TOP { . . . . .   . . . . * } */ KC_ASTR,

    /* MID { * . . . .   . . . . . } */ LCTL_T(KC_1),
    /* MID { . * . . .   . . . . . } */ LALT_T(KC_2),
    /* MID { . . * . .   . . . . . } */ LGUI_T(KC_3),
    /* MID { . . . * .   . . . . . } */ LSFT_T(KC_4),
    /* MID { . . . . *   . . . . . } */ KC_5,
    /* MID { . . . . .   * . . . . } */ KC_6,
    /* MID { . . . . .   . * . . . } */ RSFT_T(KC_7),
    /* MID { . . . . .   . . * . . } */ RGUI_T(KC_8),
    /* MID { . . . . .   . . . * . } */ LALT_T(KC_9),
    /* MID { . . . . .   . . . . * } */ RCTL_T(KC_0),

    /* BTM { * . . . .   . . . . . } */ KC_NO,
    /* BTM { . * . . .   . . . . . } */ KC_NO,
    /* BTM { . . * . .   . . . . . } */ KC_NO,
    /* BTM { . . . * .   . . . . . } */ KC_NO,
    /* BTM { . . . . *   . . . . . } */ KC_NO,
    /* BTM { . . . . .   * . . . . } */ KC_NO,
    /* BTM { . . . . .   . * . . . } */ KC_NO,
    /* BTM { . . . . .   . . * . . } */ KC_NO,
    /* BTM { . . . . .   . . . * . } */ KC_NO,
    /* BTM { . . . . .   . . . . * } */ KC_BSLS,

    /* TMB {       * .   . .       } */ KC_TRNS,
    /* TMB {       . *   . .       } */ KC_TRNS,
    /* TMB {       . .   * .       } */ KC_TRNS,
    /* TMB {       . .   . *       } */ KC_TRNS
  ),
  [LYR_GUI] = LAYOUT(
    /* TOP { * . . . .   . . . . . } */ KC_NO,
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

    /* TMB {       * .   . .       } */ KC_TRNS,
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
    /* TOP { . . . . .   * . . . . } */ KC_LCBR,
    /* TOP { . . . . .   . * . . . } */ KC_LPRN,
    /* TOP { . . . . .   . . * . . } */ KC_RPRN,
    /* TOP { . . . . .   . . . * . } */ KC_RCBR,
    /* TOP { . . . . .   . . . . * } */ CW_TOGG,

    /* MID { * . . . .   . . . . . } */ LCTL_T(KC_NO),
    /* MID { . * . . .   . . . . . } */ LALT_T(KC_NO),
    /* MID { . . * . .   . . . . . } */ LGUI_T(KC_NO),
    /* MID { . . . * .   . . . . . } */ LSFT_T(KC_NO),
    /* MID { . . . . *   . . . . . } */ KC_NO,
    /* MID { . . . . .   * . . . . } */ KC_LEFT,
    /* MID { . . . . .   . * . . . } */ RSFT_T(KC_DOWN),
    /* MID { . . . . .   . . * . . } */ RGUI_T(KC_UP),
    /* MID { . . . . .   . . . * . } */ LALT_T(KC_RGHT),
    /* MID { . . . . .   . . . . * } */ RCTL_T(KC_QUOT),

    /* BTM { * . . . .   . . . . . } */ KC_NO,
    /* BTM { . * . . .   . . . . . } */ KC_NO,
    /* BTM { . . * . .   . . . . . } */ KC_NO,
    /* BTM { . . . * .   . . . . . } */ KC_NO,
    /* BTM { . . . . *   . . . . . } */ KC_NO,
    /* BTM { . . . . .   * . . . . } */ KC_UNDS,
    /* BTM { . . . . .   . * . . . } */ KC_LBRC,
    /* BTM { . . . . .   . . * . . } */ KC_RBRC,
    /* BTM { . . . . .   . . . * . } */ KC_LT,
    /* BTM { . . . . .   . . . . * } */ KC_GT,

    /* TMB {       * .   . .       } */ KC_TRNS,
    /* TMB {       . *   . .       } */ KC_TRNS,
    /* TMB {       . .   * .       } */ KC_TRNS,
    /* TMB {       . .   . *       } */ KC_TRNS
  ),
};
// clang-format on
