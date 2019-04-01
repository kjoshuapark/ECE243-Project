#include "address_map_arm.h"

volatile int key[] = {0,0,0,0};

void pushbutton_ISR(void){
    volatile int * KEY_ptr = (int *)KEY_BASE;
    int            press;

    press          = *(KEY_ptr + 3); // read the pushbutton interrupt register
    *(KEY_ptr + 3) = press;          // Clear the interrupt
	
	//In case of hyper-tapping
	if(press&1){
		key[0]++;
	}
	if((press>>1)&1){
		key[1]++;
	}
	if((press>>2)&1){
		key[2]++;
	}
	if((press>>3)&1){
		key[3]++;
	}
	
    return;
}
