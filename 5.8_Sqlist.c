#pragma once
#include "5.8_Sqlist.h"

status Init_Sq(Sqlist* L)
{
	L->data = (ElemType*)malloc(SQLIST_INIT_SIZE*sizeof(ElemType));
	if (!(L->data))
	{
		printf("����ռ�ʧ��\n");
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
				printf("����ռ�ɹ�\n");
			}
			else
				break;
		}
	}

	for (i = 0; i < n; i++)
	{
		printf("�������%d��Ԫ�ص�ֵ:>", i+1);
		scanf("%d", &(L->data[i]));
	}

	L->length = n;
	return OK;
}

status Destroy_Sq(Sqlist* L)
{
	if (L->data == NULL)
	{
		printf("����δ�������Ա����ȴ���һ�����Ա�\n");
		return ERROR;
	}

	free(L->data);
	L->data = NULL;
	L->length = 0;
	L->listsize = 0;

	printf("���Ա���ɾ��\n");
	return OK;

}

status Clear_Sq(Sqlist* L)
{
	if (L->data != NULL)
	{
		L->length = 0;
		printf("���Ա�������\n");
		return OK;
	}
	else
	{
		printf("���Ա�����\n");
		return ERROR;
	}
}

status IsEmpty_Sq(Sqlist* L)
{
	if (L->data)
	{
		if (L->length != 0)
		{
			printf("���Ա��ǿձ�\n");
			return FALSE;
		}

		else 
		{
			printf("���Ա�Ϊ��\n");
		}
		return	TRUE;
	}

	else
	{
		printf("���Ա�����\n");
	}
	return OK;
}

status GetElem_Sq(Sqlist* L)
{
	int index = 0;
	int num = 0;

	if (L->data != NULL)
	{
		printf("������Ҫ��ȡԪ�ص�λ��:>");
		scanf("%d", &index);
		num = index;
		if (index < 0 || index > L->length)
		{
			printf("�������λ�ÿ���̫С�˻���̫����\n");
			return ERROR;
		}

		else
		{
			index = L->data[index - 1];
			printf("��%d��Ԫ����%d\n", num, index);
			return OK;
		}
	}

	else
	{
		printf("���Ա�����\n");
	}
	return OK;
}

status GetLength_Sq(Sqlist* L)
{
	/*int ret = IsEmpty_Sq(&L);
	if (1 == ret)
	{
		printf("���Ա�Ϊ��");
	}
	else if (-1 == ret)
	{
		printf("���Ա�����");
	}*/
	////else
	////{
	int K = L->length;
	printf("��ǰ���Ա�ĳ���Ϊ%d\n", K);
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
	printf("������Ҫ�����λ��:>");
	scanf("%d", &index);

	if (index < 1 || index > L->length+1)
	{
		printf("����λ�ò��Ϸ�\n");
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
		printf("�ռ����ɹ�\n");
	}

	printf("������Ҫ�����ֵ:>");
	scanf("%d", &n);

	q = &(L->data[index-1]);
	for (r  = &(L->data[L->length-1]); r >= q; --r)
	{
		*(r+1) = *r;
	}

	*q = n;
	L->length++;
	printf("����ɹ�\n");
	return OK;
}

status Delete_Sq_Elem(Sqlist* L)
{
	int* p;
	int* q;
	int index = 0;
	printf("������Ҫɾ��Ԫ�ص�λ��:>");
	scanf("%d", &index);
	if (index<1 || index>L->length)
	{
		printf("������Ϸ�������\n");
		return ERROR;
	}

	p = &(L->data[index - 1]);
	q = L->data + L->length - 1;
	for (++p;p <= q; p++)
	{
		*(p-1) = *p;
	}

	L->length--;
	printf("ɾ���ɹ�\n");
	return OK;
}