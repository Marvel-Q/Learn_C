#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3
#define COL 3

void memu_main();
		int menu();
		void Switchs(int input);
				void game();
						void InitBoard(char board[ROW][COL], int row, int col);
						void DisplayBoard(char board[ROW][COL], int row, int col);
						void PlayerMove(char board[ROW][COL], int row, int col);
						void ComputerMove(char board[ROW][COL], int row, int col);
						char IsWin(char board[ROW][COL], int row, int col);
						void end(char ret);