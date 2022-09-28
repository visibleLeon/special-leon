#define ROW 9
#define COL 9
#define EASY_COUNT 10

#define ROWS ROW+2
#define COLS COL+2

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void Initboard(char board[ROWS][COLS],int rows,int cols);

void Display(char board[ROWS][COLS],int row,int col);

void Setmine(char board[ROWS][COLS],int row,int col);

void Findmine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);
