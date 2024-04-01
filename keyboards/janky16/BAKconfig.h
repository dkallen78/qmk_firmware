// Copyright 2024 dkallen78 (@dkallen78)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#define DEBOUNCE 5

#define ENCODERS_PAD_A { D4, C6 }
#define ENCODERS_PAD_B { F6, F7 }
