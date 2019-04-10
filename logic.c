#include "address_map_arm.h"
#include "animation.h"
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

extern int p1_score;
extern int p2_score;

extern int t_minus;
extern int restart_t_minus;

int p1_path_end;
int p2_path_end;

bool game_over = false;

int result = DRAW;

bool p1_odd_row = false;
bool p2_odd_row = false;

void lift_board(int board[][BOARD_COLS], bool *odd, int *path_end);
void init_board();
void restart();
void match_over(int r);
void logic(){
	/* int keys = key[0] +key[1]*2 +key[2]*4 + key[3]*8;
	volatile int * LED_ptr = (int *)LED_BASE; // LED address
	*(LED_ptr) = keys; */
	
	//Handle key input
	//Used while loop to handle hyper-tapping between frames
	
	if(game_over){
		if(restart_t_minus==0){
			restart();
		}
		return;
	}
	if(t_minus==0){
		if(p1_score == p2_score){
			match_over(DRAW);
		}else{
			match_over(p1_score > p2_score ? P1_WIN : P2_WIN);
		}
	}

	//Player 2. Key[0] = right, Key[1] = left
	while(key[0]!=0){
		//right
		p2_move(RIGHT);
		if(p2_x != (BOARD_ROWS-1)){
			p2_x+=1;
			p2_score++;
			p2b_move(UP);
			lift_board(p2_board,&p2_odd_row,&p2_path_end);
			if(p2_board[PLAYER_AT_ROW][p2_x] != PLATFORM){
				match_over(P1_WIN);
			}
		}else{
			match_over(P1_WIN);
		}
		
		key[0]--;
	}
	while(key[1]!=0){
		//left
		p2_move(LEFT);
		if(p2_x != 0){
			p2_x-=1;
			p2b_move(UP);
			p2_score++;
			lift_board(p2_board,&p2_odd_row,&p2_path_end);
			if(p2_board[PLAYER_AT_ROW][p2_x] != PLATFORM){
				match_over(P1_WIN);
			}
		}else{
			match_over(P1_WIN);
		}
		
		key[1]--;
	}
	
	//Player 1. Key[2] = right, Key[3] = left
	while(key[2]!=0){
		//right
		
		p1_move(RIGHT);
		if(p1_x != (BOARD_ROWS-1)){
			p1_x+=1;
			p1_score++;
			p1b_move(UP);
			lift_board(p1_board,&p1_odd_row,&p1_path_end);
			if(p1_board[PLAYER_AT_ROW][p1_x] != PLATFORM){
				match_over(P2_WIN);
			}
		}else{
			match_over(P2_WIN);
		}
		
		key[2]--;
	}
	while(key[3]!=0){
		//left
		p1_move(LEFT);
		if(p1_x != 0){
			p1_x-=1;
			p1b_move(UP);
			p1_score++;
			lift_board(p1_board,&p1_odd_row,&p1_path_end);
			if(p1_board[PLAYER_AT_ROW][p1_x] != PLATFORM){
				match_over(P2_WIN);
			}
		}else{
			match_over(P2_WIN);
		}
		key[3]--;
	}
}
void match_over(int r){
	restart_t_minus = RESTART_DELAY;
	game_over = true;
	result = r;
	t_minus = T_MINUS;
}
void init(){
	restart();
}
void restart(){
	key[0] = 0;
	key[1] = 0;
	key[2] = 0;
	key[3] = 0;
	p1_score = 0;
	p2_score = 0;
	game_over = false;
	init_board();
}
void lift_board(int board[][BOARD_COLS], bool *odd, int *path_end){
	int row = 0;
	for(row;row<BOARD_ROWS-1;row++){
		int col = 0;
		for(col;col<BOARD_COLS;col++){
			board[row][col] = board[row+1][col];
		}	
	}
	row = BOARD_ROWS-1;
	int col=0;
	for(col;col<BOARD_COLS;col++){
		board[row][col] = NONE;
		int type = rand()%TOTAL_TYPES;
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
	
	row = BOARD_ROWS - 1;
	int next = rand()%2;
	next = next*2-1;
	
	int temp = *path_end;
	
	if((temp+next) >= BOARD_COLS||(temp+next)<0){
		temp -= next;
	}else if((temp-next) >= BOARD_COLS||(temp-next)<0){
		temp += next;
	}else{
		if(board[row][temp+next] == PLATFORM){
			temp += next;
		}else{
			temp -= next;
		}
	}
	board[row][temp] = PLATFORM;
	*path_end = temp;
}
void init_board(){
	p1_x = BOARD_COLS/2;
	p2_x = BOARD_COLS/2;
	
	p1_odd_row = false;
	p2_odd_row = false;
	
	p1_path_end = p1_x;	
	p2_path_end = p2_x;
	
	srand(time(NULL));
	int row=0;
	int col=0;
	
	for(row;row<BOARD_ROWS;row++){
		col=0;
		for(col;col<BOARD_COLS;col++){
			p1_board[row][col] = NONE;
			p2_board[row][col] = NONE;
		}
	}
	row = 1;
	for(row;row<BOARD_ROWS;row++){
		col=0;
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
	
	p1_board[PLAYER_AT_ROW][p1_x] = PLATFORM;
	p2_board[PLAYER_AT_ROW][p2_x] = PLATFORM;
	
	
	
	row = 2;
	for(row;row<BOARD_COLS;row++){
		if(p1_path_end+1 < BOARD_COLS && p1_board[row][p1_path_end+1] == PLATFORM){
			p1_path_end++;
			p2_path_end++;
		}else if(p1_path_end-1 >= 0 && p1_board[row][p1_path_end-1] == PLATFORM){
			p1_path_end--;
			p2_path_end--;
		}else{
			int next = rand()%2;
			next = next*2-1;
			
			if(p1_path_end+next >= BOARD_COLS||p1_path_end+next<0){
				next = -next;
			}
			p1_path_end = p1_path_end + next;
			p2_path_end = p2_path_end + next;
			
			p1_board[row][p1_path_end] = PLATFORM;
			p2_board[row][p2_path_end] = PLATFORM;
		}
		
	}	
}
