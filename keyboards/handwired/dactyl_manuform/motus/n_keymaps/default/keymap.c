/* A standard layout for the Dactyl Manuform 5x6 Keyboard */

#include QMK_KEYBOARD_H

enum layer_names {
    _BASE,
    _SYMBOLS,
    _MOUSE,
    _FUNCTION,
    _NUMS,
};

enum unicode_names {
    IBANG,
    IIBNG,
    IRONY,
    IQUES,
    IEXLM,
    PLMIN,
    SUM,
    SQRT,
    INF,
    SNEK,
    POOP,
    ROFL,
    TFORE,
    BCAUS,
    ALPHA,
    BETA,
    GAMMA,
    OMEGA,
    DELTA,
    LDELT,
    PDIFF,
    UTHET,
    LTHET,
    UPHI,
    LPHI,
    LAMDA,
    MICRO,
    PI,
    STDEV,
    DEG,
    PRIME,
    DBPRM,
    TRPRM,
    QDPRM,
};
// QMK limits: Unicode map can have a max of 16384 enteries. For XP() (upper/lower) can only use first 128 enteries.
const uint32_t PROGMEM unicode_map[] = {
    [IBANG] = 0x203D,  // ‽  (interrobang)
    [IIBNG] = 0x2E18,  // ⸘  (inverted interrobang)
    [IRONY] = 0x2E2E,  // ⸮  (reversed question mark)
    [IQUES] = 0x00BF,  // ¿  (inverted question mark)
    [IEXLM] = 0x00A1,  // ¡  (inverted exclamation mark)
    [PLMIN] = 0x00B1,  // ±  (plus minus sign)
    [SUM]   = 0x2211,  // ∑  (N-ary Summation)
    [SQRT]  = 0x221A,  // √  (square root)
    [INF]   = 0x221E,  // ∞  (infinity)
    [SNEK]  = 0x1F40D, // 🐍
    [POOP]  = 0x1F4A9, // 💩
    [ROFL]  = 0x1F923, // 🤣
    [TFORE] = 0x2234,  // ∴  (Therefore)
    [BCAUS] = 0x2235,  // ∵  (Because)
    [ALPHA] = 0x03B1,  // α  (Greek lowercase Alpha)
    [BETA]  = 0x03B2,  // β  (Greek Small letter Beta)
    [GAMMA] = 0x0263,  // ɣ  (Latin Small Letter Gamma)
    [OMEGA] = 0x03A9,  // Ω  (Greek Capital Omega)
    [DELTA] = 0x0394,  // Δ  (Greek Capital Delta)
    [LDELT] = 0x03B4,  // δ  (Greek Small Letter Delta)
    [PDIFF] = 0x2202,  // ∂  (Partial Differential)
    [UTHET] = 0x0398,  // Θ  (Greek Capital Theta)
    [LTHET] = 0x03B8,  // θ  (Greek Small Letter Theta)
    [UPHI]  = 0x03A6,  // Φ  (Greek Capital Phi)
    [LPHI]  = 0x03C6,  // φ  (Greek Small Letter Phi)
    [LAMDA] = 0x03BB,  // λ  (Greek Small Letter Lamda)
    [MICRO] = 0x03BC,  // μ  (Greek Small Letter Mu), 0x00B5 for Micro Sign µ
    [PI]    = 0x03C0,  // π  (Greek Small Letter Pi)
    [STDEV] = 0x03C3,  // σ  (Greek Small Letter Sigma)
    [DEG]   = 0x00B0,  // °  (Degree Sign)
    [PRIME] = 0x2032,  // ′  (Prime)
    [DBPRM] = 0x2033,  // ″  (Double Prime)
    [TRPRM] = 0x2034,  // ‴  (Triple Prime)
    [QDPRM] = 0x2057,  // ⁗  (Quadruple Prime)

    // [max]= 0x10FFFF,
};

