#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <stdlib.h>
#include <math.h>

//ʹ��Ƕ��ѭ���������¸�ʽ��ӡ��ĸ
//F
//FE
//FED
//FEDC
//FEDCB
//FEDCBA
//int main(void)
//{
//	int first, second, letter; //����first���ڵ�һ��ѭ����second���ڵڶ���ѭ����letter���ڴ洢��ĸ
//
//	//һ�е�����
//	for (first = 0; first < 6; first++)
//	{
//		//һ�е�����
//		for (second = 0,letter = 70; second <= first; second++, letter--) //F��ASCIIֵ��70���ݼ���ӡ
//		{
//			printf("%c", letter); //��%c��ʽ��ӡ���֣���ӡ��ĸ
//		}
//		printf("\n"); //һ�����ݴ�ӡ�����
//	}
//	printf("Complete!\n");
//
//	return 0;
//}

//
//#define	FLOOR 5 //����Ҫ��ӡ�Ĳ���
//ʹ��Ƕ��ѭ������ӡ��������
//$
//$$
//$$$
//$$$$
//$$$$$
//int main(void)
//{
//	int i, j;//����i���ڵ�һ��ѭ��������j���ڵڶ���ѭ��
//
//	//һ�е�����
//	for (i = 0; i < FLOOR; i++)
//	{
//		//һ�е�����
//		for (j = 0; j <= i; j++)
//		{
//			printf("$");
//		}
//		printf("\n"); //��ӡ��һ�л���
//	}
//	printf("\nComplete!\n");
//
//	return 0;
//}

//#define SIZE 26 //���������СΪ26
////����һ������26��Ԫ�ص����飬�������д洢26��Сд��ĸ��Ȼ���ӡ�������������
//int main(void) 
//{
//	int i = 0;
//	char letter[SIZE] = {0};//����char�������飬���ڴ洢26����ĸ
//
//	for (i = 0; i < SIZE; i++)//��26��Ԫ�ظ�ֵ
//	{
//		letter[i] = 97 + i; //��һ��Ԫ��Ϊa
//	}
//
//	for (i = 0; i < SIZE; i++) //��ӡ
//	{
//		printf("%c ", letter[i]);
//	}
//	printf("\nComplete��\n");
//
//	return 0;
//}
//int main(void)
//{
//	const double ANSWER = 3.14159;
//	double response = 0;
//
//	printf("PI��ֵ�Ƕ���\n");
//	scanf("%LF", &response);
//	while (fabs(ANSWER - response) > 0.00001) // �û������ֵ����ȷ��ֵ֮��������0.00001����ѭ�� //����Ϊ0.00001
//	{
//		printf("����������\n");
//		scanf("%LF", &response);
//	}
//	printf("�㹻�ӽ�\n");
//
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	
//	while (n < 3)
//		printf("n is %d\n", n);
//		n++; //��ʱn++λ��ѭ���������                                                                              
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
//		printf("������һ������:");
//		status = scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("����1���\n");
//			break;
//		case 2:
//			printf("����2���\n");
//			break;
//		case 3:
//			printf("����3���\n");
//			break;
//		case 0:
//			printf("exit\n");
//			break;
//		default:
//			printf("������Ϸ���ֵ\n");
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
//	printf("*** 1.����1 ***\n");
//	printf("*** 2.����2 ***\n");
//	printf("*** 3.����3 ***\n");
//	printf("*** 0.�˳�  ***\n");
//	printf("***************\n");
//}