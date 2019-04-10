#include "animation.h"
#include "data.h"
#include "address_map_arm.h"

extern int p1_offset;
extern int p1b_offset;
extern int p2_offset;
extern int p2b_offset;

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
	
	if(p2_offset>0){
		p2_offset-=ROLE_MOVE_SPEED;
	}else if(p2_offset<0){
		p2_offset+=ROLE_MOVE_SPEED;
	}
	
	if(p2b_offset>0){
		p2b_offset-=BOARD_MOVE_SPEED;
	}else if(p2b_offset<0){
		p2b_offset+=BOARD_MOVE_SPEED;
	}
}
void p1_move(int dir){
	p1_offset = dir*PLATFORM_W;
}
void p1b_move(int dir){
	p1b_offset = dir*(PLATFORM_H+P_V_INTERVAL);
}
void p2_move(int dir){
	p2_offset = dir*PLATFORM_W;
}
void p2b_move(int dir){
	p2b_offset = dir*(PLATFORM_H+P_V_INTERVAL);
}