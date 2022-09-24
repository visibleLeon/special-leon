#include<stdio.h>


void Swap(char* buf1,char* buf2,int width)
{
	int i=0;
	char tmp=0;
	for(i=0;i<width;i++)
	{
		tmp=*buf1;
		*buf1=*buf2;
		*buf2=tmp;
		buf1++;
		buf2++;
	}
}

//ʵ��bubble�ĳ���Ա��֪���Ƚϵ���������,�ú���ָ����ʹ�������ú�����ʵ������Ƚ�
void bubble_sort(void* base,int sz,int width,int(*cmp)(const void* e1,const void* e2))
{
	int i=0;
	int j=0;
	for(i=0;i<sz;i++)
	{
		//����
		for(j=0;j<sz-1-i;j++)
		{
			//����Ԫ�رȽ�
			if(cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)
			{
				//��������Ԫ�أ���ÿ���ַ�������
				Swap((char*)base+j*width,(char*)base+(j+1)*width,width);
			}

		}
	}
}
struct Stu
{
	char name[20];
	int age;
};

int cmp_int(const void* e1,const void* e2)
{
	return *(int*)e1-*(int*)e2;
}

int cmp_stu_by_age(const void* e1,const void* e2)
{
	return ((struct Stu*)e1)->age-((struct Stu*)e2)->age;
}

void test1()
{
	int arr[10]={9,8,7,6,5,4,3,2,1,0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	//ʹ��bubble�ĳ���Ա֪���Լ��������������
	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
}



void test2()
{
	struct Stu s[3]={{"zhangsan",20},{"lisi",30},{"wangwu",10}};
	int sz=sizeof(s)/sizeof(s[0]);
	bubble_sort(s,sz,sizeof(s[0]),cmp_stu_by_age);
}

int main()
{
	test1();
	test2();
	return 0;
}