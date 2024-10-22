/* Copyright (C) 2024  massimopavoni
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#pragma once

// Features
#define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD
#define DYNAMIC_MACRO_DELAY 8
#define DYNAMIC_MACRO_NO_NESTING
#define ENABLE_COMPILE_KEYCODE

// RGB matrix
#undef RGB_MATRIX_MAXIMUM_BRIGHTNESS
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 255

#define RGB_MATRIX_DEFAULT_HUE 224
#define RGB_MATRIX_DEFAULT_SAT 255
#define RGB_MATRIX_DEFAULT_VAL 224
#define RGB_MATRIX_DEFAULT_SPD 92

#define RGB_MATRIX_HUE_STEP 16
#define RGB_MATRIX_SAT_STEP 16
#define RGB_MATRIX_VAL_STEP 16
#define RGB_MATRIX_SPD_STEP 16

#include "rgb_matrix_undef.h"

#define ENABLE_RGB_MATRIX_BREATHING
#define ENABLE_RGB_MATRIX_TYPING_HEATMAP
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
#define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
#define ENABLE_RGB_MATRIX_STARLIGHT
#define ENABLE_RGB_MATRIX_RIVERFLOW

#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_TYPING_HEATMAP

// Firmware size optimizations
#define LAYER_STATE_8BIT
