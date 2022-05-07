#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <windows.h>

#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define NOEXIT -1
#define OVERFLOW -2

#define SQLIST_INIT_SIZE 100
#define SQLISTINCREMENT 10

typedef int ElemType;
typedef int status;

typedef struct
{
	ElemType* data;
	int length;
	int listsize;

}Sqlist;

//初始化线性表
status Init_Sq(Sqlist* L);
//为线性表赋值
status Create_Sq(Sqlist* L, int n);
//销毁线性表
status Destroy_Sq(Sqlist* L);
//清空线性表
status Clear_Sq(Sqlist* L);
//判断线性表是否为空
status IsEmpty_Sq(Sqlist* L);
//获取线性表中某位置元素的值
status GetElem_Sq(Sqlist* L);
//获取当前线性表的长度
status GetLength_Sq(Sqlist* L);
status Print_Sq(Sqlist* L);