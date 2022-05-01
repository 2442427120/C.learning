#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
//if (p != NULL)  if(!p) if(p == NULL)
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
///*#ifdef DEBUG */// ifdef DEBUG 定义了，下面的语句就执行，反之不执行
//
//#if 1 // #if为真，则执行下面的语句
//		printf("%d ",arr[i]);
//#endif
//	}
//	return 0;
//}
//#define MAX 100
//int main()
//{
//	printf("MAX = %d\n", MAX);
//#undef MAX//#undef用于取消一个宏定义
//
//	printf("%d\n", MAX);
//	return 0;
//}

#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

#define MAX(a,b) ((a)>(b)?(a):(b))

int Max(int x, int y)
{
	return (x > y ? x : y);
}

int main()
{
	int a = 10;
	int b = 20;

	int max = Max(a, b);
	printf("max = %d\n", max);
	max = MAX(a, b);
	printf("max = %d\n", max);
	return 0;
}
//int main()
//{
//	int a = 10;
//	int b = a + 1;
//	b = ++a;
//
//	printf("a = %d b = %d\n",a, b);
//
//	return 0;
//}
//#define CAT(x, y) x##y // ##可以把位于它两边的符号合成一个符号。
//#include <stdio.h>
//int main()
//{
//	int class84 = 2022;
//	printf("%d\n",CAT(class, 84));
//	return 0;
//}