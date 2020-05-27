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
#define USE_I2C  // For using I2C instead of Serial (defaults to serial)
// #define USE_SERIAL
// #define SOFT_SERIAL_PIN D0  // When using serial, define this. D0 or D1,D2,D3,E6.
// #define SELECT_SOFT_SERIAL_SPEED <speed> (default speed is 1)  // protocol speed when using serial communication. Speeds: 0: about 189kbps (Experimental only); 1: about 137kbps (default); 2: about 75kbps; 3: about 39kbps; 4: about 26kbps; 5: about 20kbps

/* Split Keyboard Settings */
// #define SPLIT_HAND_PIN B7  // For using high/low pin to determine handedness, low = right hand, high = left hand. Replace B7 with the pin you are using. This is optional, and if you leave SPLIT_HAND_PIN undefined, then you can still use the EE_HANDS method or MASTER_LEFT / MASTER_RIGHT defines like the stock Let’s Split uses.
#define EE_HANDS
// #define MASTER_RIGHT  // Master half is defined to be the right half.
// #define MASTER_LEFT
// #define SPLIT_USB_DETECT   // Detect (with timeout) USB connection when delegating master/slave. Default behavior for ARM. Required for AVR Teensy
// #define SPLIT_USB_TIMEOUT 2000  // Maximum timeout when detecting master/slave when using SPLIT_USB_DETECT
// #define SPLIT_USB_TIMEOUT_POLL 10

/* key matrix size - Rows are doubled-up */
#define MATRIX_ROWS 12
#define MATRIX_COLS 6
/* Wiring Settings - of each half. */
#define MATRIX_ROW_PINS { F6, F7, B1, B3, B2, B6 }  // pins of the rows, from top to bottom
#define MATRIX_COL_PINS { D4, C6, D7, E6, B4, B5 }  // pins of the columns, from left to right
// #define UNUSED_PINS { D1, D2, D3, B1, B2, B3 }  // pins unused by the keyboard for reference
// #define MATRIX_IO_DELAY 30  // the delay in microseconds when between changing matrix pin state and reading values
#define DIODE_DIRECTION COL2ROW  // COL2ROW or ROW2COL - how your matrix is configured. COL2ROW means the black mark on your diode is facing to the rows, and between the switch and the rows.
// #define DIRECT_PINS { { F1, F0, B0, C7 }, { F4, F5, F6, F7 } }  // pins mapped to rows and columns, from left to right. Defines a matrix where each switch is connected to a separate pin and ground.
// #define DIRECT_PINS_RIGHT { { F1, F0, B0, C7 }, { F4, F5, F6, F7 } }  // If you want to specify a different pinout for the right half than the left half, you can define MATRIX_ROW_PINS_RIGHT/MATRIX_COL_PINS_RIGHT. Currently, the size of MATRIX_ROW_PINS must be the same as MATRIX_ROW_PINS_RIGHT and likewise for the definition of columns.
// #define MATRIX_HAS_GHOST  // define is matrix has ghost (unlikely)
// #define DEBOUNCE 5  // the delay when reading the value of the pin (5 is default)
// #define USB_MAX_POWER_CONSUMPTION 500  // sets the maximum power (in mA) over USB for the device (default: 500)
// #define USB_POLLING_INTERVAL_MS 10  // sets the USB polling rate in milliseconds for the keyboard, mouse, and shared (NKRO/media keys) interfaces
// #define F_SCL 100000L  // sets the I2C clock rate speed for keyboards using I2C. The default is 400000L, except for keyboards using split_common, where the default is 100000L.

