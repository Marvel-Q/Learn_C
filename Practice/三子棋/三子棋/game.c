#include"game.h"
void InitBoard(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			printf(" %c ", board[i][j]);
			if (j != row - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i != col - 1)
		{
			for (int j = 0; j < row; j++)
			{
				printf("---");
				if (j != row - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}

		
	}
	
}


void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x, y;
	while (1)
	{
		printf("请输入坐标:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && y >= 1 && x <= row && y <= col)
		{
			if (board[x-1][y-1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("坐标被占用，请重新输入\n");
				continue;
			}
			
		}
		else
		{
			printf("非法坐标，请重新输入\n");
		}
	}
	
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	while (1)
	{
		int x = rand() % 3;
		int y = rand() % 3;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

char IsWin(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		int player = 0, computer = 0;
		for (int j = 0; j < col; j++)
		{
			if (board[i][j] == '*')
			{
				player++;
			}
			else if (board[i][j] == '#')
			{
				computer++;
			}
			if (player == row)
			{
				return'*';
			}
			else if (computer == row)
			{
				return'#';
			}
		}
	}
	for (int i = 0; i < col; i++)
	{
		int player = 0, computer = 0;
		for (int j = 0; j < row; j++)
		{
			if (board[j][i] == '*')
			{
				player++;
			}
			else if (board[j][i] == '#')
			{
				computer++;
			}
			if (player == col)
			{
				return'*';
			}
			else if (computer == col)
			{
				return'#';
			}
		}
	}
	int player = 0, computer = 0;
	for (int i = 0; i < row; i++)
	{
		if (board[i][i] == '*')
		{
			player++;
		}
		else if (board[i][i] == '#')
		{
			computer++;
		}
		if (player == col)
		{
			return'*';
		}
		else if (computer == col)
		{
			return'#';
		}
	}
	player = 0, computer = 0;
	for (int i = 0; i < row; i++)
	{
		
		if (board[i][row-i-1] == '*')
		{
			player++;
		}
		else if (board[i][row-i-1] == '#')
		{
			computer++;
		}
		if (player == col)
		{
			return'*';
		}
		else if (computer == col)
		{
			return'#';
		}
	}
	return'C';
}

void end(char ret)
{
	if (ret == '*')
	{
		printf("玩家赢!\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢!\n");
	}
	else
	{
		printf("平局!\n");
	}
}