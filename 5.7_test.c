#pragma once
#include "Sqlist.h"

void menu(void)
{
	printf("***************************************************************************************\n");
	printf("**************                       <线性表的顺序存储>                  **************\n");
	printf("**************                      1.为线性表增加元素                   **************\n");
	printf("**************                      2.销毁线性表                         **************\n");
	printf("**************                      3.清空线性表                         **************\n");
	printf("**************                      4.判断线性表是否为空                 **************\n");
	printf("**************                      5.获取线性表某一置元素的值           **************\n");
	printf("**************                      6.获取单前线性表的长度               **************\n");
	printf("**************                      7.打印线性表                         **************\n");
	printf("**************                      0.退出                               **************\n");
	printf("***************************************************************************************\n");
}
int main(void)
{
	Sqlist L;
	int choose = 0;
	int n = 0;
	Init_Sq(&L);
	do
	{
		menu();
		printf("请输入对应的数字选择相应的功能:>");
		scanf("%d", &choose);
		switch (choose)
		{
		case 1:
			printf("请输入要插入的元素个数:>");
			scanf("%d", &n);
			Create_Sq(&L, n);
			break;
		case 2:
			Destroy_Sq(&L);
			break;
		case 3:
			Clear_Sq(&L);
			break;
		case 4:
			IsEmpty_Sq(&L);
			break;
		case 5:
			GetElem_Sq(&L);
			break;
		case 6:
			GetLength_Sq(&L);
			break;
		case 7:
			Print_Sq(&L);
			break;
		case 0:
			printf("退出成功\n");
			break;
		default:
			printf("请输入正确的数字\n");
			break;
		}
	} while (choose);

	return 0;
}
//int main(void)
//{
//	int i = 0;
//	int* a;
//	a = (int*)malloc(10 * sizeof(int));
//	if (a == NULL)
//	{
//		printf("空间分配失败\n");
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		a[i] = i;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//
//	return 0;
//}