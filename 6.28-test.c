#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define OK 1
#define ERROR -1
#define TRUE 1
#define FALSE -1

typedef int SElemType;
typedef int status;

typedef struct StackNode
{
	SElemType data;
	struct StackNode* next;
}StackNode, *LinkStack;

//��������
status InitStack(LinkStack* S);
status StackEmpty(LinkStack* S);
status Push(LinkStack* S);
status Pop(LinkStack* S);
status GetTop(LinkStack* S);

void menu(void)
{
	printf("******************************************************\n");
	printf("******************************************************\n");
	printf("*******              ��ջ�Ļ�������            *******\n");
	printf("*******        1.�ж�ջ��       2.��ջ         *******\n");
	printf("*******        3.��ջ           4.ȡջ��Ԫ��   *******\n");
	printf("*******        0.�˳�                          *******\n");
	printf("******************************************************\n");
	printf("******************************************************\n");
	printf("******************************************************\n");
}
int main(void)
{
	int input = 0;
	LinkStack S;
	InitStack(&S);
	do
	{
		menu();
		printf("��ѡ����Ӧ�Ĺ���:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			StackEmpty(&S);
			break;
		case 2:
			Push(&S);
			break;
		case 3:
			Pop(&S);
			break;
		case 4:
			GetTop(&S);
			break;
		case 0:
			printf("�˳��ɹ�\n");
			break;
		default:
			printf("������Ϸ�������\n");
			break;
		}
	} while (input);
	return 0;
}

//��ʼ����ջ
status InitStack(LinkStack* S)
{
	(*S) = NULL;
	return OK;
}

//�ж���ջ�Ƿ�Ϊ��
status StackEmpty(LinkStack* S)
{
	if ((*S) == NULL)
	{
		printf("��ջΪ��\n");
		return TRUE;
	}
	else
	{
		printf("��ջ��Ϊ��\n");
		return FALSE;
	}
}

//��ջ����ջ����
status Push(LinkStack* S)
{
	LinkStack p; //�����½��
	p = (LinkStack)malloc(sizeof(StackNode)); //Ϊ�½�����ռ� 
	if (!p)
	{
		printf("����ռ�ʧ��\n");
		return ERROR;
	}
	printf("������һ������:>");
	scanf("%d", &p->data); //Ϊ�½��������븳ֵ
	p->next = (*S);//���½�����ջ��
	(*S) = p; //�޸�ջ��ָ��
	printf("��ջ�ɹ�\n");
	return OK;
}

//��ջ�ĳ�ջ����
status Pop(LinkStack* S)
{
	int tmp;
	LinkStack p;
	if ((*S) == NULL)
	{
		printf("ջ��\n");
		return FALSE;
	}
	tmp = (*S)->data;
	p = (*S);
	(*S) = (*S)->next;
	free(p);
	p = NULL;
	printf("��ջ��ջ��Ԫ��Ϊ:>%d\n", tmp);
	return OK;
}

//ȡջ��Ԫ�صĲ���
status GetTop(LinkStack* S)
{
	if ((*S) != NULL)
	{
		printf("ջ��Ԫ��Ϊ:>%d\n", (*S)->data);
		return OK;
	}
	printf("ջ��\n");
	return FALSE;
}

