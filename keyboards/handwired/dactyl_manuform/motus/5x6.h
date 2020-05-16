#pragma once

#include "dactyl_manuform.h"
#include "quantum.h"

#ifdef USE_I2C
#include <stddef.h>
#ifdef __AVR__
  #include <avr/io.h>
  #include <avr/interrupt.h>
#endif
#endif

#define LAYOUT_5x6(\
       L01, L02, L03, L04, L05,                R00, R01, R02, R03, R04,      \
  L10, L11, L12, L13, L14, L15,                R10, R11, R12, R13, R14, R15, \
  L20, L21, L22, L23, L24, L25,                R20, R21, R22, R23, R24, R25, \
  L30, L31, L32, L33, L34, L35,                R30, R31, R32, R33, R34, R35, \
       L41, L42, L43,                                    R42, R43, R44       \
                      L53, L54, L55,      R50, R51, R52,                     \
                      L50, L51, L52,      R53, R54, R55                      \
  ) \
  { \
    { KC_NO, L01, L02, L03, L04,   L05   }, \
    { L10,   L11, L12, L13, L14,   L15   }, \
    { L20,   L21, L22, L23, L24,   L25   }, \
    { L30,   L31, L32, L33, L34,   L35   }, \
    { KC_NO, L41, L42, L43, KC_NO, KC_NO }, \
    { L50,   L51, L52, L53, L54,   L55   }, \
                                          \
    { R00,   R01,   R02, R03, R04,   KC_NO }, \
    { R10,   R11,   R12, R13, R14,   R15   }, \
    { R20,   R21,   R22, R23, R24,   R25   }, \
    { R30,   R31,   R32, R33, R34,   R35   }, \
    { KC_NO, KC_NO, R42, R43, R44,   KC_NO }, \
    { R50,   R51,   R52, R53, R54,   R55   }  \
}

#define LAYOUT_5x5(\
  L00, L01, L02, L03, L04, L05,                R00, R01, R02, R03, R04, R05  \
  L10, L11, L12, L13, L14, L15,                R10, R11, R12, R13, R14, R15, \
  L20, L21, L22, L23, L24, L25,                R20, R21, R22, R23, R24, R25, \
       L31, L32, L33,                                    R32, R33, R34       \
                      L43, L44, L45,      R40, R41, R42,                     \
                      L40, L41, L42,      R43, R44, R45                      \
  ) \
  { \
    { L00,   L01, L02, L03, L04,   L05   }, \
    { L10,   L11, L12, L13, L14,   L15   }, \
    { L20,   L21, L22, L23, L24,   L25   }, \
    { KC_NO, L31, L32, L33, KC_NO, KC_NO }, \
    { L40,   L41, L42, L43, L44,   L45   }, \
                                          \
    { R00,   R01,   R02, R03, R04,   R05   }, \
    { R10,   R11,   R12, R13, R14,   R15   }, \
    { R20,   R21,   R22, R23, R24,   R25   }, \
    { KC_NO, KC_NO, R32, R33, R34,   KC_NO }, \
    { R40,   R41,   R42, R43, R44,   R45   }  \
}
