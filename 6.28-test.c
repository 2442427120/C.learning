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

//函数声明
status InitStack(LinkStack* S);
status StackEmpty(LinkStack* S);
status Push(LinkStack* S);
status Pop(LinkStack* S);
status GetTop(LinkStack* S);

void menu(void)
{
	printf("******************************************************\n");
	printf("******************************************************\n");
	printf("*******              链栈的基本操作            *******\n");
	printf("*******        1.判断栈空       2.入栈         *******\n");
	printf("*******        3.出栈           4.取栈顶元素   *******\n");
	printf("*******        0.退出                          *******\n");
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
		printf("请选择相应的功能:>");
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
			printf("退出成功\n");
			break;
		default:
			printf("请输入合法的数字\n");
			break;
		}
	} while (input);
	return 0;
}

//初始化链栈
status InitStack(LinkStack* S)
{
	(*S) = NULL;
	return OK;
}

//判断链栈是否为空
status StackEmpty(LinkStack* S)
{
	if ((*S) == NULL)
	{
		printf("链栈为空\n");
		return TRUE;
	}
	else
	{
		printf("链栈不为空\n");
		return FALSE;
	}
}

//链栈的入栈操作
status Push(LinkStack* S)
{
	LinkStack p; //生成新结点
	p = (LinkStack)malloc(sizeof(StackNode)); //为新结点分配空间 
	if (!p)
	{
		printf("分配空间失败\n");
		return ERROR;
	}
	printf("请输入一个整数:>");
	scanf("%d", &p->data); //为新结点的数据与赋值
	p->next = (*S);//将新结点插入栈顶
	(*S) = p; //修改栈顶指针
	printf("入栈成功\n");
	return OK;
}

//链栈的出栈操作
status Pop(LinkStack* S)
{
	int tmp;
	LinkStack p;
	if ((*S) == NULL)
	{
		printf("栈空\n");
		return FALSE;
	}
	tmp = (*S)->data;
	p = (*S);
	(*S) = (*S)->next;
	free(p);
	p = NULL;
	printf("出栈的栈顶元素为:>%d\n", tmp);
	return OK;
}

//取栈顶元素的操作
status GetTop(LinkStack* S)
{
	if ((*S) != NULL)
	{
		printf("栈顶元素为:>%d\n", (*S)->data);
		return OK;
	}
	printf("栈空\n");
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
//	SElemType* base; //栈底指针
//	SElemType* top; //栈顶指针
//	int stacksize; //栈可用最大容量
//}SQstack;
//
// 函数声明
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
//	printf("********            顺序栈的基本操作           *******\n");
//	printf("********     1.入栈          2.判断栈空        *******\n");
//	printf("********     3.求栈的长度    4.清空栈          *******\n");
//	printf("********     5.销毁栈        6.出栈            *******\n");
//	printf("********     0.退出程序                        *******\n");
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
//		printf("请选择相应功能:>");
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
//			printf("退出成功\n");
//			break;
//		default:
//			printf("请输入合法的值\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//
////初始化顺序栈栈
//status InitStack(SQstack* S) //构造一个空栈
//{
//	S->base = (SElemType*)malloc(MAXSIZE * sizeof(SElemType));
//	if (!S->base) //存储空间分配失败
//	{
//		printf("存储空间分配失败\n");
//	}
//
//	S->top = S->base; //栈顶指针等于栈底指针
//	S->stacksize = MAXSIZE; //顺序栈的大小
//	return OK;
//}
//
////顺序栈的入栈
//status Push(SQstack* S)
//{
//	int tmp = 0; //临时变量存储用户输入的值
//	if (S->base == NULL && S->top == NULL) //顺序栈不存在
//	{
//		printf("顺序栈不存在\n");
//	}
//	else //存在
//	{
//		//1.判断是否栈满，若满则出错(上溢)
//		if (S->top - S->base == S->stacksize)
//		{
//			printf("栈满\n");
//			return ERROR;
//		}
//		printf("请输入一个整数:>");
//		scanf("%d", &tmp);
//		//2.新元素压入栈顶
//		*S->top = tmp;
//		//3.栈顶指针加1
//		S->top++;
//
//		return OK;
//	}
//	return ERROR; //若出现其他异常状态，则返回错误信息
//}
//
////判断顺序栈是否为空
//status StackEmpty(SQstack* S)
//{
//	if (S->base == NULL && S->top == NULL)
//	{
//		printf("顺序栈不存在\n");
//	}
//	else
//	{
//		if (S->base == S->top)
//		{
//			printf("顺序栈为空\n");
//			return TRUE;
//		}
//		else
//		{
//			printf("顺序栈不为空\n");
//			return FALSE;
//		}
//	}
//	return ERROR;
//}
//
////求顺序栈的长度
//status StackLength(SQstack* S)
//{
//	if (S->base == NULL && S->top == NULL)
//	{
//		printf("顺序栈不存在\n");
//	}
//	else
//	{
//		printf("顺序栈的长度为%zd\n", S->top - S->base);
//		return OK;
//	}
//	return ERROR;
//}
//
////清空顺序栈
//status ClearStack(SQstack* S)
//{
//	if (S->base == NULL && S->top == NULL)
//	{
//		printf("顺序栈不存在\n");
//	}
//	else
//	{
//		if (S->base != NULL)
//		{
//			S->top = S->base;
//			printf("清空成功\n");
//			return OK;
//		}
//		else
//		{
//			printf("清空失败\n");
//			return FALSE;
//		}
//	}
//	return ERROR;
//}
//
////销毁顺序栈
//status DestoryStack(SQstack* S)
//{
//	if (S->base == NULL && S->top == NULL)
//	{
//		printf("顺序栈不存在\n");
//	}
//	else
//	{
//		if (S->base)
//		{
//			free(S->base); //将栈底指针分配的空间给释放
//			S->stacksize = 0; //顺序栈的元素个数置0
//			S->base = NULL; //将栈底指针置空
//			S->top = NULL; //将栈顶指针置空
//
//			printf("销毁成功\n");
//			return OK;
//		}
//		else
//		{
//			printf("销毁失败\n");
//			return FALSE;
//		}
//	}
//	return ERROR;
//}
//
////顺序栈的出栈
//status Pop(SQstack* S)
//{
//	int tmp = 0;
//	if (S->base == NULL && S->top == NULL)
//	{
//		printf("顺序栈不存在\n");
//	}
//	else
//	{
//		//1.判断是否栈空，若空则出错（下溢）
//		if (S->top == S->base)
//		{
//			printf("栈空\n");
//			return ERROR;
//		}
//		//2.栈顶指针减1
//		S->top--;
//		//3.获取栈顶元素
//		tmp = *S->top;
//
//		printf("出栈的元素是%d\n", tmp);
//		return OK;
//	}
//	return ERROR; 
//}