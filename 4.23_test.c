#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct S
{
	int n;
	int* arr;
};
int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	ps->arr = malloc(5*sizeof(int));
	int i = 0;

	for (i = 0; i < 5; i++)
	{
		ps -> arr[i] = i;
	}
	/*for (i = 0; i < 5; i++)
	{
		printf("%d ",ps->arr[i]);
	}*/

	int* ptr = realloc(ps->arr, 10 * sizeof(int));
	if (ptr != NULL)
	{
		ps->arr = ptr;
	}

	for (i = 5; i < 10; i++)
	{
		ps->arr[i] = i;
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d ",ps->arr[i]);
	}

	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;
	return 0;
}
//柔型数组
// 方便释放空间
// 效率更高 - 其直接创建一个连续的空间，是cup读取的效率更高
//struct S
//{
//	int a;
//	//int arr[];
//	int arr[0];//未知大小的 - 柔性数组 - 数组的大小是可调整的
//};
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5*sizeof(int));
//	ps->a = 100;
//	int i = 0;
//
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//
//	struct S* ptr = (struct S*)realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",ps->arr[i]);
//	}
//
//	free(ps);
//	ps = NULL;
//	return 0;
//}
//void test()
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);    //free释放空间后，并不会把str置为NULL
//	str = NULL;//加此语句进行改正
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//int main()
//{
//	test();
//	return 0;
//}
//改正2
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//void test()
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	test();
//	return 0;
//}

//改正1
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void test()
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	test();
//	return 0;
//}

//1.程序运行会出现崩溃现象
//2.程序存在内存泄漏的问题
//p是GetMemory函数的形参，只在函数内部有效，等GetMemory函数返回之后，动态开辟内存未释放，并且无法找到，所以会造成内存泄漏
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void test()
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hellow woeld");
//	printf("%s\n",str);
//}
//int main()
//{
//	test();
//	return 0;
//}
//char* GetMemory(void)
//{
//	char p[] = "hello world";  //返回栈空间地址的问题
//	return p;
//}
//test()
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	test();
//	return 0;
//}