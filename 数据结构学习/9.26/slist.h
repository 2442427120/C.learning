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

//尾插
void SlistPushBack(SLTNode** pphead, SLTDataType x);
//头插
void SlistPushFront(SLTNode** pphead, SLTDataType x);
//头删
void SlistPopFront(SLTNode** pphead);
//尾删
void SlistPopBack(SLTNode** pphead);
//查找
SLTNode* SlistFind(SLTNode* phead, SLTDataType x);
//在pos前一个位置插入新元素
void SlistInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);
//删除pos位置的元素
void SlistErase(SLTNode** pphead, SLTNode* pos);

void SlistPrint(SLTNode* phead);