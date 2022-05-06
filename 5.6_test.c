#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

typedef int ElemType;
#define INIT_TABLE_SIZE 10  //��ʼ�ռ�����
#define LISTINCREMENT 10 //�ռ䲻��ʱ��ÿ�����ӵ�����

typedef struct linear_table //����һ��˳���Ľṹ��
{
	ElemType* data;
	int length; //��ĳ���
	int listsize; //��ǰ���Ա�Ĵ洢����
}Table;
//

menu()
{
	printf("*******************************************************************\n");
	printf("***********               |���Ա�Ĺ���|                ***********\n");
	printf("\n");
	printf("***********            1.�����Ա���и�ֵ               ***********\n");
	printf("\n");
	printf("***********            2.��ʾ���Ա������               ***********\n");
	printf("\n");
	printf("***********            0.�˳�����                       ***********\n");
	printf("*******************************************************************\n");
}
//typedef Table* Sqlist;
void InitTable(Table* L)//��ʼ�����Ա�
{
	L->data = (ElemType*)malloc(INIT_TABLE_SIZE * sizeof(ElemType));//Ϊ����100��int���͵Ŀռ�
	if (L->data == NULL)
	{
		printf("%s\n", strerror(errno));//������ʧ��ʱ����ӡʧ����Ϣ
	}

	L->length = 0; //��ʼ����Ϊ0
	L->listsize = INIT_TABLE_SIZE; //��ʼ����ǰ�������Ϊ100��int���͵Ĵ�С
}

void CreatTable(Table* L, int n) //Ϊ˳���ֵ
{
	int i = 0;
	ElemType* p; //����һ��ָ��data�����ָ��
	if (n > (L->listsize)) //�ж�Ҫ�������Ԫ�ش�С�Ƿ���ڵ�ǰ����
	{
		while (1)
		{
			if (n > (L->listsize)) // ���Ҫ�������Ԫ�ش�С���ڵ�ǰ���������data�������·���ռ�
			{
				p = (ElemType*)realloc(L->data, LISTINCREMENT * sizeof(ElemType));//����ʱָ�����p��ָ���¿��ٵĿռ䣬������ֱ����dataָ�룬��Ϊ�˷�ֹ����ʧ�ܽ�data��ΪҰָ��
				if (p != NULL)
				{
					L->data = p;//���ɹ����ٿռ�ʱ����data����Ŀռ����Ϊp
				}
				L->listsize += LISTINCREMENT;//���µ�ǰ����
				printf("����ռ�ɹ�\n");
			}
			else
				break;//����ѭ��
		}
	}

	for (i = 0; i < n; i++)//Ϊdata����ĸ�ֵ
	{
		printf("�������%d����ֵ:>", i+1);
		scanf("%d", &(L->data[i]));
	}

	L->length = n; //��ʱ˳���ĳ���Ϊ����Ԫ�صĸ���
	printf("��ֵ�ɹ�\n");
}

void DisplayTable(Table* L, int n) //��ӡ�����Ա������
{
	int i = 0;
	if (L == NULL)
	{
		printf("����Ϊ���Ա�ֵ\n");
	}
	else
	{
		printf("���е�����Ϊ:");

		for (i = 0; i < n; i++)
		{
			printf("%d ", L->data[i]);
		}
	}
}
int main()
{
	Table L;
	int n = 0;
	int choose;
	InitTable(&L);
	do
	{
		menu();
		printf("�������Ӧ������:>");
		scanf("%d", &choose);
		switch (choose)
		{
		case 1:
			printf("������Ҫ�����Ԫ�ظ���:>");
			scanf("%d", &n);
			CreatTable(&L, n);
			break;
		case 2:
			DisplayTable(&L, n);
		case 0:
			printf("�˳��ɹ�\n");
			break;
		default:
			printf("������ѡ��\n");
		}

	} while (choose);
	return 0;
}

//
//#define LIST_INIT_SIZE 100 //��ĳ�ʼ����
//#define LISTINCREMENT 10 //�������
//typedef int ElemType;
//typedef struct Liner_Table
//{
//	ElemType* data;
//	int length;
//	int size;
//
//}Table;
//
//typedef Table* L;
//
//void InitTable(Table* L)
//{
//
//	L->data = (ElemType)malloc(LIST_INIT_SIZE *sizeof(ElemType));
//	if ((L.data) == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//
//	L.length = 0;
//	L.size = LIST_INIT_SIZE; // ��ĳ�ʼ����
//}
//
//void CreateTable(Table L, int n)
//{
//	int i = 0;
//	ElemType* p;
//	if (n > L.size)
//	{
//		while (1)
//		{
//			if (n > L.size)
//			{
//				p = (ElemType)realloc(L.data, LISTINCREMENT *sizeof(ElemType));
//				if (p != NULL)
//				{
//					L.data = p;
//				}
//
//				L.size = LIST_INIT_SIZE + LISTINCREMENT;
//			}
//			
//			else
//			{
//				break;
//			}
//		}
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		printf("�������%d��Ԫ�ص�ֵ\n", i+1);
//		scanf("%d", &L.data[i]);
//	}
//
//	L.length = n;
//	printf("��ֵ�ɹ�\n");
//}
//
//void DisplayTable(Table L, int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", L.data[i]);
//	}
//}
//int main()
//{
//	Table* L;
//	int n = 0;
//	InitTable(&L);
//	printf("���������Ա��Ԫ�ظ���:>");
//	scanf("%d", &n);
//	CreateTable(&L, n);
//	DisplayTable(&L, n);
//	return 0;
//}

//#define MAXSIZE 10
//typedef struct linear_table
//{
//	int data[MAXSIZE];
//	int length;
//}Table;
//
//void InitTable(Table* L)
//{
//	L->length = 0;
//}
//
//void CreateTable(Table* L)
//{
//	int i = 0;
//	int n = 0;
//	for (i = 0; i < MAXSIZE; i++)
//	{
//		printf("�������%d��Ԫ�ص�ֵ:>", i+1);
//		scanf("%d", &L->data[i]);
//	}
//	L->length = MAXSIZE;
//}
//
//void DisplayTable(Table* L)
//{
//	int i = 0;
//	printf("���Ա�����Ϊ:");
//	for (i = 0; i < L->length; i++)
//	{
//		printf("%d ",L->data[i]);
//	}
//}
//int main()
//{
//	Table L;
//	InitTable(&L);
//	CreateTable(&L);
//	DisplayTable(&L);
//	return 0;
//}