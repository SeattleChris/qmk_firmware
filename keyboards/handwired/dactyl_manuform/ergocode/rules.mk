
# DEFAULT_FOLDER  # Used to specify a default folder when a keyboard has more than one sub-folder.
# LAYOUTS  # A list of layouts this keyboard supports.
# LINK_TIME_OPTIMIZATION_ENABLE  # Reduced compile size, longer compile time. Removes legacy TMK Macros & Functions features, keeps QMK version working.

# Build Options
#   change to "no" to disable the options, or define them in the Makefile in
#   the appropriate keymap folder that will get included automatically
BOOTMAGIC_ENABLE = no   # Virtual DIP switch configuration(+1000)
MOUSEKEY_ENABLE = yes   # Mouse keys(+4700)
EXTRAKEY_ENABLE = yes   # Audio control and System control(+450)
CONSOLE_ENABLE = no     # Console for debug(+400)
COMMAND_ENABLE = yes    # Commands for debug and configuration
COMBO_ENABLE = yes      # key combo feature
NKRO_ENABLE = yes       # Nkey Rollover - if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
AUDIO_ENABLE = no       # Audio output on port C6
RGBLIGHT_ENABLE = no    # Enable WS2812 RGB underlight.
# LEADER_ENABLE = yes   # Enable leader key chording
MIDI_ENABLE = no        # MIDI controls
UNICODE_ENABLE = no     # Unicode
UNICODEMAP_ENABLE = yes # Using an array to map the desired unicode to named enum values
BLUETOOTH_ENABLE = no   # Legacy option. Enable Bluetooth with the Adafruit EZ-Key HID
# BLUETOOTH =  # Current options are AdafruitEzKey, AdafruitBLE, RN42
SPLIT_KEYBOARD = yes # Enables split keyboard support (dual MCU like the let’s split and bakingpy’s boards) and includes all necessary files located at quantum/split_common
# CUSTOM_MATRIX # Allows replacing the standard matrix scanning routine with a custom one.
# DEBOUNCE_TYPE # Allows replacing the standard key debouncing routine with an alternative or custom one.
# WAIT_FOR_USB # Forces the keyboard to wait for a USB connection to be established before it starts up
# NO_USB_STARTUP_CHECK # Disables usb suspend check after keyboard startup. Usually the keyboard waits for the host to wake it up before any tasks are performed. This is useful for split keyboards as one half will not get a wakeup call but must send commands to the master.

BACKLIGHT_ENABLE = no   # Enable keyboard backlight functionality
# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no   # Breathing sleep LED during USB suspend


############################################################################################
