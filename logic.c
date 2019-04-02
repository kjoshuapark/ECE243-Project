#include "address_map_arm.h"
#include "data.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
extern int key[];

extern int p1_x;
extern int p2_x;

extern int p1_board[BOARD_ROWS][BOARD_COLS];
extern int p2_board[BOARD_ROWS][BOARD_COLS];
extern int game_mode;

bool p1_odd_row = false;
bool p2_odd_row = false;
void lift_board(int board[][BOARD_ROWS], bool *odd);
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
		if(p1_x != (BOARD_ROWS-1)){
			p1_x+=1;
		}else{
		}
		lift_board(p1_board,&p1_odd_row);
		key[2]--;
	}
	while(key[3]!=0){
		if(p1_x != 0){
			p1_x-=1;
		}else{
		}
		lift_board(p1_board,&p1_odd_row);
		key[3]--;
	}
}
void lift_board(int board[][BOARD_ROWS], bool *odd){
	int row = 0;
	for(row;row<BOARD_ROWS-1;row++){
		int col = 0;
		for(col;col<BOARD_COLS;col++){
			board[row][col] = p1_board[row+1][col];
		}	
	}
	row = BOARD_ROWS-1;
	int col=0;
	for(col;col<BOARD_COLS;col++){
		board[row][col] = NONE;
		int type = rand()%TOTAL_TYPES;
		type =1;
		if(*odd){
			if(col%2==1){
				board[row][col] = type;
			}
		}else{
			if(col%2==0){
				board[row][col] = type;
			}
		}
	}
	*odd = !*odd;
}
void init_board(){
	srand(time(NULL));
	int row=0;
	for(row;row<BOARD_ROWS;row++){
		int col=0;
		for(col;col<BOARD_COLS;col++){
			int type = rand()%TOTAL_TYPES;
			if(row%2==0){
				if(col%2==1){
					p1_board[row][col] = type;
					p2_board[row][col] = type;
				}
			}
			else{
				if(col%2==0){
					p1_board[row][col] = type;
					p2_board[row][col] = type;
				}
			}
		}
	}
	p1_board[1][p1_x] = PLATFORM;
	p2_board[1][p1_x] = PLATFORM;
}
