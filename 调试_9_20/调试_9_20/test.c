#include<stdio.h>
#include<string.h>
//int main()
//{
//	int i=0;
//	int j=0;
//	int n=0;
//	int sum=0;
//	int ret=1;
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		ret=1;
//		for(j=1;j<=i;j++)
//		{
//			ret*=j;
//		}
//		sum+=ret;		
//	}
//	printf("%d\n",sum);
//	return 0;
//}



//int main()
//{
//	int i=0;
//	int n=0;
//	int ret=1;
//	int sum=0;
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		ret*=i;
//		sum+=ret;
//	}
//	printf("%d\n",sum);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//
//	printf("%d\n",&i);
//	printf("%d\n",arr);
//
//   // for(i=0; i<=12; i++)
//   //{
//   //     arr[i] = 0;
//   //     printf("hehe\n");
//   //}
//    return 0;
//}

//void my_strcpy(char* dest,char* src)
//{
//	while(*src!='\0')
//	{
//		*dest=*src;
//		src++;
//		dest++;
//	}
//	*dest=*src;
//}

//void my_strcpy(char* dest,char* src)
//{
//	if(dest!=NULL&&src!=NULL)//�ж�ָ����Ч�ԣ�����������
//	{
//		while(*dest++=*src++)
//		{
//			;
//		}
//	}
//}
//#include<assert.h>
////��my_strcpy����dest��ʼʱ�ĵ�ַ
//char* my_strcpy(char* dest,const char* src)//const char* src����ԭʼ���ݣ����ܸı�*src
//{
//	char* ret=dest;
//	assert(dest!=NULL);//����
//	assert(src!=NULL);//����
//	//��srcָ����ַ���������destָ��Ŀռ䣬����\0;
//	while(*dest++=*src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	//strcpy
//	//�ַ�������
//	char arr1[]="###";
//	char arr2[]="bit";
//	printf("%s\n",my_strcpy(arr1,arr2));
//	return 0;
//}


//int main()
//{
//	const int num=10;
//	int* const p=&num;
//	int n=100;
//	*p=20;
//	printf("%d\n",num);
//	return 0;
//}

#include<assert.h>
int my_strlen(const char* str)//��֤*str���ᱻ�ı�
{
	int count=0;
	assert(str!=NULL);//��ָ֤�����Ч��
	while(*str!='\0')
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char arr[]="abcdef";
	int len=my_strlen(arr);
	printf("%d\n",len);
	return 0;
}