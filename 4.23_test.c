#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct S
{
	int n;
	int* arr;
};
int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	ps->arr = malloc(5*sizeof(int));
	int i = 0;

	for (i = 0; i < 5; i++)
	{
		ps -> arr[i] = i;
	}
	/*for (i = 0; i < 5; i++)
	{
		printf("%d ",ps->arr[i]);
	}*/

	int* ptr = realloc(ps->arr, 10 * sizeof(int));
	if (ptr != NULL)
	{
		ps->arr = ptr;
	}

	for (i = 5; i < 10; i++)
	{
		ps->arr[i] = i;
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d ",ps->arr[i]);
	}

	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;
	return 0;
}
//��������
// �����ͷſռ�
// Ч�ʸ��� - ��ֱ�Ӵ���һ�������Ŀռ䣬��cup��ȡ��Ч�ʸ���
//struct S
//{
//	int a;
//	//int arr[];
//	int arr[0];//δ֪��С�� - �������� - ����Ĵ�С�ǿɵ�����
//};
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5*sizeof(int));
//	ps->a = 100;
//	int i = 0;
//
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//
//	struct S* ptr = (struct S*)realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",ps->arr[i]);
//	}
//
//	free(ps);
//	ps = NULL;
//	return 0;
//}
//void test()
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);    //free�ͷſռ�󣬲������str��ΪNULL
//	str = NULL;//�Ӵ������и���
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//int main()
//{
//	test();
//	return 0;
//}
//����2
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//void test()
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	test();
//	return 0;
//}

//����1
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void test()
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	test();
//	return 0;
//}

//1.�������л���ֱ�������
//2.��������ڴ�й©������
//p��GetMemory�������βΣ�ֻ�ں����ڲ���Ч����GetMemory��������֮�󣬶�̬�����ڴ�δ�ͷţ������޷��ҵ������Ի�����ڴ�й©
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void test()
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hellow woeld");
//	printf("%s\n",str);
//}
//int main()
//{
//	test();
//	return 0;
//}
//char* GetMemory(void)
//{
//	char p[] = "hello world";  //����ջ�ռ��ַ������
//	return p;
//}
//test()
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	test();
//	return 0;
//}