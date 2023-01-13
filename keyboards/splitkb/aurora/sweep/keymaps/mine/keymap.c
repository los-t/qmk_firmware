#include "keycodes.h"
#include QMK_KEYBOARD_H


/* TOP { . . . . .   . . . . . } */
/* MID { . . . . .   . . . . . } */
/* BTM { . . . . .   . . . . . } */
/* TMB {       . .   . .       } */


/* Defines names for use in layer keycodes and the keymap */
enum layer_names {
  LYR_QWERTY,
  LYR_SYMBOLS,
  LYR_MISC
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[LYR_QWERTY] = LAYOUT(
     /* TOP { * . . . .   . . . . . } */ KC_Q,
     /* TOP { . * . . .   . . . . . } */ KC_W,
     /* TOP { . . * . .   . . . . . } */ KC_W,
     /* TOP { . . . * .   . . . . . } */ KC_R,
     /* TOP { . . . . *   . . . . . } */ KC_T,
     /* TOP { . . . . .   * . . . . } */ KC_Y,
     /* TOP { . . . . .   . * . . . } */ KC_U,
     /* TOP { . . . . .   . . * . . } */ KC_I,
     /* TOP { . . . . .   . . . * . } */ KC_O,
     /* TOP { . . . . .   . . . . * } */ KC_P,
     /* Left out: TAB, [, ], \ */

     /* MID { * . . . .   . . . . . } */ KC_A,
     /* MID { . * . . .   . . . . . } */ KC_S,
     /* MID { . . * . .   . . . . . } */ KC_S,
     /* MID { . . . * .   . . . . . } */ KC_F,
     /* MID { . . . . *   . . . . . } */ KC_G,
     /* MID { . . . . .   * . . . . } */ KC_H,
     /* MID { . . . . .   . * . . . } */ KC_J,
     /* MID { . . . . .   . . * . . } */ KC_K,
     /* MID { . . . . .   . . . * . } */ KC_L,
     /* MID { . . . . .   . . . . * } */ KC_SCLN,
     /* Left out: ' */

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
     /* Left out: none */

     /* TMB {       * .   . .       } */ LT(LYR_MISC, KC_ESC),
     /* TMB {       . *   . .       } */ LT(LYR_SYMBOLS, KC_BSPC),
     /* TMB {       . .   * .       } */ LT(LYR_SYMBOLS, KC_RETURN),
     /* TMB {       . .   . *       } */ LT(LYR_MISC, KC_SPC)
  ),
	[LYR_SYMBOLS] = LAYOUT(
     /* TOP { * . . . .   . . . . . } */ KC_EXLM,
     /* TOP { . * . . .   . . . . . } */ KC_AT,
     /* TOP { . . * . .   . . . . . } */ KC_HASH,
     /* TOP { . . . * .   . . . . . } */ KC_DLR,
     /* TOP { . . . . *   . . . . . } */ KC_PERC,
     /* TOP { . . . . .   * . . . . } */ KC_CIRC,
     /* TOP { . . . . .   . * . . . } */ KC_AMPR,
     /* TOP { . . . . .   . . * . . } */ KC_ASTR,
     /* TOP { . . . . .   . . . * . } */ KC_LPRN,
     /* TOP { . . . . .   . . . . * } */ KC_RPRN,

     /* MID { * . . . .   . . . . . } */ KC_UNDS,
     /* MID { . * . . .   . . . . . } */ KC_GRV,
     /* MID { . . * . .   . . . . . } */ KC_LBRC,
     /* MID { . . . * .   . . . . . } */ KC_LPRN,
     /* MID { . . . . *   . . . . . } */ KC_LCBR,
     /* MID { . . . . .   * . . . . } */ KC_RCBR,
     /* MID { . . . . .   . * . . . } */ KC_RPRN,
     /* MID { . . . . .   . . * . . } */ KC_RBRC,
     /* MID { . . . . .   . . . * . } */ KC_QUOT,
     /* MID { . . . . .   . . . . * } */ KC_EQL,

     /* BTM { * . . . .   . . . . . } */ KC_MINS,
     /* BTM { . * . . .   . . . . . } */ KC_NO,
     /* BTM { . . * . .   . . . . . } */ KC_NO,
     /* BTM { . . . * .   . . . . . } */ KC_SLSH,
     /* BTM { . . . . *   . . . . . } */ KC_LT,
     /* BTM { . . . . .   * . . . . } */ KC_GT,
     /* BTM { . . . . .   . * . . . } */ KC_PIPE,
     /* BTM { . . . . .   . . * . . } */ KC_DQUO,
     /* BTM { . . . . .   . . . * . } */ KC_QUES,
     /* BTM { . . . . .   . . . . * } */ KC_PLUS,

     /* TMB {       * .   . .       } */ KC_ESC,
     /* TMB {       . *   . .       } */ KC_NO,
     /* TMB {       . .   * .       } */ KC_NO,
     /* TMB {       . .   . *       } */ KC_SPC
  ),
	[LYR_MISC] = LAYOUT(
     /* TOP { * . . . .   . . . . . } */  KC_1,
     /* TOP { . * . . .   . . . . . } */  KC_2,
     /* TOP { . . * . .   . . . . . } */  KC_3,
     /* TOP { . . . * .   . . . . . } */  KC_4,
     /* TOP { . . . . *   . . . . . } */  KC_5,
     /* TOP { . . . . .   * . . . . } */  KC_6,
     /* TOP { . . . . .   . * . . . } */  KC_7,
     /* TOP { . . . . .   . . * . . } */  KC_8,
     /* TOP { . . . . .   . . . * . } */  KC_9,
     /* TOP { . . . . .   . . . . * } */  KC_0,
                                         
     /* MID { * . . . .   . . . . . } */  KC_LCTL,
     /* MID { . * . . .   . . . . . } */  KC_TAB,
     /* MID { . . * . .   . . . . . } */  KC_CUT,
     /* MID { . . . * .   . . . . . } */  KC_COPY,
     /* MID { . . . . *   . . . . . } */  KC_PSTE,
     /* MID { . . . . .   * . . . . } */  KC_LEFT,
     /* MID { . . . . .   . * . . . } */  KC_DOWN,
     /* MID { . . . . .   . . * . . } */  KC_UP,
     /* MID { . . . . .   . . . * . } */  KC_RGHT,
     /* MID { . . . . .   . . . . * } */  KC_RCTL,
                                         
     /* BTM { * . . . .   . . . . . } */  KC_LSFT,
     /* BTM { . * . . .   . . . . . } */  KC_APP,
     /* BTM { . . * . .   . . . . . } */  KC_LGUI,
     /* BTM { . . . * .   . . . . . } */  CW_TOGG,
     /* BTM { . . . . *   . . . . . } */  KC_MYCM,
     /* BTM { . . . . .   * . . . . } */  KC_DEL,
     /* BTM { . . . . .   . * . . . } */  KC_RGUI,
     /* BTM { . . . . .   . . * . . } */  KC_S,
     /* BTM { . . . . .   . . . * . } */  KC_R,
     /* BTM { . . . . .   . . . . * } */  KC_RSFT,
                                         
     /* TMB {       * .   . .       } */  KC_BSPC,
     /* TMB {       . *   . .       } */  KC_NO,
     /* TMB {       . .   * .       } */  KC_NO,
     /* TMB {       . .   . *       } */  KC_SPC
  ),
};
// clang-format on
