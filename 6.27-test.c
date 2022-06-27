#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define OK 1
#define TRUE 1
#define FALSE 0
#define ERROR -1;
#define MAXSIZE 100
typedef int SElemType;
typedef int status;

typedef struct SQstack
{
	SElemType* base; //ջ��ָ��
	SElemType* top; //ջ��ָ��
	int stacksize; //ջ�����������
}SQstack;
typedef struct SQstack* Stack;

status InitStack(Stack* S);
status StackEmpty(Stack* S);
status StackLength(Stack* S);
status ClearStack(Stack* S);
status DestoryStack(Stack* S);
status Push(Stack* S);
status Pop(Stack* S);

void menu(void)
{
	printf("******************************************************\n");
	printf("********            ˳��ջ�Ļ�������           *******\n");
	printf("********     1.��ջ          2.�ж�ջ��        *******\n");
	printf("********     3.��ջ�ĳ���    4.���ջ          *******\n");
	printf("********     5.����ջ        6.��ջ            *******\n");
	printf("******************************************************\n");
	printf("******************************************************\n");
	printf("******************************************************\n");

}
int main(void)
{
	int input;
	Stack S;
	InitStack(&S);
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Push(&S);
			break;
		case 2:
			StackEmpty(&S);
			break;
		case 3:
			StackLength(&S);
			break;
		case 4:
			ClearStack(&S);
			break;
		case 5:
			DestoryStack(&S);
			break;
		case 6:
			Pop(&S);
			break;
		case 0:
			printf("�˳��ɹ�\n");
			break;
		default:
			printf("������Ϸ���ֵ\n");
			break;
		}
	} while (input);
	return 0;
}

//��ʼ��˳��ջջ
status InitStack(Stack* S) //����һ����ջ
{
	(*S)->base = (SElemType*)malloc(MAXSIZE*sizeof(SElemType));
	if (!(*S)->base) //�洢�ռ����ʧ��
	{
		printf("�洢�ռ����ʧ��\n");
	}

	(*S)->top = (*S)->base; //ջ��ָ�����ջ��ָ��
	(*S)->stacksize = MAXSIZE; //˳��ջ�Ĵ�С
	return OK;
}

//˳��ջ����ջ
status Push(Stack* S)
{
	int tmp = 0; //��ʱ�����洢�û������ֵ
	//1.�ж��Ƿ�ջ�������������(����)
	if ((*S)->top - (*S)->base == (*S)->stacksize)
	{
		printf("ջ��\n");
		return ERROR;
	}

	scanf("%d", &tmp);
	//2.��Ԫ��ѹ��ջ��
	(**S).top = tmp;
	//3.ջ��ָ���1
	(*S)->top++;

	return OK;
}

//�ж�˳��ջ�Ƿ�Ϊ��
status StackEmpty(Stack* S)
{
	if ((*S)->base == (*S)->top)
	{
		printf("˳��ջΪ��\n");
		return TRUE;
	}
	else
	{
		printf("˳��ջ��Ϊ��\n");
		return FALSE;
	}
}

//��˳��ջ�ĳ���
status StackLength(Stack* S)
{
	printf("˳��ջ�ĳ���Ϊ%zd", (*S)->top - (*S)->base);
	return OK;
}

//���˳��ջ
status ClearStack(Stack* S)
{
	if ((*S)->base != NULL)
	{
		(*S)->top = (*S)->base;
		printf("��ճɹ�\n");
		return OK;
	}
	else
	{
		printf("���ʧ��\n");
		return FALSE;
	}
}

//����˳��ջ
status DestoryStack(Stack* S)
{
	if ((*S)->base)
	{
		free((*S)->base); //��ջ��ָ�����Ŀռ���ͷ�
		(*S)->stacksize = 0; //˳��ջ��Ԫ�ظ�����0
		(*S)->base = NULL; //��ջ��ָ���ÿ�
		(*S)->top = NULL; //��ջ��ָ���ÿ�

		printf("���ٳɹ�\n");
		return OK;
	}
	else
	{
		printf("����ʧ��\n");
		return FALSE;
	}
}

//˳��ջ�ĳ�ջ
status Pop(Stack* S)
{
	int tmp = 0;
	//1.�ж��Ƿ�ջ�գ�������������磩
	if ((*S)->top == (*S)->base)
	{
		printf("ջ");
		return ERROR;
	}
	//2.ջ��ָ���1
	(*S)->top--;
	//3.��ȡջ��Ԫ��
	tmp = (**S).top;

	printf("��ջ��Ԫ����%d\n", tmp);
	return OK;
}

//int main(void)
//{
//	int arr[5] = { 0,1,2,3,4 };
//	int* p = &arr[4]; //�����Ԫ�صĵ�ַ
//	int* q = &arr[2]; //�ڶ���Ԫ�صĵ�ַ
//
//	printf("%zd", p - q); 
//
//	return 0;
//}