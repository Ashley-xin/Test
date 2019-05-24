#include"game.h"
void menu()
{
	printf("***************************\n");
	printf("*******   1.Play    *******\n");
	printf("*******   0.Exit    *******\n");
	printf("***************************\n");
}
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	PrintBoard(board, ROW, COL);//打印棋盘
	while (1)
	{
		PlayerMove(board, ROW, COL);
		PrintBoard(board, ROW, COL);
		ret=IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);//电脑下棋
		PrintBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if ('*' == ret)
	{
		printf("玩家赢!\n");
	}
	else if ('#' == ret)
	{
		printf("电脑赢!\n");
	}
	else if ('Q' == ret)
	{
		printf("平局!\n");
	}
}
void test()
{
	//调取函数菜单
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请输入你的选择：\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏！\n");
			break;
		default:
			printf("输入错误，请重新输入");
			break;
		}
	} while (input);
}
		
	
int main()
{
	test();//测试三子棋
	system("pause");
	return 0;
}
