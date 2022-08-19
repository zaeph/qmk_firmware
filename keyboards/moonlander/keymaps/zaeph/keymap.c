/* Copyright 2020-2022 Leo Vivier <zaeph@zaeph.net> (@zaeph)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#include "version.h"
#include "songs.h"

enum layers {
  BASE,  // default layer
  LSYM,  // symbols left
  RSYM,  // symbols right
  TYPO,  // typography
  MOVE,  // movement
  NUMB,  // numbers
  FUNC,  // functions
  LMOD,  // modifiers left
  RMOD,  // modifiers right
};

#define BASE 0
#define COLM 1
#define LSYM 2
#define RSYM 3
#define TYPO 4
#define NUMB 5
#define MOVE 6
#define FUNC 7
#define LMOD 8
#define RMOD 9

enum custom_keycodes {
  PLACEHOLDER = ML_SAFE_RANGE,
  VRSN,
  /* ZP_UALT, */
  /* ZP_UNDS, */
  /* ZP_UPDIR, */
  /* ZP_SYUD, */
  /* ZP_SRCT, */
  ZP_LARR,
  ZP_RARR,
  ZP_WLRS,
  /* ZP_SYSF, */
  /* ZP_NUMB, */
  ZP_VICT,
  ZP_RICK,
  RM_LCTL,
  RM_LSFT,
  RM_LALT,
  RM_SUPR,
  RM_HYPR,
  LM_LCTL,
  LM_LSFT,
  LM_LALT,
  LM_SUPR,
  LM_HYPR,
  FR_EXCL,
  FR_QUES,
  FR_SCLN,
  FR_COLN,
  RGB_RESET,
};

enum {
  TD_CQTO,
  TD_CQTC,
  TD_CGUO,
  TD_CGUC,
  TD_INBA,
  TD_ELLP,
  TD_PRIM,
  TD_ENEM,
  TD_SYSF,
  TD_NUMB,
};

#define ZP_CAPS KC_KP_1
#define ZP_ENDA KC_KP_2
#define ZP_MINS KC_KP_3
#define ZP_QUOT KC_KP_4
#define ZP_INTP KC_KP_5
/* #define ZP_UNDS KC_KP_2 */
#define ZP_SCLN LSFT(KC_SLSH)
#define ZP_LABK RALT(KC_LBRC)
#define ZP_RABK RALT(KC_RBRC)
/* #define ZP_CAPS RALT(KC_ESC) */
#define ZP_EXCL LSFT(KC_COMM)
#define ZP_QUES LSFT(KC_DOT)
#define ZP_COMP KC_RCTL
/* #define ZP_COLN KC_MINS */
#define ZP_UNDS KC_SCLN
#define ZP_CQUT KC_QUOT
/* #define ZP_MINS LSFT(KC_SCLN) */
/* #define ZP_MINS KC_KP_2 */

#define ZP_SUPR KC_LGUI
#define ZP_HYPR KC_RGUI

#define ZP_SYRT LT(LSYM, KC_ENT)
#define ZP_SYSF TD(TD_SYSF)
#define ZP_NUMB TD(TD_NUMB)


#define ZP_COLM DF(COLM)
#define ZP_QWER DF(BASE)
/* #define ZP_LCES LCTL_T(KC_ESC) */
#define ZP_TYCP LT(TYPO, ZP_CAPS)
/* #define ZP_SYCP LT(LSYM, ZP_CAPS) */
/* #define ZP_SYUD LT(LSYM, ZP_UNDS) */
/* #define ZP_MOBS LT(MOVE, KC_BSPC) */
#define ZP_MOKX LT(MOVE, KC_X)
#define ZP_RAIN MT(MOD_RALT, ZP_INTP)
#define ZP_LAKF MT(MOD_LALT, KC_F)
#define ZP_LAKJ MT(MOD_LALT, KC_J)
/* #define ZP_SYDL LT(LSYM, KC_DEL) */
/* #define ZP_BALT LALT_T(KC_BSPC) */
/* #define ZP_SALT LALT_T(KC_SPC) */
/* #define ZP_LCCP LCTL_T(KC_RCTL) */
/* #define ZP_LCQT LCTL_T(KC_QUOTE) */
/* #define ZP_RASL RALT_T(KC_SLASH) */
/* #define ZP_LASL LALT_T(KC_SLASH) */
/* #define ZP_LAKZ LALT_T(KC_Z) */
/* #define ZP_RCQT LCTL_T(KC_QUOTE) */
/* #define ZP_RENT RSFT_T(KC_ENT) */

#define ZP_SLCT MT(MOD_LCTL, KC_ESC)
#define ZP_SLAL MT(MOD_LALT, KC_Z)
#define ZP_SRCT MT(MOD_LCTL, ZP_CQUT)
#define ZP_SRAL MT(MOD_LALT, KC_SLASH)

#define ZP_LSEL LCTL(LSFT(KC_LEFT))
#define ZP_RSEL LCTL(LSFT(KC_RIGHT))

#define ZP_LSFT LSFT_T(ZP_ENDA)
#define ZP_RSFT RSFT_T(ZP_MINS)

#define ZP_CQTO TD(TD_CQTO)
#define ZP_CQTC TD(TD_CQTC)
#define TY_CDQO RALT(KC_E)
#define TY_CDQC RALT(KC_R)
#define TY_CSQO RALT(LSFT(KC_E))
#define TY_CSQC RALT(LSFT(KC_R))

