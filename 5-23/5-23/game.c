#include "game.h"
void  init(char Show_Map[ROWS][COLS], char Mine_Map[ROWS][COLS])
{
	for (int row = 0; row < ROWS; row++)
	{
		for (int col = 0; col < COLS; col++)
		{
			Show_Map[row][col] = '*';
		}
	}
	for (int row = 0; row < ROWS; row++)
	{
		for (int col = 0; col < COLS; col++)
		{
			Mine_Map[row][col] = '0';
		}
	}
	int mine_count = MINE_COUNT;
	while (mine_count>0)
	{
		int row = rand() % ROW+1;
		int col = rand() % COL+1;
		if (Mine_Map[row][col] == '1')
		{
			continue;
		}
		Mine_Map[row][col] = '1';
		--mine_count;
	}
}
void Print(char SHOW_map[ROWS][COLS])
{
	printf("    ");
	for (int col = 1; col <= COL; col++)
	{
		printf("%d ", col);
	}
	printf("\n ");
	for (int col = 0; col <= COL; col++)
	{
		printf("--");
	}
	printf("\n");
	for (int row = 1; row <= ROW; row++)
	{
		printf("  %d|", row);
		for (int col = 1; col <= COL; col++)
		{
			printf("%c ", SHOW_map[row][col]);
		}
		printf("\n");
	}
}
int GetMineCount(char Mine_Map[ROWS][COLS], int x, int y)
{
	return Mine_Map[x - 1][y - 1] +
		Mine_Map[x - 1][y] +
		Mine_Map[x - 1][y + 1] +
		Mine_Map[x][y - 1] +
		Mine_Map[x][y + 1] +
		Mine_Map[x + 1][y - 1] +
		Mine_Map[x + 1][y] +
		Mine_Map[x + 1][y + 1] - 8 * '0';
}

void Find_Mine(char Mine_Map[ROWS][COLS], char Show_Map[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-MINE_COUNT)
	{
		printf("请输入你想选择的坐标：\n");
		scanf_s("%d %d", &x, &y);
		if (x >= 1 && x <= row&&y >= 1 && y <= col)
		{
			if (Mine_Map[x][y] == '1')
			{
				printf("很遗憾，你被炸死了！\n");
				Print(Mine_Map);
				break;
			}
			else
			{
				int count = GetMineCount(Mine_Map, x, y);
				Show_Map[x][y] = count + '0';
				Show_Map[x - 1][y - 1] = '0' + GetMineCount(Mine_Map, x - 1, y - 1);
				Show_Map[x - 1][y] = '0' + GetMineCount(Mine_Map, x - 1, y);
				Show_Map[x - 1][y + 1] = '0' + GetMineCount(Mine_Map, x - 1, y + 1);
				Show_Map[x][y - 1] = '0' + GetMineCount(Mine_Map, x, y - 1);
				Show_Map[x][y] = '0' + GetMineCount(Mine_Map, x, y);
				Show_Map[x][y + 1] = '0' + GetMineCount(Mine_Map, x, y + 1);
				Show_Map[x + 1][y - 1] = '0' + GetMineCount(Mine_Map, x + 1, y - 1);
				Show_Map[x + 1][y] = '0' + GetMineCount(Mine_Map, x + 1, y);
				Show_Map[x + 1][y + 1] = '0' + GetMineCount(Mine_Map, x + 1, y + 1);

				Print(Show_Map);
			}
		}
		else
		{
			printf("输入错误，请重新输入！\n");
		}
	}
	printf("恭喜你排雷成功！\n");
}