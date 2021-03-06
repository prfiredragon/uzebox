/*
 *  Zombienator
 *  Copyright (C) 2009 Peter Hedman
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#define TILE_WIDTH 6
#define TILE_HEIGHT 8

const char tiles[] PROGMEM =
{
/* tile number: 0 grass*/
	0x18,0x11,0x10,0x10,0x11,0x18,
	0x10,0x18,0x10,0x11,0x18,0x10,
	0x11,0x11,0x18,0x11,0x10,0x18,
	0x10,0x18,0x10,0x10,0x11,0x11,
	0x11,0x11,0x10,0x11,0x10,0x11,
	0x18,0x18,0x11,0x10,0x10,0x10,
	0x18,0x10,0x10,0x18,0x11,0x18,
	0x11,0x18,0x11,0x18,0x11,0x10,
	
/* tile number: 1 grass*/
	0x11,0x11,0x10,0x10,0x11,0x18,
	0x18,0x18,0x11,0x11,0x10,0x11,
	0x10,0x18,0x10,0x18,0x11,0x10,
	0x18,0x10,0x11,0x10,0x18,0x18,
	0x11,0x11,0x10,0x11,0x11,0x18,
	0x11,0x10,0x10,0x11,0x18,0x11,
	0x11,0x11,0x11,0x10,0x11,0x11,
	0x18,0x18,0x11,0x10,0x10,0x10,
	
/* tile number: 2 grass*/
	0x10,0x11,0x10,0x11,0x10,0x10,
	0x11,0x10,0x10,0x11,0x11,0x10,
	0x18,0x11,0x11,0x10,0x11,0x18,
	0x18,0x11,0x18,0x11,0x10,0x11,
	0x11,0x10,0x18,0x18,0x11,0x18,
	0x10,0x10,0x11,0x11,0x10,0x11,
	0x11,0x10,0x11,0x10,0x18,0x10,
	0x18,0x11,0x18,0x18,0x11,0x11,
	
/* tile number: 3 grass*/
	0x11,0x18,0x18,0x11,0x18,0x11,
	0x10,0x11,0x11,0x10,0x18,0x18,
	0x10,0x11,0x11,0x11,0x10,0x11,
	0x11,0x10,0x18,0x10,0x10,0x11,
	0x11,0x18,0x10,0x18,0x10,0x10,
	0x11,0x11,0x11,0x10,0x18,0x11,
	0x11,0x18,0x11,0x10,0x11,0x11,
	0x18,0x10,0x10,0x18,0x10,0x11,

/* tile number: 4 tombstone 1*/
	0x18,0x10,0x11,0x11,0x18,0x10,
	0x11,0x11,0x10,0x00,0x00,0x00,
	0x10,0x18,0x00,0x00,0x52,0x52,
	0x11,0x10,0x00,0x52,0x52,0x52,
	0x10,0x00,0x00,0x52,0x52,0x52,
	0x10,0x00,0x52,0x52,0x52,0x52,
	0x18,0x00,0x52,0x52,0x52,0x52,
	0x11,0x00,0x09,0x52,0x52,0x52,

/* tile number: 5 tombstone 2*/
	0x10,0x18,0x11,0x11,0x10,0x18,
	0x00,0x00,0x00,0x10,0x11,0x11,
	0x93,0x93,0x00,0x00,0x18,0x10,
	0x52,0x52,0x93,0x00,0x10,0x11,
	0x52,0x52,0x52,0x00,0x00,0x10,
	0x52,0x52,0x52,0x93,0x00,0x10,
	0x52,0x52,0x52,0x93,0x00,0x18,
	0x52,0x52,0x52,0x93,0x00,0x11,
	
/* tile number: 6 tombstone 3*/
	0x52,0x52,0x52,0x93,0x00,0x18,
	0x52,0x52,0x52,0x52,0x00,0x11,
	0x52,0x52,0x52,0x93,0x00,0x10,
	0x52,0x52,0x52,0x52,0x00,0x11,
	0x52,0x52,0x52,0x52,0x00,0x10,
	0x11,0x10,0x10,0x18,0x10,0x10,
	0x10,0x10,0x18,0x10,0x10,0x18,
	0x10,0x11,0x11,0x10,0x10,0x11,

/* tile number: 7 tombstone 4*/
	0x18,0x00,0x52,0x52,0x52,0x52,
	0x11,0x00,0x09,0x52,0x52,0x52,
	0x10,0x00,0x52,0x52,0x52,0x52,
	0x11,0x00,0x09,0x52,0x52,0x52,
	0x10,0x00,0x09,0x52,0x52,0x52,
	0x10,0x10,0x18,0x10,0x10,0x11,
	0x18,0x10,0x10,0x18,0x10,0x10,
	0x11,0x10,0x10,0x11,0x11,0x10,
	
/* tile number: 8 gravel up 2*/
	0x10,0x5b,0x52,0x5b,0x52,0x09,
	0x11,0x10,0x52,0x09,0x5b,0x09,
	0x18,0x11,0x09,0x5b,0x5b,0x52,
	0x11,0x10,0x09,0x5b,0x09,0x52,
	0x10,0x09,0x5b,0x5b,0x5b,0x5b,
	0x11,0x09,0x52,0x09,0x5b,0x52,
	0x10,0x10,0x5b,0x09,0x52,0x52,
	0x11,0x52,0x09,0x52,0x52,0x5b,

/* tile number: 9 gravel up 4*/
	0x09,0x5b,0x52,0x5b,0x52,0x10,
	0x52,0x5b,0x52,0x09,0x10,0x18,
	0x52,0x52,0x09,0x5b,0x11,0x10,
	0x5b,0x52,0x09,0x5b,0x11,0x11,
	0x5b,0x09,0x5b,0x5b,0x5b,0x10,
	0x52,0x09,0x52,0x09,0x10,0x11,
	0x09,0x52,0x5b,0x09,0x11,0x18,
	0x5b,0x52,0x09,0x52,0x52,0x11,

/* tile number: 10 gravel left 1*/
	0x09,0x10,0x11,0x5b,0x10,0x09,
	0x52,0x5b,0x52,0x09,0x5b,0x09,
	0x52,0x52,0x09,0x5b,0x5b,0x52,
	0x5b,0x52,0x09,0x5b,0x09,0x52,
	0x5b,0x09,0x5b,0x5b,0x5b,0x5b,
	0x52,0x09,0x52,0x09,0x5b,0x52,
	0x09,0x52,0x5b,0x09,0x52,0x52,
	0x5b,0x52,0x09,0x52,0x52,0x5b,
	
/* tile number: 11 gravel left 3*/
	0x09,0x5b,0x52,0x5b,0x52,0x09,
	0x52,0x5b,0x52,0x09,0x5b,0x09,
	0x52,0x52,0x09,0x5b,0x5b,0x52,
	0x5b,0x52,0x09,0x5b,0x09,0x52,
	0x5b,0x09,0x5b,0x5b,0x5b,0x5b,
	0x52,0x09,0x52,0x09,0x5b,0x52,
	0x09,0x52,0x18,0x11,0x52,0x52,
	0x5b,0x10,0x11,0x10,0x18,0x5b,
	
/* tile number: 12 gravel middle*/
	0x09,0x5b,0x52,0x5b,0x52,0x09,
	0x52,0x5b,0x52,0x09,0x5b,0x09,
	0x52,0x52,0x09,0x5b,0x5b,0x52,
	0x5b,0x52,0x09,0x5b,0x09,0x52,
	0x5b,0x09,0x5b,0x5b,0x5b,0x5b,
	0x52,0x09,0x52,0x09,0x5b,0x52,
	0x09,0x52,0x5b,0x09,0x52,0x52,
	0x5b,0x52,0x09,0x52,0x52,0x5b,

