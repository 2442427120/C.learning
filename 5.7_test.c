#pragma once
#include "Sqlist.h"

void menu(void)
{
	printf("***************************************************************************************\n");
	printf("**************                       <���Ա��˳��洢>                  **************\n");
	printf("**************                      1.Ϊ���Ա�����Ԫ��                   **************\n");
	printf("**************                      2.�������Ա�                         **************\n");
	printf("**************                      3.������Ա�                         **************\n");
	printf("**************                      4.�ж����Ա��Ƿ�Ϊ��                 **************\n");
	printf("**************                      5.��ȡ���Ա�ĳһ��Ԫ�ص�ֵ           **************\n");
	printf("**************                      6.��ȡ��ǰ���Ա�ĳ���               **************\n");
	printf("**************                      7.��ӡ���Ա�                         **************\n");
	printf("**************                      0.�˳�                               **************\n");
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
		printf("�������Ӧ������ѡ����Ӧ�Ĺ���:>");
		scanf("%d", &choose);
		switch (choose)
		{
		case 1:
			printf("������Ҫ�����Ԫ�ظ���:>");
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
			printf("�˳��ɹ�\n");
			break;
		default:
			printf("��������ȷ������\n");
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
//		printf("�ռ����ʧ��\n");
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