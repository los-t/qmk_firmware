/* Copyright 2022 splitkb.com <support@splitkb.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

// Not yet available in `keymap.json` format
#ifdef RGB_MATRIX_ENABLE
#    define RGB_DISABLE_WHEN_USB_SUSPENDED
#    define RGB_MATRIX_KEYPRESSES
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#    define ENABLE_RGB_MATRIX_SOLID_SPLASH
#    define ENABLE_RGB_MATRIX_RAINBOW_BEACON 
#endif

// Not yet available in `keymap.json` format
#ifdef MOUSEKEY_ENABLE
     // The default is 100
#    define MOUSEKEY_WHEEL_INTERVAL 50
     // The default is 40
#    define MOUSEKEY_WHEEL_TIME_TO_MAX 100
#endif

//    "config": {
//        "features": {
//            "oled": true,
//            "rgb_matrix": true,
//            "rgblight": false
//        },
//        "encoder": {
//            "enabled": true
//        },
//        "rgblight": {
//            "hue_steps": 8,
//            "saturation_steps": 8,
//            "brightness_steps": 8,
//            "sleep": true
//        }
//    },
//    "mouse_key": {
//        "enabled": true,
//        "interval": 16,
//        "time_to_max": 40,
//        "delay": 100,
//        "wheel_delay": 100
//    },
//    "tapping": {
//        "term": 200,
//        "permissive_hold": true,
//        "ignore_mod_tap_interrupt": true,
//        "force_hold": true
//    }