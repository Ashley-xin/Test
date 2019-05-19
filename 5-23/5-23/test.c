#include "game.h"
void menu()
{
	printf("**********************\n");
	printf("******* 1.PLAY *******\n");
	printf("******* 0.EXIT *******\n");
	printf("**********************\n");
}
void game()
{
	//while (1)
	{//
		//printf("请输入你想掀开的坐标系：\n");
		//int row = 0;
		//int col = 0;
		//scanf_s("%d %d", &row, &col);
		char Mine_Map[ROWS][COLS] = { 0 };
		char Show_Map[ROWS][COLS] = { 0 };
		init(Show_Map, Mine_Map);//初始化游戏界面，并且布雷
		Print(Show_Map);//打印游戏界面
		Print(Mine_Map);
		Find_Mine(Mine_Map, Show_Map, ROW, COL);


		//Count_Arround(row,col);
	}
	
}
void test()
{
	int input;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请输入您的选择\n");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏!\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	system("pause");
	return 0;
}