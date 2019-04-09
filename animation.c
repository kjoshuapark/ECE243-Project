#include "animation.h"
#include "data.h"
#include "address_map_arm.h"

extern int p1_offset;
extern int p1b_offset;

void animate(){
	if(p1_offset>0){
		p1_offset-=ROLE_MOVE_SPEED;
	}else if(p1_offset<0){
		p1_offset+=ROLE_MOVE_SPEED;
	}
	
	if(p1b_offset>0){
		p1b_offset-=BOARD_MOVE_SPEED;
	}else if(p1b_offset<0){
		p1b_offset+=BOARD_MOVE_SPEED;
	}
}
void p1_move(int dir){
	p1_offset = dir*PLATFORM_W;
}
void p1b_move(int dir){
	p1b_offset = dir*(PLATFORM_H+P_V_INTERVAL);
}