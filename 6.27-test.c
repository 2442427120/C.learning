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
	SElemType* base; //栈底指针
	SElemType* top; //栈顶指针
	int stacksize; //栈可用最大容量
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
	printf("********            顺序栈的基本操作           *******\n");
	printf("********     1.入栈          2.判断栈空        *******\n");
	printf("********     3.求栈的长度    4.清空栈          *******\n");
	printf("********     5.销毁栈        6.出栈            *******\n");
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
			printf("退出成功\n");
			break;
		default:
			printf("请输入合法的值\n");
			break;
		}
	} while (input);
	return 0;
}

//初始化顺序栈栈
status InitStack(Stack* S) //构造一个空栈
{
	(*S)->base = (SElemType*)malloc(MAXSIZE*sizeof(SElemType));
	if (!(*S)->base) //存储空间分配失败
	{
		printf("存储空间分配失败\n");
	}

	(*S)->top = (*S)->base; //栈顶指针等于栈底指针
	(*S)->stacksize = MAXSIZE; //顺序栈的大小
	return OK;
}

//顺序栈的入栈
status Push(Stack* S)
{
	int tmp = 0; //临时变量存储用户输入的值
	//1.判断是否栈满，若满则出错(上溢)
	if ((*S)->top - (*S)->base == (*S)->stacksize)
	{
		printf("栈满\n");
		return ERROR;
	}

	scanf("%d", &tmp);
	//2.新元素压入栈顶
	(**S).top = tmp;
	//3.栈顶指针加1
	(*S)->top++;

	return OK;
}

//判断顺序栈是否为空
status StackEmpty(Stack* S)
{
	if ((*S)->base == (*S)->top)
	{
		printf("顺序栈为空\n");
		return TRUE;
	}
	else
	{
		printf("顺序栈不为空\n");
		return FALSE;
	}
}

//求顺序栈的长度
status StackLength(Stack* S)
{
	printf("顺序栈的长度为%zd", (*S)->top - (*S)->base);
	return OK;
}

//清空顺序栈
status ClearStack(Stack* S)
{
	if ((*S)->base != NULL)
	{
		(*S)->top = (*S)->base;
		printf("清空成功\n");
		return OK;
	}
	else
	{
		printf("清空失败\n");
		return FALSE;
	}
}

//销毁顺序栈
status DestoryStack(Stack* S)
{
	if ((*S)->base)
	{
		free((*S)->base); //将栈底指针分配的空间给释放
		(*S)->stacksize = 0; //顺序栈的元素个数置0
		(*S)->base = NULL; //将栈底指针置空
		(*S)->top = NULL; //将栈顶指针置空

		printf("销毁成功\n");
		return OK;
	}
	else
	{
		printf("销毁失败\n");
		return FALSE;
	}
}

//顺序栈的出栈
status Pop(Stack* S)
{
	int tmp = 0;
	//1.判断是否栈空，若空则出错（下溢）
	if ((*S)->top == (*S)->base)
	{
		printf("栈");
		return ERROR;
	}
	//2.栈顶指针减1
	(*S)->top--;
	//3.获取栈顶元素
	tmp = (**S).top;

	printf("出栈的元素是%d\n", tmp);
	return OK;
}

//int main(void)
//{
//	int arr[5] = { 0,1,2,3,4 };
//	int* p = &arr[4]; //第五个元素的地址
//	int* q = &arr[2]; //第二个元素的地址
//
//	printf("%zd", p - q); 
//
//	return 0;
//}