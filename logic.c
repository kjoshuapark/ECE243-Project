#include "address_map_arm.h"

extern volatile int key[];

extern volatile int dir;
extern volatile int p1_x;
extern volatile int p1_y;
void logic(){
	/* int keys = key[0] +key[1]*2 +key[2]*4 + key[3]*8;
	volatile int * LED_ptr = (int *)LED_BASE; // LED address
	*(LED_ptr) = keys; */
	
	//Handle key input
	//Used while loop to handle hyper-tapping between frames
	
	//Player 2. Key[0] = right, Key[1] = left
	while(key[0]!=0){
		key[0]--;
	}
	while(key[1]!=0){
		key[1]--;
	}
	
	//Player 1. Key[2] = right, Key[3] = left
	while(key[2]!=0){
		p1_x+=10;
		
		key[2]--;
	}
	while(key[3]!=0){
		p1_x-=10;
		
		key[3]--;
	}
}
