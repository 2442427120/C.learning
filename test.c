#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	int (*p)[10] = &arr; //取出数组的地址

	int (*pf)(int, int);//函数指针
	int (*parr[10])(int, int);//parr是一个数组 - 函数指针的数组
	int (*(*pfarr)[10])(int,int) = &parr;
	//pfarr是一个数组指针，指针指向的数组有10个元素
	//指向的数组的每个元素的类型是一个函数指针 int(*)(int,int)
	return 0;
}
//void menu()
//{
//	printf("***************************\n");
//	printf("**   1. add     2. sub   **\n");
//	printf("**   3. mul     4. div   **\n");
//	printf("**   5. xor     0.exit   **\n");
//	printf("***************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
// 回调函数
//void Calc(int (*pf)(int , int ))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入想要的操作数");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 5:
//			Calc(Xor);
//			break;
//		case 0:
//			printf("退出");
//			break;
//		default:
//			printf("选择错误");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//void menu()
//{
//	printf("***************************\n");
//	printf("**   1. add     2. sub   **\n");
//	printf("**   3 .mul     4. div   **\n");
//	printf("**         0.exit        **\n");
//	printf("***************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	pfArr是一个函数指针数组 - 转移表
//	int (*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个要操作的数:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", pArr[input](x, y));
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//			printf("输入错误,请重新输入\n");
//	} while (input);
//	return 0;
//}
//void menu()
//{
//	printf("***************************\n");
//	printf("**   1. add     2. sub   **\n");
//	printf("**   3 .mul     4. div   **\n");
//	printf("**         0.exit        **\n");
//	printf("***************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("退出");
//			break;
//		case 1:
//			printf("请输入想要的操作数");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Add(x,y));
//			break;
//		case 2:
//			printf("请输入想要的操作数");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("请输入想要的操作数");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("请输入想要的操作数");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		default:
//			printf("选择错误");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//char* my_strcpy(char* dest, const char* src);
////写一个函数指针pf，能够指向my_strcpy
//char* (*pf)(char*, const char*);
////写一个函数指针数组pfArr，能够存放4个my_srrcpy函数地址
//char* (*pfArr[4])(char*, const char*);
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	//指针数组
//	int arr[5];
//	//int (*p)(int, int) = Add;
//	//需要一个数组，这个数组可以存放4个函数的地址 - 函数指针数组
//	int(*parr[4])(int,int) = { Add,Sub,Mul,Div };//函数指针的数组
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2,3));
//	}
//	return 0;
//}
//singal是一个函数声明
//singal的参数有两个，第一个是int，第二个是函数指针：该函数指针指向的函数的参数是int，返回值是void
//singal函数的返回值类型也是一个函数指针：该函数指针指向的函数的参数是int，返回值是void
//void (*signal(int, void(*)(int)))(int);
////简化
//typedef void (*fun_t)(int);
//fun_t singal(int, fun_t);