#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define MAXQSIZE 100	//�����г���


typedef int QElemType;

typedef struct Qnode
{
	QElemType data;
	struct Qnode* next;
}QNode, *QueuePtr;

typedef struct
{
	QueuePtr front;	//��ͷָ��
	QueuePtr rear;	//��βָ��
}LinkQueue;

//��������
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
	printf("������Ҫ��ӵ�Ԫ��(���������ֹͣ)\n");
	while (scanf("%d", &input) == 1)
	{
		EnQueue(&Q, input);
	}
	printf("��ӳɹ�\n");
	printf("����\n");
	tmp1 = DeQueue(&Q);
	printf("���ӵ�Ԫ���ǣ�%d\n", tmp1);
	tmp2 = GetHead(&Q);
	printf("��ͷԪ��Ϊ��%d\n", tmp2);
	printf("���ӵ�����\n");
	DestoryQueue(&Q);
	printf("���ٳɹ�\n");

	return 0;
}

//���ӵĳ�ʼ��
void InitQueue(LinkQueue* Q)
{
	Q->front = Q->rear = (QueuePtr)malloc(sizeof(QNode));	

	if (!Q->rear)
	{
		printf("����ռ�ʧ��\n");
		return;
	}

	Q->front->next = NULL;
}

//���ӵ����
void EnQueue(LinkQueue* Q, QElemType e)
{
	QueuePtr p = (QueuePtr)malloc(sizeof(QNode));	//�����½��p

	if (!p)
	{
		printf("�ռ����ʧ��\n");
		return;
	}

	p->data = e;	//���û������ֵe���
	p->next = NULL;	//�½�����һ���Ϊ��
	Q->rear->next = p;	//���½����ӵ�β���֮��
	Q->rear = p;	//���½����Ϊ�µ�β���

}

//���ӵĳ���
int DeQueue(LinkQueue* Q)
{
	int e;
	QueuePtr p;

	if (Q->front == Q->rear)
	{
		return 0;
	}

	p = Q->front->next;	//���½��Ľ��ָ���ͷ
	e = p->data;	//����ͷԪ�ص�ֵ������ʱ����
	Q->front->next = p->next;	//����ͷԪ������Ϊ��һ�����

	if (Q->rear == p)	//���½������ڶ�β���ʱ��˵����ʱ��ͷ�����ڶ�β���
	{
		Q->rear = Q->front;
	}

	free(p);
	p = NULL;

	return e;

}

//ȡ��ͷԪ��
int GetHead(LinkQueue* Q)
{
	return Q->front->next->data;
}

//���ӵ�����
void DestoryQueue(LinkQueue* Q)
{
	QueuePtr p;

	while (Q->front)
	{
		p = Q->front->next;	//����ͷԪ�ظ����½��
		free(Q->front);	//����ͷָ���ͷ�
		Q->front = p;	//���½����Ϊ�µĶ�ͷָ��
	}

}