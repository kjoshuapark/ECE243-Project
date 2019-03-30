volatile int pixel_buffer_start; // global variable

void draw();
int main(void){
    volatile int * pixel_ctrl_ptr = (int *)0xFF203020;
    /* Read location of the pixel buffer from the pixel buffer controller */
    pixel_buffer_start = *pixel_ctrl_ptr;
	
	while(1){
		draw();
	}
	while(1){}
}
