#include"game.h"


void menu()
{
	printf("***********************\n");
	printf("***1.play     0.exit***\n");
	printf("***********************\n");
}


void game()
{
	//雷的信息存储
	//布置好的雷的信息
	char mine[ROWS][COLS]={0};//11*11
	//排查出的雷的信息
	char show[ROWS][COLS]={0};
	//初始化棋盘
	Initboard(mine,ROWS,COLS,'0');
	Initboard(show,ROWS,COLS,'*');
	//打印棋盘
//	Display(mine,ROW,COL);    //mine布置雷不用打印
	Display(show,ROW,COL);
	//布置雷
	Setmine(mine,ROW,COL);
//	Display(mine,ROW,COL);     //看下雷布置好没有，没必要打印。
	//扫雷
	Findmine(mine,show,ROW,COL);
}


void test()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do
	{		
		menu();
		printf("请选择：");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择！\n");
			break;
		}
	}while(input);
}


int main()
{
	test();
	return 0;
}