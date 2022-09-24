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

//实现bubble的程序员不知道比较的数组类型,用函数指针让使用者设置函数来实现数组比较
void bubble_sort(void* base,int sz,int width,int(*cmp)(const void* e1,const void* e2))
{
	int i=0;
	int j=0;
	for(i=0;i<sz;i++)
	{
		//趟数
		for(j=0;j<sz-1-i;j++)
		{
			//两个元素比较
			if(cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)
			{
				//交换两个元素，把每个字符都交换
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
	//使用bubble的程序员知道自己排序的数据类型
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