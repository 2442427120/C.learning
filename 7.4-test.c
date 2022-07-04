#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXQSIZE 100	//最大队列长度

typedef int QElemType;
typedef int status;

typedef struct 
{
	QElemType* data;	//初始化的动态分配存储空间
	int front;	//队头下标
	int rear;	//队尾下标 
}SqQueue;

//函数声明
void Init(SqQueue* Q);	//初始化
void EnQueue(SqQueue* Q, QElemType x);	//入队
status QueueLength(SqQueue* Q);	//求队列长度
status GetHead(SqQueue* Q);	//取队头元素
void DeQueue(SqQueue* Q);	//出队

int main(void)
{
	int input;
	int length = 0;
	int top = 0;
	int n = 0;
	int e = 0;
	SqQueue Q;

	Init(&Q);
	printf("请输入要入队的元素(输入非数字结束)\n");
	while (scanf("%d", &input) == 1)
	{
		EnQueue(&Q, input);
	}
	length = QueueLength(&Q);
	printf("队列的长度为:%-3d\n", length);
	top = GetHead(&Q);
	printf("队头元素为:%-3d\n", top);
	/*printf("请输入要出队的元素个数\n");
	scanf("%d", &n);*/
	printf("出队的元素为:");
	DeQueue(&Q);

	return 0;
}

//循环队列的初始化
void Init(SqQueue* Q)
{
	Q->data = (QElemType*)malloc(MAXQSIZE * (sizeof(QElemType)));	//分配数组空间
	if (!(Q->data))
	{
		printf("分配空间失败\n");
	}
	Q->front = Q->rear = 0;	//头指针尾指针置为0，队列为空

	return;
}

//循环队列的入队
void EnQueue(SqQueue* Q, QElemType x)
{
	if ((Q->rear + 1) % MAXQSIZE == Q->front) //队满
	{
		printf("队满\n");
	}
	(Q->data[Q->rear]) = x;	//给队尾赋值
	(Q->rear) = (Q->rear + 1) % MAXQSIZE;	//队尾指针 + 1

	return;
}

//求队列的长度
status QueueLength(SqQueue* Q)
{
	return (((Q->rear - Q->front) + MAXQSIZE) % MAXQSIZE);
}

//取队头元素
status GetHead(SqQueue* Q)
{
	if (Q->front == Q->rear)	//队空
	{
		printf("队空\n");
	}

	return Q->data[Q->front];	//返回队头指针元素的值，队头指针不变
}

void DeQueue(SqQueue* Q)	//出队
{
	int e;
	if (Q->rear == Q->front)
	{
		printf("队空\n");
	}
	e = Q->data[Q->front];	//保存队头元素
	Q->front = (Q->front + 1) % MAXQSIZE;	//队头元素 + 1

	printf("%d", e);
	return;

}

//编写一个程序，读取整数直到用户输入0。输入结束后，程序应报告用户输入的偶数(不包括0)个数、这些偶数的平均值、输入的奇数个数及
//其奇数的平均值
//int main(void)
//{
//	int input = 1;
//	int even = 0;
//	int odd = 0;
//	int sum_even = 0;
//	int sum_odd = 0;
//
//	printf("请输入数字(输入0结束)");
//	while (scanf("%d", &input) == 1 && input != 0)
//	{
//		if ((input % 2) == 0)
//		{
//			sum_even
//		}
//	}
//	return 0;
//}
//编写一个程序读取输入，读到#字符停止。程序要打印每个输入的字符以及对应的ASCII码(十进制)。每行打印8个“字符ASCII码”组合。
//#define STOP '#'
//int main(void)
//{
//	char ch;
//	int c_count = 0; //字符计数器
//
//	printf("请输入一些字符（输入#时停止）\n");
//	while ((ch = getchar()) != STOP)
//	{
//		if (c_count++ % 8 == 0)	//每行打印8个"字符ASCII码"组合
//		{
//			printf("\n");
//		}
//		if (ch == '\n') 
//		{
//			printf("'\\n'-%-3d", ch);
//		}
//		else if (ch == '\t')
//		{
//			printf("'\\t'-%-3d", ch);
//		}
//		else
//		{
//			printf("'%c'-%-3d ", ch, ch);
//		}
//	}
//	printf("Complete\n");
//
//	return 0;
//}

//编写一个程序读取输入，读到#字符停止，然后报告读取的空格数、换行符数和所有其他字符的数量。
//#include <ctype.h>
//#define STOP '#' //定义#字符停止
//int main(void)
//{
//	char ch;
//	int n_spaces = 0;	//空格数
//	int n_lines = 0;	//换行数
//	int n_character = 0;	//其他字符数
//
//	printf("请输入一些字符(输入#字符停止)\n");
//	while ((ch = getchar()) != STOP)
//	{
//		if (ch == ' ')
//		{
//			n_spaces++;
//		}
//		else if (ch == '\n')
//		{
//			n_lines++;
//		}
//		else
//		{
//			n_character++;
//		}
//	}
//	printf("空格数 = %d\n换行符数 = %d\n其他字符数 = %d\n", n_spaces, n_lines, n_character);
//
//	return 0;
//}