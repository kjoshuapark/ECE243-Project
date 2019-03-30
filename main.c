#include<math.h>
#include<stdbool.h>
volatile int pixel_buffer_start; // global variable

void clear_screen();
void plot_pixel(int x, int y, short int line_color);
short int rgb24to16(short int r8,short int g8, short int b8);
void draw_line(int x0, int y0, int x1,int y1, short int color);
void swap(int*p1 ,int *p2);
int main(void){
    volatile int * pixel_ctrl_ptr = (int *)0xFF203020;
    /* Read location of the pixel buffer from the pixel buffer controller */
    pixel_buffer_start = *pixel_ctrl_ptr;
    volatile int * status = (int *)0xFF20302C;
	volatile int * led = (int*) 0xFF200000;
	
    clear_screen();
	int dir=1;
	int y=0;
	while(1){
		if(((*status)&1)==0){
			draw_line(0, y, 319, y, 0xFFFF); // this line is green
			y=y+dir;
			if(y<=0||y>=239){
				dir=-dir;
			}
			draw_line(0, y, 319, y, 0x07E0); // this line is green
		}
	}
	while(1){}
}
void clear_screen(){
	int x=0;
	for(x;x<320;x++){
		int y=0;
		for(y;y<240;y++){
			plot_pixel(x, y, rgb24to16(255,255,255));
		}
	}
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
void plot_pixel(int x, int y, short int line_color){
    *(short int *)(pixel_buffer_start + (y << 10) + (x << 1)) = line_color;
}
void swap(int*p1 ,int *p2){
	int temp;
	temp=*p1;
	*p1=*p2 ;
	*p2=temp ;
}
