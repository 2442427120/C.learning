#include "slist.h"
#include <string.h>
#include <stdlib.h>

//void SlistInit(SLTNode** pphead)
//{
//	*pphead = (SLTNode*)malloc(sizeof(SLTNode));
//}
SLTNode* BuyNewNode(SLTDataType x)
{
	SLTNode* newNode = (SLTNode*)malloc(sizeof(SLTNode));
	newNode->data = x;
	newNode->next = NULL;

	return newNode;
}


void SlistPushBack(SLTNode** pphead, SLTDataType x)
{
	SLTNode* newNode = BuyNewNode(x);

	if (*pphead == NULL)
	{
		*pphead = newNode;
	}
	else
	{
		SLTNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}

		tail->next = newNode;
	}

	newNode->next = NULL;
}

void SlistPushFront(SLTNode** pphead, SLTDataType x)
{
	SLTNode* newNode = BuyNewNode(x);
	newNode->next = *pphead;
	*pphead = newNode;
}

void SlistPopFront(SLTNode** pphead)
{
	SLTNode* next = (*pphead)->next;
	free(*pphead);
	*pphead = next;
}

void SlistPopBack(SLTNode** pphead)
{
	SLTNode* prev = *pphead;
	SLTNode* tail = *pphead;

	if (*pphead == NULL)
	{
		return;
	}
	else if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}

		free(tail);
		prev->next = NULL;
	}

}

SLTNode* SlistFind(SLTNode* phead, SLTDataType x)
{
	SLTNode* cur = phead;
	while (cur)
	{
		if (cur->data == x)
			return cur;

		cur = cur->next;
	}

	return NULL;
}

void SlistInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x)
{
	if (pos == *pphead)
	{
		SlistPushFront(pphead, x);
	}
	else
	{
		SLTNode* newNode = BuyNewNode(x);
		SLTNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}

		prev->next = newNode;
		newNode->next = pos;
	}
}

void SlistErase(SLTNode** pphead, SLTNode* pos)
{
	SLTNode* prev = *pphead;

	if (pos == *pphead)
		SlistPopFront(pphead);
	else
	{
		while (prev->next != pos)
		{
			prev = prev->next;
		}
	}

	prev->next = pos->next;
	free(pos);
}

void SlistPrint(SLTNode* phead)
{
	while (phead != NULL)
	{
		printf("%d->", phead->data);
		phead = phead->next;
	}

	printf("NULL\n");
}