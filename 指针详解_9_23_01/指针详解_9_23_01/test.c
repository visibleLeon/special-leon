#include<stdio.h>
//
//int main()
//{
//	char*(*pf)(char*,const char*)=my_strcpy;
//	char*(*pfarr[4])(char*,const char*);
//	return 0;
//}




//void menu()
//{
//	printf("**********************\n");
//	printf("***1.Add      2.Sub***\n");
//	printf("***3.Mul      4.Div***\n");
//	printf("***     0.exit     ***\n");
//	printf("**********************\n");
//}
//
//int Add(int x,int y)
//{
//	return x+y;
//}
//int Sub(int x,int y)
//{
//	return x-y;
//}
//int Mul(int x,int y)
//{
//	return x*y;
//}
//int Div(int x,int y)
//{
//	return x/y;
//}


//int main()
//{
//	int input=0;
//	int x=0;
//	int y=0;
//	int ret=0;
//	int(*pfarr[5])(int,int)={0,Add,Sub,Mul,Div};
//	do
//	{
//		menu();
//		printf("��ѡ��>");
//		scanf("%d",&input);
//		if(input>=1&&input<=4)
//		{
//			printf("������������������>");
//			scanf("%d%d",&x,&y);
//			ret=pfarr[input](x,y);
//			printf("%d\n",ret);
//		}
//		else if(input==0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//	}while(input);
//}


//void Calc(int(*pf)(int,int))
//{
//	int x=0;
//	int y=0;
//	printf("������������������>");
//	scanf("%d%d",&x,&y);
//	printf("%d\n",pf(x,y));
//}
//int main()
//{
//	int input=0;
//
//	do
//	{
//		menu();
//		printf("��ѡ��>");
//		scanf("%d",&input);
//		switch(input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//		}
//
//	}while(input);
//	return 0;
//}


//int main()
//{
//	int arr[10]={0};
//	int(*p)[10]=&arr;//ȡ������ĵ�ַ������ָ��
//
//	int(*pf)(int,int);//����ָ��
//	int(*pfarr[4](int,int));//pfarr��һ������-����ָ������
//	int(*(*ppfarr)[4])(int,int))=&pfarr;
//	//ppfarr��һ������ָ�룬ָ��ָ���������4��Ԫ��
//	//ÿ��Ԫ�ص�������һ������ָ��int(*)(int,int)
//	return 0;
//}


//void print(char* str)
//{
//	printf("hehe:%s",str);
//}
//void test(void(*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
////��test�����е���print������print�����ͱ���Ϊ�ص�����
//int main()
//{
//	test(print);
//	return 0;
//}

int Add(int x,int y)
{
	return x+y;
}
int main()
{
	//ָ������
	int* arr[10];
	//����ָ��
	int*(*parr)[10]=&arr;
	//����ָ��
	int(*pf)(int,int)=Add;
	//�ú���ָ����ú���
	//pf(1,2);
	//(*pf)(1,2);

	//����ָ������
	int(*pfarr[5])(int,int);

	//ָ����ָ�������ָ��
	int(*(*ppfarr)[5])(int,int)=&pfarr;
	return 0;
}