/* tile number: 13 black*/
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,

/* tile number: 14 hat*/
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x14,0x14,0x14,0x00,0x00, 
	0x00,0x14,0x14,0x14,0x00,0x00, 
	0x00,0x14,0x14,0x14,0x00,0x00, 
	0x14,0x14,0x14,0x14,0x14,0x00, 
	0x00,0x00,0x00,0x00,0x00,0x00,

/* tile number: 15 bush */
	0x18,0x11,0x10,0x10,0x11,0x00,
	0x10,0x18,0x10,0x11,0x00,0x10,
	0x11,0x11,0x18,0x11,0x00,0x10,
	0x10,0x18,0x10,0x10,0x00,0x10,
	0x11,0x11,0x10,0x11,0x00,0x10,
	0x18,0x18,0x11,0x00,0x10,0x10,
	0x18,0x10,0x00,0x19,0x10,0x10,
	0x11,0x00,0x08,0x19,0x20,0x10,
	
/* tile number: 16 bush */
	0x00,0x10,0x00,0x00,0x18,0x19,
	0x19,0x00,0x10,0x19,0x00,0x00,
	0x20,0x19,0x10,0x19,0x20,0x19,
	0x20,0x19,0x20,0x19,0x20,0x20,
	0x20,0x19,0x20,0x18,0x19,0x19,
	0x20,0x18,0x20,0x18,0x20,0x18,
	0x10,0x18,0x19,0x19,0x19,0x19,
	0x18,0x10,0x19,0x19,0x19,0x18,
	
/* tile number: 17 bush */
	0x19,0x18,0x10,0x10,0x18,0x19,
	0x00,0x00,0x10,0x18,0x19,0x10,
	0x19,0x20,0x00,0x10,0x10,0x19,
	0x19,0x19,0x00,0x00,0x18,0x18,
	0x19,0x19,0x18,0x19,0x00,0x18,
	0x18,0x18,0x10,0x18,0x08,0x00,
	0x19,0x19,0x10,0x20,0x18,0x00,
	0x19,0x19,0x10,0x20,0x18,0x00,
	
/* tile number: 18 bush */
	0x00,0x08,0x10,0x10,0x10,0x18,
	0x00,0x08,0x10,0x10,0x18,0x18,
	0x18,0x00,0x10,0x10,0x18,0x10,
	0x18,0x00,0x10,0x10,0x10,0x19,
	0x11,0x00,0x10,0x19,0x18,0x19,
	0x00,0x08,0x10,0x10,0x10,0x10,
	0x08,0x09,0x10,0x18,0x10,0x10,
	0x10,0x08,0x08,0x18,0x10,0x10,
	
/* tile number: 19 bush */
	0x20,0x18,0x10,0x19,0x19,0x18,
	0x10,0x10,0x19,0x10,0x19,0x19,
	0x19,0x10,0x19,0x20,0x19,0x19,
	0x19,0x10,0x19,0x20,0x19,0x19,
	0x19,0x10,0x19,0x18,0x18,0x19,
	0x18,0x10,0x19,0x18,0x19,0x19,
	0x10,0x18,0x19,0x19,0x10,0x18,
	0x10,0x18,0x20,0x18,0x19,0x10,
	
/* tile number: 20 bush */
	0x19,0x19,0x19,0x18,0x00,0x10,
	0x19,0x19,0x19,0x18,0x00,0x10,
	0x18,0x20,0x19,0x20,0x20,0x00,
	0x20,0x19,0x18,0x18,0x18,0x00,
	0x18,0x18,0x19,0x19,0x10,0x00,
	0x18,0x19,0x19,0x20,0x08,0x00,
	0x20,0x19,0x19,0x10,0x10,0x00,
	0x20,0x19,0x19,0x19,0x20,0x00,
	
/* tile number: 21 bush */
	0x08,0x10,0x10,0x18,0x10,0x10,
	0x08,0x10,0x19,0x18,0x18,0x19,
	0x11,0x08,0x19,0x10,0x18,0x19,
	0x08,0x08,0x19,0x18,0x18,0x19,
	0x08,0x08,0x10,0x08,0x11,0x10,
	0x18,0x08,0x08,0x10,0x10,0x18,
	0x19,0x08,0x08,0x10,0x10,0x18,
	0x18,0x19,0x08,0x08,0x08,0x10,
	
/* tile number: 22 bush */
	0x19,0x19,0x20,0x18,0x18,0x10,
	0x19,0x19,0x19,0x19,0x18,0x10,
	0x19,0x10,0x19,0x18,0x18,0x20,
	0x10,0x18,0x19,0x10,0x10,0x20,
	0x11,0x18,0x10,0x10,0x11,0x18,
	0x10,0x18,0x10,0x11,0x10,0x19,
	0x08,0x10,0x11,0x11,0x11,0x10,
	0x10,0x08,0x18,0x08,0x08,0x10,
	
/* tile number: 23 bush */
	0x18,0x19,0x20,0x19,0x19,0x00,
	0x19,0x10,0x18,0x19,0x20,0x00,
	0x20,0x10,0x19,0x19,0x20,0x00,
	0x20,0x10,0x20,0x19,0x19,0x00,
	0x10,0x11,0x18,0x11,0x18,0x00,
	0x11,0x19,0x18,0x20,0x00,0x10,
	0x10,0x08,0x11,0x08,0x00,0x19,
	0x10,0x10,0x08,0x08,0x00,0x10,

/* tile number: 24 church middleroof1 */
	0x18,0x11,0x10,0x10,0x11,0x18,
	0x10,0x18,0x10,0x11,0x18,0x10,
	0x11,0x11,0x18,0x11,0x10,0x00,
	0x10,0x18,0x10,0x10,0x11,0x00,
	0x11,0x11,0x10,0x00,0x00,0x00,
	0x18,0x18,0x11,0x00,0x00,0x00,
	0x18,0x10,0x10,0x18,0x11,0x00,
	0x11,0x18,0x11,0x18,0x11,0x00,
	
/* tile number: 25 church middleroof2 */
	0x11,0x11,0x10,0x10,0x11,0x18,
	0x18,0x18,0x11,0x11,0x10,0x11,
	0x00,0x18,0x10,0x18,0x11,0x10,
	0x00,0x10,0x11,0x10,0x18,0x18,
	0x00,0x00,0x00,0x11,0x11,0x18,
	0x00,0x00,0x00,0x11,0x18,0x11,
	0x00,0x11,0x11,0x10,0x11,0x11,
	0x00,0x18,0x11,0x10,0x10,0x10,
	
/* tile number: 26 church middleroof3 */
	0x10,0x11,0x10,0x11,0x10,0x00,
	0x11,0x10,0x10,0x11,0x11,0x00,
	0x18,0x11,0x11,0x10,0x00,0x00,
	0x18,0x11,0x18,0x11,0x00,0x15,
	0x11,0x10,0x18,0x00,0x15,0x15,
	0x10,0x10,0x11,0x00,0x15,0x15,
	0x11,0x10,0x00,0x14,0x15,0x15,
	0x18,0x11,0x00,0x14,0x14,0x15,
	
