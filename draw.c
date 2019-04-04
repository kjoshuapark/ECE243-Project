#include "address_map_arm.h"
#include<math.h>
#include<stdbool.h>
#include "draw.h"
#include "data.h"

extern const unsigned short number[][NUM_W * NUM_H];
extern short int color1 = (short int)0xFFFF; //Background color
extern short int color2 = (short int)0x0000; //Font color
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
void draw_zero() {
	int col;
	int row;
	fill_rectangle(100, 25, 200, 100, 0);


	for (row = 0; row < NUM_H; row++) {
		for (col = 0; col < NUM_W; col++) {
			plot_pixel(150 + row, 50 + col, number[0][row * col]);
		}
	}
}

void draw_three() {
	int dim;

	for (dim = 0; dim < NUM_H * NUM_W; dim++) {
		plot_pixel(200 + dim % NUM_W, 150 + dim / NUM_W, number[3][dim]);
	}
}