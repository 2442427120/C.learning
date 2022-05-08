#pragma once
#include "5.8_Sqlist.h"

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
				p = (ElemType*)realloc(L->data, (SQLIST_INIT_SIZE + SQLISTINCREMENT) * sizeof(ElemType));
				if (p != NULL)
				{
					L->data = p;
				}

				L->listsize += SQLISTINCREMENT;
				printf("分配空间成功\n");
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
	if (L->data != NULL)
	{
		L->length = 0;
		printf("线性表清空完毕\n");
		return OK;
	}
	else
	{
		printf("线性表不存在\n");
		return ERROR;
	}
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
		}
		return	TRUE;
	}

	else
	{
		printf("线性表不存在\n");
	}
	return OK;
}

status GetElem_Sq(Sqlist* L)
{
	int index = 0;
	int num = 0;

	if (L->data != NULL)
	{
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

	else
	{
		printf("线性表不存在\n");
	}
	return OK;
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

status Insert_Sq(Sqlist* L)
{
	ElemType* p;
	int* q;
	int* r;
	int index;
	int i = 0;
	int n = 0;
	printf("请输入要插入的位置:>");
	scanf("%d", &index);

	if (index < 1 || index > L->length+1)
	{
		printf("输入位置不合法\n");
		return ERROR;
	}

	if (L->length >= L->listsize)
	{
		p = (ElemType*)realloc(L->data, (L->listsize+SQLISTINCREMENT)*sizeof(ElemType));
		if (p != NULL)
		{
			L->data = p;
		}

		L->listsize += SQLISTINCREMENT;
		printf("空间分配成功\n");
	}

	printf("请输入要插入的值:>");
	scanf("%d", &n);

	q = &(L->data[index-1]);
	for (r  = &(L->data[L->length-1]); r >= q; --r)
	{
		*(r+1) = *r;
	}

	*q = n;
	L->length++;
	printf("插入成功\n");
	return OK;
}

status Delete_Sq_Elem(Sqlist* L)
{
	int* p;
	int* q;
	int index = 0;
	printf("请输入要删除元素的位置:>");
	scanf("%d", &index);
	if (index<1 || index>L->length)
	{
		printf("请输入合法的数字\n");
		return ERROR;
	}

	p = &(L->data[index - 1]);
	q = L->data + L->length - 1;
	for (++p;p <= q; p++)
	{
		*(p-1) = *p;
	}

	L->length--;
	printf("删除成功\n");
	return OK;
}