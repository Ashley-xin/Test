#include"game.h"
void InitBoard(char board[ROW][COL], int row, int col)
{
	memset(board, ' ', row*col);
}
//��ӡ����
void PrintBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i <row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (int j =0; j < col; j++)
			{
				printf("---" );
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}
void PlayerMove(char board[ROW][COL], int row, int col)//�������
{
	int x = 0;
	int y = 0;
	printf("�����->\n");
	while (1)
	{

		printf("�����ѡ���������ӵ�����->");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row&&y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("���걻ռ��!\n");
			}
		}
		else
		{
			printf("���겻����,����������!\n");
		}
	}
}
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("������->\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
static IsFull(char board[ROW][COL], int  row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; ++i)
	{
		for (j = 0; j < col; ++j)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; ++i)//ͬ��
	{
		j = 0;
		while (j < col)
		{
			if (board[i][0] == board[i][j])
			{
				j++;
			}
			else
				break;
		}
		if (j == col&&board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	for (j = 0; j < col; ++j)//ͬ��
	{
		i = 0;
		while (i < row)
		{
			if (board[0][j] == board[i][j])
			{
				i++;
			}
			else
				break;
		}
		if (i == row&&board[0][j] != ' ')
		{
			return board[0][j];
		}
	}

	for (i = 0; i < row; ++i)//���Խ���
	{
		if (board[0][0] == board[i][i])
		{
			continue;
		}
		else
			break;
	}
	if (i == row&&board[0][0] != ' ')
	{
		return board[0][0];
	}
	for (i = 0; i < row; ++i)//���Խ���
	{
		j = row - 1 - i;
		if (board[0][row - 1] == board[i][j])
		{
			continue;
		}
		else
			break;
	}
	if (i == row&&board[0][row - 1] != ' ')
	{
		return board[0][row - 1];
	}
	if (IsFull(board, row, col) == 1)
	{
		return 'Q';
	}
	return 'C';
}