/* tile number: 27 church middleroof4*/
	0x00,0x18,0x18,0x11,0x18,0x11,
	0x00,0x11,0x11,0x10,0x18,0x18,
	0x00,0x00,0x11,0x11,0x10,0x11,
	0x16,0x00,0x18,0x10,0x10,0x11,
	0x15,0x16,0x00,0x18,0x10,0x10,
	0x15,0x16,0x00,0x10,0x18,0x11,
	0x15,0x15,0x16,0x00,0x11,0x11,
	0x15,0x15,0x16,0x00,0x10,0x11,

/* tile number: 28 church middleroof5*/
	0x18,0x00,0x13,0x13,0x14,0x15,
	0x10,0x00,0x13,0x13,0x14,0x14,
	0x00,0x12,0x13,0x13,0x13,0x14,
	0x00,0x00,0x12,0x12,0x13,0x13,
	0x00,0x12,0x00,0x00,0x12,0x13,
	0x00,0x12,0x5b,0x12,0x00,0x00,
	0x00,0x12,0x12,0x5b,0x5b,0x5b,
	0x00,0x12,0x5b,0x12,0x00,0x00,
	
/* tile number: 29 church middleroof6*/
	0x15,0x15,0x15,0x16,0x00,0x18,
	0x15,0x15,0x15,0x16,0x00,0x11,
	0x14,0x15,0x15,0x15,0x16,0x00,
	0x14,0x15,0x15,0x15,0x00,0x00,
	0x14,0x15,0x00,0x00,0x5b,0x00,
	0x00,0x00,0xad,0x5b,0xad,0x00,
	0x5b,0xad,0x5b,0xad,0xad,0x00,
	0x00,0x00,0xad,0x5b,0xad,0x00,
	
/* tile number: 30 */
	0x00,0x12,0x12,0x5b,0x00,0x6d,
	0x00,0x12,0x5b,0x12,0x00,0x6d,
	0x00,0x12,0x00,0x00,0x00,0x6d,
	0x00,0x12,0x00,0x6d,0x6d,0x6d,
	0x00,0x12,0x00,0x00,0x00,0x6d,
	0x00,0x12,0x5b,0x12,0x00,0x6d,
	0x00,0x12,0x12,0x5b,0x00,0x6d,
	0x00,0x12,0x5b,0x12,0x00,0x6d,
	
/* tile number: 31 */
	0x6d,0x00,0x5b,0xad,0xad,0x00,
	0x6d,0x00,0xad,0x5b,0xad,0x00,
	0x6d,0x00,0x00,0x00,0xad,0x00,
	0x6d,0x6d,0x6d,0x00,0xad,0x00,
	0x6d,0x00,0x00,0x00,0xad,0x00,
	0x6d,0x00,0xad,0x5b,0xad,0x00,
	0x6d,0x00,0x5b,0xad,0xad,0x00,
	0x6d,0x00,0xad,0x5b,0xad,0x00,
	
/* tile number: 32 */
	0x10,0x11,0x10,0x11,0x10,0x00,
	0x11,0x10,0x10,0x11,0x11,0x00,
	0x18,0x11,0x11,0x10,0x00,0x16,
	0x18,0x11,0x18,0x11,0x00,0x15,
	0x11,0x10,0x18,0x00,0x15,0x15,
	0x10,0x10,0x11,0x00,0x14,0x15,
	0x11,0x10,0x00,0x13,0x14,0x15,
	0x18,0x11,0x00,0x13,0x13,0x14,
	
/* tile number: 33 */
	0x11,0x18,0x18,0x11,0x18,0x11,
	0x00,0x11,0x11,0x10,0x18,0x18,
	0x00,0x11,0x11,0x11,0x10,0x11,
	0x16,0x00,0x18,0x10,0x10,0x11,
	0x16,0x00,0x10,0x18,0x10,0x10,
	0x15,0x16,0x00,0x10,0x18,0x11,
	0x15,0x16,0x00,0x10,0x11,0x11,
	0x15,0x15,0x16,0x00,0x10,0x11,

/* tile number: 34 */
	0x10,0x11,0x10,0x11,0x10,0x10,
	0x11,0x10,0x10,0x11,0x11,0x10,
	0x18,0x11,0x11,0x10,0x11,0x00,
	0x18,0x11,0x18,0x11,0x10,0x00,
	0x11,0x10,0x18,0x18,0x00,0x15,
	0x10,0x10,0x11,0x11,0x00,0x14,
	0x11,0x10,0x11,0x00,0x13,0x14,
	0x18,0x11,0x18,0x00,0x13,0x13,
	
/* tile number: 35 */
	0x00,0x18,0x18,0x11,0x18,0x11,
	0x00,0x00,0x11,0x10,0x18,0x18,
	0x16,0x00,0x11,0x11,0x10,0x11,
	0x15,0x16,0x00,0x10,0x10,0x11,
	0x15,0x16,0x00,0x18,0x10,0x10,
	0x15,0x15,0x16,0x00,0x18,0x11,
	0x15,0x15,0x16,0x00,0x11,0x11,
	0x14,0x15,0x15,0x16,0x00,0x11,

/* tile number: 36 */
	0x18,0x00,0x12,0x12,0x13,0x14,
	0x10,0x00,0x00,0x12,0x13,0x13,
	0x11,0x00,0x12,0x00,0x00,0x12,
	0x10,0x00,0x12,0x5b,0x00,0x00,
	0x11,0x00,0x12,0x12,0x5b,0x5b,
	0x18,0x00,0x12,0x5b,0x12,0x5b,
	0x18,0x00,0x12,0x12,0x5b,0x5b,
	0x11,0x00,0x12,0x5b,0x12,0x5b,
	
/* tile number: 37 */
	0x15,0x15,0x16,0x00,0x11,0x18,
	0x14,0x15,0x52,0x00,0x10,0x11,
	0x00,0x00,0x5b,0x00,0x11,0x10,
	0x00,0xad,0xad,0x00,0x18,0x18,
	0xad,0x5b,0xad,0x00,0x11,0x18,
	0x5b,0xad,0xad,0x00,0x18,0x11,
	0xad,0x5b,0xad,0x00,0x11,0x11,
	0x5b,0xad,0xad,0x00,0x10,0x10,
	
/* tile number: 38 */
	0x00,0x12,0x12,0x5b,0x00,0x6d,
	0x00,0x12,0x5b,0x12,0x00,0x6d,
	0x00,0x12,0x12,0x5b,0x00,0x6d,
	0x00,0x12,0x5b,0x12,0x00,0x00,
	0x00,0x12,0x12,0x5b,0x12,0x5b,
	0x00,0x12,0x5b,0x12,0x5b,0x5b,
	0x00,0x12,0x12,0x5b,0x12,0x5b,
	0x00,0x12,0x5b,0x12,0x5b,0x5b,
	
/* tile number: 39 */
	0x6d,0x00,0x5b,0xad,0xad,0x00,
	0x6d,0x00,0xad,0x5b,0xad,0x00,
	0x6d,0x00,0x5b,0xad,0xad,0x00,
	0x00,0x00,0xad,0x5b,0xad,0x00,
	0x5b,0xad,0x5b,0xad,0xad,0x00,
	0xad,0x5b,0xad,0x5b,0xad,0x00,
	0x5b,0xad,0x5b,0xad,0xad,0x00,
	0xad,0x5b,0xad,0x5b,0xad,0x00,
	
/* tile number: 40 */
	0x18,0x11,0x00,0x12,0x12,0x13,
	0x10,0x18,0x00,0x00,0x12,0x13,
	0x11,0x11,0x00,0x12,0x00,0x00,
	0x10,0x18,0x00,0x12,0x5b,0x00,
	0x11,0x11,0x00,0x12,0x12,0x5b,
	0x18,0x18,0x00,0x12,0x5b,0x12,
	0x18,0x10,0x00,0x12,0x12,0x5b,
	0x11,0x18,0x00,0x12,0x5b,0x12,
	
