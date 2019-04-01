#include "address_map_arm.h"
#include "draw.h"
#include<stdbool.h>

void set_A9_IRQ_stack(void);
void config_GIC(void);
void config_interval_timer(void);
void config_KEYs(void);
void enable_A9_interrupts(void);

void scene_draw();
void clear();
void logic();
int main(void){
    /* Read location of the pixel buffer from the pixel buffer controller */
	
	set_A9_IRQ_stack();      // initialize the stack pointer for IRQ mode
    config_GIC();            // configure the general interrupt controller
    config_interval_timer(); // configure Altera interval timer to generate
                             // interrupts
    config_KEYs();           // configure pushbutton KEYs to generate interrupts

    enable_A9_interrupts(); // enable interrupts
	
	
	clear_screen();
	while(1){
		clear();
		logic();
		scene_draw();
		wait_for_vsync();
	}
}

/* setup the interval timer interrupts in the FPGA */
void config_interval_timer(){
    volatile int * interval_timer_ptr =
        (int *)TIMER_BASE; // interal timer base address

    /* set the interval timer period for scrolling the HEX displays */
	float interval = 1/60; //60 FPS
    int counter                 = interval * 100000000; // 1/(100 MHz) x 5x10^6 = 50 msec
    *(interval_timer_ptr + 0x2) = (counter & 0xFFFF);
    *(interval_timer_ptr + 0x3) = (counter >> 16) & 0xFFFF;

    /* start interval timer, enable its interrupts */
    *(interval_timer_ptr + 1) = 0x7; // STOP = 0, START = 1, CONT = 1, ITO = 1
}

/* setup the KEY interrupts in the FPGA */
void config_KEYs(){
    volatile int * KEY_ptr = (int *)KEY_BASE; // pushbutton KEY address

    *(KEY_ptr + 2) = 0xF; // enable interrupts for KEY[0-3]
}
