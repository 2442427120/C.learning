#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

//初始化
void InitContact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;//设置通讯录最初只有0个元素
}

//增加通讯录中的信息
void AddContact(struct Contact* ps)
{
	if (ps->size == MAX)
	{
		printf("通讯录已满，无法添加\n");
	}
	else
	{
		printf("请输入姓名:>");
		scanf("%s",ps->data[ps->size].name);

		printf("请输入年龄:>");
		scanf("%d", &(ps->data[ps->size].age));

		printf("请输入性别:>");
		scanf("%s", ps->data[ps->size].sex);

		printf("请输入电话:>");
		scanf("%s", ps->data[ps->size].tele);

		printf("请输入住址:>");
		scanf("%s", ps->data[ps->size].addr);

		ps->size++;
		printf("添加成功\n");
	}
}
//显示通讯录内容
void showContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "姓名", "年龄", "性别", "电话", "住址");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n","姓名","年龄","性别","电话","住址");
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
	printf("请输入要删除的人的姓名:>");
	scanf("%s",name);
	//1.查找要删除的人在什么位置
	//找到了返回名字所在元素的下标
	//找不到返回-1
	int pos = FindByname(ps, name);
	//删除
	if (pos == -1)
	{
		printf("没有找到此人的信息\n");
	}
	else
	{
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}

}

void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要查到人的姓名:>");
	scanf("%s",name);
	int pos = FindByname(ps,name);

	if (pos == -1)
	{
		printf("找不到此人的信息\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "姓名", "年龄", "性别", "电话", "住址");
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
	printf("请输入要修改的联系人的姓名:>");
	scanf("%s",name);
	int pos = FindByname(ps, name);

	if (pos == -1)
	{
		printf("找不到此人的信息\n");
	}
	else
	{
		printf("请输入姓名:>");
		scanf("%s", ps->data[pos].name);

		printf("请输入年龄:>");
		scanf("%d", &(ps->data[pos].age));

		printf("请输入性别:>");
		scanf("%s", ps->data[pos].sex);

		printf("请输入电话:>");
		scanf("%s", ps->data[pos].tele);

		printf("请输入住址:>");
		scanf("%s", ps->data[pos].addr);

		printf("修改成功\n");


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

//自定义冒泡排序函数bubble_sort - 可排序所有类型的数组
//void bubble_sort_by_name(void* base, int sz, int width, int (*cmp)(const void* e1, const void* e2))
//{
//	int i = 0;
//	//趟数
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		//每一趟比较的对数
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			//比较第一个元素和第二个元素的大小
//			//char类型只操作一个字节的数，当元素的大小为width时，加上一个width就找到了下一个元素
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				//自定义两个元素交换的函数
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