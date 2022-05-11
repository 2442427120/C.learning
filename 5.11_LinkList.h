#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

typedef void status;
typedef int ElemType;

typedef struct Node
{
	ElemType data;
	struct Node* next;
}LNode;

typedef struct Node* LinkList;

//初始化线性表
status Init_LinkList(LinkList* L);
//头插法创建线性表
status Creat_LinkList_Head(LinkList* L);
//尾插法创建线性表
status Creat_LinkList_Tail(LinkList* L);
//打印线性表
status Print_LinkList(LinkList* L);
//查找线性表中的某元素
status Serach_by_Elem(LinkList* L);
//按位查找元素
status Search_by_Pos(LinkList* L);
//插入元素到线性表
status Inser_Elem(LinkList *L);
//删除线性表中的元素
status Delete_Elem(LinkList* L);
//修改元素的值
status Modefy_Elem(LinkList* L);