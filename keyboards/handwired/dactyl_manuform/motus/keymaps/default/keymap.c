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
    tada,
    sad,
    smile,
    wink,
    smirk,
    kissf,
    lol,
    ROFL,
    angry,
    cry,
    shock,
    sleep,
    covid,
    kiss,
    heart,
    high5,
    point,
    wave,
    uthmb,
    dthmb,
    hund,
    frog,
    dick,
    hitc,
    flip,
    aflip,
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
    [tada]  = 0x1F389, // 🎉 (party popper)
    [sad]   = 0x1F623, // 😣 (persevering face)
    [smile] = 0x1F60A, // 😊 (smiling face with smiling eyes)
    [wink]  = 0x1F609, // 😉 (winking face)
    [smirk] = 0x1F60F, // 😏 (smirking face)
    [kissf] = 0x1F618, // 😘 (face throwing a kiss)
    [lol]   = 0x1F606, // 😆 (smiling face with open mouth and tightly-closed eyes)
    [ROFL]  = 0x1F923, // 🤣 (Rollingin On the Floor Laughing)
    [angry] = 0x1F620, // 😠 (angry face)
    [cry]   = 0x1F622, // 😢 (crying face)
    [shock] = 0x1F632, // 😲 (astonished face)
    [sleep] = 0x1F634, // 😴 (sleeping face)
    [covid] = 0x1F637, // 😷 (face with medical mask)
    [kiss]  = 0x1F48B, // 💋 (kiss mark)
    [heart] = 0x2764,  // ❤ (red heart)
    [high5] = 0x1F64C, // 🙌 (person raising both hands in celebration, ...)
    [point] = 0x261D,  // ☝  (White up pointing index)
    [wave]  = 0x1F44B, // 👋 (waving hand)
    [uthmb] = 0x1F44D, // 👍
    [dthmb] = 0x1F44E, // 👎
    [hund]  = 0x1F4AF, // 💯 (hundred points)
    [frog]  = 0x1F438, // 🐸 (frog)
    [dick]  = 0x1F346, // 🍆 (eggplant)
    [hitc]  = 0x1F3AF, // 🎯 (	direct hit)
    // [flip]  = 0x00000, // (╯°□°）╯︵ ┻━┻
    // [aflip] = 0x00000, // (ノಠ痊ಠ)ノ彡┻━┻
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
    SR = SAFE_RANGE,
    FOLD,
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
const uint16_t PROGMEM custom_map[][CUSTOM_MAX_DEPTH] = {
    // [NAME] = {key, shift_k,    ctl_k,    shift_ctl_k,    alt_k,    shift_alt_k,    alt_ctl_k,    shift_alt_ctl_k,
    //         cmd_k, shift_cmd_k,ctl_cmd_k,shift_ctl_cmd_k,alt_cmd_k,shift_alt_cmd_k,alt_ctl_cmd_k,shift_alt_ctl_cmd_k}
    [FOLD - SR]   = {LCTL(KC_LCBR), LCTL(KC_RCBR), LCTL(KC_LPRN), LCTL(KC_RPRN)},
    [UNDMIN - SR] = {KC_UNDS, KC_MINS},
    [COMMPL - SR] = {KC_COMM, KC_PLUS},
    [DOTEXL - SR] = {KC_DOT, KC_EXLM},
    [ZERONE - SR] = {KC_0, KC_1, LCTL(KC_N)},
    [BSLSPI - SR] = {KC_BSLASH, X(PI)},
    [PWR - SR]    = {KC_CIRC, LCTL(KC_CIRC), LCTL(KC_Y)},
    [QUOTCL - SR] = {KC_QUOT, LCTL(KC_QUOT), LCTL(KC_W)},
    [DQTCBR - SR] = {KC_DQT,  LCTL(KC_LBRC), LCTL(KC_RBRC)},
    [ORAND - SR]  = {KC_PIPE, KC_AMPR},
    [ASTPRC - SR] = {KC_ASTR, KC_PERC},
    [ATPHA - SR]  = {KC_AT, X(ALPHA), LCTL(KC_A), LCTL(KC_AT)},
    [PAREN - SR]  = {KC_LPRN, KC_RPRN, LCTL(KC_S)},
    [BRAC - SR]   = {KC_LBRC, KC_RBRC, LCTL(KC_D)},
    [CBRAC - SR]  = {KC_LCBR, KC_RCBR, LCTL(KC_F)},
    [INEQ - SR]   = {KC_LEFT_ANGLE_BRACKET, KC_RIGHT_ANGLE_BRACKET, LCTL(KC_G)},
    [HASHDO - SR] = {KC_HASH, LCTL(KC_HASH), LCTL(KC_Z), LSFT(LCTL(KC_Z))},
    [XYCUT - SR]  = {KC_X, KC_Y, LCTL(KC_X)},
    [DLRCP - SR]  = {KC_DLR, LCTL(KC_DLR), LCTL(KC_C)},
    [IJPST - SR]  = {KC_I, KC_J, LCTL(KC_V)},
    [EQBETA - SR] = {KC_EQUAL, X(BETA), LCTL(KC_B), LCTL(KC_EQUAL)},
    [PAD_EQ - SR] = {KC_PEQL,  X(BETA), LCTL(KC_B), LCTL(KC_PEQL)},
    [PAD_0 - SR]  = {KC_P0, X(OMEGA)},
    [PAD_1 - SR]  = {KC_P1, X(MICRO)},
    [PAD_2 - SR]  = {KC_P2, X(STDEV)},
    [PAD_3 - SR]  = {KC_P3, X(GAMMA)},
    [PAD_4 - SR]  = {KC_P4, X(DELTA)},
    [PAD_5 - SR]  = {KC_P5, X(DEG)},
    [PAD_6 - SR]  = {KC_P6, X(LPHI)},
    [PAD_7 - SR]  = {KC_P7, X(SQRT)},
    [PAD_8 - SR]  = {KC_P8, X(INF)},
    [PAD_9 - SR]  = {KC_P9, X(UPHI)},
    [PADCMM - SR] = {KC_PCMM, X(SUM)},
    [PADDOT - SR] = {KC_PDOT, KC_EXLM},
    [PWRT - SR]   = {KC_CIRC, X(SQRT)},
    [MINSPI - SR] = {KC_PMNS, X(PI)},
    [PLSAST - SR] = {KC_PPLS, KC_PAST},
    [DIVPRC - SR] = {KC_PSLS, KC_PERC},
    [BRIGHT - SR] = {KC_BRIGHTNESS_UP, KC_BRIGHTNESS_DOWN},
    [MED_UP - SR] = {KC_AUDIO_VOL_UP, KC_MEDIA_NEXT_TRACK},
    [MED_MP - SR] = {KC_MUTE, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_STOP},
    [MED_DN - SR] = {KC_AUDIO_VOL_DOWN, KC_MEDIA_PREV_TRACK},
    [BT_SYS - SR] = {OUT_AUTO, KC_SYSTEM_POWER},
    [MS_SPD - SR] = {KC_MS_ACCEL0, KC_MS_ACCEL1, KC_MS_ACCEL2},
    [MR1 - SR]    = {DM_PLY1, DM_REC1, DM_RSTP},  // Dynamic Macro 1: Play, Start-Record, Stop-Record
};

