#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>

//int main()
//{
//	int age=25;
//	if(age<18)
//		printf("δ����\n");
//	else if(age>=18&&age<28)
//		printf("����\n");
//	else if(age>=28&&age<50)
//		printf("׳��\n");
//
//	return 0;
//}


//����֮����Ѿ������ˣ����Դ�ʱ����elseû���𣬲���return2��ֵ��
//int main()
//{
//	int i=5;
//	if(i<3)
//	{
//		return 2;
//	}
//	return 3;
//	
//}

//int main()
//{
//	int i=1;
//	while(i<=100)
//	{
//		if(i%2!=0)
//			printf("%dΪ����\n",i);
//	    i++;
//	}
//	return 0;
//}

//int main()
//{
//	int day=0;
//	scanf("%d",&day);
//	switch(day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int n=1;
//	int m=2;
//	switch(n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch(n)
//		{//switch����Ƕ��ʹ��
//		case 1:n++;
//		case 2:m++,n++;
//			break;
//		}
//	case 4:m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d��n=%d\n",m,n);
//	return 0;
//}

//int main()
//{
//	int i=0;
//	while(i<=10)
//	{
//		i++;
//		if(i==5)
//			continue;
//		printf("%d ",i);
//		
//	}
//	return 0;
//}

//int main()
//{
//	int ch=0;
//	//crtl+z
//	//EOF--end of file->-1
//	while((ch=getchar())!=EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int ret=0;
//	int ch=0;
//	char password[20]={0};
//	printf("���������룺>");
//	scanf("%s",password);
//	while((ch=getchar())!='\n')
//	{;}//��һ���������ѭ������һֱִ�У���ջ�������
//	printf("��ȷ�ϣ�Y/N����>");
//	ret=getchar();
//	if(ret=='Y')
//		printf("ȷ�ϳɹ�");
//	else
//		printf("����ȷ��");
//	return 0;
//}

//int main()
//{
//	int ch=0;
//	while((ch=getchar())!=EOF)
//	{
//		if(ch<'0'||ch>'9')
//			continue;
//		putchar(ch);
//	}
//	//ֻ����������ַ���
//	return 0;
//}

//int main()
//{
//	int i=0;
//	int arr[10]={0,1};
//	for(i=0;i<10;i++)
//	{
//		
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	for(;;)
//	{
//		printf("haha\n");
//	}
//	return 0
//}

//int main()
//{
//	int i=1;
//	do
//	{
//		printf("%d",i);
//	}
//	while(i<=10);
//	return 0;
//}


//int main()
//{
//	int i=0;
//	int n=0;
//	int ret=1;
//	int sum=0;
//	for(n=1;n<=3;n++)
//	{
//		ret=1;
//		for(i=1;i<=n;i++)
//		{
//			ret=ret*i;
//		}
//		sum=sum+ret;
//		
//	}
//	printf("sum=%d\n",sum);
//
//	return 0;
//}

//int main()
//{
//	int n=0;
//	int ret=1;
//	int sum=0;
//	for(n=1;n<=3;n++)
//	{
//		ret=ret*n;
//		sum=sum+ret;
//	}
//	printf("sum=%d\n",sum);
//
//	return 0;
//}

//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9};
//	int k=7;
//	int i=0;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	for(i=0;i<sz;i++)
//	{
//		if(k==arr[i])
//		{
//			printf("�±��ǣ�%d\n",i);
//			break;
//		}
//	}
//	if(i==sz)
//		printf("�Ҳ���\n");
//	return 0;
//}


//�۰�����㷨�����ֲ����㷨
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int k=11;
//	int left=0;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int right=sz-1;
//	int mid=0;
//	while(left<=right)
//	{
//		int mid=(left+right)/2;
//		if(arr[mid]>k)
//			right=mid-1;
//		else if(arr[mid]<k)
//			left=mid+1;
//		else 
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n",mid);
//			break;
//		}
//	}
//	if(left>right)
//		printf("�Ҳ���\n");
//	return 0;
//}

//char arr[]="abc";
//[a b c \0]
// 0 1 2 3
//
//int main()
//{
//	char arr1[]="welcome to bit!!!!!!";
//	char arr2[]="####################";
//	int left=0;
////	int right=sizeof(arr1)/sizeof(arr1[0])-2;
//	int right=strlen(arr1)-1;
//
//	while(left<=right)
//	{
//		arr2[right]=arr1[right];
//		arr2[left]=arr1[left];
//		
//		system("cls");//ִ��ϵͳ�����һ������-cls-�����Ļ
//		printf("%s\n",arr2);
//		
//		//��Ϣ1s
//		Sleep(1000);
//		
//		left++;
//		right--;
//	}
//
//	return 0;
//}

//int main()
//{
//	int i=0;
//	int password[20]={0};
//	for(i=0;i<3;i++)
//	{
//		printf("���������룺 ");
//		scanf("%s",password);
//		//if(password=="123456")//==���������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯��-strcmp
//		if((strcmp(password,"123456"))==0)
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if(i==3)
//		printf("�˳�����\n");
//	return 0;
//}


