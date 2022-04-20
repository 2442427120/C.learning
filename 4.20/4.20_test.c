#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//指针的形式得到当前机器的字节序存储模式
//int check_sys()
//{
//	int a = 1;
//	return *(char*)& a;
//
//}
//联合体的形式实现 - 联合体其成员共用一个内存空间 - 空间大小取决于最大1成员的类型所占字节
int check_sys()
{
	union Un
	{
		char c;
		int i;
	}u;
	//返回1，小端模式
	//返回0, 大端模式
	u.i = 1;

	return u.c;
}
int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}

	return 0;
}
//enum Color
//{
//	//枚举的可能取值-常量
//	RED,//0
//	GREEN,//1
//	BLUE//2
//};
//enum Sex
//{
//	MALE,//0
//	FEMALE//1
//};
//int main()
//{
//	/*enum Color c = RED;
//	enum Sex s = MALE;*/
//	printf("%d %d %d\n",RED,GREEN,BLUE);
//	printf("%d %d\n", MALE, FEMALE);
//	return 0;
//}
//位断的定义和内存计算
//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//	int e : 17;
//
//};
//int main()
//{
//	struct S s ={0};
//	printf("%d\n",sizeof(s));
//	return 0;
//}

//结构体的初始化和打印
//struct S
//{
//	int a;
//	char b;
//	double c;
//};
//
//void Init(struct S* ps)
//{
//	ps->a = 100;
//	ps->b = 'w';
//	ps->c = 3.14;
//}
//
////传值 - 结构体过大时，参数压栈的系统开销比较大，所以会导致系统性能的下降
//void Print1(struct S tmp)
//{
//	printf("%d %c %lf",tmp.a, tmp.b, tmp.c);
//}
//
////传址 - 一般情况下结构体参数传址更好
//void Print2(const struct S* ps)
//{
//	printf("%d %c %lf",ps->a, ps->b, ps->c);
//}
//
//int main()
//{
//	struct S s = { 0 };
//	Init(&s);//结构体初始化，给结构域体赋值
//	Print1(s);
//	Print2(&s);
//	return 0;
//}
