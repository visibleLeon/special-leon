#include<stdio.h>
#include<string.h>

//void differ(int m,int n)
//{
//	int ret=m^n;//相同为0；相异为1
//	int i=0;
//	int count=0;
//	//求ret中1的个数即可
//	for(i=0;i<32;i++)
//	{
//		if(1==((ret>>i)&1))
//		{
//			count++;
//		}
//	}
//	printf("有%d个bit位不同",count);
//}
//
//
//int main()
//{
//	int m=0;
//	int n=0;
//	scanf("%d%d",&m,&n);
//	differ(m,n);
//	return 0;
//}

//int count_bit(int n)
//{
//	int count=0;
//	while(n)
//	{
//		n=n&(n-1);
//		count++;
//	}
//	return count;
//}
////n=n&(n-1)  ---n&(n-1)会把n最右边的1消掉
////n  13
////1101 n
////1100 n-1
////1100 n
////1011 n-1
////1000 n
////0111 n-1
////0000n
//int main()
//{
//	int a=0;
//	int ret=0;
//	scanf("%d",&a);
//	ret=count_bit(a);
//	printf("%d",ret);
//	return 0;
//}

//int main()
//{
//	int A,B,C,D,E;
//	(B==2&&A==3)==0;
//	(B==2||A==3)==1;
//	(B==2&&E==4)==0;
//	(B==2||E==4)==1;
//	(C==1&&D==2)==0;
//	(C==1||D==2)==1;
//	(C==5&&D==3)==0;
//	(C==5||D==3)==1;
//	(E==4&&A==1)==0;
//	(E==4||A==1)==1;
//	printf("A=%d,B=%d,C=%d,D=%d,E=%d",A,B,C,D,E);
//}



//void print(int m)
//{
//	int i=0;
//	printf("奇数位");
//	for(i=30;i>=0;i-=2)
//	{
//		printf("%d ",(m>>i)&1);
//	}
//	printf("\n");
//	printf("偶数位");
//	for(i=31;i>=1;i-=2)
//	{
//		printf("%d ",(m>>i)&1);
//	}
//	printf("\n");
//}


//int main()
//{
//	int m=0;
//	scanf("%d",&m);
//	print(m);
//	return 0;
//}

//void print(int* p,int sz)
//{
//	int i=0;
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",*(p+i));
//	}
//}
//
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	print(arr,sz);
//	return 0;
//}
//void reverse_string(char* arr)
//{
//	char tmp=arr[0];
//	int len=strlen(arr);
//	arr[0]=arr[len-1];
//	arr[len-1]='\0';
//	if(strlen(arr+1)>=2)//记得递归需要限制条件
//		reverse_string(arr+1);//arr+1,即第二个元素的地址
//	arr[len-1]=tmp;
//}
//
//int main()
//{
//	char arr[]="abcdef";//fedcba
//	reverse_string(arr);
//	printf("%s\n",arr);
//	return 0;
//}




//Digitsum(1729)
//Digitsum(172)+1729%10
//Digitsum(17)+1729%10+172%10
//Digitsum(1)+1729%10+172%10+17%10
//9+2+7+1
//int Digitsum(int a)
//{
//	if(a>9)
//	{
//		return Digitsum(a/10)+a%10;
//	}
//	else
//	{
//		return a;
//	}
//}
//
//int main()
//{
//	unsigned int a=0;
//	int ret=0;
//	scanf("%d",&a);
//	ret=Digitsum(a);
//	printf("ret=%d",ret);
//	return 0;
//}
double Pow(int n,int k)
{
	if(k<0)
		return (1.0/(Pow(n,-k)));
	else if(k==0)
		return 1;
	else
		return n*Pow(n,k-1);
}
int main()
{
	int n=0;
	int k=0;
	double ret=0;
	scanf("%d%d",&n,&k);
	ret=Pow(n,k);
	printf("ret=%lf\n",ret);
	return 0;
}