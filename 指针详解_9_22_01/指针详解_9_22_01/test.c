#include<stdio.h>

//int main()
//{
//	char ch='w';
//	char* pc=&ch;
//	return 0;
//}


//int main()
//{
//	char arr[]="abcdef";
//	char* pc=arr;
//	printf("%s\n",arr);
//	printf("%s\n",pc);
//	return 0;
//}


//int main()
//{
//	const char* p="abcdef";//"abcdef"��һ�������ַ���
//	printf("%c\n",*p);
//	printf("%s\n",p);
//	return 0;
//}

//�����ַ�������ָ�������*p�ı䣬��const����һ��

//int main()
//{
//	char arr1[]="abcdef";
//	char arr2[]="abcdef";
//	char* p1="abcdef";
//	char* p2="abcdef";
//	if(p1==p2)
//		printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}

//int main()
//{
//	int a=1;
//	int b=2;
//	int c=4;
//	int i=1;
//	int* arr[3]={&a,&b,&c};
//	for(i=0;i<3;i++)
//	{
//		printf("%d\n",*arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[]={1,2,3,4,5};
//	int arr2[]={2,3,4,5,6};
//	int arr3[]={3,4,5,6,7};
//	int i=0;
//	int j=0;
//	int* parr[]={arr1,arr2,arr3};
//
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			printf("%d ",*(parr[i]+j));
//		}
//		printf("\n");
////		parr[i];//��Ԫ�ص�ַ
//	}
//	return 0;
//}

//int main()
//{
//	//arr-��Ԫ�ص�ַ
//	//&arr[0]-��Ԫ�ص�ַ
//	//&arr-�����ַ
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int (*p)[10]=&arr;
//	//�����p��������ָ��--ָ�������ָ��
//	return 0;
//}

//int main()
//{
//	char* arr[5];
//	//ָ������--���ָ�������---ָ������-������-[�����С]
//	char* (*pa)[5]=&arr;
//	//����ָ��--ָ�������ַ----��������-(*pa)-[�����С]
//	return 0;
//}


//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int (*p)[10]=&arr;
//	int i=0;
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",*(*p+i));
//	}
//	return 0;
//}

//void print1(int arr[3][5],int x,int y)
//{
//	int i=0;
//	int j=0;
//	for(i=0;i<x;i++)
//	{
//		for(j=0;j<y;j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print2(int (*p)[5],int x,int y)
//{
//	int i=0;
//	int j=0;
//	for(i=0;i<x;i++)
//	{
//		for(j=0;j<y;j++)
//		{
//			printf("%d ",(*(p+i))[j]);//*(*(p+i)+j)
//		}
//		printf("\n");
//	}
//}

//int main()
//{
//	int arr[3][5]={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
//	print1(arr,3,5);
//	//arr-������-������������Ԫ�ص�ַ-��arr���һά����-��һ��һά����ĵ�ַ
//	print2(arr,3,5);
//	return 0;
//}


 int main()
 {
	 int arr[5]={1,2,3,4,5};
	 int i=0;
	 int* p=arr;
	 for(i=0;i<5;i++)
	 {
		 printf("%d ",p[i]);
		//printf("%d ",*(p+i));
		//printf("%d ",arr[i]);
		//printf("%d ",*(arr+i));
//arr[i]==*(arr+1)==p[i]==*(p+i)
	 }
	 return 0;
 }