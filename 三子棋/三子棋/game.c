#include"game.h"

void InitBoard(char board[ROW][COL],int row,int col)//�������յ�ʱ��ע�ⶨ�����ʽ�������ô�дROW,COL,��Ϊ���Ǳ�define����Ϊ������
{
	int i=0;
	int j=0;
	for(i=0;i<ROW;++i)
	{
		for(j=0;j<COL;++j)
		{
			board[i][j]=' ';
		}
	}

}

void DisplayBoard(char board[ROW][COL],int row,int col)
{
	int i=0;
	int j=0;
	for(i-0;i<row;++i)
	{
		for(j=0;j<col;++j)
		{
			//��ӡһ�е�����
			printf(" %c ",board[i][j]);
			if(j<col-1)
				printf("|");
			else
				printf("\n");
		}
		//��ӡ�ָ���
		if(i<row-1)
		{
			for(j=0;j<col;++j)
			{
				printf("---");
			if(j<col-1)
				printf("|");
			else
				printf("\n");
			}
		}
	}
}


void Player(char board[ROW][COL],int row,int col)
{
	int x=0;
	int y=0;
	printf("����ߣ�\n");
	while(1)
	{
		printf("������Ҫ�µ����꣺");
		scanf("%d%d",&x,&y);
		//�ж�x,y�Ϸ���
		if(x>=1&&x<=ROW&&y>=1&&y<=COL)
		{
			if(board[x-1][y-1]==' ')
			{
				board[x-1][y-1]='*';
				break;			
			}
			else
			{
				printf("����������");
			}
		}	
		else
		{
			printf("���겻�Ϸ�������������");
		}
	}
}

void Computer(char board[ROW][COL],int row,int col)
{
	int x=0;
	int y=0;
	printf("�����ߣ�\n");
	while(1)
	{
		x=rand()%row;
		y=rand()%col;
		if(board[x][y]==' ')
		{
			board[x][y]='#';
			break;
		}
	} 
}


//����1��ʾ�������ˣ�����0��ʾ����û��
int IsFull(char board[ROW][COL],int row,int col)
{
	int i=0;
	int j=0;
	for(i=0;i<row;++i)
	{
		for(j=0;j<col;++j)
		{
			if(board[i][j]==' ')
			{
				return 0;//û��
			}
		}
	}
	return 1;//����
}


char Win(char board[ROW][COL],int row,int col)
{
	int i=0;
	//������
	for(i=0;i<row;++i)
	{
		if(board[i][0]==board[i][1]&&board[i][0]==board[i][2]&&board[i][0]!=' ')
		{
			return board[i][0];
		}
	}
	//������
	for(i=0;i<col;++i)
	{
		if(board[0][i]==board[1][i]&&board[0][i]==board[2][i]&&board[0][i]!=' ')
		{
			return board[0][i];
		}
	}
	//�Խ���
	if(board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[1][1]!=' ')
	{
		return board[1][1];
	}
	if(board[2][0]==board[1][1]&&board[1][1]==board[0][2]&&board[1][1]!=' ')
	{
		return board[1][1];
	}
	//�ж��Ƿ�ƽ��
	if(1==IsFull(board,ROW,COL))
	{
		return 'Q';
	}
	return 'C';
}
