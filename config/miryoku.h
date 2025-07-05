/*
 * Copyright (c) 2022 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

// Miryoku ZMK Custom Configuration for w-40

// Layout Options
// Uncomment one of the following to change the base layer layout
// #define MIRYOKU_ALPHAS_QWERTY
// #define MIRYOKU_ALPHAS_DVORAK
// #define MIRYOKU_ALPHAS_COLEMAK
#define MIRYOKU_ALPHAS_COLEMAKDH  // Default: Colemak Mod-DH

// Extra Layer Options
// Uncomment one of the following to change the extra layer layout
// #define MIRYOKU_EXTRA_COLEMAKDH
// #define MIRYOKU_EXTRA_COLEMAK
// #define MIRYOKU_EXTRA_DVORAK
#define MIRYOKU_EXTRA_QWERTY  // Default: QWERTY

// Tap Layer Options
// Uncomment one of the following to change the tap layer layout
#define MIRYOKU_TAP_COLEMAKDH  // Default: Colemak Mod-DH
// #define MIRYOKU_TAP_COLEMAK
// #define MIRYOKU_TAP_DVORAK
// #define MIRYOKU_TAP_QWERTY

// Navigation Layer Options
// Uncomment one of the following to change the nav layer layout
#define MIRYOKU_NAV_DEFAULT  // Default: Home position line nav
// #define MIRYOKU_NAV_INVERTEDT  // Inverted-T nav keys
// #define MIRYOKU_NAV_VI  // Vi-style nav keys

// Clipboard Options
// Uncomment one of the following to change clipboard bindings
#define MIRYOKU_CLIPBOARD_CUA  // Default: CUA (Ctrl+C, Ctrl+V, etc.)
// #define MIRYOKU_CLIPBOARD_MAC  // Mac-style (Cmd+C, Cmd+V, etc.)
// #define MIRYOKU_CLIPBOARD_WIN  // Windows-style with additional bindings

// Layer Arrangement Options
// Uncomment one of the following to change layer arrangement
#define MIRYOKU_LAYERS_DEFAULT  // Default: Right hand nav
// #define MIRYOKU_LAYERS_FLIP  // Flip nav to left hand

// Behavioral Options
#define MIRYOKU_KLUDGE_TAPDELAY  // Add tap delay for better tap detection

// Homerow Mods Configuration
#define MIRYOKU_HOMEROW_MODS_ENABLED
#define MIRYOKU_HOMEROW_MODS_FLAVOR "balanced"
#define MIRYOKU_HOMEROW_MODS_TAPPING_TERM_MS 280
#define MIRYOKU_HOMEROW_MODS_QUICK_TAP_MS 175
#define MIRYOKU_HOMEROW_MODS_GLOBAL_QUICK_TAP_MS 150

// Combo Configuration
#define MIRYOKU_COMBOS_ENABLED
#define MIRYOKU_COMBO_TIMEOUT_MS 50

// Layer Tap Configuration
#define MIRYOKU_LAYER_TAP_TAPPING_TERM_MS 200
#define MIRYOKU_LAYER_TAP_FLAVOR "tap-preferred"

// Caps Word Configuration
#define MIRYOKU_CAPS_WORD_ENABLED

// Sticky Keys Configuration
#define MIRYOKU_STICKY_KEYS_ENABLED
#define MIRYOKU_STICKY_KEYS_RELEASE_AFTER_MS 1000

// Sleep Configuration
#define MIRYOKU_SLEEP_ENABLED
#define MIRYOKU_IDLE_TIMEOUT_MS 30000
#define MIRYOKU_IDLE_SLEEP_TIMEOUT_MS 900000

// Bluetooth Configuration
#define MIRYOKU_BLE_TX_POWER_PLUS_8
#define MIRYOKU_BLE_EXPERIMENTAL_FEATURES

// USB Configuration
#define MIRYOKU_USB_POLLING_INTERVAL_MS 1

// Studio Configuration
#define MIRYOKU_STUDIO_ENABLED
#define MIRYOKU_STUDIO_LOCKING_DISABLED

// Debounce Configuration
#define MIRYOKU_DEBOUNCE_PRESS_MS 1
#define MIRYOKU_DEBOUNCE_RELEASE_MS 5

// Battery Configuration
#define MIRYOKU_BATTERY_REPORT_INTERVAL 60

// Custom Key Mappings for w-40
// The w-40 has a 4x10 layout, so we need to map Miryoku's 3x5+3 onto it
#define MIRYOKU_MAPPING_W40

// Custom macros for common key combinations
#define MIRYOKU_MACRO_UNDO
#define MIRYOKU_MACRO_CUT
#define MIRYOKU_MACRO_COPY
#define MIRYOKU_MACRO_PASTE
#define MIRYOKU_MACRO_SELECT_ALL

// Enable additional features
#define MIRYOKU_MOUSE_KEYS_ENABLED
#define MIRYOKU_MEDIA_KEYS_ENABLED
#define MIRYOKU_FUNCTION_KEYS_ENABLED