/* tile number: 41 */
	0x14,0x15,0x15,0x16,0x00,0x18,
	0x13,0x14,0x15,0x52,0x00,0x11,
	0x12,0x00,0x00,0x5b,0x00,0x10,
	0x00,0x00,0xad,0xad,0x00,0x18,
	0x5b,0xad,0x5b,0xad,0x00,0x18,
	0x5b,0x5b,0xad,0xad,0x00,0x11,
	0x5b,0xad,0x5b,0xad,0x00,0x11,
	0x5b,0x5b,0xad,0xad,0x00,0x10,
	
/* tile number: 42 */
	0x10,0x00,0x12,0x12,0x5b,0x5b,
	0x11,0x00,0x12,0x5b,0x12,0xad,
	0x18,0x00,0xad,0xad,0x5b,0xad,
	0x18,0x00,0x12,0x5b,0xad,0x5b,
	0x11,0x00,0x5b,0xad,0xad,0xad,
	0x10,0x00,0xad,0x12,0x5b,0xad,
	0x11,0x00,0xad,0xad,0x5b,0xad,
	0x18,0x00,0x12,0x5b,0xad,0x5b,
	
/* tile number: 43 */
	0xad,0x5b,0xad,0x00,0x18,0x11,
	0x5b,0xad,0xad,0x00,0x00,0x00,
	0xad,0x5b,0xad,0xad,0x5b,0xad,
	0x5b,0xad,0x5b,0x5b,0xad,0x5b,
	0xad,0xad,0xad,0xad,0xad,0xad,
	0x5b,0xad,0xad,0x5b,0xad,0xad,
	0xad,0x5b,0xad,0xad,0x5b,0xad,
	0x5b,0xad,0x5b,0x5b,0xad,0x5b,
	
/* tile number: 44 */
	0x00,0x12,0x12,0x5b,0x12,0xad,
	0x00,0x12,0x5b,0x12,0xad,0x5b,
	0xad,0x5b,0xad,0xad,0x5b,0xad,
	0x5b,0xad,0x5b,0x5b,0xad,0x5b,
	0xad,0xad,0xad,0xad,0xad,0xad,
	0x5b,0xad,0xad,0x5b,0xad,0xad,
	0xad,0x5b,0xad,0xad,0x5b,0xad,
	0x5b,0xad,0x5b,0x5b,0xad,0x5b,
	
/* tile number: 45 */
	0x5b,0xad,0x5b,0xad,0xad,0x00,
	0xad,0x5b,0xad,0xad,0xad,0x00,
	0xad,0x5b,0xad,0xad,0x5b,0xad,
	0x5b,0xad,0x5b,0x5b,0xad,0x5b,
	0xad,0xad,0xad,0xad,0xad,0xad,
	0x5b,0xad,0xad,0x5b,0xad,0xad,
	0xad,0x5b,0xad,0xad,0x5b,0xad,
	0x5b,0xad,0x5b,0x5b,0xad,0x5b,
	
/* tile number: 46 */
	0x10,0x11,0x00,0x12,0x12,0x5b,
	0x00,0x00,0x00,0x12,0x5b,0x5b,
	0xad,0x5b,0xad,0xad,0x5b,0xad,
	0x5b,0xad,0x5b,0x5b,0xad,0x5b,
	0xad,0xad,0xad,0xad,0xad,0xad,
	0x5b,0xad,0xad,0x5b,0xad,0xad,
	0xad,0x5b,0xad,0xad,0x5b,0xad,
	0x5b,0xad,0x5b,0x5b,0xad,0x5b,
	
/* tile number: 47 */
	0x5b,0xad,0x5b,0xad,0x00,0x11,
	0xad,0x5b,0xad,0xad,0x00,0x18,
	0xad,0x5b,0xad,0xad,0x00,0x11,
	0x5b,0xad,0x5b,0xad,0x00,0x11,
	0xad,0xad,0xad,0xad,0x00,0x10,
	0x5b,0xad,0xad,0xad,0x00,0x11,
	0xad,0x5b,0xad,0xad,0x00,0x11,
	0x5b,0xad,0x5b,0xad,0x00,0x11,
	
/* tile number: 48 */
	0x18,0x00,0x5b,0xad,0xad,0xad,
	0x10,0x00,0xad,0x12,0x5b,0xad,
	0x11,0x00,0xad,0xad,0x5b,0xad,
	0x10,0x00,0x12,0x5b,0xad,0x5b,
	0x11,0x00,0x5b,0xad,0xad,0xad,
	0x18,0x00,0xad,0x12,0x5b,0xad,
	0x18,0x00,0xad,0xad,0x5b,0xad,
	0x11,0x00,0x12,0x5b,0xad,0x5b,
	
/* tile number: 49 */
	0xad,0xad,0xad,0xad,0xad,0xad,
	0x5b,0xad,0xad,0x5b,0xad,0xad,
	0xad,0x5b,0xad,0xad,0x5b,0xad,
	0x5b,0xad,0x5b,0x5b,0xad,0x5b,
	0xad,0xad,0xad,0xad,0xad,0xad,
	0x5b,0xad,0xad,0x5b,0xad,0xad,
	0xad,0x00,0x00,0xad,0x5b,0xad,
	0x00,0x00,0x00,0x00,0xad,0x5b,
	
/* tile number: 50 */
	0xad,0xad,0xad,0xad,0xad,0xad,
	0x5b,0xad,0xad,0x5b,0xad,0xad,
	0xad,0x5b,0xad,0xad,0x5b,0xad,
	0x5b,0xad,0x5b,0x5b,0xad,0x5b,
	0xad,0xad,0xad,0xad,0xad,0xad,
	0x5b,0xad,0xad,0x5b,0xad,0xad,
	0xad,0x5b,0xad,0xad,0x5b,0xad,
	0x5b,0xad,0x5b,0x5b,0xad,0x5b,
	
/* tile number: 51 */
	0xad,0xad,0xad,0xad,0xad,0xad,
	0x5b,0xad,0xad,0x5b,0xad,0xad,
	0xad,0x5b,0xad,0xad,0x5b,0xad,
	0x5b,0xad,0x5b,0x5b,0xad,0x5b,
	0xad,0xad,0xad,0xad,0xad,0xad,
	0x5b,0xad,0xad,0x5b,0xad,0xad,
	0xad,0x5b,0xad,0x00,0x00,0xad,
	0x5b,0xad,0x00,0x00,0x00,0x00,
	
/* tile number: 52 */
	0xad,0xad,0xad,0xad,0x00,0x18,
	0x5b,0xad,0xad,0xad,0x00,0x11,
	0xad,0x5b,0xad,0xad,0x00,0x10,
	0x5b,0xad,0x5b,0xad,0x00,0x18,
	0xad,0xad,0xad,0xad,0x00,0x18,
	0x5b,0xad,0xad,0xad,0x00,0x11,
	0xad,0x5b,0xad,0xad,0x00,0x11,
	0x5b,0xad,0x5b,0xad,0x00,0x10,
	
/* tile number: 53 */
	0x10,0x00,0x5b,0xad,0xad,0xad,
	0x11,0x00,0xad,0x12,0x5b,0xad,
	0x18,0x00,0xad,0xad,0x5b,0xad,
	0x18,0x00,0x12,0x5b,0xad,0x5b,
	0x11,0x00,0x5b,0xad,0xad,0xad,
	0x10,0x00,0xad,0x12,0x5b,0xad,
	0x11,0x00,0xad,0xad,0x5b,0xad,
	0x18,0x00,0x12,0x5b,0xad,0x5b,
	
