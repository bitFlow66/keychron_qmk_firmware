/* Copyright 2024 ~ 2025 @ Keychron (https://www.keychron.com)
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
#include "keychron_common.h"

enum layers {
    MAC_BASE,
    MAC_FN,
    WIN_BASE,
    WIN_FN,
};
// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[MAC_BASE] = LAYOUT_iso_85(
     KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10, KC_F11,     KC_F12,     KC_SNAP, KC_DEL,           RGB_MOD, // 16
     XXXXXXX,  KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,   XXXXXXX,    ALGR(KC_8), KC_BSPC,                   KC_PGUP, // 15
     KC_TAB,   KC_LBRC,  KC_COMM,  KC_DOT,   KC_P,     KC_Z,     KC_F,     KC_G,     KC_C,     KC_R,     KC_L,   S(KC_7),    XXXXXXX,                               KC_PGDN, // 14
     KC_CAPS,  KC_A,     KC_O,     KC_E,     KC_U,     KC_I,     KC_D,     KC_H,     KC_T,     KC_N,     KC_S,   KC_SLSH,    KC_MINS,    KC_ENT,                    KC_HOME, // 15
     KC_LSFT,  KC_QUOT,  KC_SCLN,  KC_Q,     KC_J,     KC_K,     KC_X,     KC_B,     KC_M,     KC_W,     KC_V,   KC_Y,       KC_RSFT,                      KC_UP,   KC_END,  // 15
     KC_LCTL,  LALT_T(KC_LGUI),  KC_LCMD,                                KC_SPC,                                 MO(MAC_FN), KC_RCMD,    KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT), // 10

[MAC_FN] = LAYOUT_iso_85(
     _______,  KC_BRID,      KC_BRIU,    KC_MCTL,    KC_LPAD,       RM_VALD,       RM_VALU,  KC_MPRV,  KC_MPLY,       KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU, _______, _______, RM_TOGG, // 16
     _______,  BT_HST1,      BT_HST2,    BT_HST3,    P2P4G,         _______,       _______,  _______,  _______,       _______, _______, _______, _______,          _______, _______, // 15
     RGB_TOG,  S(KC_NUHS),   ALGR(KC_Q), S(KC_4),    KC_GRV,        S(KC_0),       _______,  _______,  ALGR(KC_RBRC), _______, _______, _______, _______,                   _______, // 15
     _______,  S(KC_8),      ALGR(KC_8), ALGR(KC_9), S(KC_9),       S(KC_5),       _______,  KC_RBRC,  S(KC_RBRC),    _______, _______, _______, _______, _______,          KC_END,
     _______,  _______,      _______,    KC_EQL,     ALGR(KC_NUBS), ALGR(KC_MINS), S(KC_6),  _______,  _______,       _______,          _______, _______, _______, _______, _______,
     _______,  _______,      _______,                                  _______,                                                _______, _______, _______, _______, _______, _______),

[WIN_BASE] = LAYOUT_iso_85(
     KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_PSCR,  KC_DEL,   RGB_MOD,
     KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,            KC_PGUP,
     KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,                      KC_PGDN,
     KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_NUHS,  KC_ENT,             KC_HOME,
     KC_LSFT,  KC_NUBS,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,  KC_UP,    KC_END,
     KC_LCTL,  KC_LGUI,  KC_LALT,                                KC_SPC,                                 KC_RALT, MO(WIN_FN),KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

[WIN_FN] = LAYOUT_iso_85(
     _______,  KC_BRID,  KC_BRIU,  KC_TASK,  KC_FILE,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,  _______,  RGB_TOG,
     _______,  BT_HST1,  BT_HST2,  BT_HST3,  P2P4G,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
     RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,  _______,                      _______,
     _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
     _______,  _______,  _______,  _______,  _______,  _______,  BAT_LVL,  NK_TOGG,  _______,  _______,  _______,  _______,            _______,  _______,  _______,
     _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______)
};

// clang-format on
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_record_keychron_common(keycode, record)) {
        return false;
    }
    return true;
}

// Shifted ( => {
const key_override_t write_boo = {
    .trigger_mods    = MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT),
    .layers          = 1 << MAC_FN,
    .suppressed_mods = MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT),
    .options         = ko_option_one_mod,
    .trigger         = S(KC_8),
    .replacement     = ALGR(KC_7),
    .enabled         = NULL,
};

// Shifted ) => }
const key_override_t write_boc = {
    .trigger_mods    = MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT),
    .layers          = 1 << MAC_FN,
    .suppressed_mods = MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT),
    .options         = ko_option_one_mod,
    .trigger         = S(KC_9),
    .replacement     = ALGR(KC_0),
    .enabled         = NULL,
};

// Shifted [ => <
const key_override_t write_bio = {
    .trigger_mods    = MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT),
    .layers          = 1 << MAC_FN,
    .suppressed_mods = MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT),
    .options         = ko_option_one_mod,
    .trigger         = ALGR(KC_8),
    .replacement     = KC_NUBS,
    .enabled         = NULL,
};

// Shifted ] => >
const key_override_t write_bic = {
    .trigger_mods    = MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT),
    .layers          = 1 << MAC_FN,
    .suppressed_mods = MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT),
    .options         = ko_option_one_mod,
    .trigger         = ALGR(KC_9),
    .replacement     = S(KC_NUBS),
    .enabled         = NULL,
};

// Shifted ' => "
const key_override_t write_marks = {
    .trigger_mods    = MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT),
    .layers          = 1 << MAC_FN,
    .suppressed_mods = MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT),
    .options         = ko_option_one_mod,
    .trigger         = S(KC_NUHS),
    .replacement     = S(KC_2),
    .enabled         = NULL,
};

// Shifted = => #
const key_override_t write_eqhs = {
    .trigger_mods    = MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT),
    .layers          = 1 << MAC_FN,
    .suppressed_mods = MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT),
    .options         = ko_option_one_mod,
    .trigger         = S(KC_0),
    .replacement     = KC_NUHS,
    .enabled         = NULL,
};

// Shifted / => ?
const key_override_t write_qmrk = {
    .trigger_mods    = MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT),
    .layers          = 1 << MAC_BASE,
    .suppressed_mods = MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT),
    .options         = ko_option_one_mod,
    .trigger         = S(KC_7),
    .replacement     = S(KC_MINS),
    .enabled         = NULL,
};

// Shifted ß => !
const key_override_t write_exmk = {
    .trigger_mods    = MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT),
    .layers          = 1 << MAC_BASE,
    .suppressed_mods = MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT),
    .options         = ko_option_one_mod,
    .trigger         = KC_MINS,
    .replacement     = S(KC_1),
    .enabled         = NULL,
};

// This globally defines all key overrides to be used
const key_override_t *key_overrides[] = {
    &write_boo, &write_boc, &write_bio, &write_bic, &write_marks, &write_qmrk, &write_eqhs, &write_exmk,
};
