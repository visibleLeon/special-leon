#include<stdio.h>




typedef struct Stu
{
	//成员变量
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;

void print1(Stu tmp)
{
	printf("name:%s\n",tmp.name);
	printf("age:%d\n",tmp.age);
	printf("tele:%s\n",tmp.tele);
	printf("sex:%s\n",tmp.sex);
}

void print2(Stu* ps)
{
	printf("name:%s\n",ps->name);
	printf("age:%d\n",ps->age);
	printf("tele:%s\n",ps->tele);
	printf("sex:%s\n",ps->sex);
}

int main()
{
	Stu s={"李四",30,"18532415642","男"};
	//打印结构体数据
	print1(s);
	print2(&s);
	return 0;
}

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[20];
//	struct S s;
//	char* pc;
//};
//
//int main()
//{
//	char arr[]="hello bit\n";
//	struct T t={"hehe",{100,'w',"hello world",3.14},arr};
//	printf("%s\n",t.ch);//hehe
//	printf("%s\n",t.s.arr);//hello world
//	printf("%lf\n",t.s.d);//3.14
//	printf("%s\n",t.pc);//hello bit
//	return 0;
//}