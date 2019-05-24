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
	PrintBoard(board, ROW, COL);//��ӡ����
	while (1)
	{
		PlayerMove(board, ROW, COL);
		PrintBoard(board, ROW, COL);
		ret=IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);//��������
		PrintBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if ('*' == ret)
	{
		printf("���Ӯ!\n");
	}
	else if ('#' == ret)
	{
		printf("����Ӯ!\n");
	}
	else if ('Q' == ret)
	{
		printf("ƽ��!\n");
	}
}
void test()
{
	//��ȡ�����˵�
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("���������ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("�����������������");
			break;
		}
	} while (input);
}
		
	
int main()
{
	test();//����������
	system("pause");
	return 0;
}