#define ZP_CGUO TD(TD_CGUO)
#define ZP_CGUC TD(TD_CGUC)
#define TY_CDGO RALT(KC_3)
#define TY_CDGC RALT(KC_4)
#define TY_CSGO RALT(LSFT(KC_3))
#define TY_CSGC RALT(LSFT(KC_4))

#define ZP_ENEM TD(TD_ENEM)
#define TY_ENDA RALT(KC_MINS)
#define TY_EMDA RALT(KC_2)

#define ZP_ELLP (TD(TD_ELLP))
#define TY_ELLP RALT(KC_COMM)

#define ZP_PRIM (TD(TD_PRIM))
#define TY_PRIM RALT(KC_O)
#define TY_DPRM RALT(LSFT(KC_O))

#define ZP_INBA (TD(TD_INBA))
#define TY_INBA RALT(KC_1)
#define TY_THSP RALT(KC_SPC)
#define TY_NBSP RALT(LSFT(KC_SPC))
#define TY_FGDA RALT(LSFT(KC_MINS))
#define TY_CEUR RALT(KC_7)
#define TY_CGBP RALT(KC_8)
#define TY_THRF RALT(KC_9)
#define TY_BECS RALT(LSFT(KC_9))
#define TY_DEGR RALT(KC_0)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Layer: BASE
   *
   * .--------------------------------------------------.           .--------------------------------------------------.
   * |   `    |  1   |  2   |  3   |  4   |  5   |  -   |           |   =  |   6  |   7  |   8  |   9  |   0  |    '   |
   * |--------+------+------+------+------+------+------|           |------+------+------+------+------+------+--------|
   * |  TAB   |  Q   |  W   |  E   |  R   |  T   |  [   |           |   ]  |   Y  |   U  |   I  |   O  |   P  |  COMP  |
   * |--------+------+------+------+------+------+------|           |------+------+------+------+------+------+--------|
   * |  ESC   |  A   |  S   |  D   |  F   |  G   | DEL  |           |   _  |   H  |   J  |   K  |   L  |   _  |    ’   |
   * |--------+------+------+------+------+------+------´           `------+------+------+------+------+------+--------|
   * |  LSFT  |  Z   |  X   |  C   |  V   |  B   |                         |   N  |   M  |   ,  |   .  |   /  |  RSFT  |
   * |--------+------+------+------+------+------´                         `------+------+------+------+------+--------|
   * | ~FUNC  | MEH  | LALT |      |~TYCP |  .-------------.     .-------------.  | RAIN |      |      |  MEH | ~LSYM  |
   *  `-----------------------------------´  |    HYPER    |     |    SUPER    |  `------------------------------------´
   *                                  .------+------+------|     |------+------+------.
   *                                  |      |      |      |     |      |      |      |
   *                                  | BSPC |~SYSF |      |     |      | ~SYRT|  SPC |
   *                                  |      |      |      |     |      |      |      |
   *                                  `--------------------´     `--------------------´
   */

  [BASE] = LAYOUT_moonlander(
                             KC_GRV,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_MINS,    KC_EQL,     KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       ZP_QUOT,
                             KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,       KC_LBRC,    KC_RBRC,    KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       ZP_COMP,
                             KC_ESC,     KC_A,       KC_S,       KC_D,       KC_F,       KC_G,       KC_DEL,     KC_UNDS,    KC_H,       KC_J,       KC_K,       KC_L,       ZP_UNDS,    ZP_CQUT,
                             ZP_LSFT,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,                               KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    ZP_RSFT,
                             MO(FUNC),   KC_MEH,     KC_LALT,    KC_RALT,    ZP_TYCP,    ZP_HYPR,                            ZP_SUPR,    ZP_RAIN,    KC_DOWN,    KC_UP,      KC_MEH,     MO(LSYM),
                             KC_BSPC,    ZP_SYSF,    _______,                                                                                                    _______,    ZP_SYRT,    KC_SPC),

  [COLM] = LAYOUT_moonlander(
                             KC_GRV,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_MINS,    KC_EQL,     KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       ZP_QUOT,
                             KC_TAB,     KC_Q,       KC_W,       KC_F,       KC_P,       KC_B,       KC_LBRC,    KC_RBRC,    KC_J,       KC_L,       KC_U,       KC_Y,       ZP_CQUT,    ZP_COMP,
                             KC_ESC,     KC_A,       KC_R,       KC_S,       KC_T,       KC_G,       KC_DEL,     KC_UNDS,    KC_M,       KC_N,       KC_E,       KC_I,       KC_O,       ZP_CQUT,
                             ZP_LSFT,    ZP_SLAL,    ZP_MOKX,    KC_C,       KC_D,       KC_V,                               KC_K,       KC_H,       KC_COMM,    KC_DOT,     ZP_SRAL,    ZP_RSFT,
                             MO(FUNC),   KC_MEH,     KC_LALT,    KC_RALT,    ZP_NUMB,    ZP_HYPR,                            ZP_SUPR,    ZP_RAIN,    KC_DOWN,    KC_UP,      KC_MEH,     MO(LSYM),
                             KC_BSPC,    ZP_SYSF,    ZP_TYCP,                                                                                                    _______,    ZP_SYRT,    KC_SPC),


  /* Layer: LSYM
   *
   * .--------------------------------------------------.           .--------------------------------------------------.
   * |        |      |      |  <-  |  ->  |      |      |           |      |      |      |      |      |      |        |
   * |--------+------+------+------+------+------+------|           |------+------+------+------+------+------+--------|
   * |        |  ?   |  -   |  <   |  >   |  `   |      |           |      |      |      |      |      |      |        |
   * |--------+------+------+------+------+------+------|           |------+------+------+------+------+------+--------|
   * |        |  !   |  +   |  :   |  =   |  #   |      |           |      |      |      |      |      |      |        |
   * |--------+------+------+------+------+------+------´           `------+------+------+------+------+------+--------|
   * |        |  ^   |  /   |  *   |  ;   |  :=  |                         |      |      |      |      |      |        |
   * |--------+------+------+------+------+------´                         `------+------+------+------+------+--------|
   * |        |      |      |      |      |  .-------------.     .-------------.  |      |      |      |      |        |
   *  `-----------------------------------´  |             |     |             |  `------------------------------------´
   *                                  .------+------+------|     |------+------+------.
   *                                  |      |      |      |     |      |      |      |
   *                                  |      |      |      |     |      |      |      |
   *                                  |      |      |      |     |      |      |      |
   *                                  `--------------------´     `--------------------´
   */

  [LSYM] = LAYOUT_moonlander(
                             _______,    _______,    _______,    ZP_LARR,    ZP_RARR,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
                             _______,    ZP_QUES,    KC_MINS,    ZP_LABK,    ZP_RABK,    KC_GRAVE,   _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
                             _______,    ZP_EXCL,    KC_PLUS,    KC_COLN,    KC_EQL,     KC_HASH,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
                             _______,    KC_CIRC,    KC_SLSH,    KC_ASTR,    ZP_SCLN,    ZP_WLRS,                            _______,    _______,    _______,    _______,    _______,    _______,
                             _______,    _______,    _______,    _______,    _______,    _______,                            _______,    _______,    _______,    _______,    _______,    _______,
                             _______,    _______,    _______,                                                                                                    _______,    _______,    _______),


  /* Layer: RSYM
   *
   * .--------------------------------------------------.           .--------------------------------------------------.
   * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
   * |--------+------+------+------+------+------+------|           |------+------+------+------+------+------+--------|
   * |        |      |      |      |      |      |      |           |      |   &  |   {  |   }  |   %  |   `  |        |
   * |--------+------+------+------+------+------+------|           |------+------+------+------+------+------+--------|
   * |        |      |      |      |      |      |      |           |      |   |  |   (  |   )  |   $  |   "  |    '   |
   * |--------+------+------+------+------+------+------´           `------+------+------+------+------+------+--------|
   * |        |      |      |      |      |      |                         |   ~  |   [  |   ]  |   @  |   \  |        |
   * |--------+------+------+------+------+------´                         `------+------+------+------+------+--------|
   * |        |      |      |      |      |  .-------------.     .-------------.  |      |      |      |      |        |
   *  `-----------------------------------´  |             |     |             |  `------------------------------------´
   *                                  .------+------+------|     |------+------+------.
   *                                  |      |      |      |     |      |      |      |
   *                                  |      |      |      |     |      |      |      |
   *                                  |      |      |      |     |      |      |      |
   *                                  `--------------------´     `--------------------´
   */

  [RSYM] = LAYOUT_moonlander(
                             _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
                             _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    KC_AMPR,    KC_LCBR,    KC_RCBR,    KC_PERC,    KC_GRAVE,   _______,
                             _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    KC_PIPE,    KC_LPRN,    KC_RPRN,    KC_DLR,     KC_DQT,     ZP_QUOT,
                             _______,    _______,    _______,    _______,    _______,    _______,                            KC_TILD,    KC_LBRC,    KC_RBRC,    KC_AT,      KC_BSLS,    _______,
                             _______,    _______,    _______,    _______,    _______,    _______,                            _______,    _______,    _______,    _______,    _______,    _______,
                             _______,    _______,    _______,                                                                                                    _______,    _______,    _______),


  /* Layer: TYPO
   *
   * .--------------------------------------------------.           .--------------------------------------------------.
   * |        |      |      |      |      |      |      |           |      |      |   €  |   £  |   ∴  |      |        |
   * |--------+------+------+------+------+------+------|           |------+------+------+------+------+------+--------|
   * |        |      |      |      |      |      |      |           |      |      |   «  |   »  |   °  |   ′  |        |
   * |--------+------+------+------+------+------+------|           |------+------+------+------+------+------+--------|
   * |        |      |      |      |      |      |      |           |      |   …  |   “  |   ”  |   –  |   :  |        |
   * |--------+------+------+------+------+------+------´           `------+------+------+------+------+------+--------|
   * |        |      |      |      |      |      |                         |      |   ‽  |   !  |   ?  |   ;  |        |
   * |--------+------+------+------+------+------´                         `------+------+------+------+------+--------|
   * |        |      |      |      |      |  .-------------.     .-------------.  |      |      |      |      |        |
   *  `-----------------------------------´  |             |     |             |  `------------------------------------´
   *                                  .------+------+------|     |------+------+------.
   *                                  |      |      |      |     |      |      |      |
   *                                  |      |      |      |     |      |      | NBSP |
   *                                  |      |      |      |     |      |      |      |
   *                                  `--------------------´     `--------------------´
   */


  [TYPO] = LAYOUT_moonlander(
                             _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    TY_CEUR,    TY_CGBP,    TY_THRF,    _______,    _______,
                             _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    ZP_CGUO,    ZP_CGUC,    TY_DEGR,    ZP_PRIM,    _______,
                             _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    ZP_ELLP,    ZP_CQTO,    ZP_CQTC,    ZP_ENEM,    FR_COLN,    _______,
                             _______,    _______,    _______,    _______,    _______,    _______,                            _______,    ZP_INBA,    FR_EXCL,    FR_QUES,    FR_SCLN,    _______,
                             _______,    _______,    _______,    _______,    _______,    _______,                            _______,    _______,    _______,    _______,    _______,    _______,
                             _______,    _______,    _______,                                                                                                    _______,    _______,    TY_NBSP),


  /* Layer: NUMB
   *
   * .--------------------------------------------------.           .--------------------------------------------------.
   * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
   * |--------+------+------+------+------+------+------|           |------+------+------+------+------+------+--------|
   * |        |      |      |      |      |      |      |           |      |   .  |   7  |   8  |   9  | PSCR |        |
   * |--------+------+------+------+------+------+------|           |------+------+------+------+------+------+--------|
   * |        |      |      |      |      |      |      |           |      |   ′  |   4  |   5  |   6  |   ‒  |        |
   * |--------+------+------+------+------+------+------´           `------+------+------+------+------+------+--------|
   * | ~FUNC  |      |      |      |      |      |                         |   0  |   1  |   2  |   3  |      |        |
   * |--------+------+------+------+------+------´                         `------+------+------+------+------+--------|
   * |        |      |      |      |      |  .-------------.     .-------------.  |      |      |      |      |        |
   *  `-----------------------------------´  |             |     |             |  `------------------------------------´
   *                                  .------+------+------|     |------+------+------.
   *                                  |      |      |      |     |      |      |      |
   *                                  |      |      |      |     |      |      | THSP |
   *                                  |      |      |      |     |      |      |      |
   *                                  `--------------------´     `--------------------´
   */

  [NUMB] = LAYOUT_moonlander(
                             _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
                             _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    KC_DOT,     KC_7,       KC_8,       KC_9,       KC_PSCR,    _______,
                             _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    ZP_PRIM,    KC_4,       KC_5,       KC_6,       TY_FGDA,    _______,
                             MO(FUNC),   _______,    _______,    _______,    _______,    _______,                            KC_0,       KC_1,       KC_2,       KC_3,       _______,    _______,
                             _______,    _______,    _______,    _______,    _______,    _______,                            _______,    _______,    _______,    _______,    _______,    _______,
                             _______,    _______,    _______,                                                                                                    _______,    _______,    TY_THSP),


  /* Layer: MOVE
   *
   * .--------------------------------------------------.           .--------------------------------------------------.
   * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
   * |--------+------+------+------+------+------+------|           |------+------+------+------+------+------+--------|
   * |        |      |      |      |      |      |      |           |      |      | HOME |  END |      |      |        |
   * |--------+------+------+------+------+------+------|           |------+------+------+------+------+------+--------|
   * |        |      |      |      |      |      |      |           |      |   ←  |   ↓  |   ↑  |   →  |      |        |
   * |--------+------+------+------+------+------+------´           `------+------+------+------+------+------+--------|
   * |        |      |      |      |      |      |                         |      | PGDN | PGUP |      |      |        |
   * |--------+------+------+------+------+------´                         `------+------+------+------+------+--------|
   * |        |      |      |      |      |  .-------------.     .-------------.  |      |      |      |      |        |
   *  `-----------------------------------´  |             |     |             |  `------------------------------------´
   *                                  .------+------+------|     |------+------+------.
   *                                  |      |      |      |     |      |      |      |
   *                                  |      |      |      |     |      |      |      |
   *                                  |      |      |      |     |      |      |      |
   *                                  `--------------------´     `--------------------´
   */

  [MOVE] = LAYOUT_moonlander(
                             _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
                             _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    KC_HOME,    KC_END,     _______,    _______,    _______,
                             _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    KC_LEFT,    KC_DOWN,    KC_UP,      KC_RIGHT,   _______,    _______,
                             _______,    _______,    _______,    _______,    _______,    _______,                            _______,    KC_PGDN,    KC_PGUP,    _______,    _______,    _______,
                             _______,    _______,    _______,    _______,    _______,    _______,                            _______,    _______,    _______,    _______,    _______,    _______,
                             _______,    _______,    _______,                                                                                                    _______,    _______,    _______),


  /* Layer: FUNC
   *
   * .--------------------------------------------------.           .--------------------------------------------------.
   * |        |      |      |      |      |      |RESET |           |      |      |      |      |      |      |        |
   * |--------+------+------+------+------+------+------|           |------+------+------+------+------+------+--------|
   * |        |      |      |      |      |      |      |           |      |      |  F7  |  F8  |  F9  |  F12 |        |
   * |--------+------+------+------+------+------+------|           |------+------+------+------+------+------+--------|
   * |        |      |      |      |      | RICK | VICT |           |      |      |  F4  |  F5  |  F6  |  F11 |        |
   * |--------+------+------+------+------+------+------´           `------+------+------+------+------+------+--------|
   * |        |      |      | QWER | COLM |      |                         |      |  F1  |  F2  |  F3  |  F10 |        |
   * |--------+------+------+------+------+------´                         `------+------+------+------+------+--------|
   * |        |      |      |      | RGB  |  .-------------.     .-------------.  |      |      |      |      |        |
   *  `-----------------------------------´  |    RMOD     |     |     MOD     |  `------------------------------------´
   *                                  .------+------+------|     |------+------+------.
   *                                  |      |      |      |     |      |      |      |
   *                                  | HUD  | VAD  | HUI  |     | COLOR|  VAI |  TOG |
   *                                  |      |      |      |     |      |      |      |
   *                                  `--------------------´     `--------------------´
   */

  [FUNC] = LAYOUT_moonlander(
                             _______,    _______,    _______,    _______,    _______,    _______,    QK_BOOT,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
                             _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    KC_F7,      KC_F8,      KC_F9,      KC_F12,     _______,
                             _______,    _______,    _______,    _______,    _______,    ZP_RICK,    ZP_VICT,    _______,    _______,    KC_F4,      KC_F5,      KC_F6,      KC_F11,     _______,
                             _______,    _______,    _______,    ZP_QWER,    ZP_COLM,    _______,                            _______,    KC_F1,      KC_F2,      KC_F3,      KC_F10,     _______,
                             _______,    _______,    _______,    _______,    RGB_RESET,  RGB_RMOD,                           RGB_MOD,    _______,    _______,    _______,    _______,    _______,
                             RGB_HUD,    RGB_VAD,    RGB_HUI,                                                                                         TOGGLE_LAYER_COLOR,    RGB_VAI,    RGB_TOG),


  /* Layer: LMOD
   *
   * .--------------------------------------------------.           .--------------------------------------------------.
   * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
   * |--------+------+------+------+------+------+------|           |------+------+------+------+------+------+--------|
   * |        |      |      |~RSYM |      |      |      |           |      |      |      |      |      |      |        |
   * |--------+------+------+------+------+------+------|           |------+------+------+------+------+------+--------|
   * |        | SUPR | LALT | LSFT | LCTL |      |      |           |      |      |      |      |      |      |        |
   * |--------+------+------+------+------+------+------´           `------+------+------+------+------+------+--------|
   * |        | HYPR |      |~NUMB |~MOVE |      |                         |      |      |      |      |      |        |
   * |--------+------+------+------+------+------´                         `------+------+------+------+------+--------|
   * |        |      |      |      |      |  .-------------.     .-------------.  |      |      |      |      |        |
   *  `-----------------------------------´  |             |     |             |  `------------------------------------´
   *                                  .------+------+------|     |------+------+------.
   *                                  |      |      |      |     |      |      |      |
   *                                  |      |      |      |     |      |      |      |
   *                                  |      |      |      |     |      |      |      |
   *                                  `--------------------´     `--------------------´
   */

  [LMOD] = LAYOUT_moonlander(
                                 _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
                                 _______,    _______,    _______,    MO(RSYM),   _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
                                 _______,    LM_SUPR,    LM_LALT,    LM_LSFT,    LM_LCTL,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
                                 _______,    LM_HYPR,    _______,    MO(NUMB),   MO(MOVE),   _______,                            _______,    _______,    _______,    _______,    _______,    _______,
                                 _______,    _______,    _______,    _______,    _______,    _______,                            _______,    _______,    _______,    _______,    _______,    _______,
                                 _______,    _______,    _______,                                                                                                    _______,    _______,    _______),


  /* Layer: RMOD
   *
   * .--------------------------------------------------.           .--------------------------------------------------.
   * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
   * |--------+------+------+------+------+------+------|           |------+------+------+------+------+------+--------|
   * |        |      |      |      |      |      |      |           |      |      |      | ~LSYM|      |      |        |
   * |--------+------+------+------+------+------+------|           |------+------+------+------+------+------+--------|
   * |        |      |      |      |      |      |      |           |      |      | LCTL | LSFT | LALT | SUPR |        |
   * |--------+------+------+------+------+------+------´           `------+------+------+------+------+------+--------|
   * |        |      |      |      |      |      |                         |      |      |      |      | HYPR |        |
   * |--------+------+------+------+------+------´                         `------+------+------+------+------+--------|
   * |        |      |      |      |      |  .-------------.     .-------------.  |      |      |      |      |        |
   *  `-----------------------------------´  |             |     |             |  `------------------------------------´
   *                                  .------+------+------|     |------+------+------.
   *                                  |      |      |      |     |      |      |      |
   *                                  |      |      |      |     |      |      |      |
   *                                  |      |      |      |     |      |      |      |
   *                                  `--------------------´     `--------------------´
   */

  [RMOD] = LAYOUT_moonlander(
                                 _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
                                 _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    MO(LSYM),   _______,    _______,    _______,
                                 _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    RM_LCTL,    RM_LSFT,    RM_LALT,    RM_SUPR,    _______,
                                 _______,    _______,    _______,    _______,    _______,    _______,                            _______,    _______,    _______,    _______,    RM_HYPR,    _______,
                                 _______,    _______,    _______,    _______,    _______,    _______,                            _______,    _______,    _______,    _______,    _______,    _______,
                                 _______,    _______,    _______,                                                                                                    _______,    _______,    _______),


  /* Layer: TEMPLATE
   *
   * .--------------------------------------------------.           .--------------------------------------------------.
   * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
   * |--------+------+------+------+------+------+------|           |------+------+------+------+------+------+--------|
   * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
   * |--------+------+------+------+------+------+------|           |------+------+------+------+------+------+--------|
   * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
   * |--------+------+------+------+------+------+------´           `------+------+------+------+------+------+--------|
   * |        |      |      |      |      |      |                         |      |      |      |      |      |        |
   * |--------+------+------+------+------+------´                         `------+------+------+------+------+--------|
   * |        |      |      |      |      |  .-------------.     .-------------.  |      |      |      |      |        |
   *  `-----------------------------------´  |             |     |             |  `------------------------------------´
   *                                  .------+------+------|     |------+------+------.
   *                                  |      |      |      |     |      |      |      |
   *                                  |      |      |      |     |      |      |      |
   *                                  |      |      |      |     |      |      |      |
   *                                  `--------------------´     `--------------------´
   */

  /* [TEMPLATE] = LAYOUT_moonlander( */
  /*                                _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______, */
  /*                                _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______, */
  /*                                _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______, */
  /*                                _______,    _______,    _______,    _______,    _______,    _______,                            _______,    _______,    _______,    _______,    _______,    _______, */
  /*                                _______,    _______,    _______,    _______,    _______,    _______,                            _______,    _______,    _______,    _______,    _______,    _______, */
  /*                                _______,    _______,    _______,                                                                                                    _______,    _______,    _______), */
};


