#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define MAXQSIZE 100	//最大队列长度


typedef int QElemType;

typedef struct Qnode
{
	QElemType data;
	struct Qnode* next;
}QNode, *QueuePtr;

typedef struct
{
	QueuePtr front;	//队头指针
	QueuePtr rear;	//队尾指针
}LinkQueue;

//函数声明
void InitQueue(LinkQueue* Q);
void EnQueue(LinkQueue* Q, QElemType e);
int DeQueue(LinkQueue* Q);
int GetHead(LinkQueue* Q);
void DestoryQueue(LinkQueue* Q);

int main(void)
{
	int input, tmp1, tmp2;
	LinkQueue Q;

	InitQueue(&Q);
	printf("请输入要入队的元素(输入非数字停止)\n");
	while (scanf("%d", &input) == 1)
	{
		EnQueue(&Q, input);
	}
	printf("入队成功\n");
	printf("出队\n");
	tmp1 = DeQueue(&Q);
	printf("出队的元素是：%d\n", tmp1);
	tmp2 = GetHead(&Q);
	printf("队头元素为：%d\n", tmp2);
	printf("链队的销毁\n");
	DestoryQueue(&Q);
	printf("销毁成功\n");

	return 0;
}

//链队的初始化
void InitQueue(LinkQueue* Q)
{
	Q->front = Q->rear = (QueuePtr)malloc(sizeof(QNode));	

	if (!Q->rear)
	{
		printf("分配空间失败\n");
		return;
	}

	Q->front->next = NULL;
}

//链队的入队
void EnQueue(LinkQueue* Q, QElemType e)
{
	QueuePtr p = (QueuePtr)malloc(sizeof(QNode));	//创建新结点p

	if (!p)
	{
		printf("空间分配失败\n");
		return;
	}

	p->data = e;	//将用户输入的值e入队
	p->next = NULL;	//新结点的下一结点为空
	Q->rear->next = p;	//将新结点入队到尾结点之后
	Q->rear = p;	//将新结点设为新的尾结点

}

//链队的出队
int DeQueue(LinkQueue* Q)
{
	int e;
	QueuePtr p;

	if (Q->front == Q->rear)
	{
		return 0;
	}

	p = Q->front->next;	//将新建的结点指向队头
	e = p->data;	//将队头元素的值赋给临时变量
	Q->front->next = p->next;	//将队头元素设置为下一个结点

	if (Q->rear == p)	//当新建结点等于队尾结点时，说明此时队头结点等于队尾结点
	{
		Q->rear = Q->front;
	}

	free(p);
	p = NULL;

	return e;

}

//取队头元素
int GetHead(LinkQueue* Q)
{
	return Q->front->next->data;
}

//链队的销毁
void DestoryQueue(LinkQueue* Q)
{
	QueuePtr p;

	while (Q->front)
	{
		p = Q->front->next;	//将队头元素赋给新结点
		free(Q->front);	//将队头指针释放
		Q->front = p;	//将新结点设为新的队头指针
	}

}