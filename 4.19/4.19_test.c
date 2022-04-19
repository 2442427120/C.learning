#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stddef.h>
struct S
{
	char a;
	int b;
	double c;

};

int main()
{
	printf("%zd\n", offsetof(struct S,a));//offsetof计算偏移量
	printf("%zd\n", offsetof(struct S, b));
	printf("%zd\n", offsetof(struct S, c));
	return 0;
}
////设置默认对齐位为4
//#pragma pack(4)
//struct S
//{
//	char a;
//	double b;
//
//};
////取消设置的默认对齐数
//#pragma pack()
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}
//结构体变量的初始化
//struct T
//{
//	char f[20];
//	char g[20];
//};
//struct S
//{
//	int a;
//	char b;
//	char c[20];
//	struct T t;
//	double d;
//	char e[20];
//
//
//};
//int main()
//{
//	struct S s = { 100,'t',"welcome",{"to","my"},20.48,"world"};
//	printf("%d %c %s %s %s %lf %s",s.a, s.b, s.c, s.t.f, s.t.g, s.d, s.e);
//	return 0;
//}
//结构体的自引用
//struct node
//{
//	int data;
//	struct node* next;
//};
//int main()
//{
//	return 0;
//}
//自定义实现memmove函数
//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	void* start = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	if (dest < src)
//	{
//		//前 -> 后
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//后 -> 前
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	return start;
//}
//int main()
//{
//	//dest > src  1 2 3 4 3 4 5 6 7 10
//	//dest < src  1 2 4 5 6 7 8 8 9 10
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//my_memmove(arr + 4, arr + 2, 20);
//	my_memmove(arr + 2, arr + 3, 20);
//	int i = 0;
//
//	for (i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
//	{
//		printf("%d ",arr[i]);
//	}
//}