enum custom_keycodes {
    FIRST_CUSTOM_KEYCODE = SAFE_RANGE,
    FOLD = _FIRST_CUSTOM_KEYCODE,
    UNDMIN,
    COMMPL,
    DOTEXL,
    ZERONE,
    BSLSPI,
    PWR,
    QUOTCL,
    DQTCBR,
    ORAND,
    ASTPRC,
    ATPHA,
    PAREN,
    BRAC,
    CBRAC,
    INEQ,
    HASHDO,
    XYCUT,
    DLRCP,
    IJPST,
    EQBETA,
    PAD_EQ,
    PAD_0,
    PAD_1,
    PAD_2,
    PAD_3,
    PAD_4,
    PAD_5,
    PAD_6,
    PAD_7,
    PAD_8,
    PAD_9,
    PADCMM,
    PADDOT,
    PWRT,
    MINSPI,
    PLSAST,
    DIVPRC,
    BRIGHT,
    MED_UP,
    MED_MP,
    MED_DN,
    BT_SYS,
    MS_SPD,
    MR1,
    LAST_CUSTOM_KEYCODE
};
const uint16_t PROGMEM custom_map[CUSTOM_COUNT][CUSTOM_MAX_DEPTH] = {
    //[NAME] = {key, shift_k,    ctl_k,    shift_ctl_k,    alt_k,    shift_alt_k,    alt_ctl_k,    shift_alt_ctl_k,\
    //        cmd_k, shift_cmd_k,ctl_cmd_k,shift_ctl_cmd_k,alt_cmd_k,shift_alt_cmd_k,alt_ctl_cmd_k,shift_alt_ctl_cmd_k}
    [FOLD]   = {LCTL(KC_LCBR), LCTL(KC_RCBR), LCTL(KC_LPRN), LCTL(KC_RPRN)},
    [UNDMIN] = {KC_UNDS, KC_MINS},
    [COMMPL] = {KC_COMM, KC_PLUS},
    [DOTEXL] = {KC_DOT, KC_EXLM},
    [ZERONE] = {KC_0, KC_1, LCTL(KC_N)},
    [BSLSPI] = {KC_BSLASH, X(PI)},
    [PWR]    = {KC_CIRC, LCTL(KC_CIRC), LCTL(KC_Y)},
    [QUOTCL] = {KC_QUOT, LCTL(KC_QUOT), LCTL(KC_W)},
    [DQTCBR] = {KC_DQT,  LCTL(KC_LBRC), LCTL(KC_RBRC)},
    [ORAND]  = {KC_PIPE, KC_AMPR},
    [ASTPRC] = {KC_ASTR, KC_PERC},
    [ATPHA]  = {KC_AT, X(ALPHA), LCTL(KC_A), LCTL(KC_AT)},
    [PAREN]  = {KC_LPRN, KC_RPRN, LCTL(KC_S)},
    [BRAC]   = {KC_LBRC, KC_RBRC, LCTL(KC_D)},
    [CBRAC]  = {KC_LCBR, KC_RCBR, LCTL(KC_F)},
    [INEQ]   = {KC_LT, KC_RT, LCTL(KC_G)},
    [HASHDO] = {KC_HASH, LCTL(KC_HASH), LCTL(KC_Z), LSFT(LCTL(KC_Z))},
    [XYCUT]  = {KC_X, KC_Y, LCTL(KC_X)},
    [DLRCP]  = {KC_DLR, LCTL(KC_DLR), LCTL(KC_C)},
    [IJPST]  = {KC_I, KC_J, LCTL(KC_V)},
    [EQBETA] = {KC_EQUAL, X(BETA), LCTL(KC_B), LCTL(KC_EQUAL)},
    [PAD_EQ] = {KC_PEQL,  X(BETA), LCTL(KC_B), LCTL(KC_PEQL)},
    [PAD_0]  = {KC_P0, X(OMEGA)},
    [PAD_1]  = {KC_P1, X(MICRO)},
    [PAD_2]  = {KC_P2, X(STDEV)},
    [PAD_3]  = {KC_P3, X(GAMMA)},
    [PAD_4]  = {KC_P4, X(DELTA)},
    [PAD_5]  = {KC_P5, X(DEG)},
    [PAD_6]  = {KC_P6, X(LPHI)},
    [PAD_7]  = {KC_P7, X(SQRT)},
    [PAD_8]  = {KC_P8, X(INF)},
    [PAD_9]  = {KC_P9, X(UPHI)},
    [PADCMM] = {KC_PCMM, X(SUM)},
    [PADDOT] = {KC_PDOT, KC_EXLM},
    [PWRT]   = {KC_CIRC, X(SQRT)},
    [MINSPI] = {KC_PMNS, X(PI)},
    [PLSAST] = {KC_PPLS, KC_PAST},
    [DIVPRC] = {KC_PSLS, KC_PERC},
    [BRIGHT] = {KC_BRIGHTNESS_UP, KC_BRIGHTNESS_DOWN},
    [MED_UP] = {KC_AUDIO_VOL_UP, KC_MEDIA_NEXT_TRACK},
    [MED_MP] = {KC_MUTE, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_STOP},
    [MED_DN] = {KC_AUDIO_VOL_DOWN, KC_MEDIA_PREV_TRACK},
    [BT_SYS] = {OUT_AUTO, KC_SYSTEM_POWER},
    [MS_SPD] = {KC_MS_ACCEL0, KC_MS_ACCEL1, KC_MS_ACCEL2},
    [MR1]    = {DM_PLY1, DM_REC1, DM_RSTP},  // Dynamic Macro 1: Play, Start-Record, Stop-Record
};

#define LFNC TG(_SYMBOLS)
#define RFNC TG(_SYMBOLS)
#define NUMS TG(_NUMS)
// #define BANGIR XP(BANG, IRONY)
#define INBANG XP(IBANG, IIBNG)
#define THETA  XP(LTHET, UTHET)
// #define MR1 MO(_RAISE)
// #define MR2 MO(_LOWER)

