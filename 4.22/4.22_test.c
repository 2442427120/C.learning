#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
int main()
{
	int* p = (int*)malloc(5 * sizeof(int));

	if (p == NULL)
	{
		printf("%s\n",strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 5; i++)
		{
			*(p + i) = i;
		}
	}
	//realloc函数可以给动态开辟的空间增加或减少空间
	//realloc函数使用的注意事项
	//1.当新开辟的空间可以在原空间后追加且不会越界访问到下一个开辟了的空间时(也就是p指向的空间之后有足够的内存空间)，
	//  直接在原空间后追加，此时原空间地址不会改变，内容不变(返回p)

	//2.当开辟的空间过大，直接在原空间后面追加会非法越界访问到下一个已经开辟了的空间(也就是p指向的空间之后没有足够的内存空间)，
	//  所以此时realloc函数会重新开辟一块满足需求的新的空间，并且把原来内存中的数据拷贝回来，释放旧的内存空间，最后返回重新开辟的内存空间地址
	//3.得用一个新的变量来接收realloc函数的返回值，如果是用旧的，则若realloc函数返回为NULL时，旧的那个指针就会找不到
	int* ptr = realloc(p, 40);

	if (ptr != NULL)
	{
		p = ptr;
		int i = 0;

		for (i = 5; i < 10; i++)
		{
			*(p + i) = i;
		}

		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
	}

	free(p);
	p = NULL;

	return 0;
}
//calloc函数的使用
//int main()
//{
//	//malloc和calloc不同之处在于malloc函数开辟空间时不会给空间中每个字节初始化
//	//而calloc函数则会将空间中的每个字节都初始化为0
//	int* p= (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ",(p+i));
//		}
//	}
//	free(p);
//	p = NULL;
//}
//malloc函数开辟的使用 ,一定要进行返回值的判断
//int main()
//{
//	//向内存申请10个整形空间
//	int* p = (int*)malloc(10*sizeof(int));
//	if (p == NULL)
//	{
//		//打印错误原因的信息
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//		//使用开辟好的空间
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ",*(p+i));
//		}
//	}
//	//当动态申请的空间不再使用时
//	//就应该把它还给操作系统
//	free(p);
//	p = NULL;
//	return 0;
//}
//struct S
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	struct S s[n];//c语言是可以创建变长数组的，C99中增加了，但不是所有编译器都支持
//	return 0;
//}
