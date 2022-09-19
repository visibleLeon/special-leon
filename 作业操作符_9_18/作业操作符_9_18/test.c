#include<stdio.h>


//int count_one_bits(unsigned int a)
//{
//	int i=0;
//	int count=0;
//	for(i=0;i<32;i++)
//	{
//		if(1==((a>>i)&1))
//		{
//			count++;
//		}
//	}
//	if(i==32)
//		return count;
//}
//
//
//int main()
//{
//	unsigned int a=0;
//	int ret=0;
//	scanf("%d",&a);
//	ret=count_one_bits(a);
//	printf("%d\n",ret);
//	return 0;
//}

//void sequence(int a)
//{
//	int i=0;
//	int j=0;
//	int arr1[16]={0};
//	int arr2[16]={0};
//	for(i=0;i<32;i++)
//	{
//		if(i%2==0)
//		{
//			arr1[15-i/2]=((a>>i)&1);
//		}
//		else
//		{
//			arr2[15-(i-1)/2]=((a>>i)&1);
//		}
//	}
//	printf("偶数位二进制序列为：\n");
//	for(j=0;j<16;j++)
//	{
//		printf("%d",arr1[j]);
//	}
//	printf("\n");
//	printf("奇数位二进制序列为：\n");
//	for(j=0;j<16;j++)
//	{
//		printf("%d",arr2[j]);
//	}
//}
//
//int main()
//{
//	int a=0;
//	scanf("%d",&a);
//	sequence(a);
//	return 0;
//}

