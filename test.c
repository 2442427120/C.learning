#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	int (*p)[10] = &arr; //ȡ������ĵ�ַ

	int (*pf)(int, int);//����ָ��
	int (*parr[10])(int, int);//parr��һ������ - ����ָ�������
	int (*(*pfarr)[10])(int,int) = &parr;
	//pfarr��һ������ָ�룬ָ��ָ���������10��Ԫ��
	//ָ��������ÿ��Ԫ�ص�������һ������ָ�� int(*)(int,int)
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
// �ص�����
//void Calc(int (*pf)(int , int ))
//{
//	int x = 0;
//	int y = 0;
//	printf("��������Ҫ�Ĳ�����");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
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
//			printf("�˳�");
//			break;
//		default:
//			printf("ѡ�����");
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
//	pfArr��һ������ָ������ - ת�Ʊ�
//	int (*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("����������Ҫ��������:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", pArr[input](x, y));
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//			printf("�������,����������\n");
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
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("�˳�");
//			break;
//		case 1:
//			printf("��������Ҫ�Ĳ�����");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Add(x,y));
//			break;
//		case 2:
//			printf("��������Ҫ�Ĳ�����");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("��������Ҫ�Ĳ�����");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("��������Ҫ�Ĳ�����");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		default:
//			printf("ѡ�����");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//char* my_strcpy(char* dest, const char* src);
////дһ������ָ��pf���ܹ�ָ��my_strcpy
//char* (*pf)(char*, const char*);
////дһ������ָ������pfArr���ܹ����4��my_srrcpy������ַ
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
//	//ָ������
//	int arr[5];
//	//int (*p)(int, int) = Add;
//	//��Ҫһ�����飬���������Դ��4�������ĵ�ַ - ����ָ������
//	int(*parr[4])(int,int) = { Add,Sub,Mul,Div };//����ָ�������
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2,3));
//	}
//	return 0;
//}
//singal��һ����������
//singal�Ĳ�������������һ����int���ڶ����Ǻ���ָ�룺�ú���ָ��ָ��ĺ����Ĳ�����int������ֵ��void
//singal�����ķ���ֵ����Ҳ��һ������ָ�룺�ú���ָ��ָ��ĺ����Ĳ�����int������ֵ��void
//void (*signal(int, void(*)(int)))(int);
////��
//typedef void (*fun_t)(int);
//fun_t singal(int, fun_t);