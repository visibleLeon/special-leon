#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//��������
void InitBoard(char board[ROW][COL],int row,int col);
void DisplayBoard(char board[ROW][COL],int row,int col);
void Player(char board[ROW][COL],int row,int col);
void Computer(char board[ROW][COL],int row,int col);


//��������������Ϸ״̬(���ز�ͬ���ַ�)
//���Ӯ-��*��
//����Ӯ-��#��
//ƽ��-'Q'
//����-'C'

char Win(char board[ROW][COL],int row,int col);
