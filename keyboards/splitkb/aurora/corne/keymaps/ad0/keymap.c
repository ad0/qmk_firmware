#include QMK_KEYBOARD_H

#define LT_TAB LT(1, KC_TAB)
#define LT_ENT LT(2, KC_ENT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x6_3(
    KC_TAB  , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,        KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_BSPC,
    KC_LCTL , KC_A   , KC_S   , KC_D   , KC_F   , KC_G   ,        KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,
    KC_LSFT , KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   ,        KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_ESC ,
                                KC_LGUI, KC_SPC , LT_TAB ,        LT_ENT , KC_BSPC, KC_RALT
  ),

	[1] = LAYOUT_split_3x6_3(
    KC_TAB  , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,        KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_BSPC,
    KC_LCTL , XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,        KC_LEFT, KC_DOWN, KC_UP  ,KC_RIGHT, XXXXXXX, XXXXXXX,
    KC_LSFT , XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                KC_LGUI, _______, KC_SPC ,        KC_ENT , MO(3)  , KC_RALT
  ),

	[2] = LAYOUT_split_3x6_3(
    KC_TAB  , KC_EXLM, KC_AT  , KC_HASH, KC_DLR , KC_PERC,        KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
    KC_LCTL , XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,        KC_MINS, KC_EQL , KC_LBRC, KC_RBRC, KC_BSLS, KC_GRV ,
    KC_LSFT , XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,        KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD,
                                KC_LGUI, MO(3)  , KC_SPC ,        KC_ENT , _______, KC_RALT
  ),

	[3] = LAYOUT_split_3x6_3(
    QK_BOOT , XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    RGB_TOG , RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX,        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    RGB_MOD , RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                KC_LGUI, _______, KC_SPC,         KC_ENT , _______, KC_RALT
  )
};

