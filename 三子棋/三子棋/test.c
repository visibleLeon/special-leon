//������������Ϸ
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
	//����-����߳���������Ϣ
	char board[ROW][COL]={0};//ȫ���ո�
	//��ʼ�����̣���ʼ�����б�Ҫ
	InitBoard(board,ROW,COL);//��Ϸģ��ĺ�������game.h����������game.c��ʵ��
	//��ӡ����
	DisplayBoard(board,ROW,COL);
	//����
	while(1)
	{
		//�������
		Player(board,ROW,COL);
		DisplayBoard(board,ROW,COL);//����һ��Ҫ�ٴ�һ������
		//�ж�����Ƿ�Ӯ
		ret=Win(board,ROW,COL);
		if(ret!='C')
		{
			break;
		}
		//��������
		Computer(board,ROW,COL);
		DisplayBoard(board,ROW,COL);
		//�жϵ����Ƿ�Ӯ
		ret=Win(board,ROW,COL);
		if(ret!='C')
		{
			break;
		}
	}
	if(ret=='*')
		printf("���Ӯ\n");
	else if(ret=='#')
		printf("����Ӯ\n");
	else
		printf("ƽ��\n");
}
//��Ϸ�������㷨ʵ��

//test������Ϸ���������ģʽ���������Ϸ������һ��ѡ��do--whileѭ����
void test()
{
	int input=0;
	srand((unsigned int)time(NULL));//����������һ���������Χ
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("ѡ�����������ѡ��");
			break;
		}
	}while(input);
}
int main()
{
	test();
	return 0;
}