typedef struct {
  bool is_press_action;
  int state;
} tap;

enum {
  SINGLE_TAP = 1,
  SINGLE_HOLD = 2,
  DOUBLE_TAP = 3,
};

//Determine the current tap dance state
int cur_dance (qk_tap_dance_state_t *state) {
  if (state->count == 1) {
    if (!state->pressed) {
      return SINGLE_TAP;
    } else {
      return SINGLE_HOLD;
    }
  } else if (state->count == 2) {
    return DOUBLE_TAP;
  }
  else return 8;
}

static tap dance_numb_tap_state = {
  .is_press_action = true,
  .state = 0
};

static tap dance_sysf_tap_state = {
  .is_press_action = true,
  .state = 0
};

void dance_quote_with_nbsp(uint16_t code, uint8_t add_nbsp) {
  /* ADD_THSP: 0 :: none ; 1 :: before ; 2 :: after */
  switch (add_nbsp) {
  case 1:
    tap_code16(TY_NBSP);
    tap_code16(code);
    return;
  case 2:
    tap_code16(code);
    tap_code16(TY_NBSP);
    return;
  default:
    tap_code16(code);
    return;
  }
}

void dance_quote_helper(qk_tap_dance_state_t *state, void *user_data, uint16_t code1, uint16_t code2, uint8_t add_nbsp) {
  /* ADD_THSP: 0 :: before ; 1 :: after */
  if (state->count == 1) {
    dance_quote_with_nbsp(code1, add_nbsp);
  } else {
    dance_quote_with_nbsp(code2, add_nbsp);
  }
}

