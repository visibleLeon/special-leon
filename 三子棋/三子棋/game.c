#include"game.h"

void InitBoard(char board[ROW][COL],int row,int col)//函数接收的时候注意定义的形式参数不用大写ROW,COL,因为它们被define定义为常量了
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
			//打印一行的数据
			printf(" %c ",board[i][j]);
			if(j<col-1)
				printf("|");
			else
				printf("\n");
		}
		//打印分割行
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
	printf("玩家走！\n");
	while(1)
	{
		printf("请输入要下的坐标：");
		scanf("%d%d",&x,&y);
		//判断x,y合法性
		if(x>=1&&x<=ROW&&y>=1&&y<=COL)
		{
			if(board[x-1][y-1]==' ')
			{
				board[x-1][y-1]='*';
				break;			
			}
			else
			{
				printf("请输入坐标");
			}
		}	
		else
		{
			printf("坐标不合法，请重新输入");
		}
	}
}

void Computer(char board[ROW][COL],int row,int col)
{
	int x=0;
	int y=0;
	printf("电脑走！\n");
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


//返回1表示棋盘满了，返回0表示棋盘没满
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
				return 0;//没满
			}
		}
	}
	return 1;//满了
}


char Win(char board[ROW][COL],int row,int col)
{
	int i=0;
	//横三行
	for(i=0;i<row;++i)
	{
		if(board[i][0]==board[i][1]&&board[i][0]==board[i][2]&&board[i][0]!=' ')
		{
			return board[i][0];
		}
	}
	//树三列
	for(i=0;i<col;++i)
	{
		if(board[0][i]==board[1][i]&&board[0][i]==board[2][i]&&board[0][i]!=' ')
		{
			return board[0][i];
		}
	}
	//对角线
	if(board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[1][1]!=' ')
	{
		return board[1][1];
	}
	if(board[2][0]==board[1][1]&&board[1][1]==board[0][2]&&board[1][1]!=' ')
	{
		return board[1][1];
	}
	//判断是否平局
	if(1==IsFull(board,ROW,COL))
	{
		return 'Q';
	}
	return 'C';
}
