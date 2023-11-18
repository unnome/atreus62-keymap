#include QMK_KEYBOARD_H

enum keymap_layers {
    LAYER_BASE = 0,
    LAYER_DVORAK,
    LAYER_COLEMAK,
    LAYER_MAC_MODS,
    LAYER_SYMBOLS,
    LAYER_MOVEMENTS,
    LAYER_EMOJI,
    LAYER_META
};

// QWERTY
#define SYMB_V LT(LAYER_SYMBOLS, KC_V)
#define MVMT_X LT(LAYER_MOVEMENTS, KC_X)
#define EMOJ_Z LT(LAYER_EMOJI, KC_Z)
#define META_Q LT(LAYER_META, KC_Q)
// DVORAK
#define META_D LT(LAYER_META, KC_QUOT)
#define SYMB_K LT(LAYER_SYMBOLS, KC_K)
#define MVMT_Q LT(LAYER_MOVEMENTS, KC_Q)
#define EMOJCO LT(LAYER_EMOJI, KC_SCLN)
// META
#define OSMODS  TG(LAYER_MAC_MODS)

enum unicode_names {
    STAREYES,
    HAPPY,
    THANKYOU,
    FACEPALM,
    AGRAVE,
    AGRAVEM,
    AACUTA,
    AACUTAM,
    EGRAVE,
    EGRAVEM,
    EACUTA,
    EACUTAM,
    IGRAVE,
    IGRAVEM,
    IACUTA,
    IACUTAM,
    OGRAVE,
    OGRAVEM,
    OACUTA,
    OACUTAM,
    UGRAVE,
    UGRAVEM,
    UACUTA,
    UACUTAM
};

enum custom_keycodes {
    EMAIL = SAFE_RANGE,
    PASSWRD,
    DVORAK,
    COLEMAK,
    PREV_WD,
    NEXT_WD
};

