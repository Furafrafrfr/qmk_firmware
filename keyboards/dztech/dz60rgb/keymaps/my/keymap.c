#include QMK_KEYBOARD_H

// Tap Dance declarations
enum {
    TD_BSPC_DEL,
    TD_GRV_ESC,
};

// Tap Dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_BSPC_DEL] = ACTION_TAP_DANCE_DOUBLE(KC_BSPC, KC_DEL),
    [TD_GRV_ESC] = ACTION_TAP_DANCE_DOUBLE(KC_GRV, KC_ESC),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        TD_GRV_ESC,     KC_1,    KC_2,            KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,         KC_EQL,  TD_BSPC_DEL,
        KC_TAB,         KC_Q,    KC_W,            KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,         KC_RBRC, KC_BSLS,
        LT(1, KC_CAPS), KC_A,    KC_S,            KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,                  KC_ENT,
        KC_LSFT,                 KC_Z,            KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  RSFT_T(KC_SLSH), KC_UP,   MO(2),
        KC_LCTL,        KC_LGUI, KC_LALT,                            KC_SPC,                    KC_RALT, MO(2),   KC_LEFT,         KC_DOWN, KC_RGHT
    ),
    [1] = LAYOUT(
        _______,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  KC_DEL,
        _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,  KC_9,     KC_0,    KC_MINS, KC_EQL,  _______,
        _______, KC_PGDN, _______, KC_PGUP, _______, _______, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, _______, _______,          KC_RCTL,
        KC_LSFT, _______, _______, _______, _______, _______, KC_MUTE, KC_VOLD, KC_VOLU, _______,  _______,        _______, KC_RSFT,
        KC_LCTL, KC_LGUI, MOD_LALT,                            KC_BSPC,                     _______, _______, _______, _______, _______
    ),
    [2] = LAYOUT(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
        _______, KC_PPLS, KC_P7,   KC_P8,   KC_P9,   KC_PAST, _______, _______, KC_INS, _______, KC_PSCR, _______, _______, _______,
        _______, KC_PMNS, KC_P4,   KC_P5,   KC_P6,   KC_PSLS, _______, KC_END, KC_HOME, _______, _______, _______,          _______,
        KC_LSFT, KC_P0,   KC_P1,   KC_P2,   KC_P3,   _______, _______, _______, _______, _______, _______,            _______, MO(3),
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_PENT,                   _______, _______, _______, _______, _______
    ),
    [3] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, RGB_MOD, _______, _______, _______, _______,   _______, _______,   _______, _______, RESET,
        _______, RGB_HUD, RGB_SAD, RGB_VAD, RGB_RMOD, _______, _______, _______, _______,   _______,   _______,   _______,          EEP_RST,
        _______, _______, _______, _______,   _______, _______, _______, _______, _______,   _______,   _______,   _______, _______,
        _______, _______,   _______,                            _______,                   _______,   _______, _______, _______, _______
    ),
    [4] = LAYOUT(
        KC_GESC,        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,         KC_EQL,  KC_BSPC,
        KC_TAB,         KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,         KC_RBRC, KC_BSLS,
        CTL_T(KC_CAPS), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,                  KC_ENT,
        KC_LSFT,                 KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  RSFT_T(KC_SLSH), KC_UP,   LT(2, KC_DEL),
        KC_LCTL,        KC_LALT, KC_LGUI,                            KC_SPC,                    KC_RALT, TO(0),   KC_LEFT,         KC_DOWN, KC_RGHT
    )
};
