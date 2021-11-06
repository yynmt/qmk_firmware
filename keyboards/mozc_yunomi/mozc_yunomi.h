/* Copyright 2021 yynmt
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

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \
    k000, k010, k020, k030, k040, k050, k060, k070, k080, k090, k100, k110, \
    k001, k011, k021, k031, k041, k051, k061, k071, k081, k091, k101, k111, \
    k002, k012, k022, k032, k042, k052, k062, k072, k082, k092, k102, k112, \
    k003, k013, k023, k033, k043, k053, k063, k073, k083, k093, k103, k113, \
    k004, k014, k024, k034, k044, k054, k064, k074, k084, k094, k104, k114 \
) { \
    { k034, k033, k032, k031, k030}, \
    { k040, k044, k043, k042, k041}, \
    { k051, k050, k054, k053, k052}, \
    { k062, k061, k060, k064, k063}, \
    { k073, k072, k071, k070, k074}, \
    { k084, k083, k082, k081, k080}, \
    { k090, k094, k093, k092, k091}, \
    { k101, k100, k104, k103, k102}, \
    { k112, k111, k110, k114, k113}, \
    { k003, k002, k001, k000, k004}, \
    { k014, k013, k012, k011, k010}, \
    { k020, k024, k023, k022, k021} \
}