const uint32_t PROGMEM unicode_map[] = {
    [STAREYES] = 0x1F929,
    [HAPPY]    = 0x1F600,
    [THANKYOU] = 0x1F64F,
    [FACEPALM] = 0x1F926,
    [AGRAVE]   = 0x000C0,
    [AGRAVEM]  = 0x00E0,
    [AACUTA]   = 0x00C1,
    [AACUTAM]  = 0x000E1,
    [EGRAVE]   = 0x00C8,
    [EGRAVEM]  = 0x0E8,
    [EACUTA]   = 0x00C9,
    [EACUTAM]  = 0x00E9,
    [IGRAVE]   = 0x00CC,
    [IGRAVEM]  = 0x00EC,
    [IACUTA]   = 0x00CD,
    [IACUTAM]  = 0x0ED,
    [OGRAVE]   = 0x00D2,
    [OGRAVEM]  = 0x00F2,
    [OACUTA]   = 0x00D3,
    [OACUTAM]  = 0x00F3,
    [UGRAVE]   = 0x00D9,
    [UGRAVEM]  = 0x0F9,
    [UACUTA]   = 0x00DA,
    [UACUTAM]  = 0x00FA
};
#define KCSTREY UM(STAREYES)
#define KCHAPPY UM(HAPPY)
#define KC_TY   UM(THANKYOU)
#define KC_FCPM UM(FACEPALM)
#define KC_AGRA UP(AGRAVEM, AGRAVE)
#define KC_AACU UP(AACUTAM, AACUTA)
#define KC_EGRA UP(EGRAVEM, EGRAVE)
#define KC_EACU UP(EACUTAM, EACUTA)
#define KC_IGRA UP(IGRAVEM, IGRAVE)
#define KC_IACU UP(IACUTAM, IACUTA)
#define KC_OGRA UP(OGRAVEM, OGRAVE)
#define KC_OACU UP(OACUTAM, OACUTA)
#define KC_UGRA UP(UGRAVEM, UGRAVE)
#define KC_UACU UP(UACUTAM, UACUTA)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [LAYER_BASE] = LAYOUT(
  // ╭────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────╮
        KC_GRV,     KC_1,    KC_2,    KC_3,     KC_4,    KC_5,                     KC_6,     KC_7,    KC_8,    KC_9,    KC_0, KC_BSPC,
  // ├────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
        KC_TAB,   META_Q,    KC_W,    KC_E,     KC_R,    KC_T,                     KC_Y,     KC_U,    KC_I,    KC_O,    KC_P,  KC_DEL,
  // ├────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
        KC_ESC,     KC_A,    KC_S,    KC_D,     KC_F,    KC_G,                     KC_H,     KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  // ├────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
       KC_LSFT,   EMOJ_Z,  MVMT_X,    KC_C,   SYMB_V,    KC_B,                     KC_N,     KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT,
  // ├────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
       KC_LCTL,  KC_LALT, KC_LGUI, XXXXXXX,   KC_SPC,  KC_SPC, UC_LINX,  UC_MAC, KC_ENT,  KC_BSPC, KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT
  // ╰────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────╯
  ),

  [LAYER_DVORAK] = LAYOUT(
  // ╭─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────╮
       _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
  // ├─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
       _______,  META_D, KC_COMM,  KC_DOT,    KC_P,    KC_Y,                      KC_F,    KC_G,    KC_C,    KC_R,    KC_L, _______,
  // ├─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
       _______,    KC_A,    KC_O,    KC_E,    KC_U,    KC_I,                      KC_D,    KC_H,    KC_T,    KC_N,    KC_S, _______,
  // ├─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
       _______,  EMOJCO,  MVMT_Q,    KC_J,  SYMB_K,    KC_X,                      KC_B,    KC_M,    KC_W,    KC_V,    KC_Z, _______,
  // ├─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
       _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______
  // ╰─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────╯
  ),

  [LAYER_COLEMAK] = LAYOUT(
  // ╭─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────╮
       _______, _______, _______, _______, _______, _______,                    _______, _______, _______, _______, _______, _______,
  // ├─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
       _______,  META_Q,    KC_W,    KC_F,    KC_P,    KC_G,                       KC_J,    KC_L,    KC_U,    KC_Y, KC_SCLN, _______,
  // ├─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
       _______,    KC_A,    KC_R,    KC_S,    KC_T,    KC_D,                       KC_H,    KC_N,    KC_E,    KC_I,    KC_O, _______,
  // ├─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
       _______,  EMOJ_Z,  MVMT_X,    KC_C,  SYMB_V,    KC_B,                       KC_K,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, _______,
  // ├─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
       _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______
  // ╰─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────╯
  ),

  [LAYER_MAC_MODS] = LAYOUT(
  // ╭────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────╮
       _______, _______, _______, _______, _______, _______,                    _______, _______, _______, _______, _______, _______,
  // ├────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
       _______, _______, _______, _______, _______, _______,                    _______, _______, _______, _______, _______, _______,
  // ├────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
       _______, _______, _______, _______, _______, _______,                    _______, _______, _______, _______, _______, _______,
  // ├────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
       _______, _______, _______, _______, _______, _______,                    _______, _______, _______, _______, _______, _______,
  // ├────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
       KC_LGUI, _______, KC_LCTL, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______
  // ╰────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────╯
  ),

  [LAYER_SYMBOLS] = LAYOUT(
  // ╭─────────────────────────────────────────────────────────────────────────────────────────────── { ────── } ────────────────────╮
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                    XXXXXXX, XXXXXXX, KC_LCBR, KC_RCBR, XXXXXXX, XXXXXXX,
  // ├──────────────────────────────────────────────────────────────────────────── + ────── - ─────── [ ────── ] ───── ! ────── ' ───┤
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                    KC_PLUS, KC_MINS, KC_LBRC, KC_RBRC, KC_EXLM,  KC_GRV,
  // ├──────────────────────────────────────────────────────────────────────────── * ────── = ─────── ( ────── ) ───── & ────── ' ───┤
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                    KC_PAST,  KC_EQL, KC_LPRN, KC_RPRN, KC_AMPR, KC_QUOT,
  // ├──────────────────────────────────────────────────────────────────────────── / ────── _ ─────── < ────── > ───── | ────── \ ───┤
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                    KC_PSLS, KC_UNDS, KC_LABK, KC_RABK, KC_PIPE, KC_BSLS,
  // ├───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  // ╰───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────╯
  ),

  [LAYER_MOVEMENTS] = LAYOUT(
  // ╭──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────╮
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  // ├──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   KC_HOME, PREV_WD, NEXT_WD,  KC_END, XXXXXXX, XXXXXXX,
  // ├──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, XXXXXXX, XXXXXXX,
  // ├──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  // ├──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  // ╰──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────╯
  ),

  [LAYER_EMOJI] = LAYOUT(
  // ╭──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────╮
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   KC_AGRA, KC_AACU, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  // ├──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   KC_EGRA, KC_EACU, KCSTREY, XXXXXXX, XXXXXXX, XXXXXXX,
  // ├──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   KC_IGRA, KC_IACU, KCHAPPY, XXXXXXX, XXXXXXX, XXXXXXX,
  // ├──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   KC_OGRA, KC_OACU,   KC_TY, XXXXXXX, XXXXXXX, XXXXXXX,
  // ├──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_UGRA, KC_UACU, KC_FCPM, XXXXXXX, XXXXXXX, XXXXXXX
  // ╰──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────╯
  ),

  [LAYER_META] = LAYOUT(
  // ╭──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────╮
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX,   EMAIL, XXXXXXX, XXXXXXX,
  // ├──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, PASSWRD, XXXXXXX, XXXXXXX,
  // ├──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                    DVORAK, COLEMAK,  OSMODS, XXXXXXX, XXXXXXX, XXXXXXX,
  // ├──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  // ├──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, UC_LINX,  UC_MAC, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  // ╰──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────╯
  )

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case EMAIL:
            if (record->event.pressed) {
                SEND_STRING("deez");
            }
            return false;
        case PASSWRD:
            if (record->event.pressed) {
                SEND_STRING("nuts");
            }
            return false;
        case COLEMAK:
            if (record->event.pressed) {
                if (IS_LAYER_OFF(LAYER_COLEMAK)) {
                    layer_off(LAYER_DVORAK);
                    layer_on(LAYER_COLEMAK);
                } else {
                    layer_off(LAYER_DVORAK);
                    layer_off(LAYER_COLEMAK);
                };
            }
            return false;
        case DVORAK:
            if (record->event.pressed) {
                if (IS_LAYER_OFF(LAYER_DVORAK)) {
                    layer_off(LAYER_COLEMAK);
                    layer_on(LAYER_DVORAK);
                } else {
                    layer_off(LAYER_DVORAK);
                    layer_off(LAYER_COLEMAK);
                };
            }
            return false;
        case NEXT_WD:
            if (record->event.pressed) {
                if (IS_LAYER_OFF(LAYER_MAC_MODS)) {
                    register_code(KC_LCTL);
                    tap_code(KC_RIGHT);
                    unregister_code(KC_LCTL);
                } else {
                    register_code(KC_LALT);
                    tap_code(KC_RIGHT);
                    unregister_code(KC_LALT);
                };
            }
            return false;
        case PREV_WD:
            if (record->event.pressed) {
                if (IS_LAYER_OFF(LAYER_MAC_MODS)) {
                    register_code(KC_LCTL);
                    tap_code(KC_LEFT);
                    unregister_code(KC_LCTL);
                } else {
                    register_code(KC_LALT);
                    tap_code(KC_LEFT);
                    unregister_code(KC_LALT);
                };
            }
            return false;
    }
    return true;
};
