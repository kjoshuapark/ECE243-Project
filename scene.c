#include<stdbool.h>
#include "draw.h"
#include "data.h"

extern int p1_x;
extern int p2_x;

extern int p1_board[BOARD_ROWS][BOARD_COLS];
extern int p2_board[BOARD_ROWS][BOARD_COLS];

extern int p1_score;
extern int p2_score;

extern int t_minus;
extern int restart_t_minus;

extern int p1_path_end;

extern bool game_over;
extern int result;

int p1_offset = 0;
int p1b_offset = 0;

int p2_offset = 0;
int p2b_offset = 0;

extern int game_mode;
void draw_board(int center, int y_offset,int board[][BOARD_COLS]);
void draw_role(int center, int x, int x_offset);
void draw_score();

void scene_draw(){
	if(game_mode == SINGLE){
	}
	else if(game_mode == DUEL){
		draw_line(SCREEN_W/2,0,SCREEN_W/2,SCREEN_H - NUM_H - SPACE_BETWEEN_CHAR*2,0);
		draw_rectangle(SCREEN_W/2 - NUM_W - SPACE_BETWEEN_CHAR ,SCREEN_H - NUM_H - SPACE_BETWEEN_CHAR*2, 
						(NUM_W + SPACE_BETWEEN_CHAR)*2, NUM_H + SPACE_BETWEEN_CHAR*2,0);
						
		int p1_center = SCREEN_W/4;
		int p2_center = SCREEN_W*3/4;
		
		draw_board(p1_center,p1b_offset,p1_board);
		draw_board(p2_center,p2b_offset,p2_board);
		
		draw_sequence(p1_center,SCORE_Y,p1_score,false);
		draw_sequence(p2_center,SCORE_Y,p2_score,false);
		
		draw_role(p1_center,p1_x,p1_offset);
		draw_role(p2_center,p2_x,p2_offset);
		if(game_over){
			if(result == P1_WIN){
				draw_win(p1_center - NUM_W*3/2,SCREEN_H/2);
				draw_lose(p2_center - NUM_W*4/2,SCREEN_H/2);
			}else if(result == P2_WIN){
				draw_lose(p1_center - NUM_W*4/2,SCREEN_H/2);
				draw_win(p2_center - NUM_W*3/2,SCREEN_H/2);
			}else{
				draw_draw(p1_center - NUM_W*4/2,SCREEN_H/2);
				draw_draw(p2_center - NUM_W*4/2,SCREEN_H/2);
			}
		}
	}
	if(!game_over){
		if(T_MINUS - t_minus >= GO_DISPLAY_TIME){
			draw_sequence(SCREEN_W/2 ,SCREEN_H - NUM_H - SPACE_BETWEEN_CHAR,t_minus,false);
		}else{
			draw_go(SCREEN_W/2 - NUM_W,SCREEN_H - NUM_H - SPACE_BETWEEN_CHAR);
		}
	}else{
		draw_sequence(SCREEN_W/2,SCREEN_H - NUM_H - SPACE_BETWEEN_CHAR,restart_t_minus,false);
	}
}
void draw_role(int center, int x, int x_offset){
	int col_center = BOARD_COLS/2;
	int board_y = (SCREEN_H - (PLATFORM_H+P_V_INTERVAL)*(BOARD_ROWS-1))/2;
	fill_rectangle((x-col_center)*PLATFORM_W + center - ROLE_W/2 + x_offset,
					(PLATFORM_H+P_V_INTERVAL)+board_y-ROLE_H,
					ROLE_W,ROLE_H,0);
}
void draw_board(int center, int y_offset,int board[][BOARD_COLS]){
	int col_center = BOARD_COLS/2;
	int board_y = (SCREEN_H - (PLATFORM_H+P_V_INTERVAL)*(BOARD_ROWS-1))/2;
	int row=0;
	for(row;row<BOARD_ROWS;row++){
		int col=0;
		for(col;col<BOARD_COLS;col++){
			int type = board[row][col];
			if(type == PLATFORM){
				fill_rectangle((col-col_center)*PLATFORM_W + center - PLATFORM_W/2,
								row*(PLATFORM_H+P_V_INTERVAL)+board_y + y_offset,
								PLATFORM_W,PLATFORM_H,
								rgb24to16(0,255,0));
			}else if(type == SPIKE){
				fill_rectangle((col-col_center)*PLATFORM_W + center - PLATFORM_W/2,
								row*(PLATFORM_H+P_V_INTERVAL)+board_y + y_offset,
								PLATFORM_W,PLATFORM_H,
								rgb24to16(255,0,0));
				draw_spikes((col-col_center)*PLATFORM_W + center - PLATFORM_W/2,
								row*(PLATFORM_H+P_V_INTERVAL)+board_y + y_offset - SPIKE_DIM);
			}
		}
	}
}