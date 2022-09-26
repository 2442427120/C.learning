#include "slist.h"

void Test1();

int main(void)
{
	Test1();

	return 0;
}

void Test1()
{
	SLTNode* slist = NULL;
	/*SlistInit(&slist);*/
	SlistPushBack(&slist, 1);
	SlistPushBack(&slist, 2);
	SlistPushBack(&slist, 4);
	SlistPrint(slist);

	SlistPushFront(&slist, 3);
	SlistPushFront(&slist, 5);
	SlistPrint(slist);

	SlistPopFront(&slist);
	SlistPrint(slist);

	SlistPopBack(&slist);
	SlistPrint(slist);

	SLTNode* pos = SlistFind(slist, 2);
	SlistInsert(&slist, pos, 4);
	SlistPrint(slist);

	pos = SlistFind(slist, 4);
	SlistErase(&slist, pos);
	SlistPrint(slist);
}