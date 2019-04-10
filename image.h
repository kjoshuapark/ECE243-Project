#ifndef IMAGE_H
#define IMAGE_H

#include "data.h"

// display characters on vga
#define color1 0xFFFF //Background color
#define color2 0x0000 //Font color
const unsigned short number[10][NUM_W * NUM_H] = {
	{
		// 0
		color1, color1, color2, color2, color2, color2, color2, color2, color2, color2, color2, color1, color1, // row 1,  13 pixels
		color1, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color1, // row 2,  26 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 3,  39 pixels
		color2, color2, color2, color2, color1, color1, color1, color1, color1, color2, color2, color2, color2, // row 4,  52 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 5,  65 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 6,  78 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 7,  91 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color2, color2, color2, color2, // row 8,  104 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color2, color1, color2, color2, color2, // row 9,  117 pixels
		color2, color2, color2, color1, color1, color1, color1, color2, color1, color1, color2, color2, color2, // row 10, 130 pixels
		color2, color2, color2, color1, color1, color1, color2, color1, color1, color1, color2, color2, color2, // row 11, 143 pixels
		color2, color2, color2, color1, color1, color2, color1, color1, color1, color1, color2, color2, color2, // row 12, 156 pixels
		color2, color2, color2, color1, color2, color1, color1, color1, color1, color1, color2, color2, color2, // row 13, 169 pixels
		color2, color2, color2, color2, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 14, 182 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 15, 195 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 16, 208 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 17, 221 pixels
		color2, color2, color2, color2, color1, color1, color1, color1, color1, color2, color2, color2, color2, // row 18, 234 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 19, 257 pixels
		color1, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color1, // row 20, 260 pixels
		color1, color1, color2, color2, color2, color2, color2, color2, color2, color2, color2, color1, color1  // row 21, 273 pixels
	},
	{
		// 1
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 1,  13 pixels
		color1, color1, color1, color1, color2, color2, color2, color2, color1, color1, color1, color1, color1, // row 2,  26 pixels
		color1, color1, color1, color2, color2, color2, color2, color2, color1, color1, color1, color1, color1, // row 3,  39 pixels
		color1, color1, color1, color2, color2, color2, color2, color2, color1, color1, color1, color1, color1, // row 4,  52 pixels
		color1, color1, color1, color2, color2, color2, color2, color2, color1, color1, color1, color1, color1, // row 5,  65 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 6,  78 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 7,  91 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 8,  104 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 9,  117 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 10, 130 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 11, 143 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 12, 156 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 13, 169 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 14, 182 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 15, 195 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 16, 208 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 17, 221 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 18, 234 pixels
		color1, color1, color1, color2, color2, color2, color2, color2, color2, color2, color1, color1, color1, // row 19, 257 pixels
		color1, color1, color1, color2, color2, color2, color2, color2, color2, color2, color1, color1, color1, // row 20, 260 pixels
		color1, color1, color1, color2, color2, color2, color2, color2, color2, color2, color1, color1, color1  // row 21, 273 pixels
	},
	{
		// 2
		color1, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color1, // row 1,  13 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 2,  26 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 3,  39 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 4,  52 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 5,  65 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 6,  78 pixels
		color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 7,  91 pixels
		color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 8,  104 pixels
		color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 9,  117 pixels
		color1, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 10, 130 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 11, 143 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color1, // row 12, 156 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 13, 169 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 14, 182 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 15, 195 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 16, 208 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 17, 221 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 18, 234 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 19, 257 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 20, 260 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2  // row 21, 273 pixels
	},
	{
		// 3
		color1, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color1, // row 1,  13 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 2,  26 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 3,  39 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 4,  52 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 5,  65 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 6,  78 pixels
		color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 7,  91 pixels
		color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 8,  104 pixels
		color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 9,  117 pixels
		color1, color1, color1, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 10, 130 pixels
		color1, color1, color1, color2, color2, color2, color2, color2, color2, color2, color2, color2, color1, // row 11, 143 pixels
		color1, color1, color1, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 12, 156 pixels
		color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 13, 169 pixels
		color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 14, 182 pixels
		color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 15, 195 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 16, 208 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 17, 221 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 18, 234 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 19, 257 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 20, 260 pixels
		color1, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color1  // row 21, 273 pixels
	},
	{
		// 4
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 1,  13 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 2,  26 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 3,  39 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 4,  52 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 5,  65 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 6,  78 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 7,  91 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 8,  104 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 9,  117 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 10, 130 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 11, 143 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 12, 156 pixels
		color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 13, 169 pixels
		color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 14, 182 pixels
		color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 15, 195 pixels
		color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 16, 208 pixels
		color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 17, 221 pixels
		color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 18, 234 pixels
		color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 19, 257 pixels
		color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 20, 260 pixels
		color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2  // row 21, 273 pixels
	},
	{
		// 5
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 1,  13 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 2,  26 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 3,  39 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 4,  52 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 5,  65 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 6,  78 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 7,  91 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 8,  104 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 9,  117 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color1, // row 10, 130 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 11, 143 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 12, 156 pixels
		color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 13, 169 pixels
		color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 14, 182 pixels
		color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 15, 195 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 16, 208 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 17, 221 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 18, 234 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 19, 257 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 20, 260 pixels
		color1, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color1  // row 21, 273 pixels
	},
	{
		// 6
		color1, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 1,  13 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 2,  26 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 3,  39 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 4,  52 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 5,  65 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 6,  78 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 7,  91 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 8,  104 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 9,  117 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color1, // row 10, 130 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 11, 143 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 12, 156 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 13, 169 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 14, 182 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 15, 195 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 16, 208 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 17, 221 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 18, 234 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 19, 257 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 20, 260 pixels
		color1, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color1  // row 21, 273 pixels
	},
	{
		// 7
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 1,  13 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 2,  26 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 3,  39 pixels
		color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 4,  52 pixels
		color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 5,  65 pixels
		color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 6,  78 pixels
		color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 7,  91 pixels
		color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 8,  104 pixels
		color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 9,  117 pixels
		color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 10, 130 pixels
		color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 11, 143 pixels
		color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 12, 156 pixels
		color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 13, 169 pixels
		color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 14, 182 pixels
		color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 15, 195 pixels
		color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 16, 208 pixels
		color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 17, 221 pixels
		color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 18, 234 pixels
		color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 19, 257 pixels
		color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 20, 260 pixels
		color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2  // row 21, 273 pixels
	},
	{
		// 8
		color1, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color1, // row 1,  13 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 2,  26 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 3,  39 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 4,  52 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 5,  65 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 6,  78 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 7,  91 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 8,  104 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 9,  117 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 10, 130 pixels
		color1, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color1, // row 11, 143 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 12, 156 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 13, 169 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 14, 182 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 15, 195 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 16, 208 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 17, 221 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 18, 234 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 19, 257 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 20, 260 pixels
		color1, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color1  // row 21, 273 pixels
	},
	{
		// 9
		color1, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color1, // row 1,  13 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 2,  26 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 3,  39 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 4,  52 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 5,  65 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 6,  78 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 7,  91 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 8,  104 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 9,  117 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 10, 130 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 11, 143 pixels
		color1, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 12, 156 pixels
		color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 13, 169 pixels
		color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 14, 182 pixels
		color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 15, 195 pixels
		color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 16, 208 pixels
		color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 17, 221 pixels
		color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 18, 234 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 19, 257 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 20, 260 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color1  // row 21, 273 pixels
	} 
};
const unsigned short start[5][NUM_W * NUM_H] = {
	{
		// S
		color1, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color1, // row 1,  13 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 2,  26 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 3,  39 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 4,  52 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 5,  65 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 6,  78 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 7,  91 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 8,  104 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 9,  117 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color1, // row 10, 130 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 11, 143 pixels
		color1, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 12, 156 pixels
		color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 13, 169 pixels
		color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 14, 182 pixels
		color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 15, 195 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 16, 208 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 17, 221 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 18, 234 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 19, 257 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 20, 260 pixels
		color1, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color1  // row 21, 273 pixels
	},
	{
		// T
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 1,  13 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 2,  26 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 3,  39 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 4,  52 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 5,  65 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 6,  78 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 7,  91 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 8,  104 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 9,  117 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 10, 130 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 11, 143 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 12, 156 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 13, 169 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 14, 182 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 15, 195 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 16, 208 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 17, 221 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 18, 234 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 19, 257 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 20, 260 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1  // row 21, 273 pixels
	},
	{
		// A
		color1, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color1, // row 1,  13 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 2,  26 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 3,  39 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 4,  52 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 5,  65 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 6,  78 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 7,  91 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 8,  104 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 9,  117 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 10, 130 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 11, 143 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 12, 156 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 13, 169 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 14, 182 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 15, 195 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 16, 208 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 17, 221 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 18, 234 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 19, 257 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 20, 260 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2  // row 21, 273 pixels
	},
	{
		// R
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color1, // row 1,  13 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 2,  26 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 3,  39 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 4,  52 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 5,  65 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 6,  78 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 7,  91 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 8,  104 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 9,  117 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 10, 130 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color1, // row 11, 143 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 12, 156 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 13, 169 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 14, 182 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 15, 195 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 16, 208 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 17, 221 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 18, 234 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 19, 257 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 20, 260 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2  // row 21, 273 pixels
	},
	{
		// T
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 1,  13 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 2,  26 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 3,  39 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 4,  52 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 5,  65 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 6,  78 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 7,  91 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 8,  104 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 9,  117 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 10, 130 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 11, 143 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 12, 156 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 13, 169 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 14, 182 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 15, 195 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 16, 208 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 17, 221 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 18, 234 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 19, 257 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 20, 260 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1  // row 21, 273 pixels
	}
 };
 
