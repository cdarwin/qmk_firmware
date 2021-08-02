#pragma once

#define ENCODERS_PAD_A { F6, D3, B2 }
#define ENCODERS_PAD_B { F7, B1, B3 }
#define ENCODER_RESOLUTION 2

// Configure the global tapping term (default: 200ms)
#define TAPPING_TERM 200

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
// #define TAPPING_FORCE_HOLD

// Apply the modifier on keys that are tapped during a short hold of a modtap
#define PERMISSIVE_HOLD