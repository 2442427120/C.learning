#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

//��ʼ��
void InitContact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;//����ͨѶ¼���ֻ��0��Ԫ��
}

//����ͨѶ¼�е���Ϣ
void AddContact(struct Contact* ps)
{
	if (ps->size == MAX)
	{
		printf("ͨѶ¼�������޷����\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s",ps->data[ps->size].name);

		printf("����������:>");
		scanf("%d", &(ps->data[ps->size].age));

		printf("�������Ա�:>");
		scanf("%s", ps->data[ps->size].sex);

		printf("������绰:>");
		scanf("%s", ps->data[ps->size].tele);

		printf("������סַ:>");
		scanf("%s", ps->data[ps->size].addr);

		ps->size++;
		printf("��ӳɹ�\n");
	}
}
//��ʾͨѶ¼����
void showContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "סַ");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n","����","����","�Ա�","�绰","סַ");
		printf("\n");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
			printf("\n");
		}
	}
}

static int FindByname(const struct Contact* ps, char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;
		}
	}
	return -1;
}


void DelContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫɾ�����˵�����:>");
	scanf("%s",name);
	//1.����Ҫɾ��������ʲôλ��
	//�ҵ��˷�����������Ԫ�ص��±�
	//�Ҳ�������-1
	int pos = FindByname(ps, name);
	//ɾ��
	if (pos == -1)
	{
		printf("û���ҵ����˵���Ϣ\n");
	}
	else
	{
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}

}

void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ�鵽�˵�����:>");
	scanf("%s",name);
	int pos = FindByname(ps,name);

	if (pos == -1)
	{
		printf("�Ҳ������˵���Ϣ\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "סַ");
		printf("\n");
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[pos].name,
				ps->data[pos].age,
				ps->data[pos].sex,
				ps->data[pos].tele,
				ps->data[pos].addr);
			printf("\n");
	}
}

void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ�޸ĵ���ϵ�˵�����:>");
	scanf("%s",name);
	int pos = FindByname(ps, name);

	if (pos == -1)
	{
		printf("�Ҳ������˵���Ϣ\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", ps->data[pos].name);

		printf("����������:>");
		scanf("%d", &(ps->data[pos].age));

		printf("�������Ա�:>");
		scanf("%s", ps->data[pos].sex);

		printf("������绰:>");
		scanf("%s", ps->data[pos].tele);

		printf("������סַ:>");
		scanf("%s", ps->data[pos].addr);

		printf("�޸ĳɹ�\n");


	}
}

//void swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}

//�Զ���ð��������bubble_sort - �������������͵�����
//void bubble_sort_by_name(void* base, int sz, int width, int (*cmp)(const void* e1, const void* e2))
//{
//	int i = 0;
//	//����
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		//ÿһ�˱ȽϵĶ���
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			//�Ƚϵ�һ��Ԫ�غ͵ڶ���Ԫ�صĴ�С
//			//char����ֻ����һ���ֽڵ�������Ԫ�صĴ�СΪwidthʱ������һ��width���ҵ�����һ��Ԫ��
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				//�Զ�������Ԫ�ؽ����ĺ���
//				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//
//	}
//}
//
//int cmp_str_by_name(const void* e1, const void* e2)
//{
//	return strcmp((((struct Contact*)e1)->data)->name, (((struct Contact*)e2)->data)->name);
//}
//
//void SortContact(struct Contact* ps)
//{
//	int sz = sizeof(ps->data) / sizeof(ps->data[0]);
//	bubble_sort_by_name(ps,sz,sizeof(ps->data[0]), cmp_str_by_name);
//}