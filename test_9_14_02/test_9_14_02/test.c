#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
//int main()
//{
//	char a1[]={"*************"};
//	char a2[]={"             "};
//	char a3[]={"             "};
//	int i=0;
//	int left=0;
//	int right=strlen(a1)-1;
//	int mid=(left+right)/2;
//	while(i<=6)
//	{		
//		a2[mid+i]=a1[mid+i];
//		a2[mid-i]=a1[mid-i];
//		printf("%s\n",a2);
//		i++;
//	}
//	for(i=0;i<mid;i++)
//	{
//		a1[i]=a3[i];
//		a1[right-i]=a3[right-i];
//		printf("%s\n",a1);
//	}
//	return 0;
//}

//int main()
//{
//	int i=0;
//	int x=0;
//	int y=0;
//	int z=0;
//	for(i=0;i<=999;i++)
//	{
//		x=i/100;
//		y=(i/10)%10;
//		z=i%10;
//		if(i==x*x*x+y*y*y+z*z*z)
//			printf("ˮ�ɻ�����%d\n",i);
//	}
//	return 0;
//}

//int main()
//{
//	int a=0,sn=0;
//	scanf("%d",&a);
//	sn=5*a+4*10*a+3*100*a+2*1000*a+1*10000*a;
//	printf("%d",sn);
//	return 0;
//}

//int main()
//{
//	int a=0,b=0,c=0,t=0;
//	scanf("%d%d%d",&a,&b,&c);
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
//	printf("%d %d %d",a,b,c);
//
//	return 0;
//}

//int main()
//{
//	int m=24;
//	int n=18;
//	int r=0;
//	scanf("%d%d",&m,&n);
//	while(r=m%n)
//	{
//		m=n;
//		n=r;
//	}
//	printf("%d\n",n);
//	return 0;
//}

void menu()
{
	printf("***********************\n");
	printf("**** 1.play 2.exit ****\n");
	printf("***********************\n");
}
void game()
{
	int guess=0;//���ղµ�����
	//���������rand();
	int ret=0;
	//%100֮��Ϊ0-99��+1Ϊ1-100��
	ret=rand()%100+1;
	//printf("%d\n",ret);
	while(1)
	{
		printf("������֣�");
		scanf("%d",&guess);
		if(guess>ret)
		{
			printf("�´���");
		}
		else if(guess<ret)
		{
			printf("��С��");
		}
		else
		{
			printf("�¶���");
			break;
		}

	}
}

int main()
{
	int input=0;
	srand((unsigned int)time(NULL));//�������ʼ
	//ʱ�������ǰ�����ʱ���ȥ�������ʼʱ�䣨1970.1.1.0��0��0��=��xxxx���룬��ʱ���������������,srand�������ֻ������һ��
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������");
			break;
		}
	}while(input);

	return 0;
}


