#include "keycodes.h"
#include QMK_KEYBOARD_H


/* TOP { . . . . .   . . . . . } */
/* MID { . . . . .   . . . . . } */
/* BTM { . . . . .   . . . . . } */
/* TMB {       . .   . .       } */

// TODO:
// + home row mods: Shift Alt Gui Ctrl
// + layers to thumbs
// + I also need symbols more often than navigation...
// + Colemak toggle
// + move esc/enter/tab to better positions (where? combos?)
// + CAPSWORD
// - cut/copy/paste keys to util layer
// + I do need ctrl-enter shortcut somewhere (for now compensated with mods on util layer)
// - alt space is no good, when alt is on home row (silently makes vim unusable,
//   because it switches layouts)

/* Defines names for use in layer keycodes and the keymap */
enum layer_names {
  LYR_QWERTY,
  LYR_COLEMAK,
  LYR_SYMBOLS,
  LYR_NUMBERS,
  LYR_NAVIGATION,
};


enum key_combos {
  CMB_DF_ESC,
  CMB_JK_ENTER,
  CMB_QWE_DF0,
  CMB_QWF_DF1,
  CMB_LSCLN_CAPSWORD,

  CMB_TOTAL
};
uint16_t COMBO_LEN = CMB_TOTAL;
const uint16_t PROGMEM cmb_df[] = {KC_D, LSFT_T(KC_F), COMBO_END};
const uint16_t PROGMEM cmb_jk[] = {RSFT_T(KC_J), KC_K, COMBO_END};
const uint16_t PROGMEM cmb_qwe[] = {KC_Q, KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM cmb_qwf[] = {KC_Q, KC_W, LSFT_T(KC_F), COMBO_END};
const uint16_t PROGMEM cmb_lscln[] = {KC_L, RCTL_T(KC_SCLN), COMBO_END};
combo_t key_combos[] = {
  [CMB_DF_ESC] = COMBO(cmb_df, KC_ESC),
  [CMB_JK_ENTER] = COMBO(cmb_jk, KC_ENT),
  [CMB_QWE_DF0] = COMBO(cmb_qwe, DF(0)),
  [CMB_QWF_DF1] = COMBO(cmb_qwf, DF(1)),
  [CMB_LSCLN_CAPSWORD] = COMBO(cmb_lscln, CW_TOGG),
};


enum custom_keycodes {
  MYKC_WIN_TAB = SAFE_RANGE,
  MYKC_WIN_DESK_LEFT,
  MYKC_WIN_DESK_RIGHT,
  // TODO: MYKC_ALT_TAB,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed)
    switch (keycode) {
      case MYKC_WIN_TAB:
        SEND_STRING(SS_DOWN(X_LGUI) SS_TAP(X_TAB) SS_UP(X_LGUI));
        break;

      case MYKC_WIN_DESK_LEFT:
        SEND_STRING(SS_DOWN(X_LGUI) SS_DOWN(X_LCTL) SS_TAP(X_LEFT) SS_UP(X_LCTL) SS_UP(X_LGUI));
        break;

      case MYKC_WIN_DESK_RIGHT:
        SEND_STRING(SS_DOWN(X_LGUI) SS_DOWN(X_LCTL) SS_TAP(X_RIGHT) SS_UP(X_LCTL) SS_UP(X_LGUI));
        break;
    }

  return true;
}

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
    /* MID { . * . . .   . . . . . } */ KC_S,
    /* MID { . . * . .   . . . . . } */ KC_D,
    /* MID { . . . * .   . . . . . } */ LSFT_T(KC_F),
    /* MID { . . . . *   . . . . . } */ KC_G,
    /* MID { . . . . .   * . . . . } */ KC_H,
    /* MID { . . . . .   . * . . . } */ RSFT_T(KC_J),
    /* MID { . . . . .   . . * . . } */ KC_K,
    /* MID { . . . . .   . . . * . } */ KC_L,
    /* MID { . . . . .   . . . . * } */ RCTL_T(KC_SCLN),

    /* BTM { * . . . .   . . . . . } */ KC_Z,
    /* BTM { . * . . .   . . . . . } */ LALT_T(KC_X),
    /* BTM { . . * . .   . . . . . } */ LGUI_T(KC_C),
    /* BTM { . . . * .   . . . . . } */ KC_V,
    /* BTM { . . . . *   . . . . . } */ KC_B,
    /* BTM { . . . . .   * . . . . } */ KC_N,
    /* BTM { . . . . .   . * . . . } */ KC_M,
    /* BTM { . . . . .   . . * . . } */ LGUI_T(KC_COMM),
    /* BTM { . . . . .   . . . * . } */ LALT_T(KC_DOT),
    /* BTM { . . . . .   . . . . * } */ KC_SLSH,

    /* TMB {       * .   . .       } */ LT(LYR_NAVIGATION, KC_DEL),
    /* TMB {       . *   . .       } */ LT(LYR_NUMBERS, KC_BSPC),
    /* TMB {       . .   * .       } */ LT(LYR_SYMBOLS, KC_SPC),
    /* TMB {       . .   . *       } */ LT(LYR_NAVIGATION, KC_TAB)
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

    /* TMB {       * .   . .       } */ LT(LYR_NAVIGATION, KC_DEL),
    /* TMB {       . *   . .       } */ LT(LYR_NUMBERS, KC_BSPC),
    /* TMB {       . .   * .       } */ LT(LYR_SYMBOLS, KC_SPC),
    /* TMB {       . .   . *       } */ LT(LYR_NAVIGATION, KC_TAB)
  ),
  [LYR_SYMBOLS] = LAYOUT(
    /* TOP { * . . . .   . . . . . } */ KC_DOLLAR,
    /* TOP { . * . . .   . . . . . } */ KC_HASH,
    /* TOP { . . * . .   . . . . . } */ KC_ASTR,
    /* TOP { . . . * .   . . . . . } */ KC_AMPR,
    /* TOP { . . . . *   . . . . . } */ KC_PERC,
    /* TOP { . . . . .   * . . . . } */ KC_LCBR,
    /* TOP { . . . . .   . * . . . } */ KC_LPRN,
    /* TOP { . . . . .   . . * . . } */ KC_RPRN,
    /* TOP { . . . . .   . . . * . } */ KC_RCBR,
    /* TOP { . . . . .   . . . . * } */ KC_CIRC,

    /* MID { * . . . .   . . . . . } */ KC_GRAVE,
    /* MID { . * . . .   . . . . . } */ KC_PLUS,
    /* MID { . . * . .   . . . . . } */ KC_MINUS,
    /* MID { . . . * .   . . . . . } */ KC_EQUAL,
    /* MID { . . . . *   . . . . . } */ KC_UNDS,
    /* MID { . . . . .   * . . . . } */ KC_LT,
    /* MID { . . . . .   . * . . . } */ KC_LBRC,
    /* MID { . . . . .   . . * . . } */ KC_RBRC,
    /* MID { . . . . .   . . . * . } */ KC_GT,
    /* MID { . . . . .   . . . . * } */ KC_DQT,

    /* BTM { * . . . .   . . . . . } */ KC_SCLN,
    /* BTM { . * . . .   . . . . . } */ KC_QUOTE,
    /* BTM { . . * . .   . . . . . } */ KC_PIPE,
    /* BTM { . . . * .   . . . . . } */ KC_AT,
    /* BTM { . . . . *   . . . . . } */ KC_NO,
    /* BTM { . . . . .   * . . . . } */ KC_NO,
    /* BTM { . . . . .   . * . . . } */ KC_EXLM,
    /* BTM { . . . . .   . . * . . } */ KC_QUES,
    /* BTM { . . . . .   . . . * . } */ KC_BSLS,
    /* BTM { . . . . .   . . . . * } */ KC_COLN,

    /* TMB {       * .   . .       } */ KC_TRNS,
    /* TMB {       . *   . .       } */ KC_TRNS,
    /* TMB {       . .   * .       } */ KC_TRNS,
    /* TMB {       . .   . *       } */ KC_TRNS
  ),
  [LYR_NUMBERS] = LAYOUT(
    /* TOP { * . . . .   . . . . . } */ KC_NO,
    /* TOP { . * . . .   . . . . . } */ KC_NO,
    /* TOP { . . * . .   . . . . . } */ KC_NO,
    /* TOP { . . . * .   . . . . . } */ KC_NO,
    /* TOP { . . . . *   . . . . . } */ KC_NO,
    /* TOP { . . . . .   * . . . . } */ KC_NO,
    /* TOP { . . . . .   . * . . . } */ KC_1,
    /* TOP { . . . . .   . . * . . } */ KC_2,
    /* TOP { . . . . .   . . . * . } */ KC_3,
    /* TOP { . . . . .   . . . . * } */ KC_NO,

    /* MID { * . . . .   . . . . . } */ KC_NO,
    /* MID { . * . . .   . . . . . } */ KC_NO,
    /* MID { . . * . .   . . . . . } */ KC_NO,
    /* MID { . . . * .   . . . . . } */ KC_NO,
    /* MID { . . . . *   . . . . . } */ KC_NO,
    /* MID { . . . . .   * . . . . } */ KC_DOT,
    /* MID { . . . . .   . * . . . } */ KC_4,
    /* MID { . . . . .   . . * . . } */ KC_5,
    /* MID { . . . . .   . . . * . } */ KC_6,
    /* MID { . . . . .   . . . . * } */ KC_0,

    /* BTM { * . . . .   . . . . . } */ KC_NO,
    /* BTM { . * . . .   . . . . . } */ KC_NO,
    /* BTM { . . * . .   . . . . . } */ KC_NO,
    /* BTM { . . . * .   . . . . . } */ KC_NO,
    /* BTM { . . . . *   . . . . . } */ KC_NO,
    /* BTM { . . . . .   * . . . . } */ KC_NO,
    /* BTM { . . . . .   . * . . . } */ KC_7,
    /* BTM { . . . . .   . . * . . } */ KC_8,
    /* BTM { . . . . .   . . . * . } */ KC_9,
    /* BTM { . . . . .   . . . . * } */ KC_NO,

    /* TMB {       * .   . .       } */ KC_TRNS,
    /* TMB {       . *   . .       } */ KC_TRNS,
    /* TMB {       . .   * .       } */ KC_TRNS,
    /* TMB {       . .   . *       } */ KC_TRNS
  ),
  [LYR_NAVIGATION] = LAYOUT(
    /* TOP { * . . . .   . . . . . } */ KC_NO,
    /* TOP { . * . . .   . . . . . } */ KC_NO,
    /* TOP { . . * . .   . . . . . } */ KC_NO,
    /* TOP { . . . * .   . . . . . } */ KC_NO,
    /* TOP { . . . . *   . . . . . } */ KC_NO,
    /* TOP { . . . . .   * . . . . } */ MYKC_WIN_DESK_LEFT,
    /* TOP { . . . . .   . * . . . } */ KC_NO,
    /* TOP { . . . . .   . . * . . } */ MYKC_WIN_TAB,
    /* TOP { . . . . .   . . . * . } */ MYKC_WIN_DESK_RIGHT,
    /* TOP { . . . . .   . . . . * } */ KC_NO,

    /* MID { * . . . .   . . . . . } */ KC_TAB,
    /* MID { . * . . .   . . . . . } */ KC_NO,
    /* MID { . . * . .   . . . . . } */ KC_NO,
    /* MID { . . . * .   . . . . . } */ KC_NO,
    /* MID { . . . . *   . . . . . } */ KC_NO,
    /* MID { . . . . .   * . . . . } */ KC_LEFT,
    /* MID { . . . . .   . * . . . } */ RSFT_T(KC_DOWN),
    /* MID { . . . . .   . . * . . } */ RGUI_T(KC_UP),
    /* MID { . . . . .   . . . * . } */ LALT_T(KC_RGHT),
    /* MID { . . . . .   . . . . * } */ RCTL_T(KC_NO),

    /* BTM { * . . . .   . . . . . } */ KC_NO,
    /* BTM { . * . . .   . . . . . } */ KC_NO,
    /* BTM { . . * . .   . . . . . } */ KC_NO,
    /* BTM { . . . * .   . . . . . } */ KC_NO,
    /* BTM { . . . . *   . . . . . } */ KC_NO,
    /* BTM { . . . . .   * . . . . } */ KC_LGUI,
    /* BTM { . . . . .   . * . . . } */ KC_NO,
    /* BTM { . . . . .   . . * . . } */ KC_NO,
    /* BTM { . . . . .   . . . * . } */ KC_NO,
    /* BTM { . . . . .   . . . . * } */ KC_NO,

    /* TMB {       * .   . .       } */ KC_TRNS,
    /* TMB {       . *   . .       } */ KC_TRNS,
    /* TMB {       . .   * .       } */ KC_TRNS,
    /* TMB {       . .   . *       } */ KC_TRNS
  ),
};
// clang-format on