void dance_cqto(qk_tap_dance_state_t *state, void *user_data) {
  dance_quote_helper(state, user_data, TY_CDQO, TY_CSQO, 0);
}
void dance_cqtc(qk_tap_dance_state_t *state, void *user_data) {
  dance_quote_helper(state, user_data, TY_CDQC, TY_CSQC, 0);
}
void dance_cguo(qk_tap_dance_state_t *state, void *user_data) {
  dance_quote_helper(state, user_data, TY_CDGO, TY_CSGO, 2);
}
void dance_cguc(qk_tap_dance_state_t *state, void *user_data) {
  dance_quote_helper(state, user_data, TY_CDGC, TY_CSGC, 1);
}

void dance_inba(qk_tap_dance_state_t *state, void *user_data) {
  switch (state->count) {
  case 2:
    tap_code16(TY_THSP);
    tap_code16(TY_INBA);
    return;
  default:
    tap_code16(TY_INBA);
    return;
  }
}

void dance_ellp(qk_tap_dance_state_t *state, void *user_data) {
  switch (state->count) {
  case 2:
    tap_code16(KC_DOT);
    tap_code16(TY_NBSP);
    tap_code16(KC_DOT);
    tap_code16(TY_NBSP);
    tap_code16(KC_DOT);
    return;
  default:
    tap_code16(TY_ELLP);
    return;
  }
}

