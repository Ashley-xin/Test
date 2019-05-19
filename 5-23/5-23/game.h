#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define MINE_COUNT 10
void init(char Show_Map[ROWS][COLS], char Mine_Map[ROWS][COLS]);
void Print(char Show_Map[ROWS][COLS]);
void Print(char Mine_Map[ROWS][COLS]);
void Find_Mine(char Mine_Map[ROWS][COLS], char Show_Map[ROWS][COLS],int row, int col);