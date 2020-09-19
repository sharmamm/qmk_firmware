#
# Build Options
#   change to "no" to disable the options, or define them in the Makefile in
#   the appropriate keymap folder that will get included automatically
#
EXTRAFLAGS += -flto -DUSE_Link_Time_Optimization

# Enable media keys
EXTRAKEY_ENABLE = yes

# Enable RGB underglow
RGBLIGHT_ENABLE = yes
#RGB_MATRIX_ENABLE = WS2812

# Enable OLED screens
OLED_DRIVER_ENABLE = yes

# If you want to change the display of OLED, you need to change here
SRC +=  ./lib/glcdfont.c \
        ./lib/rgb_state_reader.c \
        ./lib/layer_state_reader.c \
        ./lib/logo_reader.c \
        ./lib/keylogger.c \
        # ./lib/mode_icon_reader.c \
        # ./lib/host_led_state_reader.c \
        # ./lib/timelogger.c \