void dance_enem(qk_tap_dance_state_t *state, void *user_data) {
  switch (state->count) {
  case 2:
    tap_code16(TY_EMDA);
    return;
  default:
    tap_code16(TY_NBSP);
    tap_code16(TY_ENDA);
    tap_code16(KC_SPC);
    return;
  }
}

void dance_prim(qk_tap_dance_state_t *state, void *user_data) {
  switch (state->count) {
  case 2:
    tap_code16(TY_DPRM);
    return;
  default:
    tap_code16(TY_PRIM);
    return;
  }
}

void dance_sysf_finished(qk_tap_dance_state_t *state, void *user_data) {
  dance_sysf_tap_state.state = cur_dance(state);
  switch (dance_sysf_tap_state.state) {
  case SINGLE_TAP:
    set_oneshot_mods(MOD_LSFT);
    break;
  case SINGLE_HOLD:
    layer_on(RSYM);
  }
}

void dance_sysf_reset(qk_tap_dance_state_t *state, void *user_data) {
  if (dance_sysf_tap_state.state==SINGLE_HOLD) {
    layer_off(RSYM);
  }
  dance_sysf_tap_state.state = 0;
}

uint8_t NUMB_IDLE = 0;

void dance_numb_finished(qk_tap_dance_state_t *state, void *user_data) {
  dance_numb_tap_state.state = cur_dance(state);
  switch (dance_numb_tap_state.state) {
    case SINGLE_TAP:
      //check to see if the layer is already set
      if (layer_state_is(NUMB)) {
        //if already set, then switch it off
        NUMB_IDLE=0;
        layer_off(NUMB);
      } else {
        //if not already set, then switch the layer on
        NUMB_IDLE=1;
        layer_on(NUMB);
      }
      break;
    case SINGLE_HOLD:
      layer_on(NUMB);
      break;
    /* case DOUBLE_TAP:  */
    /*   break; */
  }
}

