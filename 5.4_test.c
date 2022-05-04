#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
struct Node
{
	int data;
	struct Node* next;
}Node;

typedef struct Node* LinkList; // ��struct Node* ����ΪLinkList

//��ʼ��������
void Init_List(LinkList* L)
{
	(*L) = (LinkList)malloc(sizeof(Node));
	if ((*L) == NULL)
	{
		printf("%s\n",strerror(errno));
	}

	(*L)->next = NULL;
}

//β�巨����Ԫ�ص���������
void Insert_List(LinkList* L)
{
	LinkList head;
	LinkList p;
	LinkList q = NULL;
	int i = 0;
	int n = 0;

	head = (LinkList)malloc(sizeof(Node));
	head->next = NULL;

	printf("������Ҫ�����Ԫ�صĸ���\n");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		p = (LinkList)malloc(sizeof(Node));
		/*q = (LinkList)malloc(sizeof(Node));*/
		printf("��������������\n");
		scanf("%d",  &p->data);
		p->next = NULL;

		if (head->next == NULL)
		{
			head->next = p;
		}
		else
		{
			/*scanf("%d", p->data);*/
			q->next = p;
		}

		q = p;
	}
}
int main()
{
	LinkList* L;
	Init_List(&L);
	Insert_List(&L);

	return 0;
}
//���������򷽷�2 - ��a��������һλ����b����ĵ�һλ��ֱ��ȫ����ֵ�꣬�ٰ�b���鰴���򸳸�a����
//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int b[10] = { 0 };
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		b[i] = a[10 - i - 1];
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		a[i] = b[i];
//	}
//
//	return 0;
//}
// 
//���������е�Ԫ�ط���1 - �Ƚ���a�����һλ�͵�һλ��Ȼ�����ڶ�λ�͵ڶ�λ��һֱ������ȫ�����Ϊֹ
//int main()
//{
//	int arr[20] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < (sz/2); i++)
//	{
//		int tmp = arr[i];
//		arr[i] = arr[sz - i - 1];
//		arr[sz - i -1 ] = tmp;
//	}
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//}
//
//struct Node
//{
//	int data;
//	int* next;
//}Node;
//
//typedef struct Node* LinkList; // ��struct Node* ����ΪLinkList
//
////��ʼ��������
//void Init_List(LinkList* L)
//{
//	(*L) = (LinkList)malloc(sizeof(Node));
//	if ((*L) == NULL)
//	{
//		printf("%s\n",strerror(errno));
//	}
//
//	(*L)->next = NULL;
//}
//
////ͷ�巨����Ԫ�ص���������
//void Insert_List(LinkList* L)
//{
//	int n = 0;
//	int i = 0;
//	LinkList p = NULL;
//
//	(*L)->next = NULL;
//	printf("������Ҫ��������ֵĸ���\n");
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		p = (LinkList)malloc(sizeof(Node));
//		printf("������Ҫ���������\n");
//		scanf("%d", &(p->data));
//		p->next = (*L)->next;
//		(*L)->next = p;
//	}
//}
//int main()
//{
//	LinkList* L;
//	Init_List(&L);
//	Insert_List(&L);
//
//	return 0;
//}