#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <stdlib.h>
#include <math.h>

//使用嵌套循环，按以下格式打印字母
//F
//FE
//FED
//FEDC
//FEDCB
//FEDCBA
//int main(void)
//{
//	int first, second, letter; //变量first用于第一层循环，second用于第二层循环，letter用于存储字母
//
//	//一行的内容
//	for (first = 0; first < 6; first++)
//	{
//		//一列的内容
//		for (second = 0,letter = 70; second <= first; second++, letter--) //F的ASCII值是70，递减打印
//		{
//			printf("%c", letter); //以%c形式打印数字，打印字母
//		}
//		printf("\n"); //一行内容打印完后换行
//	}
//	printf("Complete!\n");
//
//	return 0;
//}

//
//#define	FLOOR 5 //定义要打印的层数
//使用嵌套循环，打印以下内容
//$
//$$
//$$$
//$$$$
//$$$$$
//int main(void)
//{
//	int i, j;//变量i用于第一次循环，变量j用于第二个循环
//
//	//一行的内容
//	for (i = 0; i < FLOOR; i++)
//	{
//		//一列的内容
//		for (j = 0; j <= i; j++)
//		{
//			printf("$");
//		}
//		printf("\n"); //打印完一行换行
//	}
//	printf("\nComplete!\n");
//
//	return 0;
//}

//#define SIZE 26 //定义数组大小为26
////创建一个包含26个元素的数组，并在其中存储26个小写字母。然后打印数组的所有内容
//int main(void) 
//{
//	int i = 0;
//	char letter[SIZE] = {0};//创建char类型数组，用于存储26个字母
//
//	for (i = 0; i < SIZE; i++)//给26个元素赋值
//	{
//		letter[i] = 97 + i; //第一个元素为a
//	}
//
//	for (i = 0; i < SIZE; i++) //打印
//	{
//		printf("%c ", letter[i]);
//	}
//	printf("\nComplete！\n");
//
//	return 0;
//}
//int main(void)
//{
//	const double ANSWER = 3.14159;
//	double response = 0;
//
//	printf("PI的值是多少\n");
//	scanf("%LF", &response);
//	while (fabs(ANSWER - response) > 0.00001) // 用户输入的值与正确的值之间相差不大于0.00001结束循环 //精度为0.00001
//	{
//		printf("请重新输入\n");
//		scanf("%LF", &response);
//	}
//	printf("足够接近\n");
//
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	
//	while (n < 3)
//		printf("n is %d\n", n);
//		n++; //此时n++位于循环体的外面                                                                              
//	return 0;
//}
//void menu(void);
//int main()
//{
//	int input = 0;
//	int status = 1;
//	while (status)
//	{
//		menu();
//		printf("请输入一个整数:");
//		status = scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("功能1完成\n");
//			break;
//		case 2:
//			printf("功能2完成\n");
//			break;
//		case 3:
//			printf("功能3完成\n");
//			break;
//		case 0:
//			printf("exit\n");
//			break;
//		default:
//			printf("请输入合法的值\n");
//			break;
//
//		}
//	}
//
//	return 0;
//}
//
//void menu(void)
//{
//	printf("***************\n");
//	printf("*** 1.功能1 ***\n");
//	printf("*** 2.功能2 ***\n");
//	printf("*** 3.功能3 ***\n");
//	printf("*** 0.退出  ***\n");
//	printf("***************\n");
//}