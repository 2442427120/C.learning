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

//��ʼ�����Ա�
status Init_Sq(Sqlist* L);
//Ϊ���Ա�ֵ
status Create_Sq(Sqlist* L, int n);
//�������Ա�
status Destroy_Sq(Sqlist* L);
//������Ա�
status Clear_Sq(Sqlist* L);
//�ж����Ա��Ƿ�Ϊ��
status IsEmpty_Sq(Sqlist* L);
//��ȡ���Ա���ĳλ��Ԫ�ص�ֵ
status GetElem_Sq(Sqlist* L);
//��ȡ��ǰ���Ա�ĳ���
status GetLength_Sq(Sqlist* L);
status Print_Sq(Sqlist* L);