#include"game.h"


void menu()
{
	printf("***********************\n");
	printf("***1.play     0.exit***\n");
	printf("***********************\n");
}


void game()
{
	//�׵���Ϣ�洢
	//���úõ��׵���Ϣ
	char mine[ROWS][COLS]={0};//11*11
	//�Ų�����׵���Ϣ
	char show[ROWS][COLS]={0};
	//��ʼ������
	Initboard(mine,ROWS,COLS,'0');
	Initboard(show,ROWS,COLS,'*');
	//��ӡ����
//	Display(mine,ROW,COL);    //mine�����ײ��ô�ӡ
	Display(show,ROW,COL);
	//������
	Setmine(mine,ROW,COL);
//	Display(mine,ROW,COL);     //�����ײ��ú�û�У�û��Ҫ��ӡ��
	//ɨ��
	Findmine(mine,show,ROW,COL);
}


void test()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do
	{		
		menu();
		printf("��ѡ��");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	}while(input);
}


int main()
{
	test();
	return 0;
}