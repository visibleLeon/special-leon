#include<stdio.h>

//int main()
//{
//	int a=10;
//	int* p=&a;//指针变量--存放地址的变量
//	return 0;
//}

//int main()
//{
//	int a=0x11223344;
//	int* pa=&a;
//	char* pc=&a;
//	printf("%p\n",pa);
//	printf("%p\n",pa+1);
//
//	printf("%p\n",pc);
//	printf("%p\n",pc+1);
//
//	return 0;
//}

//int main()
//{
//	int arr[10]={0};
//	int* p=arr;//数组名--首元素地址
//	int i=0;
//	for(i=0;i<10;i++)
//	{
//		*(p+i)=1;
//	}
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}


//int* test()
//{
//	int a=10;
//	return &a;
//}
//int main()
//{
//	int* p=test();
//
//	printf("%d",*p);
//	return 0;
//}

//int main()
//{
//	int a=10;
//	int* pa=&a;
//	*pa=20;
//	//不想让pa指向a了，pa=NULL避免成为野指针
//	pa=NULL;
//	return 0;
//}

//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int i=0;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int* p=&arr[9];//一个数组元素时也要注意&取地址
//	for(i=0;i<5;i++)
//	{
//		printf("%d ",*p);
//		p-=2;
//	}
//	return 0;
//}


//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES]={1.0,2.0,3.0,4.0,5.0};
//	float* vp=NULL;
//	for(vp=&values[0];vp<&values[N_VALUES];)
//	{
//		*vp++=0;
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	printf("%d",&arr[9]-&arr[0]);  //指针减指针相当于中间的元素个数
//	return 0;
//}

//int my_strlen(char* p)
//{
//	char* start=p;
//	char* end=p;
//	while(*end!='\0')
//	{
//		end++;
//	}
//	return end-start;
//}
//
//int main()
//{
//	char arr[]="bit";
//	int len=my_strlen(arr);
//	printf("%d\n",len);
//	return 0;
//}


//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES]={1.0,2.0,3.0,4.0,5.0};
//	float* vp=NULL;
//	for(vp=&values[N_VALUES];vp>&values[0];)
//	{
//		*--vp=0;
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10]={0};
//	printf("%p\n",arr);//地址-首元素地址
//	printf("%p\n",&arr[0]);
//
//	printf("%p\n",&arr);
//	//1.&arr-&数组名-这时候数组名表示整个数组--&数组名--取出的是整个数组的大小
//	//2.sizeof(arr)--sizeof(数组名)-这时候数组名表示整个数组--sizeof(数组名)--计算的是整个数组的大小
//	return 0;
//}

//int main()
//{
//	int arr[10]={0};
//	int* p=arr;
//	int i=0;
//	for(i=0;i<10;i++)
//	{
//		*(p+i)=i;
//	}
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",*(p+i));
//	}
//	//通过指针访问数组---*(p+i)==arr[i]
//	printf("\n");
//	for(i=0;i<10;i++)
//	{
//		printf("%p=======%p\n",p+i,&arr[i]);
//	}
//	return 0;
//}

//指针数组--数组--存放指针的数组
//数组指针--指针

int main()
{
	int a=10;
	int b=20;
	int c=30;
	int* pa=&a;
	int* pb=&b;
	int* pc=&c;
	//整型数组--存放整型
	//字符数组--存放字符
	//指针数组--存放指针
	int* arr[3]={&a,&b,&c};//指针数组
	int i=0;
	for(i=0;i<3;i++)
	{
		printf("%d ",*(arr[i]));
	}
	return 0;
}