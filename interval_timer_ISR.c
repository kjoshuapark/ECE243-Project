#include "address_map_arm.h"
#include "animation.h"

int tick;
void interval_timer_ISR(){
    volatile int * interval_timer_ptr = (int *)TIMER_BASE;
    *(interval_timer_ptr) = 0; // Clear the interrupt
	tick++;
	
	volatile int * LED_ptr = (int *)LED_BASE; // LED address
	*(LED_ptr) = tick;
    return;
}

