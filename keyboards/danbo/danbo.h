/* Copyright 2018 REPLACE_WITH_YOUR_NAME
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
#ifndef DANBO_H
#define DANBO_H

#include "quantum.h"

// This a shortcut to help you visually see your layout.
// The following is an example using the Planck MIT layout
// The first section contains all of the arguments
// The second converts the arguments into a two-dimensional array
#define LAYOUT( \
    k0000, k0001, k0002, k0003, k0004, k0005,               k0008, k0009, k0010, k0011, k0012, k0013, \
    k0100, k0101, k0102, k0103, k0104, k0105,               k0108, k0109, k0110, k0111, k0112, k0113, \
    k0200, k0201, k0202, k0203, k0204, k0205,               k0208, k0209, k0210, k0211, k0212, k0213, \
    k0300, k0301, k0302, k0303, k0304, k0305, k0306, k0307, k0308, k0309, k0310, k0311, k0312, k0313, \
                            k0404, k0405,   k0406   ,  k0407 , k0408, k0409 \
) \
{ \
    { k0000, k0001, k0002, k0003, k0004, k0005, KC_NO, KC_NO, k0008, k0009, k0010, k0011, k0012, k0013 }, \
    { k0100, k0101, k0102, k0103, k0104, k0105, KC_NO, KC_NO, k0108, k0109, k0110, k0111, k0112, k0113 }, \
    { k0200, k0201, k0202, k0203, k0204, k0205, KC_NO, KC_NO, k0208, k0209, k0210, k0211, k0212, k0213 }, \
    { k0300, k0301, k0302, k0303, k0304, k0305, k0306, k0307, k0308, k0309, k0310, k0311, k0312, k0313 }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, k0404, k0405, k0406, k0407, k0408, k0409, KC_NO, KC_NO, KC_NO, KC_NO } \
}

#endif