void dance_numb_reset(qk_tap_dance_state_t *state, void *user_data) {
  //if the key was held down and now is released then switch off the layer
  if (dance_numb_tap_state.state==SINGLE_HOLD) {
    layer_off(NUMB);
  }
  dance_numb_tap_state.state = 0;
}

qk_tap_dance_action_t tap_dance_actions[] = {
  [TD_CQTO] = ACTION_TAP_DANCE_FN(dance_cqto),
  [TD_CQTC] = ACTION_TAP_DANCE_FN(dance_cqtc),
  [TD_CGUO] = ACTION_TAP_DANCE_FN(dance_cguo),
  [TD_CGUC] = ACTION_TAP_DANCE_FN(dance_cguc),
  [TD_INBA] = ACTION_TAP_DANCE_FN(dance_inba),
  [TD_ELLP] = ACTION_TAP_DANCE_FN(dance_ellp),
  [TD_ENEM] = ACTION_TAP_DANCE_FN(dance_enem),
  [TD_PRIM] = ACTION_TAP_DANCE_FN(dance_prim),
  [TD_PRIM] = ACTION_TAP_DANCE_FN(dance_prim),
  [TD_SYSF] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_sysf_finished, dance_sysf_reset),
  [TD_NUMB] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_numb_finished, dance_numb_reset),
};