const unsigned short go[2][NUM_W * NUM_H] = {
	{
		// G
		color1, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color1, // row 1,  13 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 2,  26 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 3,  39 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 4,  52 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 5,  65 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 6,  78 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 7,  91 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 8,  104 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 9,  117 pixels
		color2, color2, color2, color1, color1, color1, color1, color2, color2, color2, color2, color2, color2, // row 10, 130 pixels
		color2, color2, color2, color1, color1, color1, color1, color2, color2, color2, color2, color2, color2, // row 11, 143 pixels
		color2, color2, color2, color1, color1, color1, color1, color2, color2, color2, color2, color2, color2, // row 12, 156 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 13, 169 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 14, 182 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 15, 195 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 16, 208 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 17, 221 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 18, 234 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 19, 257 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 20, 260 pixels
		color1, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color1  // row 21, 273 pixels
	},
	{
		// O
		color1, color1, color2, color2, color2, color2, color2, color2, color2, color2, color2, color1, color1, // row 1,  13 pixels
		color1, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color1, // row 2,  26 pixels
		color1, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color1, // row 3,  39 pixels
		color1, color2, color2, color2, color1, color1, color1, color1, color1, color2, color2, color2, color1, // row 4,  52 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 5,  65 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 6,  78 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 7,  91 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 8,  104 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 9,  117 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 10, 130 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 11, 143 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 12, 156 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 13, 169 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 14, 182 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 15, 195 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 16, 208 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 17, 221 pixels
		color1, color2, color2, color2, color1, color1, color1, color1, color1, color2, color2, color2, color1, // row 18, 234 pixels
		color1, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color1, // row 19, 257 pixels
		color1, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color1, // row 20, 260 pixels
		color1, color1, color2, color2, color2, color2, color2, color2, color2, color2, color2, color1, color1  // row 21, 273 pixels
	}
};
const unsigned short win[3][NUM_W * NUM_H] = {
	{
		// W
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 1,  13 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 2,  26 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 3,  39 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 4,  52 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 5,  65 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 6,  78 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 7,  91 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 8,  104 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 9,  117 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 10, 130 pixels
		color2, color2, color2, color1, color1, color2, color2, color2, color1, color1, color2, color2, color2, // row 11, 143 pixels
		color2, color2, color2, color1, color1, color2, color2, color2, color1, color1, color2, color2, color2, // row 12, 156 pixels
		color2, color2, color2, color1, color1, color2, color2, color2, color1, color1, color2, color2, color2, // row 13, 169 pixels
		color2, color2, color2, color1, color1, color2, color2, color2, color1, color1, color2, color2, color2, // row 14, 182 pixels
		color2, color2, color2, color1, color1, color2, color2, color2, color1, color1, color2, color2, color2, // row 15, 195 pixels
		color2, color2, color2, color1, color1, color2, color2, color2, color1, color1, color2, color2, color2, // row 16, 208 pixels
		color2, color2, color2, color1, color1, color2, color2, color2, color1, color1, color2, color2, color2, // row 17, 221 pixels
		color2, color2, color2, color1, color2, color2, color2, color2, color2, color1, color2, color2, color2, // row 18, 234 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 19, 257 pixels
		color1, color2, color2, color2, color2, color2, color1, color2, color2, color2, color2, color2, color1, // row 20, 260 pixels
		color1, color1, color2, color2, color2, color1, color1, color1, color2, color2, color2, color1, color1  // row 21, 273 pixels
	},
	{
		// I
		color1, color1, color1, color2, color2, color2, color2, color2, color2, color2, color1, color1, color1, // row 1,  13 pixels
		color1, color1, color1, color2, color2, color2, color2, color2, color2, color2, color1, color1, color1, // row 2,  26 pixels
		color1, color1, color1, color2, color2, color2, color2, color2, color2, color2, color1, color1, color1, // row 3,  39 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 4,  52 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 5,  65 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 6,  78 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 7,  91 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 8,  104 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 9,  117 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 10, 130 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 11, 143 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 12, 156 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 13, 169 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 14, 182 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 15, 195 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 16, 208 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 17, 221 pixels
		color1, color1, color1, color1, color1, color2, color2, color2, color1, color1, color1, color1, color1, // row 18, 234 pixels
		color1, color1, color1, color2, color2, color2, color2, color2, color2, color2, color1, color1, color1, // row 19, 257 pixels
		color1, color1, color1, color2, color2, color2, color2, color2, color2, color2, color1, color1, color1, // row 20, 260 pixels
		color1, color1, color1, color2, color2, color2, color2, color2, color2, color2, color1, color1, color1  // row 21, 273 pixels
	},
	{
		// N
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 1,  13 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 2,  26 pixels
		color2, color2, color2, color2, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 3,  39 pixels
		color2, color2, color2, color2, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 4,  52 pixels
		color2, color2, color2, color2, color2, color1, color1, color1, color1, color1, color2, color2, color2, // row 5,  65 pixels
		color2, color2, color2, color2, color2, color1, color1, color1, color1, color1, color2, color2, color2, // row 6,  78 pixels
		color2, color2, color2, color2, color2, color2, color1, color1, color1, color1, color2, color2, color2, // row 7,  91 pixels
		color2, color2, color2, color1, color2, color2, color1, color1, color1, color1, color2, color2, color2, // row 8,  104 pixels
		color2, color2, color2, color1, color2, color2, color2, color1, color1, color1, color2, color2, color2, // row 9,  117 pixels
		color2, color2, color2, color1, color1, color2, color2, color1, color1, color1, color2, color2, color2, // row 10, 130 pixels
		color2, color2, color2, color1, color1, color2, color2, color2, color1, color1, color2, color2, color2, // row 11, 143 pixels
		color2, color2, color2, color1, color1, color1, color2, color2, color1, color1, color2, color2, color2, // row 12, 156 pixels
		color2, color2, color2, color1, color1, color1, color2, color2, color2, color1, color2, color2, color2, // row 13, 169 pixels
		color2, color2, color2, color1, color1, color1, color1, color2, color2, color1, color2, color2, color2, // row 14, 182 pixels
		color2, color2, color2, color1, color1, color1, color1, color2, color2, color2, color2, color2, color2, // row 15, 195 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color2, color2, color2, color2, color2, // row 16, 208 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color2, color2, color2, color2, color2, // row 17, 221 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color2, color2, color2, color2, // row 18, 234 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color2, color2, color2, color2, // row 19, 257 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 20, 260 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2  // row 21, 273 pixels
	}
};
const unsigned short lose[4][NUM_W * NUM_H] = {
	{
		// L
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 1,  13 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 2,  26 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 3,  39 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 4,  52 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 5,  65 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 6,  78 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 7,  91 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 8,  104 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 9,  117 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 10, 130 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 11, 143 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 12, 156 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 13, 169 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 14, 182 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 15, 195 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 16, 208 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 17, 221 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 18, 234 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 19, 257 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 20, 260 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2  // row 21, 273 pixels
	},
	{
		// O
		color1, color1, color2, color2, color2, color2, color2, color2, color2, color2, color2, color1, color1, // row 1,  13 pixels
		color1, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color1, // row 2,  26 pixels
		color1, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color1, // row 3,  39 pixels
		color1, color2, color2, color2, color1, color1, color1, color1, color1, color2, color2, color2, color1, // row 4,  52 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 5,  65 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 6,  78 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 7,  91 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 8,  104 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 9,  117 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 10, 130 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 11, 143 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 12, 156 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 13, 169 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 14, 182 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 15, 195 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 16, 208 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 17, 221 pixels
		color1, color2, color2, color2, color1, color1, color1, color1, color1, color2, color2, color2, color1, // row 18, 234 pixels
		color1, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color1, // row 19, 257 pixels
		color1, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color1, // row 20, 260 pixels
		color1, color1, color2, color2, color2, color2, color2, color2, color2, color2, color2, color1, color1  // row 21, 273 pixels
	},
	{
		// S
		color1, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color1, // row 1,  13 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 2,  26 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 3,  39 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 4,  52 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 5,  65 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 6,  78 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 7,  91 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 8,  104 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 9,  117 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color1, // row 10, 130 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 11, 143 pixels
		color1, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 12, 156 pixels
		color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 13, 169 pixels
		color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 14, 182 pixels
		color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 15, 195 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 16, 208 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 17, 221 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 18, 234 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 19, 257 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 20, 260 pixels
		color1, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color1  // row 21, 273 pixels
	},
	{
		// E
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 1,  13 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 2,  26 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 3,  39 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 4,  52 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 5,  65 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 6,  78 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 7,  91 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 8,  104 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 9,  117 pixels
		color2, color2, color2, color2, color2, color2, color2, color1, color1, color1, color1, color1, color1, // row 10, 130 pixels
		color2, color2, color2, color2, color2, color2, color2, color1, color1, color1, color1, color1, color1, // row 11, 143 pixels
		color2, color2, color2, color2, color2, color2, color2, color1, color1, color1, color1, color1, color1, // row 12, 156 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 13, 169 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 14, 182 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 15, 195 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 16, 208 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 17, 221 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color1, color1, color1, // row 18, 234 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 19, 257 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 20, 260 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2  // row 21, 273 pixels
	}
};
const unsigned short draw[4][NUM_W * NUM_H] = {
	{
		// D
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color1, // row 1,  13 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 2,  26 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 3,  39 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 4,  52 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 5,  65 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 6,  78 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 7,  91 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 8,  104 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 9,  117 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 10, 130 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 11, 143 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 12, 156 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 13, 169 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 14, 182 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 15, 195 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 16, 208 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 17, 221 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 18, 234 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 19, 257 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 20, 260 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color1  // row 21, 273 pixels
	},
	{
		// R
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color1, // row 1,  13 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 2,  26 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 3,  39 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 4,  52 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 5,  65 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 6,  78 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 7,  91 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 8,  104 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 9,  117 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 10, 130 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color1, // row 11, 143 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 12, 156 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 13, 169 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 14, 182 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 15, 195 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 16, 208 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 17, 221 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 18, 234 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 19, 257 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 20, 260 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2  // row 21, 273 pixels
	},
	{
		// A
		color1, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color1, // row 1,  13 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 2,  26 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 3,  39 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 4,  52 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 5,  65 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 6,  78 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 7,  91 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 8,  104 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 9,  117 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 10, 130 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 11, 143 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 12, 156 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 13, 169 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 14, 182 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 15, 195 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 16, 208 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 17, 221 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 18, 234 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 19, 257 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 20, 260 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2  // row 21, 273 pixels
	},
	{
		// W
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 1,  13 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 2,  26 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 3,  39 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 4,  52 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 5,  65 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 6,  78 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 7,  91 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 8,  104 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 9,  117 pixels
		color2, color2, color2, color1, color1, color1, color1, color1, color1, color1, color2, color2, color2, // row 10, 130 pixels
		color2, color2, color2, color1, color1, color2, color2, color2, color1, color1, color2, color2, color2, // row 11, 143 pixels
		color2, color2, color2, color1, color1, color2, color2, color2, color1, color1, color2, color2, color2, // row 12, 156 pixels
		color2, color2, color2, color1, color1, color2, color2, color2, color1, color1, color2, color2, color2, // row 13, 169 pixels
		color2, color2, color2, color1, color1, color2, color2, color2, color1, color1, color2, color2, color2, // row 14, 182 pixels
		color2, color2, color2, color1, color1, color2, color2, color2, color1, color1, color2, color2, color2, // row 15, 195 pixels
		color2, color2, color2, color1, color1, color2, color2, color2, color1, color1, color2, color2, color2, // row 16, 208 pixels
		color2, color2, color2, color1, color1, color2, color2, color2, color1, color1, color2, color2, color2, // row 17, 221 pixels
		color2, color2, color2, color1, color2, color2, color2, color2, color2, color1, color2, color2, color2, // row 18, 234 pixels
		color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, color2, // row 19, 257 pixels
		color1, color2, color2, color2, color2, color2, color1, color2, color2, color2, color2, color2, color1, // row 20, 260 pixels
		color1, color1, color2, color2, color2, color1, color1, color1, color2, color2, color2, color1, color1  // row 21, 273 pixels
	}
};
const unsigned short spike[SPIKE_DIM * SPIKE_DIM] = {
	// Triangular shaped spike
	color1, color1, color1, color2, color2, color1, color1, color1, // row 1,  8 pixels
	color1, color1, color1, color2, color2, color1, color1, color1, // row 2,  16 pixels
	color1, color1, color2, color2, color2, color2, color1, color1, // row 3,  24 pixels
	color1, color1, color2, color2, color2, color2, color1, color1, // row 4,  32 pixels
	color1, color2, color2, color2, color2, color2, color2, color1, // row 5,  40 pixels
	color1, color2, color2, color2, color2, color2, color2, color1, // row 6,  48 pixels
	color2, color2, color2, color2, color2, color2, color2, color2, // row 7,  56 pixels
	color2, color2, color2, color2, color2, color2, color2, color2  // row 8,  64 pixels
};
 #endif
