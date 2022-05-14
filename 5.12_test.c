#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int ElemType;

typedef struct Node
{
	ElemType data;
	struct Node* prior;
	struct Node* next;

}DNode;

typedef struct Node* LinkList;

void Init(LinkList* L)
{
	(*L) = (LinkList)malloc(sizeof(DNode));
	(*L)->data = -1;
	(*L)->prior = NULL;
	(*L)->next = NULL;
}

void Create_By_Head(LinkList* L)
{
	LinkList p;

	int i = 0;
	int sum = 0;

	printf("请输入要创建链表的元素个数:>");
	scanf("%d", &sum);

	for (i = 0; i < sum; i++)
	{
		p = (LinkList)malloc(sizeof(DNode));
		printf("请输入第%d个元素的值:>", i+1);
		scanf("%d", &(p->data));

		p->next = NULL;
		p->prior = (*L);
		(*L)->next = p;

	}

	printf("创建成功\n");
}


int main()
{
	LinkList L;
	L = (LinkList)malloc(sizeof(DNode));
	Init(L);
	Create_By_Head(L);
	return 0;
}