#define ZP_HSV_BASE 140, 115, 255
#define ZP_HSV_COLM 70, 115, 255
#define ZP_RGB_BASE 197, 139, 255
#define ZP_RGB_GOLD 198, 141, 24
#define ZP_RGB_SALM 160, 52, 49
#define ZP_RGB_BROW 160, 106, 49


void zp_rgb_set_state(uint8_t value) {
  switch (value) {
  default:
    rgblight_sethsv_noeeprom(ZP_HSV_BASE);
  }
}

void keyboard_post_init_user(void) {
  zp_rgb_set_state(0);
}

void rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
  if (host_keyboard_led_state().caps_lock) {
    for (uint8_t i = led_min; i <= led_max; i++) {
      if (g_led_config.flags[i] & LED_FLAG_KEYLIGHT) {
        rgb_matrix_set_color(i, ZP_RGB_GOLD);
      }
    }
  }

  for (uint8_t i = led_min; i <= led_max; i++) {
    if (g_led_config.flags[i] & LED_FLAG_KEYLIGHT) {
      switch(get_highest_layer(layer_state|default_layer_state)) {
      case COLM:
        rgb_matrix_set_color(i, ZP_RGB_BROW);
      case NUMB:
        if (NUMB_IDLE == 1) {
          rgb_matrix_set_color(i, ZP_RGB_SALM);
        }
        break;
      default:
        break;
      }
    }
  }
}


static float song_victory_fanfare[][2] = SONG(ZP_VICTORY_FANFARE);
static float song_rick_roll[][2] = SONG(ZP_RICK_ROLL);

/* bool only_mod(uint16_t modifier) { */
/*   switch (modifier) { */
/*       case MOD_MASK_CTRL: */
/*         return (get_mods() & MOD_MASK_CTRL & ~MOD_MASK_SHIFT & ~MOD_MASK_ALT); */
/*       case MOD_MASK_SHIFT: */
/*         return (get_mods() & MOD_MASK_SHIFT & ~MOD_MASK_CTRL & ~MOD_MASK_ALT); */
/*       case MOD_MASK_ALT: */
/*         return (get_mods() & MOD_MASK_ALT & ~MOD_MASK_CTRL & ~MOD_MASK_SHIFT); */
/*   } */
/*   return false; */
/* } */


bool no_mods(void) {
  return ~get_mods();
}

#include "combos.h"

