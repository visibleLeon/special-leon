#include<stdio.h>
#include<string.h>
#include<math.h>
//int main()
//{
//	int i=0;
//	int j=0;
//	for(i=100;i<=200;i++)
//	{
//		for(j=2;j<=i;j++)
//		{
//			if(i%j==0)
//			{
//				break;
//			}
//		}
//		if(i==j)
//		{
//			printf("%d ",i);
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	int i=0;
//	int j=0;
//	for(i=100;i<=200;i++)
//	{
//		for(j=2;j<=sqrt(i);j++)
//		{
//			if(i%j==0)
//			{
//				break;
//			}
//		}
//		if(j>sqrt(i))
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i=0;
//	int j=0;
//	for(i=101;i<=200;i+=2)
//	{
//		for(j=2;j<=sqrt(i);j++)
//		{
//			if(i%j==0)
//			{
//				break;
//			}
//		}
//		if(j>sqrt(i))
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i=0;
//	int j=0;
//	int k=0;
//	for(i=1;i<=9;i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//			k=i*j;
//			printf("%d*%d=%d	",i,j,k);
//		}
//		if(j>i)
//		{
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i=0;
//	for(i=1000;i<=2000;i+=4)
//	{
//		printf("%d ",i);
//	}
//	return 0;
//}

//int main()
//{
//	int x=5;
//	int y=8;
//	int z=0;
//	z=y;
//	y=x;
//	x=z;
//	printf("x=%d,y=%d",x,y);
//	return 0;
//}

//int main()
//{
//	int x=5;
//	int y=8;
//	x=x+y;
//	y=x-y;
//	x=x-y;
//	printf("x=%d,y=%d",x,y);
//	return 0;
//}

//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,11,10};
//	int i=0;
//	int max=arr[0];
//	for(i=0;i<10;i++)
//	{
//		if(arr[i]>max)
//			max=arr[i];
//	}
//	printf("max=%d",max);
//
//	return 0;
//}

//int main()
//{
//	int a=0,b=0,c=0,t=0;
//	printf("请输入三个数a,b,c:");
//	scanf("%d %d %d",&a,&b,&c);
//	if(a<b)
//	{
//		t=a;
//		a=b;
//		b=t;
//	}
//	if(a<c)
//	{
//		t=a;
//		a=c;
//		c=t;
//	}
//	if(b<c)
//	{
//		t=b;
//		b=c;
//		c=t;
//	}
//	printf("三个数按从大到小排列为%d>%d>%d",a,b,c);
//	return 0;
//}

//int main()
//{
//	int i=0,x=15,y=20,max=0;
//	for(i=1;((i<=x)&&(i<=y));i++)
//	{
//		if((x%i==0)&&(y%i==0))
//		{
//			max=i;
//		}
//	}
//	printf("最大公约数为：%d",max);
//
//	return 0;
//}

//int main()
//{
//	int n=0,m=0,i=0,t=0;
//	int arr1[20]={0};
//	int arr2[20]={0};
//	printf("输入数组大小：");
//	scanf("%d",&n);
//	printf("请输入arr1数组值：");
//	for(m=0;m<n;m++)
//	{
//		scanf("%d",&arr1[m]);
//	}
//	printf("\n请输入arr2数组值：");
//	for(m=0;m<n;m++)
//	{
//		scanf("%d",&arr2[m]);
//	}
//	for(i=0;i<n;i++)
//	{
//		t=arr1[i];
//		arr1[i]=arr2[i];
//		arr2[i]=t;
//	}
//	printf("交换后两数组值"); 
//	printf("arr1:");
//	for(m=0;m<n;m++)
//	{
//		printf("%d ",arr1[m]);
//	}
//	printf("\narr2:");
//	for(m=0;m<n;m++)
//	{
//		printf("%d ",arr2[m]);
//	}
//	return 0;
//}

//int main()
//{
//	int i=0;
//	double a=0;
//	double sum=0;
//	for(i=1;i<=100;i++)
//	{
//		if(i%2!=0)
//			a=1.0/i;
//		else
//			a=-1.0/i;
//		sum=sum+a;
//	}
//	printf("sum=%lf",sum);
//
//	return 0;
//}
//int main()
//{
//	int i=0,count=0;
//	for(i=1;i<=100;i++)
//	{
//		if(i%10==9||i/10==9)
////i%10==9个位是9，i/10==9十位是九
//			count++;
//	}
//	printf("%d",count);
//	return 0;
//}