/* tile number: 54 */
	0x00,0x00,0x00,0x00,0xad,0xad,
	0x00,0x00,0x00,0x00,0xad,0xad,
	0x00,0x00,0x00,0x00,0x5b,0xad,
	0x00,0x00,0x00,0x00,0xad,0x5b,
	0x00,0x00,0x00,0x00,0xad,0xad,
	0x00,0x00,0x00,0x00,0xad,0xad,
	0xad,0x5b,0xad,0xad,0x5b,0xad,
	0x5b,0xad,0x5b,0x5b,0xad,0x5b,
	
/* tile number: 55 */
	0xad,0xad,0x00,0x00,0x00,0x00,
	0x5b,0xad,0x00,0x00,0x00,0x00,
	0xad,0x5b,0x00,0x00,0x00,0x00,
	0x5b,0xad,0x00,0x00,0x00,0x00,
	0xad,0xad,0x00,0x00,0x00,0x00,
	0x5b,0xad,0x00,0x00,0x00,0x00,
	0xad,0x5b,0xad,0xad,0x5b,0xad,
	0x5b,0xad,0x5b,0x5b,0xad,0x5b,
	
/* tile number: 56 */
	0xad,0xad,0xad,0xad,0x00,0x11,
	0x5b,0xad,0xad,0xad,0x00,0x18,
	0xad,0x5b,0xad,0xad,0x00,0x11,
	0x5b,0xad,0x5b,0xad,0x00,0x11,
	0xad,0xad,0xad,0xad,0x00,0x10,
	0x5b,0xad,0xad,0xad,0x00,0x11,
	0xad,0x5b,0xad,0xad,0x00,0x11,
	0x5b,0xad,0x5b,0xad,0x00,0x11,

/* tile number: 57 */
	0xad,0xad,0xad,0xad,0xad,0xad,
	0x5b,0xad,0xad,0x00,0x00,0x00,
	0xad,0x5b,0xad,0x00,0x00,0x00,
	0x5b,0xad,0x00,0x1b,0x00,0x1b,
	0xad,0xad,0x00,0x1b,0x00,0x1b,
	0xad,0x00,0x1b,0x1b,0x00,0x1b,
	0xad,0x00,0x1b,0x1b,0x00,0x1b,
	0x5b,0x00,0x1b,0x1b,0x00,0x1b,

/* tile number: 58 */
	0xad,0xad,0xad,0xad,0xad,0xad,
	0x00,0x00,0x00,0x5b,0xad,0xad,
	0x00,0x00,0x00,0xad,0x5b,0xad,
	0x1b,0x00,0x1b,0x00,0xad,0x5b,
	0x1b,0x00,0x1b,0x00,0xad,0xad,
	0x1b,0x00,0x1b,0x1b,0x00,0xad,
	0x1b,0x00,0x1b,0x1b,0x00,0xad,
	0x1b,0x00,0x1b,0x1b,0x00,0x5b,

/* tile number: 59 */
	0xad,0x00,0x00,0x1b,0x00,0x1b,
	0x00,0x1b,0x00,0x1b,0x00,0x1b,
	0x00,0x1b,0x00,0x1b,0x00,0x1b,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x1b,0x00,0x1b,0x00,0x1b,
	0x00,0x1b,0x00,0x1b,0x00,0x1b,
	0x00,0x1b,0x00,0x1b,0x00,0x1b,
	0x00,0x1b,0x00,0x1b,0x00,0x1b,

/* tile number: 60 */
	0x1b,0x00,0x1b,0x00,0x00,0xad,
	0x1b,0x00,0x1b,0x00,0x1b,0x00,
	0x1b,0x00,0x1b,0x00,0x1b,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x1b,0x00,0x1b,0x00,0x1b,0x00,
	0x1b,0x00,0x1b,0x00,0x1b,0x00,
	0x1b,0x00,0x1b,0x00,0x1b,0x00,
	0x1b,0x00,0x1b,0x00,0x1b,0x00,

/* tile number: 61 */
	0x00,0x1b,0x00,0x1b,0x00,0x1b,
	0x00,0x1b,0x00,0x1b,0x00,0x1b,
	0x00,0x1b,0x00,0x1b,0x00,0x1b,
	0x00,0x1b,0x00,0x1b,0x00,0x1b,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x1b,0x00,0x1b,0x00,0x1b,
	0x00,0x1b,0x00,0x1b,0x00,0x1b,
	0x00,0x00,0x00,0x00,0x00,0x00,
	
/* tile number: 62 */
	0x1b,0x00,0x1b,0x00,0x1b,0x00,
	0x1b,0x00,0x1b,0x00,0x1b,0x00,
	0x1b,0x00,0x1b,0x00,0x1b,0x00,
	0x1b,0x00,0x1b,0x00,0x1b,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x1b,0x00,0x1b,0x00,0x1b,0x00,
	0x1b,0x00,0x1b,0x00,0x1b,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,

/* tile number: 63 shotgun-icon */
	0x52,0x00,0x00,0x00,0x00,0x00,
	0x52,0x52,0x03,0x03,0x03,0x03,
	0x5b,0x5b,0x05,0x05,0x05,0x05,
	0xad,0xad,0x07,0x07,0x07,0x07,
	0x5b,0x5b,0x05,0x05,0x05,0x05,
	0x5b,0x5b,0x05,0x05,0x05,0x05,
	0x52,0x52,0x03,0x03,0x03,0x03,
	0x52,0x00,0x00,0x00,0x00,0x00,

/* tile number: 64 flamethrower-icon */
	0x00,0x00,0x00,0x05,0x00,0x00,
	0x00,0x00,0x04,0x03,0x04,0x00,
	0x00,0x03,0x04,0x23,0x03,0x05,
	0x04,0x04,0x05,0x04,0x03,0x03,
	0x00,0x03,0x23,0x24,0x23,0x04,
	0x03,0x00,0x25,0x23,0x03,0x00,
	0x00,0x04,0x23,0x03,0x05,0x00,
	0x00,0x03,0x24,0x26,0x03,0x00,

/* tile number: 65 zombie score */
	0x00,0x9D,0xBD,0xBD,0x9D,0x00, 
	0x00,0x03,0xBD,0xBD,0x03,0x00, 
	0x00,0x07,0xBD,0xBD,0x07,0x00, 
	0x00,0xAD,0x00,0x00,0xAD,0x00, 
	0x2D,0x9D,0x12,0x12,0x9D,0x2D, 
	0x2D,0x2D,0x2D,0x2D,0x2D,0x2D, 
	0x2D,0x00,0x2D,0x2D,0x00,0x2D, 
	0x2D,0x00,0x2D,0x2D,0x00,0x2D,	

/* tile number: 66 flamethrower ammo*/
	0x10,0x11,0x10,0x00,0x00,0x10,
	0x11,0x02,0x03,0x00,0x00,0x10,
	0x18,0x02,0x03,0x03,0x04,0x18,
	0x18,0x02,0x03,0x03,0x04,0x11,
	0x11,0x02,0x03,0x03,0x04,0x18,
	0x10,0x02,0x03,0x03,0x04,0x11,
	0x11,0x02,0x03,0x03,0x04,0x10,
	0x18,0x11,0x18,0x18,0x11,0x11,

};


