#include "address_map_arm.h"

extern volatile int key_dir;
extern volatile int pattern;
/*****************************************************************************
 * Interval timer interrupt service routine
 *
 * Shifts a PATTERN being displayed on the LED lights. The shift direction
 * is determined by the external variable key_dir.
 *
******************************************************************************/
void interval_timer_ISR()
{
    volatile int * interval_timer_ptr = (int *)TIMER_BASE;
    *(interval_timer_ptr) = 0; // Clear the interrupt

    return;
}