#define LFNC TG(_SYMBOLS)
#define RFNC TG(_SYMBOLS)
#define NUMS TG(_NUMS)
#define BANGIR XP(BANG, IRONY)
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
    _______,_______,_______,_______,_______,_______,              KC_WH_L,KC_MS_L,KC_MS_D,KC_MS_R,_______,_______,
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
  // If keycode not in in custom_keycodes return normal (do nothing), else:
  if (keycode >= SR && keycode < LAST_CUSTOM_KEYCODE) {
    uint8_t position = 0;
    uint8_t saved_mods = get_mods();
    if (saved_mods & MOD_BIT(KC_LSHIFT) || saved_mods & MOD_BIT(KC_RSHIFT)){ position += 1; }
    if (saved_mods & MOD_BIT(KC_LCTL) || saved_mods & MOD_BIT(KC_RCTL)){     position += 2; }
    if (saved_mods & MOD_BIT(KC_LALT) || saved_mods & MOD_BIT(KC_RALT)){     position += 4; }
    if (saved_mods & MOD_BIT(KC_LCMD) || saved_mods & MOD_BIT(KC_RCMD)){     position += 8; }
    clear_mods();
    if (record->event.pressed) {
        register_code(custom_map[keycode - SR][position]);
    } else {
      unregister_code(custom_map[keycode - SR][position]);
    }
    clear_mods();
    set_mods(saved_mods);
    return false; // Skip all further processing of this key
  }
  return true;
};
