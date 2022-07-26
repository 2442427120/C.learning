#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

//1.编写一个程序，读取键盘输入，直到遇到@符号为止，并回显输入(数字除外)，同时将大写字符转换为小写，将小写
//字符转换为大写
//#define STOP '@'
//
//int main(void)
//{
//	char ch;
//
//	printf("Please enter an character(enter @ to quit):\n");
//
//	while (scanf("%c", &ch) == 1 && ch != '@')
//	{
//		if (isupper(ch))
//		{
//			ch = tolower(ch);
//			printf("%c\n", ch);
//			getchar();	//消耗缓冲区中的换行
//		}
//		else
//		{
//			ch = toupper(ch);
//			printf("%c\n", ch);
//			getchar();
//		}
//
//		printf("Please enter an character(enter @ to quit):\n");
//	}
//
//	printf("Done.\n");
//
//	return 0;
//}

//int main(void)
//{
//	unsigned long num = 0;	//用户输入的整数
//	unsigned long div = 0;	//除数
//	bool isPrime;	//判断是否为素数 - 1为素数，0不为素数
//
//	printf("Please enter an integer: ");
//
//	while (scanf("%lu", &num) == 1)
//	{
//		for (div = 2, isPrime = true; (div * div) <= num; div++)
//		{
//			if (num % div == 0)
//			{
//				if ((div * div) != num)	
//					printf("%lu is divisable by %lu and %lu\n", num, div, num / div);
//				else
//					printf("%lu is divisable by %lu\n", num, div);
//
//				isPrime = false;
//			}
//		}
//
//		if (isPrime)
//			printf("%lu is Prime.\n", num);
//
//		printf("Please enter an integer (enter q to quit): ");
//	}
//
//	return 0;
//}