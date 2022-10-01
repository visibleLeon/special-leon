#include<stdio.h>
#include<string.h>
//int main()
//{
//	int a=10;
//	/*int b=a--;*/
//	/*int b=--a;*/
//	printf("a=%d b=%d\n",a,b);
//	return 0;
//}

//int main()
//{
//	int a=(int)3.14;
//	printf("%d\n",a);
//	return 0;
//}

//int main()
//{
//	int a=3;
//	int b=5;
//	int c=a&&b;
//	printf("%d\n",c);
//	return 0;
//}

//int main()
//{
//	typedef unsigned int uint;
//	uint a=10;
//	printf("%d\n",a);
//	return 0;
//}


//void test()
//{
//	static int a=1;
//	a++;
//	printf("a=%d\n",a);
//}
//int main()
//{
//	int i=0;
//	while(i<5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}



//int main()
//{
//	extern int gval;
//	printf("gval=%d\n",gval);
//	return 0;
//}


//int main()
//{
//	int a=10;
//	int b=20;
//	int sum=Add(a,b);
//	printf("sum=%d\n",sum);
//	return 0;
//}
//extern Add();


//int Max(int x,int y)
//{
//	if(x>y)
//		return x;
//	else
//		return y;
//}
//
//#define MAX(X,Y) (X>Y?X:Y)
//
//int main()
//{
//	int a=10,b=20;
//	
//	//函数
//	int max=Max(a,b);
//	printf("max=%d\n",max);
//	//宏
//	max=MAX(a,b);
//	printf("max=%d\n",max);
//	
//	return 0;
//}
//
//int main()
//{
//	int a=10;
//	int* p=&a;
//	*p=20;//*  解引用操作符
//	printf("a=%d\n",a);
//
//
//	return 0;
//}

//int main()
//{
//	char ch='w';
//	char* pc=&ch;
//	printf("%p\n",pc);
//	printf("%d\n",sizeof(pc));
//	*pc='a';
//	printf("%c\n",ch);
//	return 0;
//}


////创建一个结构体类型
//struct Book
//{
//	char name[20];
//	short price;
//};
//
//int main()
//{
//	//利用结构体类型创造一个该类型的结构体变量
//	struct Book b1={"C语言程序设计",55};
//	struct Book* pb=&b1;
//	printf("%s\n",pb->name);
//	printf("%d\n",pb->price);
//
//	printf("%s\n",(*pb).name);
//	printf("%d\n",(*pb).price);
//
//	printf("书名：%s\n",b1.name);
//	printf("价格：%d\n",b1.price);
//
//	b1.price=40;
//	printf("修改后的价格：%d\n",b1.price);
//	strcpy(b1.name,"C++");
//	printf("%s\n",b1.name);
//
//	return 0;
//}
int main()
{
	char name[20]="asdf";
	printf("%s\n",name);
	strcpy(name,"fswf");
	printf("%s\n",name);
	return 0;
}