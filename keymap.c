#include "extended_keymap_common.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = { /* Term2501 Qwerty */
  {KC_TAB,  KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC},
  {KC_LCTL, KC_A,   KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT},
  {F(10),   KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, F(11)},
  {BACKLIT, KC_DEL, KC_LGUI, KC_LALT, FUNC(2), KC_SPC,  KC_SPC,  FUNC(1), KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT}
},
[1] = { /* Term2501 Colemak */
  {KC_TAB,  KC_Q,   KC_W,    KC_F,    KC_P,    KC_G,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_BSPC},
  {KC_LCTL, KC_A,   KC_R,    KC_S,    KC_T,    KC_D,    KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT},
  {KC_ESC,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,    KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT},
  {KC_FN3,  KC_DEL, KC_LGUI, KC_LALT, FUNC(2), KC_SPC,  KC_SPC,  FUNC(1), KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT}
},
[2] = { /* Term2501 RAISE */
  {KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   FUNC(16), FUNC(19), KC_MINS,    S(KC_MINS), KC_EQL,     S(KC_EQL),   KC_BSPC},
  {KC_TRNS, KC_F5,   KC_F6,   KC_F7,   KC_F8,   FUNC(17), FUNC(20), KC_LBRC,    KC_RBRC,    S(KC_LBRC), S(KC_RBRC),  S(KC_BSLS)},
  {KC_TRNS, KC_F9,   KC_F10,  KC_F11,  KC_F12,  FUNC(18), FUNC(21), S(KC_PAUS), KC_PSCR,    KC_SLCK,    KC_PAUSE,    KC_TRNS},
  {KC_CAPS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  FUNC(1),    KC_HOME,    KC_PGDN,    KC_PGUP,     KC_END}
},
[3] = { /* Term2501 LOWER */
  {S(KC_GRV), S(KC_1), S(KC_2), S(KC_3), S(KC_4),  S(KC_5), S(KC_6), S(KC_7), S(KC_8), S(KC_9), S(KC_0), KC_BSPC},
  {KC_TRNS,   KC_1,    KC_2,    KC_3,    KC_4,     KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSLS},
  {KC_TRNS,   KC_INS,  KC_CUT,  KC_COPY, KC_PASTE, KC_MPRV, KC_MNXT, KC_MUTE, KC_MPLY, KC_TRNS, KC_MENU, KC_TRNS},
  {KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, FUNC(2),  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS}
}
};


const uint16_t PROGMEM fn_actions[] = {
    [1] = ACTION_LAYER_MOMENTARY(2),  // to RAISE
    [2] = ACTION_LAYER_MOMENTARY(3),  // to LOWER

    [3] = ACTION_DEFAULT_LAYER_SET(0),
    [4] = ACTION_DEFAULT_LAYER_SET(1),

    [10] = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_ESC),             // tab on tap, left shift on hold
    [11] = ACTION_MODS_TAP_KEY(MOD_RSFT, KC_ENT),             // enter on tap, right shift on hold

    [16] = ACTION_MODS_KEY(MOD_LCTL | MOD_LSFT, KC_T),        // Reopen closed tab
    [17] = ACTION_MODS_KEY(KC_DOT, KC_GRV),                   // .~ SSH escape
    [18] = ACTION_MODS_KEY(MOD_LCTL, KC_LBRC),                // ^] Telnet escape
    [19] = ACTION_MODS_KEY(MOD_LSFT, KC_DEL),                 // terminal cut
    [20] = ACTION_MODS_KEY(MOD_LCTL, KC_INS),                 // terminal copy
    [21] = ACTION_MODS_KEY(MOD_LSFT, KC_INS),                 // terminal paste
};
