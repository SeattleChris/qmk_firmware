/* A standard layout for the Dactyl Manuform 5x6 Keyboard */

#include QMK_KEYBOARD_H

enum layer_names {
    _BASE,
    _SYMBOLS,
    _FUNCTION,
    _MOUSE,
    _MEDIA,
};

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)
#define LFNC TG(_SYMBOLS)
#define RFNC TG(_SYMBOLS)
#define MR1 MO(_RAISE)
#define MR2 MO(_RAISE)
#define LEAD (KC_LEAD, KC_SLCK)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_5x6(
    MR2    , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,               KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_PAUS,
    KC_LCTL, KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,               KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,KC_RCTL,
    KC_LSFT, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,               KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH,KC_RSFT,
                     LEAD  , KC_INS, KC_ESC,                              KC_PSCR, MR1   ,KC_NLCK,
                              KC_MINS, KC_TAB,KC_BSPC,  KC_DEL , KC_SPC, KC_ENT,
                              KC_LCMD, LFNC  ,KC_LALT,  KC_RALT, RFNC  ,KC_RCMD
               ),
  [_SYMBOLS] = LAYOUT_5x6(
    _______, KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,               KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,_______,
    _______, KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,               KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,_______,
    _______, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,               KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH,_______,
                    _______,_______,_______,                              _______,_______,_______,
                              _______,_______,_______,  _______,_______,_______,
                              _______,_______,_______,  _______,_______,_______
               ),
  [_FUNCTION] = LAYOUT_5x6(
    _______, KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,               KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,_______,
    _______, KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,               KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,_______,
    _______, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,               KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH,_______,
                    _______,_______,_______,                              _______,_______,_______,
                              _______,_______,_______,  _______,_______,_______,
                              _______,_______,_______,  _______,_______,KC_RCMD
               ),
  [_MEDIA] = LAYOUT_5x6(
    _______, KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,               KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,_______,
    _______, KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,               KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,_______,
    _______, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,               KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH,_______,
                    _______,_______,_______,                              _______,_______,_______,
                              _______,_______,_______,  _______,_______,_______,
                              _______,_______,_______,  _______,_______,KC_RCMD
               ),
  [_MOUSE] = LAYOUT_5x6(
    _______, KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,               KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,_______,
    _______, KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,               KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,_______,
    _______, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,               KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH,_______,
                    _______,_______,_______,                              _______,_______,_______,
                              _______,_______,_______,  _______,_______,_______,
                              _______,_______,_______,  _______,_______,KC_RCMD
               ),
  [_SYMBOLS] = LAYOUT_5x6(
                    _______,_______, _______ ,_______,_______ ,_______,                        KC_CIRC,KC_CIRC,KC_LABK,KC_RABK,_______,_______,
                    _______,_______,_______,_______,_______,_______,                        KC_LABK, KC_AT , KC_LCBR , KC_RCBR ,KC_HASH,KC_RABK,
                    _______,_______,_______,_______,_______ ,_______,                        KC_PERC, KC_EQL , KC_LPRN , KC_RPRN ,KC_DLR,KC_AMPR,
                    _______,_______,_______,_______,_______,_______,                        KC_TILD, KC_GRAVE , KC_LBRC , KC_RBRC ,KC_PIPE ,KC_EXLM,
                                         _______,_______,                                                       KC_PPLS, KC_PMNS,
                                                            _______,_______,            _______,_______,
                                                            _______,_______,            _______,_______,
                                                            _______,_______,            _______,_______
                 ),
  [_MOUSE] = LAYOUT_5x6(
                 KC_F11,KC_F1, KC_F2 ,KC_F3,KC_F4 ,KC_F5,                        KC_F6,KC_F7,KC_F8,KC_F9,KC_F10,KC_F12,
                 _______,_______,_______,KC_WH_U,_______,_______,                        _______, _______ , KC_MS_U , _______ ,_______,_______,
                 _______,_______,KC_WH_L,KC_WH_D,KC_WH_R ,_______,                        KC_BTN1, KC_MS_L , KC_MS_D , KC_MS_R ,_______,_______,
                  _______,_______,KC_ACL0,KC_ACL1,KC_ACL2,_______,                        _______, KC_BTN2 , _______ , _______ ,_______ ,_______,
                                       _______,_______,                                                       _______, RESET,
                                                          KC_BTN1,KC_BTN2,            _______,_______,
                                                          _______,KC_BTN2,            _______,_______,
                                                          _______,_______,            _______,_______
               ),
  [_ARROWS] = LAYOUT_5x6(
                   RESET,_______, _______ ,_______,_______ ,TG(_WINDOWS),                        _______,_______,_______,_______,_______,_______,
                   _______,_______,_______,_______,_______,_______,                        _______, KC_HOME , KC_UP , KC_END ,_______,_______,
                   _______,_______,_______,_______,_______ ,_______,                        KC_HOME, KC_LEFT , KC_DOWN , KC_RIGHT ,KC_END,_______,
                   _______,_______,_______,_______,_______,_______,                        _______, KC_PGDOWN , _______ , KC_PGUP ,_______ ,_______,
                                        RESET,_______,                                                       _______, _______,
                                                           _______,_______,            _______,_______,
                                                           _______,_______,            _______,_______,
                                                           _______,_______,            _______,_______
                ),
  [_NUMBERS] = LAYOUT_5x6(
                    RESET,_______, _______ ,_______,_______ ,_______,                        KC_PSLS,KC_PAST,KC_PPLS,KC_PMNS,_______,_______,
                    _______,_______,_______,KC_PSLS,KC_PAST,_______,                        _______, KC_7 , KC_8 , KC_9 ,_______,_______,
                    _______,_______,_______,KC_PMNS,KC_PPLS ,_______,                        _______, KC_4 , KC_5 , KC_6 ,_______,_______,
                    _______,_______,_______,_______,_______,_______,                        _______, KC_1 , KC_2 , KC_3 ,_______ ,_______,
                                         _______,_______,                                                       KC_0, KC_DOT,
                                                            _______,_______,            _______,_______,
                                                            _______,_______,            _______,_______,
                                                            _______,_______,            _______,_______
                 ),
  [_MEDIA] = LAYOUT_5x6(
                  KC_MSTP,KC_MPRV, KC_MPLY ,KC_MNXT,_______ ,_______,                        _______,_______,_______,_______,_______,_______,
                  _______,_______,_______,_______,KC_VOLU,_______,                        RGB_SPI, _______ , _______ , _______ ,_______,_______,
                  _______,_______,_______,_______,KC_VOLD ,_______,                        RGB_TOG, RGB_MODE_FORWARD , RGB_HUI , RGB_SAI ,RGB_VAI,_______,
                  _______,_______,_______,_______,KC_MUTE,_______,                        RGB_SPD, RGB_MODE_REVERSE , RGB_HUD , RGB_SAD ,RGB_VAD ,_______,
                                       _______,_______,                                                       _______, _______,
                                                          _______,_______,            _______,_______,
                                                          _______,_______,            _______,_______,
                                                          _______,_______,            _______,_______
               ),
};
