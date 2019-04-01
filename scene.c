#include<stdbool.h>
#include "draw.h"


extern volatile int dir;
extern volatile int p1_x;
extern volatile int p1_y;

extern bool erase_mode;

void scene_draw(){
	draw_rectangle(p1_x,p1_y,10,10,rgb24to16(0,255,0));
}
void clear(){
	erase_mode = true;
	scene_draw();
	erase_mode = false;
}