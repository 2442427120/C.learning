#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXQSIZE 100	//�����г���

typedef int QElemType;
typedef int status;

typedef struct 
{
	QElemType* data;	//��ʼ���Ķ�̬����洢�ռ�
	int front;	//��ͷ�±�
	int rear;	//��β�±� 
}SqQueue;

//��������
void Init(SqQueue* Q);	//��ʼ��
void EnQueue(SqQueue* Q, QElemType x);	//���
status QueueLength(SqQueue* Q);	//����г���
status GetHead(SqQueue* Q);	//ȡ��ͷԪ��
void DeQueue(SqQueue* Q);	//����

int main(void)
{
	int input;
	int length = 0;
	int top = 0;
	int n = 0;
	int e = 0;
	SqQueue Q;

	Init(&Q);
	printf("������Ҫ��ӵ�Ԫ��(��������ֽ���)\n");
	while (scanf("%d", &input) == 1)
	{
		EnQueue(&Q, input);
	}
	length = QueueLength(&Q);
	printf("���еĳ���Ϊ:%-3d\n", length);
	top = GetHead(&Q);
	printf("��ͷԪ��Ϊ:%-3d\n", top);
	/*printf("������Ҫ���ӵ�Ԫ�ظ���\n");
	scanf("%d", &n);*/
	printf("���ӵ�Ԫ��Ϊ:");
	DeQueue(&Q);

	return 0;
}

//ѭ�����еĳ�ʼ��
void Init(SqQueue* Q)
{
	Q->data = (QElemType*)malloc(MAXQSIZE * (sizeof(QElemType)));	//��������ռ�
	if (!(Q->data))
	{
		printf("����ռ�ʧ��\n");
	}
	Q->front = Q->rear = 0;	//ͷָ��βָ����Ϊ0������Ϊ��

	return;
}

//ѭ�����е����
void EnQueue(SqQueue* Q, QElemType x)
{
	if ((Q->rear + 1) % MAXQSIZE == Q->front) //����
	{
		printf("����\n");
	}
	(Q->data[Q->rear]) = x;	//����β��ֵ
	(Q->rear) = (Q->rear + 1) % MAXQSIZE;	//��βָ�� + 1

	return;
}

//����еĳ���
status QueueLength(SqQueue* Q)
{
	return (((Q->rear - Q->front) + MAXQSIZE) % MAXQSIZE);
}

//ȡ��ͷԪ��
status GetHead(SqQueue* Q)
{
	if (Q->front == Q->rear)	//�ӿ�
	{
		printf("�ӿ�\n");
	}

	return Q->data[Q->front];	//���ض�ͷָ��Ԫ�ص�ֵ����ͷָ�벻��
}

void DeQueue(SqQueue* Q)	//����
{
	int e;
	if (Q->rear == Q->front)
	{
		printf("�ӿ�\n");
	}
	e = Q->data[Q->front];	//�����ͷԪ��
	Q->front = (Q->front + 1) % MAXQSIZE;	//��ͷԪ�� + 1

	printf("%d", e);
	return;

}

//��дһ�����򣬶�ȡ����ֱ���û�����0����������󣬳���Ӧ�����û������ż��(������0)��������Щż����ƽ��ֵ�����������������
//��������ƽ��ֵ
//int main(void)
//{
//	int input = 1;
//	int even = 0;
//	int odd = 0;
//	int sum_even = 0;
//	int sum_odd = 0;
//
//	printf("����������(����0����)");
//	while (scanf("%d", &input) == 1 && input != 0)
//	{
//		if ((input % 2) == 0)
//		{
//			sum_even
//		}
//	}
//	return 0;
//}
//��дһ�������ȡ���룬����#�ַ�ֹͣ������Ҫ��ӡÿ��������ַ��Լ���Ӧ��ASCII��(ʮ����)��ÿ�д�ӡ8�����ַ�ASCII�롱��ϡ�
//#define STOP '#'
//int main(void)
//{
//	char ch;
//	int c_count = 0; //�ַ�������
//
//	printf("������һЩ�ַ�������#ʱֹͣ��\n");
//	while ((ch = getchar()) != STOP)
//	{
//		if (c_count++ % 8 == 0)	//ÿ�д�ӡ8��"�ַ�ASCII��"���
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

//��дһ�������ȡ���룬����#�ַ�ֹͣ��Ȼ�󱨸��ȡ�Ŀո��������з��������������ַ���������
//#include <ctype.h>
//#define STOP '#' //����#�ַ�ֹͣ
//int main(void)
//{
//	char ch;
//	int n_spaces = 0;	//�ո���
//	int n_lines = 0;	//������
//	int n_character = 0;	//�����ַ���
//
//	printf("������һЩ�ַ�(����#�ַ�ֹͣ)\n");
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
//	printf("�ո��� = %d\n���з��� = %d\n�����ַ��� = %d\n", n_spaces, n_lines, n_character);
//
//	return 0;
//}