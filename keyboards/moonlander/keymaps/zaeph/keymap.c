/* Copyright 2020 ZSA Technology Labs, Inc <@zsa>
 * Copyright 2020 Jack Humbert <jack.humb@gmail.com>
 * Copyright 2020 Christopher Courtney <drashna@live.com> (@drashna)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
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

enum layers {
    BASE,  // default layer
    SYMB,  // symbols
    MDIA,  // media keys
};

enum custom_keycodes {
    VRSN = ML_SAFE_RANGE,
};

// clang-format off
#define BASE 0 // default layer
#define META 1 // function keys + dev symbols

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Layer: BASE
   *
   * .--------------------------------------------------.           .--------------------------------------------------.
   * |    '   |   1  |   2  |   3  |   4  |   5  |  [   |           |   ]  |   6  |   7  |   8  |   9  |   0  |   +    |
   * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
   * |   TAB  |   Q  |   W  |   E  |   R  |   T  |  [   |           |   ]  |   Y  |   U  |   I  |   O  |   P  |  RCTL  |
   * |--------+------+------+------+------+------|------|           |------|------+------+------+------+------+--------|
   * |LCTL/ESC|   A  |   S  |   D  |   F  |   G  |  (   |           |   )  |   H  |   J  |   K  |   L  |   ;  |   '    |
   * |--------+------+------+------+------+------|------´           `------|------+------+------+------+------+--------|
   * |  LSFT  |   Z  |   X  |   C  |   V  |   B  |                         |   N  |   M  |   ,  |   .  |LCTL//|  RSFT  |
   * |--------+------+------+------+------+------´                         `------+------+------+------+------+--------|
   * | ~META  | Cmd  | LAlt | RAlt |~META |  .-------------.     .-------------.  | RALT | DOWN |  UP  | RIGHT| ~META  |
   *  `-----------------------------------´  |    HYPER    |     |    SUPER    |  `------------------------------------´
   *                                  .------+------+------|     |------+------+------.
   *                                  |      |      |      |     |      |      |      |
   *                                  | BSPC | LALT | DEL  |     | LALT | ENT  | SPC  |
   *                                  |      |      |      |     |      |      |      |
   *                                  `--------------------´     `--------------------´
   */

    [BASE] = LAYOUT_moonlander(
        KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_MINS, KC_EQL, KC_6, KC_7, KC_8, KC_9, KC_0, KC_PLUS,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_LBRC, KC_RBRC, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_RCTL,
        LCTL_T(KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G, KC_LPRN, KC_RPRN, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOTE,
        KC_LSPO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLASH, KC_RSPC,
        MO(META), KC_LGUI, KC_LALT, KC_RALT, MO(META), KC_RGUI, KC_LGUI, KC_RALT, KC_DOWN, KC_UP, KC_RIGHT, MO(META),
        KC_BSPC, KC_LALT, KC_DEL, KC_LALT, KC_ENT, KC_SPC),

    /* Layer: Dev meta
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |        |  F1  |  F2  |  F3  |  F4  |  F5  |      |           |   ´  |  F6  |  F7  |  F8  |  F9  |  F10 |   F11  |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |   F12  |
     * |--------+------+------+------+------+------|  ¨   |           |   @  |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |------|           |------|      | UP 10|DOWN10|      |   ;  |    =   |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      |      |      |      |      |                                       | HOME |PGDOWN| PGUP |  END |      |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |      |      |       |      |      |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |      |       |      |      |      |
     *                                 |      |      |------|       |------|      |      |
     *                                 |      |      |      |       |      |      |      |
     *                                 `--------------------'       `--------------------'
     */

    [META] = LAYOUT_moonlander(
        _______, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, RESET, KC_QUOT, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11,
        _______, _______, _______, _______, _______, _______, KC_QUOT, KC_AT, _______, _______, _______, _______, _______, KC_F12,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, RGB_RMOD, RGB_MOD, _______, _______, _______, _______, _______,
        RGB_HUD, RGB_VAD, RGB_HUI, TOGGLE_LAYER_COLOR, RGB_VAI, RGB_TOG),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
        case VRSN:
            SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
            return false;
        }
    }
    return true;
}
