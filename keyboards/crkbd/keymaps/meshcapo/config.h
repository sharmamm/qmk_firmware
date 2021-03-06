/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

#ifdef KEYBOARD_crkbd_rev1_common
#    undef USE_I2C
#    define USE_SERIAL
#endif

#define MASTER_LEFT

#define USE_SERIAL_PD2

#define TAPPING_FORCE_HOLD
#define TAPPING_TERM 200

#ifdef RGB_MATRIX_ENABLE
    #define RGB_MATRIX_MAXIMUM_BRIGHTNESS 120
    #define RGB_MATRIX_HUE_STEP 8
    #define RGB_MATRIX_SAT_STEP 8
    #define RGB_MATRIX_VAL_STEP 5
    #define RGB_MATRIX_SPD_STEP 10
#endif 

#define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"
#define OLED_DISABLE_TIMEOUT
