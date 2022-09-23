#include<stdio.h>
#include<stdlib.h>



//void bubble_sort(int arr[],int sz)
//{
//	int tmp=0;
//	int i=0;
//	int j=0;
//	for(i=0;i<sz-1;i++)
//	//һ��ð������
//	{
//		for(j=0;j<sz-1-i;j++)
//		//һ��ð�����򽻻��Ĵ���
//		{
//			if(arr[j]>arr[j+1])
//			{
//				tmp=arr[j];
//				arr[j]=arr[j+1];
//				arr[j+1]=tmp;
//			}
//		}
//	}
//}

struct Stu
{
	char name[20];
	int age;
};

//void qsort(void* base,
//		   size_t num,
//		   size_t width,
//		   int(*cmp)(const void* e1,const void* e2)//����ָ�룬����һ������
//		   //void*���Խ����������͵�����;void*���͵�ָ�벻�ܽ��н����ò���
//		   );
//int cmp_input(const void* e1,const void* e2)
//{
//	//�Ƚ���������ֵ
//	return (*(int*)e1)-(*(int*)e2);
//}

//int main()
//{
//	int arr[10]={9,8,7,6,5,4,3,2,1,0};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	struct Stu s[3]={{"zhangsan",20},{"lisi",30},{"wangwu",10}};
//
//	float f[]={9.0,8.0,7.0,6.0,5.0,4.0};
//	int i=0;
//	qsort(arr,sz,sizeof(arr[0]),cmp_input);	
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//
//	return 0;
//}

int cmp_input(const void* e1,const void* e2)
{
	//�Ƚ���������ֵ
	return (*(int*)e1)-(*(int*)e2);
}


void test1()
{
	int arr[10]={9,8,7,6,5,4,3,2,1,0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	int i=0;
	qsort(arr,sz,sizeof(arr[0]),cmp_input);	
	for(i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	}
}

int cmp_float(const void* e1,const void* e2)
{
	return (int)((*(float*)e1)-(*(float*)e2));
}
void test2()
{
	float f[]={9.0,8.0,7.0,6.0,5.0,4.0};
	int sz=sizeof(f)/sizeof(f[0]);
	int j=0;
	qsort(f,sz,sizeof(f[0]),cmp_float);
	for(j=0;j<sz;j++)
	{
		printf("%f ",f[j]);
	}
}

int cmp_stu_by_age(const void* e1,const void* e2)
{
	return ((struct Stu*)e1)->age-((struct Stu*)e2)->age;
	//��void*ǿ��ת����struct Stu*���ṹ��ָ�룩Ȼ��ָ��ṹ���Ա
}
void test3()
{
	struct Stu s[3]={{"zhangsan",20},{"lisi",30},{"wangwu",10}};
	int sz=sizeof(s)/sizeof(s[0]);
	int k=0;
	qsort(s,sz,sizeof(s[0]),cmp_stu_by_age);
	for(k=0;k<sz;k++)
	{
		printf("%d ",s[k].age);
	}
}
#include<string.h>
int cmp_stu_by_name(const void* e1,const void* e2)
{
	//�Ƚ��ַ�������ֱ���ô���С�ڣ�Ӧ����strcmp����
	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
}

void test4()
{
	struct Stu s[3]={{"zhangsan",20},{"lisi",30},{"wangwu",10}};
	int sz=sizeof(s)/sizeof(s[0]);
	int m=0;
	qsort(s,sz,sizeof(s[0]),cmp_stu_by_name);
	for(m=0;m<sz;m++)
	{
		printf("%s ",s[m].name);
	}
}
int main()
{
	//test1();
	//test2();
	//test3();
	test4();
	return 0;
}