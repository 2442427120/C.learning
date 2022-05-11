#include "5.10_LinkList.h"

status Init_LinkList(LinkList* L)
{
	(*L) = (LinkList)malloc(sizeof(LNode));
	if ((*L) == NULL)
	{
		return ERROR;
	}

	(*L)->next = NULL;
	return OK;
}

status Creat_LinkList_Head(LinkList* L)
{
	LinkList p;
	int n, i;
	printf("������Ҫ�������Ԫ�صĸ���:>");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		p = (LinkList)malloc(sizeof(LNode));
		printf("�������%d��Ԫ�ص�ֵ:>", i + 1);
		scanf("%d", &(p->data));
		p->next = (*L)->next;
		(*L)->next = p;
	}

	printf("�����ɹ�\n");
	return OK;
}

status Creat_LinkList_Tail(LinkList* L)
{
	LinkList p, q;
	int n, i;
	int count = 1;
	q = (*L);

	printf("������Ҫ�������Ԫ�صĸ���:>");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		p = (LinkList)malloc(sizeof(LNode));
		printf("�������%d��Ԫ�ص�ֵ:>", i + 1);
		scanf("%d", &(p->data));
		q->next = p;
		q = p;
	}

	q->next = NULL;
	printf("�����ɹ�\n");
	return OK;

}

status Print_LinkList(LinkList* L)
{
	LinkList p;
	int i = 0;
	p = *L;
	printf("���Ա��Ԫ��Ϊ\n");
	p = (*L)->next;

	while (p)
	{
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
	return OK;
}

status Serach_by_Elem(LinkList* L)
{
	int e = 0;
	int count = 1;
	LinkList p;
	p = (*L);

	printf("������Ҫ���ҵ�Ԫ�ص�ֵ:>");
	scanf("%d", &e);

	p = (*L)->next;
	while (p)
	{
		if (e == p->data)
		{
			printf("Ԫ�ص�λ��Ϊ%d\n", count);
			return OK;
		}
		count++;
		p = p->next;
	}

	printf("����û�и�Ԫ��\n");
	return FALSE;
}

status Search_by_Pos(LinkList* L)
{
	int i, pos;
	int count = 1;
	LinkList p;
	p = L;
	printf("������Ҫ��ѯ��λ��:>");
	scanf("%d", &pos);

	p = (*L)->next;

	while (p)
	{
		if (pos == count)
		{
			printf("��λ��Ԫ�ص�ֵΪ%d\n", p->data);
			return OK;
		}
		count++;
		p = p->next;
	}

	printf("�����λ�ò��Ϸ�\n");
	return FALSE;
}

status Inser_Elem(LinkList *L)
{
	LinkList p, s;
	p = (*L);
	int pos, i,e;
	int j = 1;
	printf("������Ҫ���ĸ�λ�ò���Ԫ��:>");
	scanf("%d", &i);

	while (p)
	{
		if (j == i)
		{
			break;
		}

		p = p->next;
		j++;
	}

	if (j > i)
	{
		printf("�����λ�ò��Ϸ�\n");
		return FALSE;
	}

	s = (LinkList)malloc(sizeof(LNode));
	printf("������Ҫ�����ֵ:>");
	scanf("%d", &(s->data));

	s->next = p->next;
	p->next = s;

	printf("����ɹ�\n");
	return OK;

}

status Delete_Elem(LinkList* L)
{
	LinkList p, s;
	int pos, i;
	i = 1;
	p = (*L);
	printf("������Ҫɾ���ڼ���Ԫ��:>");
	scanf("%d", &pos);
	while (p)
	{
		if (i == pos)
		{
			break;
		}

		i++;
		p = p->next;
	}

	if (i > pos)
	{
		printf("Ҫɾ���Ľڵ㲻����\n");
		return FALSE;
	}
	else
	{
		s = p->next;
		p->next = s->next;
		free(s);
		printf("ɾ���ɹ�\n");
		return OK;
	}

	printf("���Ա�����\n");
	return ERROR;
}
//status Modify_by_seat(LinkList* L)
//{
//	int pos,e;
//	LinkList p;
//	p = (*L);
//
//	printf("������Ҫ�޸ĵ�λ��:>");
//	scanf("%d", &pos);
//	printf("�������޸ĺ��ֵ:>");
//	scanf("%d", &e);
//	p = (*L)->next;
//	while (p)
//	{
//		if (e == p->data)
//		{
//			p->data = e;
//			printf("�޸ĳɹ�\n");
//			return OK;
//		}
//		p = p->next;
//
//	}
//}