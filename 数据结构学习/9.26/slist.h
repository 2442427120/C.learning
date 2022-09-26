#pragma once
#define _SLIST_H__
#define _SLIST_H__

#include <stdio.h>

typedef int SLTDataType;

struct SlistNode
{
	SLTDataType data;
	struct SlistNode* next;
};

typedef struct SlistNode SLTNode;

//void SlistInit(SLTNode** pphead);

//β��
void SlistPushBack(SLTNode** pphead, SLTDataType x);
//ͷ��
void SlistPushFront(SLTNode** pphead, SLTDataType x);
//ͷɾ
void SlistPopFront(SLTNode** pphead);
//βɾ
void SlistPopBack(SLTNode** pphead);
//����
SLTNode* SlistFind(SLTNode* phead, SLTDataType x);
//��posǰһ��λ�ò�����Ԫ��
void SlistInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);
//ɾ��posλ�õ�Ԫ��
void SlistErase(SLTNode** pphead, SLTNode* pos);

void SlistPrint(SLTNode* phead);