uint8_t LSYM_IDLE = 0;
uint8_t RSYM_IDLE = 0;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    switch (keycode) {
    case VRSN:
      SEND_STRING(QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
      return false;

    /* case ZP_UPDIR: */
    /*   SEND_STRING("../"); */
    /*   return false; */

    case ZP_VICT:
      PLAY_SONG(song_victory_fanfare);
      return false;

    case ZP_RICK:
      PLAY_SONG(song_rick_roll);
      return false;

    case ZP_WLRS:
      tap_code16(KC_COLN);
      tap_code16(KC_EQL);
      return false;

    case ZP_LARR:
      tap_code16(ZP_LABK);
      tap_code16(KC_MINS);
      return false;

    case ZP_RARR:
      tap_code16(KC_MINS);
      tap_code16(ZP_RABK);
      return false;

    case FR_EXCL:
      tap_code16(TY_THSP);
      tap_code16(ZP_EXCL);
      return false;

    case FR_QUES:
      tap_code16(TY_THSP);
      tap_code16(ZP_QUES);
      return false;

    case FR_SCLN:
      tap_code16(TY_THSP);
      tap_code16(ZP_SCLN);
      return false;

    case FR_COLN:
      tap_code16(TY_NBSP);
      tap_code16(KC_COLN);
      return false;

    case RGB_RESET:
      zp_rgb_set_state(0);
      return false;
    }
  }

  switch (keycode) {

    /* RMOD */

  case ZP_SYRT:
    if (record->event.pressed) {
      layer_on(RMOD);
      LSYM_IDLE = 1;
    } else {
      layer_off(RMOD);
      LSYM_IDLE = 0;
    }
    return true;

  case RM_LCTL:
    if (record->event.pressed) {
      register_code(KC_LCTL);
      if (LSYM_IDLE == 1) {
        layer_off(LSYM);
      }
    } else {
      unregister_code(KC_LCTL);
      if (LSYM_IDLE == 1 && no_mods()) {
        layer_on(LSYM);
      }
    }
    return false;

  case RM_LSFT:
    if (record->event.pressed) {
      register_code(KC_LSFT);
      if (LSYM_IDLE == 1) {
        layer_off(LSYM);
      }
    } else {
      unregister_code(KC_LSFT);
      if (LSYM_IDLE == 1 && no_mods()) {
        layer_on(LSYM);
      }
    }
    return false;

  case RM_LALT:
    if (record->event.pressed) {
      register_code(KC_LALT);
      if (LSYM_IDLE == 1) {
        layer_off(LSYM);
      }
    } else {
      unregister_code(KC_LALT);
      if (LSYM_IDLE == 1 && no_mods()) {
        layer_on(LSYM);
      }
    }
    return false;

  case RM_SUPR:
    if (record->event.pressed) {
      register_code(ZP_SUPR);
      if (LSYM_IDLE == 1) {
        layer_off(LSYM);
      }
    } else {
      unregister_code(ZP_SUPR);
      if (LSYM_IDLE == 1 && no_mods()) {
        layer_on(LSYM);
      }
    }
    return false;

  case RM_HYPR:
    if (record->event.pressed) {
      register_code(ZP_HYPR);
      if (LSYM_IDLE == 1) {
        layer_off(LSYM);
      }
    } else {
      unregister_code(ZP_HYPR);
      if (LSYM_IDLE == 1 && no_mods()) {
        layer_on(LSYM);
      }
    }
    return false;

    /* LMOD */

  case ZP_SYSF:
    if (record->event.pressed) {
      layer_on(LMOD);
      RSYM_IDLE = 1;
    } else {
      layer_off(LMOD);
      RSYM_IDLE = 0;
    }
    return true;

  case LM_LCTL:
    if (record->event.pressed) {
      register_code(KC_LCTL);
      if (RSYM_IDLE == 1) {
        layer_off(RSYM);
      }
    } else {
      unregister_code(KC_LCTL);
      if (RSYM_IDLE == 1 && no_mods()) {
        layer_on(RSYM);
      }
    }
    return false;

  case LM_LSFT:
    if (record->event.pressed) {
      register_code(KC_LSFT);
      if (RSYM_IDLE == 1) {
        layer_off(RSYM);
      }
    } else {
      unregister_code(KC_LSFT);
      if (RSYM_IDLE == 1 && no_mods()) {
        layer_on(RSYM);
      }
    }
    return false;

  case LM_LALT:
    if (record->event.pressed) {
      register_code(KC_LALT);
      if (RSYM_IDLE == 1) {
        layer_off(RSYM);
      }
    } else {
      unregister_code(KC_LALT);
      if (RSYM_IDLE == 1 && no_mods()) {
        layer_on(RSYM);
      }
    }
    return false;

  case LM_SUPR:
    if (record->event.pressed) {
      register_code(ZP_SUPR);
      if (RSYM_IDLE == 1) {
        layer_off(RSYM);
      }
    } else {
      unregister_code(ZP_SUPR);
      if (RSYM_IDLE == 1 && no_mods()) {
        layer_on(RSYM);
      }
    }
    return false;

  case LM_HYPR:
    if (record->event.pressed) {
      register_code(ZP_HYPR);
      if (RSYM_IDLE == 1) {
        layer_off(RSYM);
      }
    } else {
      unregister_code(ZP_HYPR);
      if (RSYM_IDLE == 1 && no_mods()) {
        layer_on(RSYM);
      }
    }
    return false;

    /* Other stuff */
    /* Special modifiers that enable layers with extra modifiers on thumbs */
  case ZP_SLCT:
  case ZP_SRCT:
    if (!record->tap.count && record->event.pressed) {
      register_code(KC_LCTL);
    } else if (record->event.pressed) {
    } else {
      unregister_code(KC_LCTL);
    }
    return true;

  case ZP_SLAL:
  case ZP_SRAL:
    if (!record->tap.count && record->event.pressed) {
      register_code(KC_LALT);
    } else if (record->event.pressed) {
    } else {
      unregister_code(KC_LALT);
    }
    return true;
  }

  return true;
}


bool get_tapping_force_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case ZP_RSFT:
      return true;
    default:
      return false;
    }
}
