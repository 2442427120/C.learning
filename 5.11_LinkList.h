#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

typedef void status;
typedef int ElemType;

typedef struct Node
{
	ElemType data;
	struct Node* next;
}LNode;

typedef struct Node* LinkList;

//��ʼ�����Ա�
status Init_LinkList(LinkList* L);
//ͷ�巨�������Ա�
status Creat_LinkList_Head(LinkList* L);
//β�巨�������Ա�
status Creat_LinkList_Tail(LinkList* L);
//��ӡ���Ա�
status Print_LinkList(LinkList* L);
//�������Ա��е�ĳԪ��
status Serach_by_Elem(LinkList* L);
//��λ����Ԫ��
status Search_by_Pos(LinkList* L);
//����Ԫ�ص����Ա�
status Inser_Elem(LinkList *L);
//ɾ�����Ա��е�Ԫ��
status Delete_Elem(LinkList* L);
//�޸�Ԫ�ص�ֵ
status Modefy_Elem(LinkList* L);