//#define OK 1
//#define TRUE 1
//#define FALSE 0
//#define ERROR -1;
//#define MAXSIZE 5
//typedef int SElemType;
//typedef int status;
//
//typedef struct SQstack
//{
//	SElemType* base; //ջ��ָ��
//	SElemType* top; //ջ��ָ��
//	int stacksize; //ջ�����������
//}SQstack;
//
// ��������
//status InitStack(SQstack* S);
//status StackEmpty(SQstack* S);
//status StackLength(SQstack* S);
//status ClearStack(SQstack* S);
//status DestoryStack(SQstack* S);
//status Push(SQstack* S);
//status Pop(SQstack* S);
//
//void menu(void)
//{
//	printf("******************************************************\n");
//	printf("******************************************************\n");
//	printf("********            ˳��ջ�Ļ�������           *******\n");
//	printf("********     1.��ջ          2.�ж�ջ��        *******\n");
//	printf("********     3.��ջ�ĳ���    4.���ջ          *******\n");
//	printf("********     5.����ջ        6.��ջ            *******\n");
//	printf("********     0.�˳�����                        *******\n");
//	printf("******************************************************\n");
//	printf("******************************************************\n");
//
//}
//int main(void)
//{
//	int input;
//	SQstack S;
//	InitStack(&S);
//	do
//	{
//		menu();
//		printf("��ѡ����Ӧ����:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Push(&S);
//			break;
//		case 2:
//			StackEmpty(&S);
//			break;
//		case 3:
//			StackLength(&S);
//			break;
//		case 4:
//			ClearStack(&S);
//			break;
//		case 5:
//			DestoryStack(&S);
//			break;
//		case 6:
//			Pop(&S);
//			break;
//		case 0:
//			printf("�˳��ɹ�\n");
//			break;
//		default:
//			printf("������Ϸ���ֵ\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//
////��ʼ��˳��ջջ
//status InitStack(SQstack* S) //����һ����ջ
//{
//	S->base = (SElemType*)malloc(MAXSIZE * sizeof(SElemType));
//	if (!S->base) //�洢�ռ����ʧ��
//	{
//		printf("�洢�ռ����ʧ��\n");
//	}
//
//	S->top = S->base; //ջ��ָ�����ջ��ָ��
//	S->stacksize = MAXSIZE; //˳��ջ�Ĵ�С
//	return OK;
//}
//
////˳��ջ����ջ
//status Push(SQstack* S)
//{
//	int tmp = 0; //��ʱ�����洢�û������ֵ
//	if (S->base == NULL && S->top == NULL) //˳��ջ������
//	{
//		printf("˳��ջ������\n");
//	}
//	else //����
//	{
//		//1.�ж��Ƿ�ջ�������������(����)
//		if (S->top - S->base == S->stacksize)
//		{
//			printf("ջ��\n");
//			return ERROR;
//		}
//		printf("������һ������:>");
//		scanf("%d", &tmp);
//		//2.��Ԫ��ѹ��ջ��
//		*S->top = tmp;
//		//3.ջ��ָ���1
//		S->top++;
//
//		return OK;
//	}
//	return ERROR; //�����������쳣״̬���򷵻ش�����Ϣ
//}
//
////�ж�˳��ջ�Ƿ�Ϊ��
//status StackEmpty(SQstack* S)
//{
//	if (S->base == NULL && S->top == NULL)
//	{
//		printf("˳��ջ������\n");
//	}
//	else
//	{
//		if (S->base == S->top)
//		{
//			printf("˳��ջΪ��\n");
//			return TRUE;
//		}
//		else
//		{
//			printf("˳��ջ��Ϊ��\n");
//			return FALSE;
//		}
//	}
//	return ERROR;
//}
//
////��˳��ջ�ĳ���
//status StackLength(SQstack* S)
//{
//	if (S->base == NULL && S->top == NULL)
//	{
//		printf("˳��ջ������\n");
//	}
//	else
//	{
//		printf("˳��ջ�ĳ���Ϊ%zd\n", S->top - S->base);
//		return OK;
//	}
//	return ERROR;
//}
//
////���˳��ջ
//status ClearStack(SQstack* S)
//{
//	if (S->base == NULL && S->top == NULL)
//	{
//		printf("˳��ջ������\n");
//	}
//	else
//	{
//		if (S->base != NULL)
//		{
//			S->top = S->base;
//			printf("��ճɹ�\n");
//			return OK;
//		}
//		else
//		{
//			printf("���ʧ��\n");
//			return FALSE;
//		}
//	}
//	return ERROR;
//}
//
////����˳��ջ
//status DestoryStack(SQstack* S)
//{
//	if (S->base == NULL && S->top == NULL)
//	{
//		printf("˳��ջ������\n");
//	}
//	else
//	{
//		if (S->base)
//		{
//			free(S->base); //��ջ��ָ�����Ŀռ���ͷ�
//			S->stacksize = 0; //˳��ջ��Ԫ�ظ�����0
//			S->base = NULL; //��ջ��ָ���ÿ�
//			S->top = NULL; //��ջ��ָ���ÿ�
//
//			printf("���ٳɹ�\n");
//			return OK;
//		}
//		else
//		{
//			printf("����ʧ��\n");
//			return FALSE;
//		}
//	}
//	return ERROR;
//}
//
////˳��ջ�ĳ�ջ
//status Pop(SQstack* S)
//{
//	int tmp = 0;
//	if (S->base == NULL && S->top == NULL)
//	{
//		printf("˳��ջ������\n");
//	}
//	else
//	{
//		//1.�ж��Ƿ�ջ�գ�������������磩
//		if (S->top == S->base)
//		{
//			printf("ջ��\n");
//			return ERROR;
//		}
//		//2.ջ��ָ���1
//		S->top--;
//		//3.��ȡջ��Ԫ��
//		tmp = *S->top;
//
//		printf("��ջ��Ԫ����%d\n", tmp);
//		return OK;
//	}
//	return ERROR; 
//}