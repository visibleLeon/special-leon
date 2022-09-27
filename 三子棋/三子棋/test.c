//测试三子棋游戏
#include"game.h"

void menu()
{
	printf("********************\n");
	printf("***1.play  0.exit***\n");
	printf("********************\n");
}

void game()
{
	char ret=0;
	//数组-存放走出的棋盘信息
	char board[ROW][COL]={0};//全部空格
	//初始化棋盘，初始化很有必要
	InitBoard(board,ROW,COL);//游戏模块的函数，在game.h里声明，在game.c里实现
	//打印棋盘
	DisplayBoard(board,ROW,COL);
	//下棋
	while(1)
	{
		//玩家下棋
		Player(board,ROW,COL);
		DisplayBoard(board,ROW,COL);//走完一步要再打一个棋盘
		//判断玩家是否赢
		ret=Win(board,ROW,COL);
		if(ret!='C')
		{
			break;
		}
		//电脑下棋
		Computer(board,ROW,COL);
		DisplayBoard(board,ROW,COL);
		//判断电脑是否赢
		ret=Win(board,ROW,COL);
		if(ret!='C')
		{
			break;
		}
	}
	if(ret=='*')
		printf("玩家赢\n");
	else if(ret=='#')
		printf("电脑赢\n");
	else
		printf("平局\n");
}
//游戏的整个算法实现

//test是玩游戏主界面基本模式（多次玩游戏，至少一次选择，do--while循环）
void test()
{
	int input=0;
	srand((unsigned int)time(NULL));//在外面设置一次随机数范围
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("选择错误，请重新选择！");
			break;
		}
	}while(input);
}
int main()
{
	test();
	return 0;
}