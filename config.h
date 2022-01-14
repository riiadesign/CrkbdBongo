// ObliviousGmn // Dokuu // October 2020 // Config

#pragma once

/* Select hand configuration */
#undef PRODUCT
#define PRODUCT Corne

#define OLED_FONT_H "keyboards/crkbd/keymaps/kiumi-corne/glcdfont.c"
// #ifdef OLED_ENABLE
// #endif

// #define MASTER_LEFT

// #define USE_SERIAL_PD2
// #define TAPPING_TERM 125
// #define IGNORE_MOD_TAP_INTERRUPT
// #define TAPPING_FORCE_HOLD
// #define RETRO_TAPPING

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

#define USE_SERIAL_PD2

#define TAPPING_FORCE_HOLD
#define TAPPING_TERM 100

#define OLED_TIMEOUT 5000
#define WPM_SAMPLE_SECONDS 2

#define SPLIT_WPM_ENABLE
#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_TRANSPORT_MIRROR
#define SPLIT_LED_STATE_ENABLE
#define SPLIT_MODS_ENABLE
#define SPLIT_OLED_ENABLE