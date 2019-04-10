#include "address_map_arm.h"
#include "animation.h"
#include "draw.h"
#include<stdbool.h>

volatile int pixel_buffer_start;
volatile int *pixel_ctrl_ptr = (int *)PIXEL_BUF_CTRL_BASE;

void set_A9_IRQ_stack(void);
void config_GIC(void);
void config_interval_timer(void);
void config_KEYs(void);
void enable_A9_interrupts(void);
void setup_interupts();
void setup_buffer();

void scene_draw();
void clear();
void logic();
void init();
int main(void){
	setup_interupts();
	setup_buffer();
	
	init();
	while(1){
		clear_screen();
		logic();
		animate();
		scene_draw();
		wait_for_vsync();
		pixel_buffer_start = *(pixel_ctrl_ptr + 1);
	}
}
void setup_interupts(){
	set_A9_IRQ_stack();      // initialize the stack pointer for IRQ mode
    config_GIC();            // configure the general interrupt controller
    config_interval_timer(); // configure Altera interval timer to generate
                             // interrupts
    config_KEYs();           // configure pushbutton KEYs to generate interrupts

    enable_A9_interrupts(); // enable interrupts
}
void setup_buffer(){
    *(pixel_ctrl_ptr + 1) = FPGA_PIXEL_BUF_BASE;
	
    wait_for_vsync();
    pixel_buffer_start = *pixel_ctrl_ptr;
    clear_screen();
	
    *(pixel_ctrl_ptr + 1) = SDRAM_BASE;
    pixel_buffer_start = *(pixel_ctrl_ptr + 1); // we draw on the back buffer

    clear_screen();
}
/* setup the interval timer interrupts in the FPGA */
void config_interval_timer(){
    volatile int * interval_timer_ptr =(int *)TIMER_BASE; // interal timer base address

    int counter                 = 5000000; // 1/(100 MHz) x 5x10^6 = 50 msec
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
