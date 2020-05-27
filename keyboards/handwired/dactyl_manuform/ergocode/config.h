/*
Copyright 2020 Chris L Chapman - https://github.com/SeattleChris

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once
#include "config_common.h"
// #define VENDOR_ID 0x1234  // defines your VID, and for most DIY projects, can be whatever you want
// #define PRODUCT_ID 0x5678  // defines your PID, and for most DIY projects, can be whatever you want
// #define DEVICE_VER 0  // defines the device version (often used for revisions)
#define MANUFACTURER SeattleChris  // generally who/whatever brand produced the board
#define PRODUCT      Dactyl ErgoCode  // the name of the keyboard
#define DESCRIPTION  An ergonomic split curved keyboard with an opposable thumb cluster. Paramertized build options for column offsets, three curve variables, tenting, thumb cluster style, various possible row and column options, etc.
/* key matrix size is defined in the keymap config.h (MATRIX_ROWS and MATRIX_COLS) - Rows are doubled-up */

/* Unset some things created by Dactyl_Manuform config.h */
#ifdef LOCKING_SUPPORT_ENABLE  // Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap
  #undef LOCKING_SUPPORT_ENABLE
#endif
#ifdef LOCKING_RESYNC_ENABLE  // Locking resynchronize hack
  #undef LOCKING_RESYNC_ENABLE
#endif
#ifdef PERMISSIVE_HOLD  // Enables This makes it easier for fast typists to use dual-function keys
 #undef PERMISSIVE_HOLD
#endif

/* Split Keyboard Options */
#define SPLIT_TRANSPORT = custom  // Allows replacing the standard split communication routines with a custom one. ARM based split keyboards must use this at present.
/*
  Handedness Settings - defined in the keymap config.h file.
  One thing to remember, the side that the USB port is plugged into is always the master half. The side not plugged into USB is the slave.
  There are a few different ways to set handedness for split keyboards (listed in order of precedence):
    1) SPLIT_HAND_PIN: Reads a pin to determine handedness. If pin is high, it’s the left side, if low, the half is determined to be the right side
    2) EE_HANDS: Only works if SPLIT_HAND_PIN is not defined. Reads the handedness value stored in the EEPROM after eeprom-lefthand.eep & eeprom-righthand.eep has been flashed to their respective halves.
      For boards with DFU bootloader you can use :dfu-split-left & :dfu-split-right to flash these EEPROM files
      For boards with Caterina bootloader (like stock Pro Micros), use :avrdude-split-left & :avrdude-split-right
      For boards with ARM DFU bootloader (like Proton C), use :dfu-util-split-left & :dfu-util-split-right
    3) MASTER_RIGHT: Half that is plugged into the USB port is determined to be the master and right half (otherwise default assumes left is plugged in and the master).
    4) Default: The side that is plugged into the USB port is the master half and is assumed to be the left half. The slave side is the right half.
*/

/* General Large Feature Sets - more options and over-rides in keymap config.h */
#define NO_ACTION_TAPPING  // disable tap dance and other tapping features
#define NO_ACTION_ONESHOT  // disable one-shot modifiers
/* Other Settings Categories - defined in the keymap config.h file.
     Mouse Key Options
     Backlight
     RGB Light Configuration
     Audio
     Keyboard Feature Configurations
         Tapping settings (off by default), including permissive hold settings.
         One Shot key settings (off by default)
         Leader key settings.
         Combo settings.
         Custom Key mod map settings.
*/
