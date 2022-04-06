#pragma once
#include<stdio.h>
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
void print2(int(*p)[5], int x, int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			//printf("%d ", *(*(p + i) + j));
			//printf("%d ", (*(p + i))[j]);
			printf("%d ", p[i][j]);
			//printf("%d ", *(p[i] + j));
		}
		printf("\n");

	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	/*print1(arr, 3, 5);*/
	print2(arr, 3, 5);
	return 0;
}
//数组指针 是指针
//int main()
//{
//	int* p = NULL;// p是整形指针 - 指向整形的指针 - 可以存放整形的地址
//	char* pc = NULL; // pc是字符指针 -指向字符的指针 - 可以存放字符的地址
//	// int arr[10] = {0};
//	//arr - 首元素地址
//	//&arr[0] - 首元素地址
//	//&arr - 数组的地址
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr; //数组的地址要存起来
//	//上面的p就是数组指针
//	//数组指针 - 指向数组的指针 - 用来存放数组的地址
//	return 0;
//}
//指针数组 是数组
//int main()
//{
//	//int arr1[] = { 1,2,3,4,5 };//整形指针数组
//	//int arr2[] = { 2,3,4,5,6 };
//	//int arr3[] = { 3,4,5,6,7 };
//	//int* parr[] = { arr1,arr2,arr3 };//存放整形指针的数组-指针数组
//	//char ch1[] = "abcdef"; //字符指针数组
//	//char ch2[] = "bcdefg";
//	//char ch3[] = "cdefgh";
//	char ch1[] = { 'a','b','c','d','e','f' };
//	char ch2[] = { 'b', 'c', 'd', 'e', 'f', 'g' };
//	char ch3[] = { 'c','d','e','f','g','h' };
//	char* pch[] = {ch1,ch2,ch3};//存放字符指针的数组 - 指针数组
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 6; j++)
//		{
//			//printf("%d ", *(parr[i] + j));
//			printf("%c ", *(pch[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef"; //常量字符串，其内容不能被修改
//	const char* p2 = "abcdef";
//	printf("%c\n", *p1);
//	printf("%s\n", p1);
//	//字符串一样的存在一个地址
//	//p1与p2本身的地址不同，它们有自己的空间
//	if (p1 == p2)
//	{
//		printf("指针指的是首元素地址，所以p1与p2所指的地址相同，但p1与p2本身的地址不同\n");
//	}
//	else
//	{
//		printf("p1不等于p2");
//	}
//	/*if (arr1 == arr2)
//	{
//		printf("arr1与arr2相等\n");
//	}
//	else
//	{
//		printf("arr1与arr2不相等，因为都开辟了空间，所以在在内存中的地址不同");
//	}*/
//
//	return 0;
//}
//int main()
//{
//	const char*  p = "abcdef";
//	//*p = 'w';
//	p = "wbcdef";
//	printf("%s\n", p);
//	//printf("%c\n", *p);//a %c输出的是一个字符 *p是一个字符
//	//printf("%s\n", p);//abcdef  %s输出的是一个自字符串 p是一串
//	return 0;
//}
//int main()
//{
//	float n = 5.5;
//	//101.1
//	//(-1)^0*1.011*2^2
//	//S = 0
//	//E = 2
//	//M = 1.011
//	//0 100 0000 1(2+127) 011 0000 0000 0000 0000 0000
//	//0X40B00000
//	//小端存储:00 00 b0 40
//	printf("%f\n", n);
//	return 0;
//}
//int main()
//{
//	int n = 9;
//	float* pfloat = (float*)&n;
//	printf("%d\n", n);
//	printf("%f\n", *pfloat);
//	*pfloat = 9.0;
//	printf("%d\n", n);
//	printf("%f\n", *pfloat);
//	return 0;
//}