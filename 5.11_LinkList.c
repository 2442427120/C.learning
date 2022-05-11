#include "5.11_LinkList.h"

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
	printf("请输入要创建表的元素的个数:>");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		p = (LinkList)malloc(sizeof(LNode));
		printf("请输入第%d个元素的值:>", i + 1);
		scanf("%d", &(p->data));
		p->next = (*L)->next;
		(*L)->next = p;
	}

	printf("创建成功\n");
	return OK;
}

status Creat_LinkList_Tail(LinkList* L)
{
	LinkList p, q;
	int n, i;
	int count = 1;
	q = (*L);

	printf("请输入要创建表的元素的个数:>");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		p = (LinkList)malloc(sizeof(LNode));
		printf("请输入第%d个元素的值:>", i + 1);
		scanf("%d", &(p->data));
		q->next = p;
		q = p;
	}

	q->next = NULL;
	printf("创建成功\n");
	return OK;

}

status Print_LinkList(LinkList* L)
{
	LinkList p;
	int i = 0;
	p = *L;
	printf("线性表的元素为\n");
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

	printf("请输入要查找的元素的值:>");
	scanf("%d", &e);

	p = (*L)->next;
	while (p)
	{
		if (e == p->data)
		{
			printf("元素的位置为%d\n", count);
			return OK;
		}
		count++;
		p = p->next;
	}

	printf("表中没有该元素\n");
	return FALSE;
}

status Search_by_Pos(LinkList* L)
{
	int i, pos;
	int count = 1;
	LinkList p;
	p = L;
	printf("请输入要查询的位置:>");
	scanf("%d", &pos);

	p = (*L)->next;

	while (p)
	{
		if (pos == count)
		{
			printf("该位置元素的值为%d\n", p->data);
			return OK;
		}
		count++;
		p = p->next;
	}

	printf("输入的位置不合法\n");
	return FALSE;
}

status Inser_Elem(LinkList *L)
{
	LinkList p, s;
	p = (*L);
	int pos,e;
	int j = 1;
	printf("请输入要在哪个位置插入元素:>");
	scanf("%d", &pos);
	/*p = (*L)->next;*/ // 让p指向首元结点
	while (p)
	{
		if (j == pos)
		{
			break;
		}

		p = p->next;
		j++;
	}

	if (j < pos+1 && p == NULL) //错误判断，当输入的位置的值大于
	{
		printf("插入的位置不合法\n");
		return FALSE;
	}

	s = (LinkList)malloc(sizeof(LNode));
	printf("请输入要插入的值:>");
	scanf("%d", &(s->data));

	s->next = p->next;
	p->next = s;

	printf("插入成功\n");
	return OK;

}

status Delete_Elem(LinkList* L)
{
	LinkList p, s; 
	int pos, i;
	i = 1;
	p = (*L); // p指向首结点
	printf("请输入要删除第几个元素:>");
	scanf("%d", &pos);
	//p = (*L)->next;
	while (p)
	{
		if (i == pos)
		{
			break;
		}

		i++;
		p = p->next;
	}

	if (i < pos && p == NULL)
	{
		printf("要删除的节点不存在\n");
		return FALSE;
	}
	else
	{
		s = p->next;
		p->next = s->next;
		free(s);
		s = NULL;
		printf("删除成功\n");
		return OK;
	}

	printf("线性表不存在\n");
	return ERROR;
}

status Modefy_Elem(LinkList* L)
{
	LinkList p;
	int pos = 0;
	int e = 0;
	int i = 0;
	int count = 1;
	p = (*L);

	printf("请输入要修改的元素的位置:>");
	scanf("%d", &pos);
	printf("请输入修改后的值:>");
	scanf("%d", &e);
	p = (*L)->next;
	while (p)
	{
		if (pos == count)
		{
			p->data = e;
			printf("修改成功\n");
			break;
		}
		count++;
		p = p->next;

	}
	/*for (i = 1; i < pos; i++)
	{
		p = p->next;
	}
	p->data = e;
	return OK;*/
	if (pos > count )
	{
		printf("输入的位置超出了表的范围\n");
		return ERROR;
	}
	else if(pos < 1 )
	{
		printf("输入的位置不合法\n");
		return ERROR;
	}
}