/* ***************************************** */
/* Feature Set Exclusion and Overide Options */
/* ***************************************** */
// #define LOCKING_SUPPORT_ENABLE  // mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap
// #define LOCKING_RESYNC_ENABLE  // tries to keep switch state consistent with keyboard LED state
// #define IS_COMMAND() (get_mods() == MOD_MASK_SHIFT)  // key combination that allows the use of magic commands (useful for debugging)
// #define NO_DEBUG  // disable debugging
// #define NO_PRINT  // disable printing/debugging using hid_listen
// #define NO_ACTION_LAYER  // disable layers
// #define NO_ACTION_MACRO  // disable old-style macro handling using MACRO(), action_get_macro() (deprecated)
// #define NO_ACTION_FUNCTION  // disable old-style function handling using fn_actions, action_function() (deprecated)
// #define FORCE_NKRO  // NKRO by default requires to be turned on, this forces it on during keyboard startup regardless of EEPROM setting. NKRO can still be turned off but will be turned on again if the keyboard reboots.
// #define STRICT_LAYER_RELEASE  // force a key release to be evaluated using the current layer stack instead of remembering which layer it came from (used for advanced cases)
// #ifdef NO_ACTION_TAPPING
//   #undef NO_ACTION_TAPPING  // disabled as default: tap dance and other tapping features
// #define NO_ACTION_TAPPING
// #ifdef NO_ACTION_ONESHOT
//   #undef NO_ACTION_ONESHOT  // disabled as default: one-shot modifiers

/* ***************************************** */
/*          Possible User Settings           */
/* ***************************************** */
#define COMBO_COUNT 4  // Set this to the number of combos that you’re using in the Combo feature.
#define COMBO_TERM 200  // how long for the Combo keys to be detected. Defaults to TAPPING_TERM if not defined.
// #define LEADER_TIMEOUT 300  // how long before the leader key times out. If you’re having issues finishing the sequence before it times out, you may need to increase the timeout setting. Or you may want to enable the LEADER_PER_KEY_TIMING option, which resets the timeout after each key is tapped.
// #define LEADER_PER_KEY_TIMING  // sets the timer for leader key chords to run on each key press rather than overall
// #define LEADER_KEY_STRICT_KEY_PROCESSING  // Disables keycode filtering for Mod-Tap and Layer-Tap keycodes. Eg, if you enable this, you would need to specify MT(MOD_CTL, KC_A) if you want to use KC_A.
#define CUSTOM_MAX_DEPTH 4
/* Mouse Key Options */
#define MOUSEKEY_INTERVAL 20
#define MOUSEKEY_DELAY 0
#define MOUSEKEY_TIME_TO_MAX 60
#define MOUSEKEY_MAX_SPEED 7
#define MOUSEKEY_WHEEL_DELAY 0

/* Behaviors That Can Be Configured if related features sets are turned on. */
// #define TAPPING_TERM 200  // how long before a tap becomes a hold, if set above 500, a key tapped during the tapping term will turn it into a hold too
// #define TAPPING_TERM_PER_KEY  // enables handling for per key TAPPING_TERM settings
// #define RETRO_TAPPING  // tap anyway, even after TAPPING_TERM, if there was no other key interruption between press and release See Retro Tapping for details
// #define TAPPING_TOGGLE 2  // how many taps before triggering the toggle
// #define PERMISSIVE_HOLD  // makes tap and hold keys trigger the hold if another key is pressed before releasing, even if it hasn’t hit the TAPPING_TERM See Permissive Hold for details
// #define PERMISSIVE_HOLD_PER_KEY  // enabled handling for per key PERMISSIVE_HOLD settings
// #define IGNORE_MOD_TAP_INTERRUPT  // makes it possible to do rolling combos (zx) with keys that convert to other keys on hold, by enforcing the TAPPING_TERM for both keys. See Ignore Mod Tap Interrupt for details
// #define IGNORE_MOD_TAP_INTERRUPT_PER_KEY  // enables handling for per key IGNORE_MOD_TAP_INTERRUPT settings
// #define TAPPING_FORCE_HOLD  // makes it possible to use a dual role key as modifier shortly after having been tapped. See Tapping Force Hold. Breaks any Tap Toggle functionality (TT or the One Shot Tap Toggle)
// #define TAPPING_FORCE_HOLD_PER_KEY  // enables handling for per key TAPPING_FORCE_HOLD settings
// #define ONESHOT_TIMEOUT 300  // how long before oneshot times out
// #define ONESHOT_TAP_TOGGLE 2  // how many taps before oneshot toggle is triggered
// #define QMK_KEYS_PER_SCAN 4  // Allows sending more than one key per scan. By default, only one key event gets sent via process_record() per scan. This has little impact on most typing, but if you’re doing a lot of chords, or your scan rate is slow to begin with, you can have some delay in processing key events. Each press and release is a separate event. For a keyboard with 1ms or so scan times, even a very fast typist isn’t going to produce the 500 keystrokes a second needed to actually get more than a few ms of delay from this. But if you’re doing chording on something with 3-4ms scan times? You probably want this.
// #define TAP_CODE_DELAY 100  // Sets the delay between register_code and unregister_code, if you’re having issues with it registering properly (common on VUSB boards). The value is in milliseconds.
// #define TAP_HOLD_CAPS_DELAY 80  // Sets the delay for Tap Hold keys (LT, MT) when using KC_CAPSLOCK keycode, as this has some special handling on MacOS. The value is in milliseconds, and defaults to 80 ms if not defined. For macOS, you may want to set this to 200 or higher.

