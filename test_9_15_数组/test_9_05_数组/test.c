#include<stdio.h>
#include<string.h>

//int main()
//{
//	char arr[]="abcdef";
//	printf("%d\n",sizeof(arr));//sizeof�Ǽ�����������飬���͵Ĵ�С����λ���ֽڡ�
//	printf("%d\n",strlen(arr));//strlenֻ������ַ����󳤶�
//	return 0;
//}

//int main()
//{
//	char a1[]="abcdef";
//	int i=0;
//	//for(i=0;i<6;i++)
//	for(i=0;i<(int)strlen(a1);i++)//strlen����ֵ��һ���޷���ֵ
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
//		printf("&arr[%d]=%p\n",i,&arr[i]);//��ӡ��ַ��%p
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
//	for(i=0;i<sz-1;i++)//ð�ݺ���������
//	{
//		int flag=1;//������һ���Ѿ�����
//		for(j=0;j<sz-1-i;j++)//ÿһ�˵�ð������
//		{
//			if(arr[j]>arr[j+1])
//			{
//				int tmp=arr[j];
//				arr[j]=arr[j+1];
//				arr[j+1]=tmp;
//				flag=0;//����������ʵ����ȫ����
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
//	//��arr���������ų�����
//	//arr�����飬���Ƕ�arr���д��ε�ʱ��ʵ���ϴ��ݹ�ȥ����&arr[0]
//	bubble_sort(sz,arr);//ð��������
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





