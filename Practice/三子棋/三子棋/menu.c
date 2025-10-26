#include"game.h"


void memu_main()
{
	int input = 0;
	do
	{
		input = menu();
		Switchs(input);

	} while (input);
}


int menu()
{
	int input;
	printf("**********************************\n");
	printf("**********1.play   0.exit*********\n");
	printf("**********************************\n");
	printf("��ѡ��:>");
	scanf("%d", &input);
	return input;
}


void Switchs(int input)
{
	switch (input)
	{
	case 1:
		game();
		break;
	case 0:
		printf("�˳���Ϸ\n");
		break;
	default:
		printf("�����������������0��1:>\n");
		break;
	}
}


void game()
{
	srand(time);
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	char ret = '0';
	while (1)
	{
		PlayerMove(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
		ComputerMove(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
	}
	DisplayBoard(board, ROW, COL);
	end(ret);
}