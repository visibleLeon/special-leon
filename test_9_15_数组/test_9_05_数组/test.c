#include<stdio.h>
#include<string.h>

//int main()
//{
//	char arr[]="abcdef";
//	printf("%d\n",sizeof(arr));//sizeof是计算变量，数组，类型的大小，单位是字节。
//	printf("%d\n",strlen(arr));//strlen只能针对字符串求长度
//	return 0;
//}

//int main()
//{
//	char a1[]="abcdef";
//	int i=0;
//	//for(i=0;i<6;i++)
//	for(i=0;i<(int)strlen(a1);i++)//strlen返回值是一个无符号值
//	{
//		printf("%c ",a1[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int i=0;
//	for(i=0;i<sz;i++)
//	{
//		printf("&arr[%d]=%p\n",i,&arr[i]);//打印地址用%p
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][4]={};
//	char ch[5][6];
//	return 0;
//}

//int main()
//{
//	int arr[3][4]={{1,2,3},{4,5}};
//	int i=0,j=0;
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<4;j++)
//		{
//			arr[i][j]=4*i+j;
//		}
//		
//	}
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<4;j++)
//		{
//			printf("&arr[%d][%d]=%p\n",i,j,&arr[i][j]);
//		}		
//	}
//	return 0;
//}
//void bubble_sort(int sz,int arr[])
//{
//	int i=0;
//	int j=0;
//	for(i=0;i<sz-1;i++)//冒泡函数的趟数
//	{
//		int flag=1;//假设这一趟已经有序
//		for(j=0;j<sz-1-i;j++)//每一趟的冒泡排序
//		{
//			if(arr[j]>arr[j+1])
//			{
//				int tmp=arr[j];
//				arr[j]=arr[j+1];
//				arr[j+1]=tmp;
//				flag=0;//本趟排序其实不完全有序
//			}
//				
//		}
//		if(flag==1)
//		{
//			break;
//		}
//	}
//	
//}
//
//int main()
//{
//	int arr[]={9,8,7,6,5,4,3,2,1,0};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int i=0;
//	//对arr进行排序，排成升序
//	//arr是数组，我们对arr进行传参的时候，实际上传递过去的是&arr[0]
//	bubble_sort(sz,arr);//冒泡排序函数
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",arr[i]);
//	}	
//	return 0;
//}

//int main()
//{
//	int arr[]={1,2,3,4,5,6};
//	printf("%p\n",arr);
//	printf("%p\n",&arr[0]);
//	printf("%p\n",&arr);
//
//	printf("%p\n",arr+1);
//	printf("%p\n",&arr[0]+1);
//	printf("%p\n",&arr+1);
//
//	printf("%d\n",*arr);
//	return 0;
//}





