#pragma once
#include "Sqlist.h"

status Init_Sq(Sqlist* L)
{
	L->data = (ElemType*)malloc(SQLIST_INIT_SIZE*sizeof(ElemType));
	if (!(L->data))
	{
		printf("分配空间失败\n");
		exit(OVERFLOW);
	}

	L->length = 0;
	L->listsize = SQLIST_INIT_SIZE;

	return OK;
}

status Create_Sq(Sqlist* L, int n)
{
	ElemType* p;
	int i = 0;
	if (n > (L->listsize))
	{
		while (1)
		{
			if (n > (L->listsize))
			{
				p = (ElemType*)realloc(L->data, SQLIST_INIT_SIZE + SQLISTINCREMENT * sizeof(ElemType));
				if (p != NULL)
				{
					L->data = p;
				}

				L->listsize += SQLISTINCREMENT;
			}
			else
				break;
		}
	}

	for (i = 0; i < n; i++)
	{
		printf("请输入第%d个元素的值:>", i+1);
		scanf("%d", &(L->data[i]));
	}

	L->length = n;
	return OK;
}

status Destroy_Sq(Sqlist* L)
{
	if (L->data == NULL)
	{
		printf("您还未建立线性表，请先创建一个线性表\n");
		return ERROR;
	}

	free(L->data);
	L->data = NULL;
	L->length = 0;
	L->listsize = 0;

	printf("线性表已删除\n");
	return OK;

}

status Clear_Sq(Sqlist* L)
{
	/*if (L->data == NULL)
	{
		printf("您还未建立线性表，请先创建一个线性表\n");
		return ERROR;
	}

	L->data = NULL;*/
	L->length = 0;

	printf("线性表清空完毕\n");
	return OK;
}

status IsEmpty_Sq(Sqlist* L)
{
	if (L->data)
	{
		if (L->length != 0)
		{
			printf("线性表不是空表\n");
			return FALSE;
		}

		else 
		{
			printf("线性表为空\n");
			return OK;
		}
	}

	else
	{
		printf("线性表不存在\n");
		return NOEXIT;
	}
}

status GetElem_Sq(Sqlist* L)
{
	int index = 0;
	int num = 0;
	printf("请输入要获取元素的位置:>");
	scanf("%d", &index);

	num = index;

	if (index < 0 || index > L->length)
	{
		printf("您输入的位置可能太小了或是太大了\n");
		return ERROR;
	}

	else
	{
		index = L->data[index - 1];
		printf("第%d个元素是%d\n", num, index);
		return OK;
	}
}

status GetLength_Sq(Sqlist* L)
{
	/*int ret = IsEmpty_Sq(&L);
	if (1 == ret)
	{
		printf("线性表为空");
	}
	else if (-1 == ret)
	{
		printf("线性表不存在");
	}*/
	////else
	////{
	int K = L->length;
	printf("当前线性表的长度为%d\n", K);
	return OK;
	//}
}

status Print_Sq(Sqlist* L)
{
	int i = 0;
	for (i = 0; i < L->length; i++)
	{
		printf("%d ", L->data[i]);
	}
	printf("\n");
	return OK;
}