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
//		printf("请选择：>");
//		scanf("%d",&input);
//		if(input>=1&&input<=4)
//		{
//			printf("请输入两个操作数：>");
//			scanf("%d%d",&x,&y);
//			ret=pfarr[input](x,y);
//			printf("%d\n",ret);
//		}
//		else if(input==0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	}while(input);
//}


//void Calc(int(*pf)(int,int))
//{
//	int x=0;
//	int y=0;
//	printf("请输入两个操作数：>");
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
//		printf("请选择：>");
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
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//		}
//
//	}while(input);
//	return 0;
//}


//int main()
//{
//	int arr[10]={0};
//	int(*p)[10]=&arr;//取出数组的地址，数组指针
//
//	int(*pf)(int,int);//函数指针
//	int(*pfarr[4](int,int));//pfarr是一个数组-函数指针数组
//	int(*(*ppfarr)[4])(int,int))=&pfarr;
//	//ppfarr是一个数组指针，指针指向的数组有4个元素
//	//每个元素的类型是一个函数指针int(*)(int,int)
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
////在test函数中调用print函数，print函数就被称为回调函数
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
	//指针数组
	int* arr[10];
	//数组指针
	int*(*parr)[10]=&arr;
	//函数指针
	int(*pf)(int,int)=Add;
	//用函数指针调用函数
	//pf(1,2);
	//(*pf)(1,2);

	//函数指针数组
	int(*pfarr[5])(int,int);

	//指向函数指针数组的指针
	int(*(*ppfarr)[5])(int,int)=&pfarr;
	return 0;
}

