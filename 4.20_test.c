#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//ָ�����ʽ�õ���ǰ�������ֽ���洢ģʽ
//int check_sys()
//{
//	int a = 1;
//	return *(char*)& a;
//
//}
//���������ʽʵ�� - ���������Ա����һ���ڴ�ռ� - �ռ��Сȡ�������1��Ա��������ռ�ֽ�
int check_sys()
{
	union Un
	{
		char c;
		int i;
	}u;
	//����1��С��ģʽ
	//����0, ���ģʽ
	u.i = 1;

	return u.c;
}
int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}

	return 0;
}
//enum Color
//{
//	//ö�ٵĿ���ȡֵ-����
//	RED,//0
//	GREEN,//1
//	BLUE//2
//};
//enum Sex
//{
//	MALE,//0
//	FEMALE//1
//};
//int main()
//{
//	/*enum Color c = RED;
//	enum Sex s = MALE;*/
//	printf("%d %d %d\n",RED,GREEN,BLUE);
//	printf("%d %d\n", MALE, FEMALE);
//	return 0;
//}
//λ�ϵĶ�����ڴ����
//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//	int e : 17;
//
//};
//int main()
//{
//	struct S s ={0};
//	printf("%d\n",sizeof(s));
//	return 0;
//}

//�ṹ��ĳ�ʼ���ʹ�ӡ
//struct S
//{
//	int a;
//	char b;
//	double c;
//};
//
//void Init(struct S* ps)
//{
//	ps->a = 100;
//	ps->b = 'w';
//	ps->c = 3.14;
//}
//
////��ֵ - �ṹ�����ʱ������ѹջ��ϵͳ�����Ƚϴ����Իᵼ��ϵͳ���ܵ��½�
//void Print1(struct S tmp)
//{
//	printf("%d %c %lf",tmp.a, tmp.b, tmp.c);
//}
//
////��ַ - һ������½ṹ�������ַ����
//void Print2(const struct S* ps)
//{
//	printf("%d %c %lf",ps->a, ps->b, ps->c);
//}
//
//int main()
//{
//	struct S s = { 0 };
//	Init(&s);//�ṹ���ʼ�������ṹ���帳ֵ
//	Print1(s);
//	Print2(&s);
//	return 0;
//}