enum combos {
    SHIFT_LOCK,
    F_KEY_LAYER,
    NUM_LOCK,
    SCROLL_LOCK
};
const uint16_t PROGMEM shift_combo[] = {KC_LSFT, KC_RSFT, COMBO_END};
const uint16_t PROGMEM func_combo[] = {LFNC, RFNC, COMBO_END};
const uint16_t PROGMEM nums_combo[] = {RFNC, NUMS, COMBO_END};
const uint16_t PROGMEM scrl_combo[] = {LFNC, KC_LEAD, COMBO_END};
combo_t key_combos[COMBO_COUNT] = {
  [SHIFT_LOCK]  = COMBO(shift_combo, KC_CAPSLOCK),
  [F_KEY_LAYER]  = COMBO(func_combo, TG(_FUNCTION)),
  [NUM_LOCK]    = COMBO(nums_combo, KC_NLCK),
  [SCROLL_LOCK] = COMBO(scrl_combo, KC_SLCK),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_5x6(
    FOLD   , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,               KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_PAUS,
    KC_LCTL, KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,               KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,KC_RCTL,
    KC_LSFT, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,               KC_N  , KC_M  , COMMPL, DOTEXL,KC_SLSH,KC_RSFT,
            KC_LEAD, KC_INS, KC_ESC,                                              KC_PSCR, MR1   , NUMS  ,
                                 UNDMIN , KC_TAB,KC_BSPC,    KC_DEL , KC_SPC, KC_ENT,
                                 KC_LCMD, LFNC  ,KC_LALT,    KC_RALT, RFNC  ,KC_RCMD
               ),
  [_SYMBOLS] = LAYOUT_5x6(
    _______, KC_GRV, QUOTCL, DQTCBR, ORAND , ASTPRC,               PWR   ,KC_PGUP, KC_UP , KC_END, BSLSPI,_______,
    _______, ATPHA , PAREN , BRAC  , CBRAC , INEQ  ,              KC_HOME,KC_LEFT,KC_DOWN,KC_RGHT,_______,_______,
    _______, HASHDO, XYCUT , DLRCP , IJPST , EQBETA,              ZERONE ,KC_PGDN,_______,_______,_______,_______,
            _______,_______,_______,                                              _______,_______,_______,
                                  _______,_______,_______,  _______,_______,_______,
                                  _______,_______,_______,  _______,_______,_______
               ),
  [_MOUSE] = LAYOUT_5x6(
    _______,_______,_______,_______,_______,KC_BTN2,              MS_SPD ,KC_WH_U,KC_MS_U,KC_WH_R,KC_BTN4,_______,
    _______,_______,_______,_______,_______,_______,              KC_WH_L,KC_MS_L,KC_MS_D,KC_MS_R,_______,_______,_______,
    _______,_______,_______,_______,_______,KC_BTN1,              KC_BTN3,KC_WH_D,_______,_______,_______,_______,
            _______,_______,_______,                                              _______,_______,_______,
                                 _______,_______,_______,    _______,_______,_______,
                                 _______,_______,_______,    _______,_______,_______
               ),
  [_FUNCTION] = LAYOUT_5x6(
    _______,_______,_______,_______,_______, BT_SYS,              MED_UP , KC_F7 , KC_F8 , KC_F9 , KC_F10,_______,
    _______,_______,_______,_______,_______,_______,              MED_MP , KC_F4 , KC_F5 , KC_F6 , KC_F11,_______,
    _______,_______,_______,_______,_______, BRIGHT,              MED_DN , KC_F1 , KC_F2 , KC_F3 , KC_F12,_______,
            _______,_______,_______,                                              _______,_______,_______,
                                 _______,_______,_______,    _______,_______,_______,
                                 _______,_______,_______,    _______,_______,_______
               ),
  [_NUMS] = LAYOUT_5x6(
    _______,_______,_______,_______,_______, THETA ,               PWRT  , PAD_7 , PAD_8 , PAD_9 , MINSPI,_______,
    _______,_______,_______,_______,_______,_______,               PLSAST, PAD_4 , PAD_5 , PAD_6 ,KC_SCLN,_______,
    _______,_______,_______,_______,_______, PAD_EQ,               PAD_0 , PAD_1 , PAD_2 , PAD_3 , DIVPRC,_______,
            _______,_______,_______,                                               PADCMM, PADDOT,_______,
                                 _______,_______,_______,    _______,_______,KC_PENT,
                                 _______,_______,_______,    _______,_______,_______
               ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // If keycode not in in custom_keycodes, or not pressed, return normal (do nothing), else:
  if (keycode >= FIRST_CUSTOM_KEYCODE && keycode < LAST_CUSTOM_KEYCODE && record->event.pressed) {
    position = 0;
    saved_mods = get_mods()
    if (saved_mods & MOD_BIT(KC_LSHIFT) || saved_mods & MOD_BIT(KC_RSHIFT)){ position += 1; }
    if (saved_mods & MOD_BIT(KC_LCTL) || saved_mods & MOD_BIT(KC_RCTL)){     position += 2; }
    if (saved_mods & MOD_BIT(KC_LALT) || saved_mods & MOD_BIT(KC_RALT)){     position += 4; }
    if (saved_mods & MOD_BIT(KC_LCMD) || saved_mods & MOD_BIT(KC_RCMD)){     position += 8; }
    clear_mods();
    register_code(custom_map[keycode][position])
    unregister_code(custom_map[keycode][position])
    clear_mods();
    set_mods(saved_mods);
    return false;
  }
  return true;
};
