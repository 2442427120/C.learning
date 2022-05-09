#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;
typedef void status;

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

typedef struct Node
{
	ElemType data;
	struct Node* next;
}LNode;

typedef struct Node* LinkList;

//status Init_LinkList(LinkList L)
//{
//	L = (LinkList)malloc(sizeof(LNode));
//	if (L == NULL)
//	{
//		return ERROR;
//	}
//
//	L->next = NULL;
//}

status Create_LinkList_Head(LinkList* L)
{
	int n, i;
	LinkList p;
	(*L) = (LinkList)malloc(sizeof(LNode));
	(*L)->next = NULL;

	printf("请输入要创建表的元素的个数\n");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		p = (LinkList)malloc(sizeof(LNode));
		printf("请输入第%d个元素的值\n", i+1);
		scanf("%d", &(p->data));
		p->next = (*L)->next;
		(*L)->next = p;
	}

	printf("头插法插入成功\n");
	return OK;
}

//status Create_LinkList1_Tail(LinkList* L)
//{
//	int n, i;
//	LinkList p, q;
//	/**L = (LinkList)malloc(sizeof(LNode));
//	(*L) = NULL;*/
//	q = (*L);
//
//	printf("请输入要创建表的元素的个数\n");
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++)
//	{
//		p = (LinkList)malloc(sizeof(LNode));
//		printf("请输入第%d个元素的值\n", i+1);
//		scanf("%d", &(p->data));
//
//		q->next = p;
//		q = p;
//	}
//
//	q->next = NULL;
//	printf("尾插法插入成功\n");
//	return OK;
//}

status Print_LinkList(LinkList* L)
{
	LinkList p;
	p = *L;
	printf("当前线性表的元素为\n");
	p = (*L)->next;
	while (p) // p等于NULL时循环结束
	{
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
	printf("打印成功\n");
	return OK;
}
int main()
{
	LinkList L;
	L = (LinkList)malloc(sizeof(LNode));
	if (L == NULL)
	{
		return ERROR;
	}

	L->next = NULL;
	/*Init_LinkList(L);*/
	Create_LinkList_Head(&L);
	/*Create_LinkList1_Tail(&L);*/ //将结构体地址传过去
	Print_LinkList(&L);

}