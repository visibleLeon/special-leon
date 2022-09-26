#include<stdio.h>
#include<string.h>

//void print(int n)
//{
//	if(n>9)
//	{
//		print(n/10);
//	}
//	printf("%d ",n%10);
//}
////  %10求个位，/10求其他位
//int main()
//{
//	 unsigned int num=0;
//	 scanf("%d",&num);//1234
//	 //递归
//	 print(num);
//	 //print(1234)
//	 //print(123) 4
//	 //print(12) 3 4
//	 //print(1) 2 3 4
//	return 0;
//}
//int my_strlen(char* p)
//{
//	int count=0;
//	while(*p!='\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//int my_strlen(char* p)
//{
//	if(*p!='\0')
//	{
//		return 1+my_strlen(p+1);
//	}
//	else
//		return 0;
//}
////my_strlen("byte")
////1+my_strlen("yte")
////1+1+my_strlen("te")
////1+1+1+my_strlen("e")
////1+1+1+1+my_strlen("")
//
//int main()
//{
//	char a[]="byte";
//	int len=my_strlen(a);
//	//数组传参，传的是首元素的地址
//	printf("%d\n",len);
//	return 0;
//}

//int Fac1(int n)
//{
//	int i=0;
//	int ret=1;
//	for(i=1;i<=n;i++)
//	{
//		ret*=i;
//	}
//	return ret;
//}
//int Fac2(int n)
//{
//	if(n<=1)
//		return 1;
//	else
//		return n*Fac2(n-1);
//}
//
////Fac(n)  n<=1  1;n>1   n*Fac(n-1)
//
//int main()
//{
//	int n=0;
//	int ret=0;
//	scanf("%d",&n);
//	ret=Fac2(n);
//	printf("%d",ret);
//	return 0;
//}

//1 1 2 3 5 8
//Fib(n)   n<=2  1;n>2  Fib(n-1)+Fib(n-2)
//int Fib(int n)
//{
//	if(n<=2)
//		return 1;
//	else
//		return Fib(n-1)+Fib(n-2);
//}
//int Fib(int n)
//{
//	int a=1;
//	int b=1;
//	int c=1;
//	while(n>2)
//	{
//		c=a+b;
//		a=b;
//		b=c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int i=0;
//	int ret=0;
//	scanf("%d",&i);
//	ret=Fib(i);
//	printf("%d",ret);
//	return 0;
//}