const char zombienator_title[] PROGMEM = {	
	
/* tile number: 0 */
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,
	
/* tile number: 1 */
	0x04,0x04,0x04,0x04,0x02,0x00,
	0x0f,0x0f,0x0f,0x0f,0x03,0x00,
	0x0f,0x0f,0x0f,0x0f,0x04,0x00,
	0x0f,0x0f,0x0f,0x0f,0x04,0x00,
	0x0f,0x0f,0x0f,0x0f,0x04,0x00,
	0x0f,0x0f,0x0f,0x0f,0x04,0x00,
	0x0f,0x0f,0x0f,0x0f,0x03,0x00,
	0x04,0x04,0x04,0x04,0x02,0x00,
	
/* tile number: 2 */
	0x00,0x05,0x0f,0x0f,0x0f,0x0f,
	0x00,0x05,0x0f,0x0f,0x0f,0x0f,
	0x00,0x05,0x0f,0x0f,0x0f,0x0f,
	0x00,0x05,0x0f,0x0f,0x0f,0x0f,
	0x00,0x05,0x0f,0x0f,0x0f,0x0f,
	0x00,0x05,0x0f,0x0f,0x0f,0x0f,
	0x00,0x04,0x0f,0x0f,0x0f,0x0f,
	0x00,0x03,0x04,0x04,0x04,0x04,
	
/* tile number: 3 */
	0x00,0x00,0x00,0x02,0x06,0x0f,
	0x00,0x00,0x01,0x05,0x06,0x0f,
	0x00,0x00,0x02,0x0f,0x0f,0x0f,
	0x00,0x00,0x03,0x0f,0x0f,0x0f,
	0x00,0x00,0x03,0x0f,0x0f,0x0f,
	0x00,0x01,0x03,0x0f,0x0f,0x0f,
	0x00,0x02,0x04,0x0f,0x0f,0x0f,
	0x00,0x04,0x05,0x0f,0x0f,0x0f,
	
/* tile number: 4 */
	0x0f,0x05,0x00,0x00,0x00,0x00,
	0x06,0x03,0x00,0x00,0x00,0x00,
	0x03,0x01,0x00,0x00,0x00,0x00,
	0x02,0x00,0x00,0x00,0x00,0x00,
	0x02,0x00,0x00,0x00,0x00,0x00,
	0x02,0x00,0x00,0x00,0x00,0x00,
	0x03,0x00,0x00,0x00,0x00,0x00,
	0x02,0x00,0x00,0x00,0x00,0x00,
	
/* tile number: 5 */
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x01,
	0x00,0x00,0x00,0x00,0x00,0x03,
	0x00,0x00,0x00,0x00,0x00,0x04,
	0x00,0x00,0x00,0x00,0x00,0x04,
	0x00,0x00,0x00,0x00,0x04,0x06,
	0x00,0x00,0x00,0x00,0x06,0x0f,
	
/* tile number: 6 */
	0x01,0x05,0x0f,0x0f,0x05,0x00,
	0x01,0x05,0x0f,0x0f,0x05,0x00,
	0x04,0x06,0x0f,0x0f,0x04,0x00,
	0x06,0x0f,0x0f,0x05,0x02,0x00,
	0x0f,0x0f,0x0f,0x03,0x00,0x00,
	0x0f,0x0f,0x06,0x02,0x00,0x00,
	0x0f,0x06,0x04,0x01,0x00,0x00,
	0x0f,0x05,0x01,0x00,0x00,0x00,
	
/* tile number: 7 */
	0x03,0x03,0x03,0x03,0x02,0x00,
	0x0f,0x0f,0x0f,0x0f,0x03,0x00,
	0x0f,0x0f,0x0f,0x0f,0x04,0x00,
	0x0f,0x0f,0x0f,0x0f,0x04,0x00,
	0x0f,0x0f,0x0f,0x0f,0x04,0x00,
	0x0f,0x0f,0x0f,0x0f,0x04,0x00,
	0x0f,0x0f,0x0f,0x0f,0x04,0x00,
	0x0f,0x0f,0x0f,0x0f,0x04,0x00,
	
/* tile number: 8 */
	0x00,0x02,0x04,0x04,0x04,0x04,
	0x00,0x03,0x0f,0x0f,0x0f,0x0f,
	0x00,0x04,0x0f,0x0f,0x0f,0x0f,
	0x00,0x04,0x0f,0x0f,0x0f,0x0f,
	0x00,0x04,0x0f,0x0f,0x0f,0x0f,
	0x00,0x04,0x0f,0x0f,0x0f,0x0f,
	0x00,0x03,0x0f,0x0f,0x0f,0x0f,
	0x00,0x02,0x04,0x04,0x04,0x04,
	
/* tile number: 9 */
	0x00,0x01,0x06,0x0f,0x06,0x03,
	0x00,0x00,0x04,0x0f,0x0f,0x0f,
	0x00,0x00,0x02,0x0f,0x0f,0x0f,
	0x00,0x00,0x00,0x0f,0x0f,0x0f,
	0x00,0x00,0x00,0x02,0x0f,0x0f,
	0x00,0x00,0x00,0x00,0x05,0x06,
	0x00,0x00,0x00,0x00,0x00,0x02,
	0x00,0x00,0x00,0x00,0x00,0x00,
	
/* tile number: 10 */
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x02,0x02,0x01,0x00,0x00,0x00,
	0x0f,0x0f,0x03,0x00,0x00,0x00,
	0x0f,0x0f,0x03,0x00,0x00,0x00,
	0x0f,0x0f,0x03,0x00,0x00,0x00,
	0x0f,0x0f,0x03,0x00,0x00,0x00,
	0x03,0x03,0x02,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,
	
/* tile number: 11 */
	0x03,0x0f,0x0f,0x06,0x01,0x00,
	0x0f,0x0f,0x0f,0x04,0x00,0x00,
	0x0f,0x0f,0x0f,0x02,0x00,0x00,
	0x0f,0x0f,0x0f,0x00,0x00,0x00,
	0x0f,0x06,0x03,0x00,0x00,0x00,
	0x06,0x04,0x01,0x00,0x00,0x00,
	0x02,0x01,0x00,0x00,0x00,0x00,
	0x01,0x00,0x00,0x00,0x00,0x00,
	
/* tile number: 12 */
	0x00,0x05,0x0f,0x0f,0x05,0x00,
	0x00,0x05,0x0f,0x0f,0x05,0x00,
	0x00,0x05,0x0f,0x0f,0x05,0x00,
	0x00,0x05,0x0f,0x0f,0x05,0x00,
	0x00,0x05,0x0f,0x0f,0x05,0x00,
	0x00,0x05,0x0f,0x0f,0x05,0x00,
	0x00,0x05,0x0f,0x0f,0x05,0x00,
	0x00,0x05,0x0f,0x0f,0x05,0x00,
	
/* tile number: 13 */
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x02,
	0x00,0x00,0x00,0x00,0x0f,0x0f,
	0x00,0x00,0x00,0x03,0x0f,0x0f,
	0x00,0x00,0x00,0x0f,0x0f,0x0f,
	0x00,0x00,0x02,0x0f,0x0f,0x0f,
	0x00,0x00,0x04,0x0f,0x0f,0x0f,
	0x00,0x01,0x06,0x0f,0x06,0x02,
	
/* tile number: 14 */
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x01,0x02,0x02,
	0x00,0x00,0x00,0x03,0x0f,0x0f,
	0x00,0x00,0x00,0x03,0x0f,0x0f,
	0x00,0x00,0x00,0x03,0x0f,0x0f,
	0x00,0x00,0x00,0x03,0x0f,0x0f,
	0x00,0x00,0x00,0x02,0x03,0x03,
	0x00,0x00,0x00,0x00,0x00,0x00,
	
/* tile number: 15 */
	0x01,0x00,0x00,0x00,0x00,0x00,
	0x02,0x00,0x00,0x00,0x00,0x00,
	0x0f,0x05,0x01,0x00,0x00,0x00,
	0x0f,0x06,0x03,0x00,0x00,0x00,
	0x0f,0x0f,0x0f,0x00,0x00,0x00,
	0x0f,0x0f,0x0f,0x02,0x00,0x00,
	0x0f,0x0f,0x0f,0x04,0x00,0x00,
	0x02,0x0f,0x0f,0x06,0x01,0x00,
	
/* tile number: 16 */
	0x00,0x05,0x0f,0x0f,0x05,0x00,
	0x00,0x05,0x0f,0x0f,0x05,0x00,
	0x00,0x05,0x0f,0x0f,0x05,0x00,
	0x00,0x05,0x0f,0x0f,0x05,0x00,
	0x00,0x05,0x0f,0x0f,0x05,0x00,
	0x00,0x05,0x0f,0x0f,0x05,0x00,
	0x00,0x05,0x0f,0x0f,0x05,0x00,
	0x00,0x03,0x03,0x03,0x03,0x00,
	
/* tile number: 17 */
	0x00,0x01,0x05,0x05,0x05,0x01,
	0x00,0x05,0x0f,0x0f,0x0f,0x04,
	0x00,0x05,0x0f,0x0f,0x0f,0x0f,
	0x00,0x05,0x0f,0x0f,0x0f,0x0f,
	0x00,0x05,0x0f,0x0f,0x0f,0x0f,
	0x00,0x05,0x0f,0x0f,0x0f,0x0f,
	0x00,0x05,0x0f,0x0f,0x0f,0x0f,
	0x00,0x05,0x0f,0x0f,0x0f,0x05,
	
/* tile number: 18 */
	0x01,0x05,0x05,0x05,0x01,0x00,
	0x04,0x0f,0x0f,0x0f,0x05,0x00,
	0x0f,0x0f,0x0f,0x0f,0x05,0x00,
	0x0f,0x0f,0x0f,0x0f,0x05,0x00,
	0x0f,0x0f,0x0f,0x0f,0x05,0x00,
	0x0f,0x0f,0x0f,0x0f,0x05,0x00,
	0x0f,0x0f,0x0f,0x0f,0x05,0x00,
	0x05,0x0f,0x0f,0x0f,0x05,0x00,
	
/* tile number: 19 */
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x03,0x00,0x00,0x00,0x00,0x02,
	0x05,0x00,0x00,0x00,0x00,0x03,
	0x05,0x00,0x00,0x00,0x00,0x03,
	0x06,0x03,0x00,0x00,0x03,0x05,
	0x0f,0x0f,0x00,0x00,0x05,0x0f,
	0x0f,0x0f,0x00,0x00,0x05,0x0f,
	0x0f,0x0f,0x03,0x03,0x06,0x0f,
	
/* tile number: 20 */
	0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,
	0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,
	0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,
	0x00,0x05,0x0f,0x0f,0x0f,0x00,
	0x00,0x05,0x0f,0x0f,0x0f,0x00,
	0x00,0x05,0x0f,0x0f,0x0f,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,
	
/* tile number: 21 */
	0x00,0x05,0x0f,0x0f,0x05,0x00,
	0x00,0x05,0x0f,0x0f,0x06,0x02,
	0x00,0x05,0x0f,0x0f,0x0f,0x0f,
	0x00,0x05,0x0f,0x0f,0x0f,0x0f,
	0x00,0x05,0x0f,0x0f,0x0f,0x0f,
	0x00,0x05,0x0f,0x0f,0x0f,0x0f,
	0x00,0x03,0x03,0x03,0x03,0x03,
	0x00,0x00,0x00,0x00,0x00,0x00,
	
/* tile number: 22 */
	0x00,0x05,0x0f,0x0f,0x05,0x00,
	0x00,0x05,0x0f,0x0f,0x06,0x02,
	0x00,0x05,0x0f,0x0f,0x0f,0x0f,
	0x00,0x05,0x0f,0x0f,0x0f,0x0f,
	0x00,0x05,0x0f,0x0f,0x0f,0x0f,
	0x00,0x05,0x0f,0x0f,0x0f,0x0f,
	0x00,0x05,0x0f,0x0f,0x06,0x03,
	0x00,0x05,0x0f,0x0f,0x05,0x00,
	
/* tile number: 23 */
	0x00,0x03,0x03,0x03,0x03,0x00,
	0x00,0x05,0x0f,0x0f,0x05,0x00,
	0x00,0x05,0x0f,0x0f,0x05,0x00,
	0x00,0x05,0x0f,0x0f,0x05,0x00,
	0x00,0x05,0x0f,0x0f,0x05,0x00,
	0x00,0x05,0x0f,0x0f,0x05,0x00,
	0x00,0x05,0x0f,0x0f,0x05,0x00,
	0x00,0x05,0x0f,0x0f,0x05,0x00,
	
/* tile number: 24 */
	0x00,0x05,0x0f,0x0f,0x05,0x00,
	0x02,0x06,0x0f,0x0f,0x05,0x00,
	0x0f,0x0f,0x0f,0x0f,0x05,0x00,
	0x0f,0x0f,0x0f,0x0f,0x05,0x00,
	0x0f,0x0f,0x0f,0x0f,0x05,0x00,
	0x0f,0x0f,0x0f,0x0f,0x05,0x00,
	0x03,0x06,0x0f,0x0f,0x05,0x00,
	0x00,0x05,0x0f,0x0f,0x05,0x00,
	
/* tile number: 25 */
	0x00,0x03,0x03,0x03,0x03,0x00,
	0x00,0x05,0x0f,0x0f,0x05,0x00,
	0x05,0x05,0x0f,0x0f,0x05,0x05,
	0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,
	0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,
	0x05,0x05,0x0f,0x0f,0x05,0x05,
	0x00,0x05,0x0f,0x0f,0x05,0x00,
	0x00,0x05,0x0f,0x0f,0x05,0x00,

/* tile number: 26 */
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x0f,0x0f,0x0f,0x0f,0x00,
	0x00,0x0f,0x0f,0x0f,0x0f,0x00,
	0x00,0x05,0x0f,0x0f,0x0f,0x00,
	0x00,0x05,0x0f,0x0f,0x0f,0x00,
	0x00,0x05,0x0f,0x0f,0x0f,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,
	
	
	//--------- MENUTILES ---------

	0xFF,0x00,0x00,0x00,0x00,0x00,
	0xFF,0x00,0x00,0x00,0x00,0x00,
	0xFF,0x00,0xFF,0xFF,0x00,0x00,
	0xFF,0x00,0xFF,0x00,0xFF,0x00,
	0xFF,0x00,0xFF,0x00,0xFF,0x00,
	0xFF,0x00,0xFF,0x00,0xFF,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,	// tile #27 - subtitle1 (In)

	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0xFF,0x00,0xFF,0x00,0x00,
	0x00,0xFF,0x00,0xFF,0x00,0xFF,
	0x00,0xFF,0x00,0xFF,0x00,0xFF,
	0x00,0x00,0xFF,0x00,0x00,0x00,
	0x00,0x00,0xFF,0x00,0x00,0x00,
	0x00,0xFF,0x00,0x00,0x00,0x00,	// tile #28 - subtitle2 (y)

	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0xFF,0x00,0x00,0xFF,0x00,0xFF,
	0x00,0xFF,0x00,0xFF,0x00,0xFF,
	0x00,0xFF,0x00,0xFF,0x00,0xFF,
	0xFF,0x00,0x00,0x00,0xFF,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,	// tile #29 - subtitle3 (ou)

	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0xFF,0xFF,0x00,0x00,0x00,
	0x00,0xFF,0x00,0x00,0x00,0xFF,
	0x00,0xFF,0x00,0x00,0x00,0xFF,
	0x00,0xFF,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0xFF,	// tile #30 - subtitle4 (r)

	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0xFF,0xFF,0x00,0xFF,0xFF,0x00,
	0x00,0xFF,0x00,0xFF,0x00,0x00,
	0x00,0xFF,0x00,0xFF,0x00,0x00,
	0xFF,0xFF,0x00,0xFF,0x00,0x00,
	0x00,0xFF,0x00,0x00,0x00,0x00,
	0xFF,0xFF,0x00,0x00,0x00,0x00,	// tile #31 - subtitle4 (gr)

	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0xFF,0xFF,0x00,0x00,0xFF,0x00,
	0x00,0x00,0xFF,0x00,0xFF,0x00,
	0xFF,0x00,0xFF,0x00,0x00,0xFF,
	0x00,0xFF,0xFF,0x00,0x00,0xFF,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,	// tile #32 - subtitle5 (av)

	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0xFF,0x00,0x00,0xFF,0x00,0x00,
	0xFF,0x00,0xFF,0x00,0xFF,0x00,
	0x00,0x00,0xFF,0x00,0x00,0x00,
	0x00,0x00,0x00,0xFF,0xFF,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,	 // tile #33 - subtitle6 (e)

	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0xFF,0x00,0xFF,0x00,0xFF,0xFF,
	0xFF,0x00,0xFF,0x00,0x00,0x00,
	0xFF,0x00,0xFF,0x00,0xFF,0x00,
	0x00,0xFF,0x00,0x00,0x00,0xFF,
	0x00,0xFF,0x00,0x00,0x00,0x00,
	0xFF,0x00,0x00,0x00,0x00,0x00,	 // tile #34 - subtitle7 (ya)

	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0xFF,0xFF,0x00,0x00,
	0xFF,0x00,0xFF,0x00,0x00,0xFF,
	0xFF,0x00,0xFF,0x00,0x00,0xFF,
	0xFF,0x00,0xFF,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,	 // tile #35 - subtitle8 (r)

	0x00,0xFF,0x00,0x00,0x00,0x00,
	0x00,0xFF,0x00,0x00,0x00,0x00,
	0xFF,0xFF,0x00,0x00,0xFF,0xFF,
	0x00,0xFF,0x00,0xFF,0x00,0x00,
	0x00,0xFF,0x00,0x00,0x00,0xFF,
	0xFF,0xFF,0x00,0xFF,0xFF,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,	 // tile #36 - subtitle9 (ds)

	0x00,0x00,0x00,0xFF,0x00,0x00,
	0x00,0x00,0x00,0xFF,0x00,0x00,
	0x00,0x00,0x00,0xFF,0x00,0xFF,
	0x00,0x00,0x00,0xFF,0xFF,0x00,
	0x00,0x00,0x00,0xFF,0x00,0xFF,
	0xFF,0x00,0x00,0xFF,0x00,0xFF,
	0xFF,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,	 // tile #37 - subtitle10 (,k)

	0x00,0xFF,0x00,0xFF,0x00,0xFF,
	0x00,0x00,0x00,0xFF,0x00,0xFF,
	0x00,0xFF,0x00,0xFF,0x00,0xFF,
	0x00,0xFF,0x00,0xFF,0x00,0xFF,
	0x00,0xFF,0x00,0xFF,0x00,0xFF,
	0x00,0xFF,0x00,0xFF,0x00,0xFF,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,	 // tile #38 - subtitle11 (ill)

	0x00,0xFF,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0xFF,0x00,0xFF,0xFF,0x00,
	0x00,0xFF,0x00,0xFF,0x00,0xFF,
	0x00,0xFF,0x00,0xFF,0x00,0xFF,
	0x00,0xFF,0x00,0xFF,0x00,0xFF,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,	// tile #39 - subtitle12 (in)

	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0xFF,0xFF,0x00,0x00,
	0x00,0xFF,0x00,0xFF,0x00,0x00,
	0x00,0xFF,0x00,0xFF,0x00,0x00,
	0x00,0x00,0xFF,0xFF,0x00,0x00,
	0x00,0x00,0x00,0xFF,0x00,0x00,
	0x00,0xFF,0xFF,0x00,0x00,0x00, 	// tile #40 - subtitle13 (g)

	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0xFF,0x00,0xFF,0x00,0x00,0xFF,
	0xFF,0x00,0xFF,0x00,0xFF,0x00,
	0xFF,0x00,0xFF,0x00,0xFF,0x00,
	0x00,0xFF,0x00,0x00,0x00,0xFF,
	0x00,0xFF,0x00,0x00,0x00,0x00,
	0xFF,0x00,0x00,0x00,0x00,0x00,  // tile #41 - subtitle14 (yo)

	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0xFF,0x00,0xFF,0x00,
	0xFF,0x00,0xFF,0x00,0xFF,0x00,
	0xFF,0x00,0xFF,0x00,0xFF,0x00,
	0x00,0x00,0x00,0xFF,0xFF,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,  // tile #42 - subtitle15 (u)

	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0xFF,0xFF,0x00,0x00,0xFF,0xFF,
	0xFF,0x00,0x00,0x00,0x00,0x00,
	0xFF,0x00,0x00,0x00,0xFF,0x00,
	0xFF,0x00,0x00,0x00,0xFF,0xFF,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00, // tile #43 - subtitle16 (r z)

	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0xFF,0x00,0x00,0xFF,0x00,0x00,
	0xFF,0x00,0xFF,0x00,0xFF,0x00,
	0x00,0x00,0xFF,0x00,0xFF,0x00,
	0xFF,0x00,0x00,0xFF,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,  // tile #44 - subtitle17 (o)

	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0xFF,0xFF,0xFF,0xFF,0x00,0x00,
	0xFF,0x00,0xFF,0x00,0xFF,0x00,
	0xFF,0x00,0xFF,0x00,0xFF,0x00,
	0xFF,0x00,0xFF,0x00,0xFF,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,  // tile #45 - subtitle18(m)

	0xFF,0x00,0x00,0x00,0xFF,0x00,
	0xFF,0x00,0x00,0x00,0x00,0x00,
	0xFF,0xFF,0x00,0x00,0xFF,0x00,
	0xFF,0x00,0xFF,0x00,0xFF,0x00,
	0xFF,0x00,0xFF,0x00,0xFF,0x00,
	0xFF,0xFF,0x00,0x00,0xFF,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00, // tile #46 - subtitle19 (b)

	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0xFF,0x00,0x00,0x00,0xFF,
	0xFF,0x00,0xFF,0x00,0xFF,0x00,
	0xFF,0x00,0x00,0x00,0x00,0x00,
	0x00,0xFF,0xFF,0x00,0xFF,0xFF,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00, // tile #47 - subtitle20 (ie)

	0x00,0x00,0xFF,0x00,0x00,0x00,
	0x00,0x00,0xFF,0x00,0x00,0x00,
	0xFF,0x00,0xFF,0x00,0x00,0x00,
	0x00,0x00,0xFF,0x00,0x00,0x00,
	0xFF,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0xFF,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00  // tile #48 - subtitle21(s!)
};