/* Backlight */
// #define BACKLIGHT_PIN B7  // pin of the backlight
// #define BACKLIGHT_LEVELS 3  // number of levels your backlight will have (maximum 31 excluding off)
// #define BACKLIGHT_BREATHING  // enables backlight breathing
// #define BREATHING_PERIOD 6  // the length of one backlight “breath” in seconds

/* RGB Light Configuration */
// #define RGBW  // Enables RGBW LED support
// #define RGB_DI_PIN D7  // pin the DI on the WS2812 is hooked-up to.
// #define RGBLIGHT_ANIMATIONS  // run RGB animations
// #define RGBLIGHT_LAYERS  // Lets you define lighting layers that can be toggled on or off. Great for showing the current keyboard layer or caps lock state.
// #define RGBLIGHT_MAX_LAYERS  // Defaults to 8. Can be expanded up to 32 if more lighting layers are needed. Note: Increasing the maximum will increase the firmware size and slow sync on split keyboards.
// #define RGBLIGHT_LAYER_BLINK  // Adds ability to blink a lighting layer for a specified number of milliseconds (e.g. to acknowledge an action).
// #define RGBLED_NUM 12  // number of LEDs
// #define RGBLIGHT_SPLIT 27  // Needed if both halves of the board have RGB LEDs wired directly to the RGB output pin on the controllers instead of passing the output of the left half to the input of the right half
// #define RGBLED_SPLIT { 6, 6 }  // number of LEDs connected that are directly wired to RGB_DI_PIN on each half of a split keyboard. First value indicates number of LEDs for left half, second value is for the right half. When RGBLED_SPLIT is defined, RGBLIGHT_SPLIT is implicitly defined.
// #define RGBLED_SPLIT { 6, 6 }  // If you want to specify a different direct pinout for the right half than the left half, you can define DIRECT_PINS_RIGHT. Currently, the size of DIRECT_PINS must be the same as DIRECT_PINS_RIGHT. See RGB Light Configuration
// #define RGBLIGHT_HUE_STEP 12  // units to step when in/decreasing hue
// #define RGBLIGHT_SAT_STEP 25  // units to step when in/decreasing saturation
// #define RGBLIGHT_VAL_STEP 12  // units to step when in/decreasing value (brightness)
// // #define RGBLIGHT_LIMIT_VAL 200
// // #define RGBLIGHT_LED_MAP { 11,10,9,8,7,6,5,4,3,2,1,0,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26 }

/* Audio */
// #define AUDIO_VOICES  // turns on the alternate audio voices (to cycle through)
// #define C4_AUDIO  // enables audio on pin C4
// #define C5_AUDIO  // enables audio on pin C5
// #define C6_AUDIO  // enables audio on pin C6
// #define B5_AUDIO  // enables audio on pin B5 (duophony is enables if one of B[5-7]_AUDIO is enabled along with one of C[4-6]_AUDIO)
// #define B6_AUDIO  // enables audio on pin B6 (duophony is enables if one of B[5-7]_AUDIO is enabled along with one of C[4-6]_AUDIO)
// #define B7_AUDIO  // enables audio on pin B7 (duophony is enables if one of B[5-7]_AUDIO is enabled along with one of C[4-6]_AUDIO)
