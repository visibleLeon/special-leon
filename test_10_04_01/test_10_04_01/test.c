#include<stdio.h>
#include<string.h>
#include<assert.h>


//void reverse(char* str)
//{
//	int len=strlen(str);
//	char* left=str;
//	char* right=str+len-1;
//
//	assert(str);
//
//	while(left<right)
//	{
//		char tmp=*left;
//		*left=*right;
//		*right=tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[256]={0};
//	//scanf("%s",arr);//abcdef---fedcba
//	gets(arr);//读取一行
//	//逆序函数
//	reverse(arr);
//	printf("逆序后的字符串%s\n",arr);
//	return 0;
//}

//int main()
//{
//	int a=0;
//	int n=0;
//	int i=0;
//	int sum=0;
//	int ret=0;
//	scanf("%d%d",&a,&n);
//	for(i=0;i<n;i++)
//	{
//		ret=ret*10+a;
//		sum+=ret;
//	}
//	printf("%d",sum);
//	return 0;
//}

#include<math.h>

//int main()
//{
//	int i=0;	
//	for(i=0;i<10000;i++)
//	{
//		int n=1;
//		int sum=0;
//		int tmp=0;
//		//判断是否为自幂数
//		//1.计算i的位数-n位数
//		tmp=i;
//		while(tmp/=10)
//		{
//			n++;
//		}
//		//2.计算i的每一位的n次方之和
//		tmp=i;
//		while(tmp)
//		{
//			sum+=(int)pow(tmp%10,n);
//			tmp/=10;
//		}
//		//3.比较i==sum
//		if(i==sum)
//		{
//			printf("%d ",i);
//		}
//	}
//}

int main()
{
	int line=0;
	int i=0;
	scanf("%d",&line);//7-1
	//打印上半部分
	for(i=0;i<line;i++)
	{
		//打印空格
		int j=0;
		for(j=0;j<line-1-i;j++)
		{
			printf(" ");
		}
		//打印*
		for(j=0;j<2*i+1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//打印下半部分
	for(i=0;i<line-1;i++)
	{
		int j=0;
		//打印空格
		for(j=0;j<i+1;j++)
		{
			printf(" ");
		}
		//打印*
		for(j=0;j<2*line-3-2*i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}