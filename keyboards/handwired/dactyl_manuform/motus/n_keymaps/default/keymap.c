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

// #define BANGIR XP(BANG, IRONY) // XP(0, 1)
#define INBANG XP(IBANG, IIBNG)  // XP(0, 1)
#define LFNC TG(_SYMBOLS)
#define RFNC TG(_SYMBOLS)
#define NUMS TG(_NUMS)

// #define MR1 MO(_RAISE)
// #define MR2 MO(_LOWER)
#define MR1 (DM_PLY1, DM_REC1, DM_RSTP)  // Dynamic Macro 1: Play, Start-Record, Stop-Record
// #define MR2 (DM_PLY2, DM_REC2, DM_RSTP)  // Dynamic Macro 2
#define FOLD (LCTL(KC_LCBR), LCTL(KC_RCBR), LCTL(KC_LPRN), LCTL(KC_RPRN))
// #define MR2B ()
#define UNDMIN (KC_UNDS, KC_MINS)
#define COMMPL (KC_COMM, KC_PLUS)
#define DOTEXL (KC_DOT, KC_EXLM)
#define ZERONE (KC_0, KC_1, LCTL(KC_N))
#define BSLSPI (KC_BSLASH, X(PI))
#define PWR    (KC_CIRC, LCTL(KC_CIRC), LCTL(KC_Y))
#define QUOTCL (KC_QUOT, LCTL(KC_QUOT), LCTL(KC_W))
#define DQTCBR (KC_DQT,  LCTL(KC_LBRC), LCTL(KC_RBRC))
#define ORAND  (KC_PIPE, KC_AMPR)
#define ASTPRC (KC_ASTR, KC_PERC)
#define ATPHA  (KC_AT, X(ALPHA), LCTL(KC_A), LCTL(KC_AT))
#define PAREN  (KC_LPRN, KC_RPRN, LCTL(KC_S))
#define BRAC   (KC_LBRC, KC_RBRC, LCTL(KC_D))
#define CBRAC  (KC_LCBR, KC_RCBR, LCTL(KC_F))
#define INEQ   (KC_LT, KC_RT, LCTL(KC_G))
#define HASHDO (KC_HASH, LCTL(KC_HASH), LCTL(KC_Z), LSFT(LCTL(KC_Z)))
#define XYCUT  (KC_X, KC_Y, LCTL(KC_X))
#define DLRCP  (KC_DLR, LCTL(KC_DLR), LCTL(KC_C))
#define IJPST  (KC_I, KC_J, LCTL(KC_V))
#define EQBETA (KC_EQUAL, X(BETA), LCTL(KC_B), LCTL(KC_EQUAL))
#define PAD_EQ (KC_PEQL,  X(BETA), LCTL(KC_B), LCTL(KC_PEQL))
#define PAD_0  (KC_P0, X(OMEGA))
#define PAD_1  (KC_P1, X(MICRO))
#define PAD_2  (KC_P2, X(STDEV))
#define PAD_3  (KC_P3, X(GAMMA))
#define PAD_4  (KC_P4, X(DELTA))
#define PAD_5  (KC_P5, X(DEG))
#define PAD_6  (KC_P6, X(LPHI))
#define PAD_7  (KC_P7, X(SQRT))
#define PAD_8  (KC_P8, X(INF))
#define PAD_9  (KC_P9, X(UPHI))
#define PADCMM (KC_PCMM, X(SUM))
#define PADDOT (KC_PDOT, KC_EXLM)
#define PWRT   (KC_CIRC, X(SQRT))
#define MINSPI (KC_PMNS, X(PI))
#define PLSAST (KC_PPLS, KC_PAST)
#define DIVPRC (KC_PSLS, KC_PERC)
#define THETA  XP(LTHET, UTHET)
#define BRIGHT (KC_BRIGHTNESS_UP, KC_BRIGHTNESS_DOWN)
#define MED_UP (KC_AUDIO_VOL_UP, KC_MEDIA_NEXT_TRACK)
#define MED_MP (KC_MUTE, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_STOP)
#define MED_DN (KC_AUDIO_VOL_DOWN, KC_MEDIA_PREV_TRACK)
#define BT_SYS (OUT_AUTO, KC_SYSTEM_POWER)
#define MS_SPD (KC_MS_ACCEL0, KC_MS_ACCEL1, KC_MS_ACCEL2)

enum combos {
    SHIFT_LOCK,
    FUNC_LAYER,
    NUM_LOCK,
    SCROLL_LOCK
}
const uint16_t PROGMEM shift_combo[] = {KC_LSFT, KC_RSFT, COMBO_END};
const uint16_t PROGMEM func_combo[] = {LFNC, RFNC, COMBO_END};
const uint16_t PROGMEM nums_combo[] = {RFNC, NUMS, COMBO_END};
const uint16_t PROGMEM scrl_combo[] = {LFNC, KC_LEAD, COMBO_END};
combo_t key_combos[COMBO_COUNT] = {
  [SHIFT_LOCK]  = COMBO(shift_combo, KC_CAPSLOCK),
  [FUNC_LAYER]  = COMBO(func_combo, TG(_FUNCTION)),
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
