/* Copyright 2019 Kevin Grabbe <ke.grabb@gmail.com>
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

#include "quantum.h"

/* This a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */

/* By replacing the u473d's stock controller board, the media cluster
 * switches and status LEDs are removed. The web navigation cluster remains,
 * leaving 6 switches physically above the F-row. In the matrix, they map to the
 * final column.
 */

#define LAYOUT( \
              KS7,    KS6,    KS5,    KS3,          KS2,    KS0,\
  KA5,        KB0,    KC0,    KC3,    KC5,          KR5,    KF5,    KG3,    KG0,          KR0,    KR1,    KO1,    KN1,                                            KI1,    KI2,    KQ6,\
  KA0,    KA1,    KB1,    KC1,    KD1,    KD0,    KE0,    KE1,    KF1,    KG1,    KH1,    KH0,    KF0,    KR3,                KN0,    KQ0,    KP0,        KO6,    KN6,    KP6,    KP7,\
  KA3,        KA2,    KB2,    KC2,    KD2,    KD3,    KE3,    KE2,    KF2,    KG2,    KH2,    KH3,    KF3,    KR4,            KO0,    KQ1,    KP1,        KO2,    KN2,    KP2,    KQ2,\
  KB3,          KA4,    KB4,    KC4,    KD4,    KD5,    KE5,    KE4,    KF4,    KG4,    KH4,    KH5,    KR6,                                              KO3,    KN3,    KP3,\
  KJ3,             KA6,    KB6,    KC6,    KD6,    KD7,    KE7,    KE6,    KF6,    KG6,    KH7,    KJ6,                               KQ5,                KO4,    KN4,    KP4,    KQ4,\
  KK0,        KM4,      KI5,                           KR7,                   KI7,      KL6,      KM2,      KK6,              KQ7,    KO7,    KN7,        KN5,            KP5 \
) \
{ \
/*       A       B       C       D       E       F       G       H       I       J       K       L       M       N       O       P       Q       R       S       */ \
/* 0 */ {KA0,    KB0,    KC0,    KD0,    KE0,    KF0,    KG0,    KH0,    XXXXXXX,XXXXXXX,KK0,    XXXXXXX,XXXXXXX,KN0,    KO0,    KP0,    KQ0,    KR0,    KS0     }, \
/* 1 */ {KA1,    KB1,    KC1,    KD1,    KE1,    KF1,    KG1,    KH1,    KI1,    XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,KN1,    KO1,    KP1,    KQ1,    KR1,    XXXXXXX }, \
/* 2 */ {KA2,    KB2,    KC2,    KD2,    KE2,    KF2,    KG2,    KH2,    KI2,    XXXXXXX,XXXXXXX,XXXXXXX,KM2,    KN2,    KO2,    KP2,    KQ2,    XXXXXXX,KS2     }, \
/* 3 */ {KA3,    KB3,    KC3,    KD3,    KE3,    KF3,    KG3,    KH3,    XXXXXXX,KJ3,    XXXXXXX,XXXXXXX,XXXXXXX,KN3,    KO3,    KP3,    XXXXXXX,KR3,    KS3     }, \
/* 4 */ {KA4,    KB4,    KC4,    KD4,    KE4,    KF4,    KG4,    KH4,    XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,KM4,    KN4,    KO4,    KP4,    KQ4,    KR4,    XXXXXXX }, \
/* 5 */ {KA5,    XXXXXXX,KC5,    KD5,    KE5,    KF5,    XXXXXXX,KH5,    KI5,    XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,KN5,    XXXXXXX,KP5,    KQ5,    KR5,    KS5     }, \
/* 6 */ {KA6,    KB6,    KC6,    KD6,    KE6,    KF6,    KG6,    XXXXXXX,XXXXXXX,KJ6,    KK6,    KL6,    XXXXXXX,KN6,    KO6,    KP6,    KQ6,    KR6,    KS6     }, \
/* 7 */ {XXXXXXX,XXXXXXX,XXXXXXX,KD7,    KE7,    XXXXXXX,XXXXXXX,KH7,    KI7,    XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,KN7,    KO7,    KP7,    KQ7,    KR7,    KS7     }, \
}

