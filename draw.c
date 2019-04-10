#include "address_map_arm.h"
#include<math.h>
#include "draw.h"
#include "data.h"
#include "image.h"

extern volatile int pixel_buffer_start;
short int bg_color = (short int)0xFFFF;//Background color

void clear_screen(){
	int x=0;
	for(x;x<SCREEN_W;x++){
		int y=0;
		for(y;y<SCREEN_H;y++){
			plot_pixel(x, y, bg_color);
		}
	}
}
void fill_rectangle(int x,int y,int w,int h, short int color){
	int nx=x;
	for(nx;nx<(x+w);nx++){
		draw_line(nx,y,nx,y+h-1,color);
	}
}
void draw_rectangle(int x,int y,int w,int h, short int color){
	draw_line(x,y,x+w-1,y,color);
	draw_line(x,y,x,y+h-1,color);
	draw_line(x+w-1,y,x+w-1,y+h-1,color);
	draw_line(x,y+h-1,x+w-1,y+h-1,color);
}
void draw_line(int x0, int y0, int x1,int y1, short int color){
	bool is_steep = abs(y1 - y0) > abs(x1 - x0);
	if(is_steep){
		swap(&x0, &y0);
		swap(&x1, &y1);
	}
	if (x0 > x1){
		swap(&x0, &x1);
		swap(&y0, &y1);
	}
	int deltax = x1 - x0;
	int deltay = abs(y1 - y0);
	int error = -(deltax / 2);
	int y = y0;
	int y_step=0;
	if (y0 < y1){
		y_step = 1;
	} else{
		y_step = -1;
	}
	int x=x0;
	for(x;x<x1;x++){
		if (is_steep){
			plot_pixel(y, x, color);
		}else{
			plot_pixel(x, y, color);
		}
		error = error + deltay;
		if (error >= 0){
			y = y + y_step;
			error = error - deltax;
		}
	}
}
short int rgb24to16(short int r8,short int g8, short int b8){
	short int r5 = (short int) r8/8;
	short int g5 = (short int) g8/4;
	short int b5 = (short int) b8/8;
	short int rgb565 = b5 + (g5<<5) + (r5<<11);
	return rgb565;
}
void plot_pixel(int x, int y, short int color){
	*(short int *)(pixel_buffer_start + (y << 10) + (x << 1)) = color;
}
void swap(int*p1 ,int *p2){
	int temp;
	temp=*p1;
	*p1=*p2 ;
	*p2=temp ;
}
void wait_for_vsync(){
    volatile int *pixel_ctrl_ptr = (int *)PIXEL_BUF_CTRL_BASE;
    register int status;

    *pixel_ctrl_ptr = 1; // start synchronized process

    status = *(pixel_ctrl_ptr + 3);
    while ((status & 0x01) != 0){
        status = *(pixel_ctrl_ptr + 3);
    }
}
void draw_number(int x, int y, int num, bool bold) { // num must be between 0 - 9
	int dim;
	int t, boldedThickness;

	if (bold) {
		boldedThickness = 3;
	} else {
		boldedThickness = 0;
	}
	for (t = 0; t <= boldedThickness; t++) {
		for (dim = 0; dim < NUM_H * NUM_W; dim++) {
			if (number[num][dim] == color2) {
				plot_pixel(x + dim % NUM_W + t, y + dim / NUM_W, number[num][dim]);
			}
		}
	}
}
void draw_sequence(int x, int y, int num, bool bold) {
	int numOfDigits = 0;
	int boldThickness;

	if (bold) {
		boldThickness = 3;
	} else {
		boldThickness = 0;
	}
	while (num > 0) {
		int digit = num % 10;

		draw_number(x - (NUM_W + boldThickness) * numOfDigits - SPACE_BETWEEN_CHAR * numOfDigits, y, digit, bold);

		num = num / 10;
		numOfDigits++;
	}
}
void draw_start(int x, int y) {
	int letter, dim;

	for (letter = 0; letter < 5; letter++) {
		for (dim = 0; dim < NUM_H * NUM_W; dim++) {
			if (start[letter][dim] == color2) {
				plot_pixel(x + dim % NUM_W + SPACE_BETWEEN_CHAR * letter + NUM_W * letter, y + dim / NUM_W, start[letter][dim]);
			}
		}
	}
}
void draw_go(int x, int y) {
	int letter, dim;

	for (letter = 0; letter < 2; letter++) {
		for (dim = 0; dim < NUM_H * NUM_W; dim++) {
			if (go[letter][dim] == color2) {
				plot_pixel(x + dim % NUM_W + space_between_char * letter + NUM_W * letter, y + dim / NUM_W, go[letter][dim]);
			}
		}
	}
}
void draw_win(int x, int y) {
	int letter, dim;

	for (letter = 0; letter < 3; letter++) {
		for (dim = 0; dim < NUM_H * NUM_W; dim++) {
			if (win[letter][dim] == color2) {
				plot_pixel(x + dim % NUM_W + space_between_char * letter + NUM_W * letter, y + dim / NUM_W, win[letter][dim]);
			}
		}
	}
}
void draw_lose(int x, int y) {
	int letter, dim;

	for (letter = 0; letter < 4; letter++) {
		for (dim = 0; dim < NUM_H * NUM_W; dim++) {
			if (lose[letter][dim] == color2) {
				plot_pixel(x + dim % NUM_W + space_between_char * letter + NUM_W * letter, y + dim / NUM_W, lose[letter][dim]);
			}
		}
	}
}
void draw_draw(int x, int y) {
	int letter, dim;

	for (letter = 0; letter < 4; letter++) {
		for (dim = 0; dim < NUM_H * NUM_W; dim++) {
			if (draw[letter][dim] == color2) {
				plot_pixel(x + dim % NUM_W + space_between_char * letter + NUM_W * letter, y + dim / NUM_W, draw[letter][dim]);
			}
		}
	}
}
void draw_spikes(int x, int y) {
	int numOfSpikes, dim;

	for (numOfSpikes = 0; numOfSpikes < 3; numOfSpikes++) {
		for (dim = 0; dim < SPIKE_DIM * SPIKE_DIM; dim++) {
			if (spike[dim] == color2) {
				plot_pixel(x + dim % SPIKE_DIM + SPIKE_DIM * numOfSpikes, y + dim / SPIKE_DIM, spike[dim]);
			}
		}
	}
}