#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stddef.h>

//编写宏，计算结构体中某变量相对于首地址的偏移量
#define OFFSETOF(struct_name, member_name) (int)&(((struct_name*)0)->member_name)
struct S
{
	char a;
	int b;
	char c;
};
int main()
{
	printf("%d\n", OFFSETOF(struct S, a));
	printf("%d\n", OFFSETOF(struct S, b));
	printf("%d\n", OFFSETOF(struct S, c));
	return 0;
}
//struct S
//{
//	char a;
//	int b;
//	char c;
//};
//int main()
//{
//	printf("%zd\n",offsetof(struct S, a));
//	printf("%zd\n", offsetof(struct S,b));
//	printf("%zd\n", offsetof(struct S, c));
//	return 0;
//}