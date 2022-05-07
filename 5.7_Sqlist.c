#pragma once
#include "Sqlist.h"

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
	/*if (L->data == NULL)
	{
		printf("����δ�������Ա����ȴ���һ�����Ա�\n");
		return ERROR;
	}

	L->data = NULL;*/
	L->length = 0;

	printf("���Ա�������\n");
	return OK;
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
			return OK;
		}
	}

	else
	{
		printf("���Ա�����\n");
		return NOEXIT;
	}
}

status GetElem_Sq(Sqlist* L)
{
	int index = 0;
	int num = 0;
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