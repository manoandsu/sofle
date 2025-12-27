// Copyright 2024 Santosh Kumar (@santosh)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define TRI_LAYER_LOWER_LAYER 2
#define TRI_LAYER_UPPER_LAYER 3
#define TRI_LAYER_ADJUST_LAYER 4

#define VERSION 1
#define MASTER_LEFT
#define SPLIT_LED_STATE_ENABLE      // Syncs caps lock, num lock, etc.
#define SPLIT_MODS_ENABLE           // Syncs modifier state
                                    //
#ifdef RGBLIGHT_ENABLE
    #define RGBLIGHT_ANIMATIONS
    #define RGBLIGHT_HUE_STEP 12
    #define RGBLIGHT_SAT_STEP 12
    #define RGBLIGHT_VAL_STEP 12
    #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
    #define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_RAINBOW_SWIRL
    #define RGBLIGHT_SLEEP
    #define RGBLIGHT_LAYERS
    // limit brightness so I can look at it kekw
    #define RGBLIGHT_LIMIT_VAL 100
#endif
