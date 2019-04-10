#include "address_map_arm.h"
#include "animation.h"

extern int tick;

extern int t_minus;
extern int restart_t_minus;
void interval_timer_ISR(){
    volatile int * interval_timer_ptr = (int *)TIMER_BASE;
    *(interval_timer_ptr) = 0; // Clear the interrupt
	
	tick++;
	if(tick == 20){//1s
		tick = 0;
		if(restart_t_minus > 0){
			restart_t_minus--;
		}
		else{
			if(t_minus > 0){
				t_minus --;
			}
		}
	}
	//volatile int * LED_ptr = (int *)LED_BASE; // LED address
	//*(LED_ptr) ++;
    return;
}

