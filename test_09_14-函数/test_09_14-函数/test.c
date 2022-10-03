#include<stdio.h>
#include<string.h>
#include<math.h>

//int main()
//{
//	char a1[]="bit";
//	char a2[]="ashdfjk";
//	strcpy(a2,a1);
//	printf("%s\n",a2);
//	return 0;
//}

//memset
//memmory-内存：set-设置;

//int main()
//{
//	char arr[]="hello world";
//	memset(arr,'*',5);
//	printf("%s\n",arr);
//	return 0;
//}

//void Swap1(int x,int y)
//{
//	int tmp=0;
//	tmp=x;
//	x=y;
//	y=tmp;
//}
//int main()
//{
//	int a=10;
//	int b=20;
//	printf("a=%d b=%d\n",a,b);
//	Swap(a,b);
//	printf("a=%d b=%d\n",a,b);
//	return 0;
//}

//int main()
//{
//	int a=10;
//	int* pa=&a;//pa指针变量
//	*pa=20;//解引用
//	printf("%d\n",a);
//	return 0;
//}

//void Swap2(int* px,int* py)
//{
//	int tmp=0;
//	tmp=*px;
//	*px=*py;
//	*py=tmp;
//}
//int main()
//{
//	int a=10;
//	int b=20;
//	printf("a=%d b=%d\n",a,b);
//	Swap2(&a,&b);
//	printf("a=%d b=%d\n",a,b);
//	return 0;
//}
//是素数返回1，不是素数返回0；
//int wyx(int x)
//{
//	int m=0;
//	for(m=2;m<sqrt(x);m++)
//	{
//		if(x%m==0)
//			return 0;
//	}	
//	if(m=sqrt(x))
//		return 1;
//}
//int main()
//{
//	int i=0;
//	for(i=100;i<=200;i++)
//	{
//		if(wyx(i)==1)
//			printf("%d ",i);
//	}
//
//	
//	return 0;
//}

//int main()
//{
//	int year=0,count=0;
//	for(year=1000;year<=2000;year++)
//	{
//		if(wyx(year)==1)
//		{
//			printf("%d ",year);
//			count++;
//		}
//	}
//	printf("闰年总数=%d",count);
//	return 0;
//}
//int wyx(int n)
//{
//	if(((n%4==0)&&(n%100!=0))||(n%400==0))
//		return 1;
//	else
//		return 0;
//}

//              //本质上这里的ar是一个指针；
//int search(int ar[],int k,int sz)
//{
//	//算法的实现
//	int left=0;
//	int right=sz-1;
//	while(left<=right)
//	{
//		int mid=(left+right)/2;//中见下标的元素	
//		if(ar[mid]<k)
//		{
//			left=mid+1;
//		}
//		else if(ar[mid]>k)
//		{
//			right=mid-1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	//二分查找
//	//在一个有序数组中寻找某个数
//	//若果找到了返回下标，找不到返回-1
//	int ar[]={1,2,3,4,5,6,7,8,9,10};                     //先写函数怎么用，再去设计函数
//	int k=7;
//	int sz=sizeof(ar)/sizeof(ar[0]);//函数中不能求数组的个数，故在外面求好传进去。
//	//            ar传递过去的是首元素的地址；
//	int ret=search(ar,k,sz);
//	if(ret==-1)
//	{
//		printf("找不到指定数字\n");
//	}
//	else
//		printf("找到了，下标为%d\n",ret);
//	return 0;
//}



//void add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num=0;
//	printf("num=%d\n",num);
//	add(&num);
//	printf("num=%d\n",num);
//	add(&num);
//	printf("num=%d\n",num);
//	add(&num);
//	printf("num=%d\n",num);
//	return 0;
//}

//int main()
//{
//	//int len=0;
//	//len=strlen("abc");
//	//printf("%d",len);
//	printf("%d\n",strlen("abc"));
//	return 0;
//}

//int main()
//{
//	printf("%d\n",printf("%d",printf("%d",43)));//printf函数返回值为打印的字符数量，4321
//	return 0;
//}

//int Add(int x,int y);
//函数声明
//声明放在头文件.h，函数放在源文件.c，调用时#include"xxx.h"