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
		//printf("�����������ƿ�������ϵ��\n");
		//int row = 0;
		//int col = 0;
		//scanf_s("%d %d", &row, &col);
		char Mine_Map[ROWS][COLS] = { 0 };
		char Show_Map[ROWS][COLS] = { 0 };
		init(Show_Map, Mine_Map);//��ʼ����Ϸ���棬���Ҳ���
		Print(Show_Map);//��ӡ��Ϸ����
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
		printf("����������ѡ��\n");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ!\n");
			break;
		default:
			printf("����������������룡\n");
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