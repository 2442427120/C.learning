#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

//1.��дһ�����򣬶�ȡ�������룬ֱ������@����Ϊֹ������������(���ֳ���)��ͬʱ����д�ַ�ת��ΪСд����Сд
//�ַ�ת��Ϊ��д
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
//			getchar();	//���Ļ������еĻ���
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
//	unsigned long num = 0;	//�û����������
//	unsigned long div = 0;	//����
//	bool isPrime;	//�ж��Ƿ�Ϊ���� - 1Ϊ������0��Ϊ����
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