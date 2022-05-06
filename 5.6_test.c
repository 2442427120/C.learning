#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

typedef int ElemType;
#define INIT_TABLE_SIZE 10  //初始空间容量
#define LISTINCREMENT 10 //空间不足时，每次增加的容量

typedef struct linear_table //定义一个顺序表的结构体
{
	ElemType* data;
	int length; //表的长度
	int listsize; //当前线性表的存储容量
}Table;
//

menu()
{
	printf("*******************************************************************\n");
	printf("***********               |线性表的构造|                ***********\n");
	printf("\n");
	printf("***********            1.对线性表进行赋值               ***********\n");
	printf("\n");
	printf("***********            2.显示线性表的内容               ***********\n");
	printf("\n");
	printf("***********            0.退出程序                       ***********\n");
	printf("*******************************************************************\n");
}
//typedef Table* Sqlist;
void InitTable(Table* L)//初始化线性表
{
	L->data = (ElemType*)malloc(INIT_TABLE_SIZE * sizeof(ElemType));//为表开辟100个int类型的空间
	if (L->data == NULL)
	{
		printf("%s\n", strerror(errno));//当开辟失败时，打印失败信息
	}

	L->length = 0; //初始化表长为0
	L->listsize = INIT_TABLE_SIZE; //初始化当前表的容量为100个int类型的大小
}

void CreatTable(Table* L, int n) //为顺序表赋值
{
	int i = 0;
	ElemType* p; //创建一个指向data数组的指针
	if (n > (L->listsize)) //判断要插入的总元素大小是否大于当前容量
	{
		while (1)
		{
			if (n > (L->listsize)) // 如果要插入的总元素大小大于当前容量，则给data数组重新分配空间
			{
				p = (ElemType*)realloc(L->data, LISTINCREMENT * sizeof(ElemType));//用临时指针变量p来指向新开辟的空间，而不是直接用data指针，是为了防止开辟失败将data变为野指针
				if (p != NULL)
				{
					L->data = p;//当成功开辟空间时，将data数组的空间更新为p
				}
				L->listsize += LISTINCREMENT;//更新当前容量
				printf("分配空间成功\n");
			}
			else
				break;//跳出循环
		}
	}

	for (i = 0; i < n; i++)//为data数组的赋值
	{
		printf("请输入第%d个的值:>", i+1);
		scanf("%d", &(L->data[i]));
	}

	L->length = n; //此时顺序表的长度为插入元素的个数
	printf("赋值成功\n");
}

void DisplayTable(Table* L, int n) //打印出线性表的内容
{
	int i = 0;
	if (L == NULL)
	{
		printf("请先为线性表赋值\n");
	}
	else
	{
		printf("表中的内容为:");

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
		printf("请输入对应的数字:>");
		scanf("%d", &choose);
		switch (choose)
		{
		case 1:
			printf("请输入要插入的元素个数:>");
			scanf("%d", &n);
			CreatTable(&L, n);
			break;
		case 2:
			DisplayTable(&L, n);
		case 0:
			printf("退出成功\n");
			break;
		default:
			printf("请重新选择\n");
		}

	} while (choose);
	return 0;
}

//
//#define LIST_INIT_SIZE 100 //表的初始容量
//#define LISTINCREMENT 10 //表的增量
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
//	L.size = LIST_INIT_SIZE; // 表的初始容量
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
//		printf("请输入第%d个元素的值\n", i+1);
//		scanf("%d", &L.data[i]);
//	}
//
//	L.length = n;
//	printf("赋值成功\n");
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
//	printf("请输入线性表的元素个数:>");
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
//		printf("请输入第%d个元素的值:>", i+1);
//		scanf("%d", &L->data[i]);
//	}
//	L->length = MAXSIZE;
//}
//
//void DisplayTable(Table* L)
//{
//	int i = 0;
//	printf("线性表内容为:");
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