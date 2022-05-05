#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

//void InitList(LinkList* L);
//void List_Insert(LinkList* L);

struct Node
{
	int data;
	struct Node* next;

}Node;

typedef struct Node* LinkList;

//��ʼ��
void InitList(LinkList* L)
{
	(*L) = (LinkList)malloc(sizeof(Node));
	if ((*L) == NULL)
	{
		printf("%s\n", strerror(errno));
	}

	(*L)->next = NULL;
}

void List_Insert(LinkList* L)
{
	int n = 0;
	int i = 0;
	LinkList p, q, head;
	head = (LinkList)malloc(sizeof(struct Node));
	if (head == NULL)
	{
		printf("%s\n", strerror(errno));
	}

	head->next = NULL;
	q = head;

	printf("������Ҫ�����Ԫ�ظ���\n");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		p = (LinkList)malloc(sizeof(struct Node));
		printf("������Ҫ�����Ԫ��:>");
		scanf("%d", &(p->data));
		/*p->next = head->next;*/
		q->next = p;
		q = p;
	}
	q->next = NULL;

}

//void ShowList(LinkList* L)
//{
//	LinkList p, q;
//
//	while ((p->next) != NULL)
//	{
//		printf("%d ",p->data);
//
//
//	}
//}

int main(void)
{
	LinkList L;

	InitList(&L);
	List_Insert(&L);
	/*ShowList(&L);*/
	return 0;
}


/*���Ա����ʽ�洢֮�������β�巨*/
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <malloc.h>
//
///*�������*/
//typedef int DataType;
//
//typedef struct node {     //�������������ݽṹ
//	DataType data;
//	struct node* pNext;
//}NODE;
//
//typedef NODE* pNODE;   //��������������ָ��
//
///*��������*/
//pNODE createLinkList(void);   //β�巨����������
//void TraverseLinkList(pNODE pHead); //����������������
//pNODE LocateNode(pNODE pHead, int k); //�����������Ƿ����ĳ�����
//void InsertLinkList(pNODE pHead, int i, DataType x);  //�������в�����
//DataType DeleteLinkList(pNODE pHead, int i);
//
///*��������*/
//
//int main(void) {            //������
//	pNODE pHead = NULL;      //
//
//	pHead = createLinkList();  //������������ͷ����ַ����
//	TraverseLinkList(pHead);  //��ͷ����ַ���������������������������
//	pNODE lNode = LocateNode(pHead, 7); //�������в���ָ����ֵ
//	if (lNode == NULL) {
//		printf("�����в�������Ҫ���ҵ�ֵ\n");
//	}
//	else {
//		printf("�����д�����Ҫ���ҵ�ֵ\n");
//	}
//	/*printf("�������е�����λ�ò���100\n");
//	InsertLinkList(pHead, 3, 100);*/
//	TraverseLinkList(pHead);
//	printf("ɾ�������е��ĸ���㣬ɾ���Ľ��ֵ��%d\n", DeleteLinkList(pHead, 4));
//	TraverseLinkList(pHead);
//
//	return 0;
//}
//
//pNODE createLinkList(void) {
//
//	pNODE pHead, pTail;    //����ͷ���ָ���β���ָ��
//	int length, i, val;
//	pHead = (pNODE)malloc(sizeof(NODE));  //��ͷ������ڴ��������ַ�ռ�
//	pTail = pHead;   //��ʼ״̬ͷָ���βָ����ͬ
//
//	if (pHead == NULL) {      //���ͷ�������ʧ�ܾ��˳�����
//		printf("�ڴ����ͷ���ʧ��.");
//		exit(-1);
//	}
//	printf("����������Ľ�����:");
//	scanf("%d", &length);
//	for (i = 0; i < length; i++) {   //�ֶ����������½�������Ҫ�Ľ��ֵ
//		printf("��������%d��ֵ:", i + 1);
//		scanf("%d", &val);
//		pNODE pNew = (pNODE)malloc(sizeof(NODE));  //���½�����ڴ��������ַ�ռ�
//		if (pNew == NULL) {   //����½���ַ�����ַ�ռ�ʧ�ܣ����˳�����
//			printf("�ӵ���,û���㹻���ڴ������");
//			exit(-1);
//		}
//		pNew->data = val;   //���½�㸳ֵ
//		pTail->pNext = pNew;  //�½�����ӵ�β���֮��
//		pTail = pNew;  //βָ��ָ���½��
//	}
//	pTail->pNext = NULL;	//�ն˽��ָ������Ϊ��,����������
//	return pHead;	//��������ͷ���
//}
//
//void TraverseLinkList(pNODE pHead) {
//	printf("��ǰ�����������ֵ��:");
//	pNODE pNew = pHead->pNext;  //��ȡ�׽�㣬Ȼ����׽�㿪ʼ���б���
//	while (pNew != NULL) {      //�ж���һ������Ƿ�Ϊ�գ������Ϊ�գ���ô�����������������ֵ
//		printf("%d ", pNew->data);
//		pNew = pNew->pNext;
//	}
//	printf("\n");
//}
//
//pNODE LocateNode(pNODE pHead, int k) {  //�鿴�������Ƿ����ĳ��ֵ�Ľ��
//	pNODE pNew = pHead->pNext;
//	while (pNew && pNew->data != k) {
//		pNew = pNew->pNext;
//	}
//	return pNew;
//}
//
//void InsertLinkList(pNODE pHead, int i, DataType x) {   //�������i��λ�ò�����x
//	pNODE p, s; int j;
//	p = pHead; j = 0;
//	while (p != NULL && j < i - 1) {
//		p = p->pNext;   //��pָ���i-1����㣬����ָ��Ҫ����λ�õ�ǰһ�����
//		j++;
//	}
//	if (p == NULL) {
//		printf("����λ�ô���");
//		exit(-1);
//	}
//	s = (pNODE)malloc(sizeof(NODE));  //���½�������ڴ�ռ�
//	s->data = x;						//���½��������ֵ
//	s->pNext = p->pNext;              //���½��ָ��pָ����ָ��Ľ�����һ�����
//	p->pNext = s;                     //��s���ĵ�ַ��ֵ��p�����ָ�����ָ���򣬼���i-1λ�õĽ��ָ��s���
//}
//
//
//DataType DeleteLinkList(pNODE pHead, int i) {
//	pNODE p, s; int j;
//	DataType x;
//	p = pHead; j = 0;
//	while (p != NULL && j < i - 1) {
//		p = p->pNext;    //��pָ���i-1����㣬����ָ��Ҫ����λ�õ�ǰһ�����
//		j++;
//	}
//
//	if (p == NULL) {
//		printf("ɾ��λ�ô���");
//		exit(-1);
//	}
//	s = p->pNext;           //s������Ҫ��ɾ���Ľ��
//	p->pNext = p->pNext->pNext;  //sǰһ���������s���ֱ��ָ��s����һ����㣬��ʱs������������
//	x = s->data;  //��s����ֵ��������
//	free(s);  //���ڴ�ռ��н�s�ͷŵ�
//	return x;
//}