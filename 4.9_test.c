#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//qsort�⺯��������
void qsort(void* base, //Ԫ�ص���Ԫ�ص�ַ
	       size_t num, //�����Ԫ�ظ���
	       size_t width, //����Ԫ�صĴ�С
	       int(*cmp)(const void* e1, const void* e2));//����ָ�� - �����ķ���ֵ������int����������������const void*
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
// //����
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������
//		int j = 0;
//		for (j = 0; j < sz - i -1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//����һ���ṹ������
struct stu 
{
	char name[20];
	int age;
};
//qsort - quick sort - ��������
//��int���͵�������qsort��������
int cmp_int(const void* e1, const void* e2) //�˺����涨����ֵ��0 || 1 || -1
{
	return *(int*)e1 - *(int*)e2;
}
void test1()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
//��float���͵��������qsort��������
int cmp_float(const void* e1, const* e2)
{
	if (*(float*)e1 == *(float*)e2)
	{
		return 0;
	}
	else if (*(float*)e1 > *(float*)e2)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
void test2()
{
	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_float);
	int j = 0;
	for (j = 0; j < sz; j++)
	{
		printf("%f ",f[j]);
	}
	printf("\n");
}
//��qsort���ṹ�����͵����鰴������������
int cmp_str_by_age(const void* e1, const void* e2)
{
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}
void test3()
{
	struct stu s[3] = { {"����",25},{"����",29},{"����",24}};
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_str_by_age);
	int k = 0;
	for (k = 0; k < sz; k++)
	{
		printf("%s %d \n", s[k].name, s[k].age);
	}
	printf("\n");
}
//��qsort���ṹ�����͵����鰴������������
int cmp_str_by_name(const void* e1, const void* e2)
{
	//�Ƚ����־��ǱȽ��ַ���
	//����ֱ����><=���Ƚϣ�Ӧ����strcmp
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
}
void test4()
{
	struct stu s[3] = { {"����",25},{"����",29},{"����һ",24} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_str_by_name);
	int k = 0;
	for (k = 0; k < sz; k++)
	{
		printf("%s %d \n", s[k].name, s[k].age);
	}
	printf("\n");
}
//qsort�⺯�����÷�
int main()
{
	test1();//int����
	test2();//��������
	test3();//�ṹ�����Ͱ�����
	test4();//�ṹ�����Ͱ�����
	//bubble_sort(arr, sz);
	return 0;
}
//int main()
//{
//	int a = 10;
//	//int *p = &a;
//	//char* pc = &a;
//	void* ps = &a;
//	//void* ���͵�ָ�룬���Խ����κ����͵ĵ�ַ
//	*ps = 0;
//	//void* ���͵�ָ�룬�����Խ��н����ò���
//	ps++;
//	//void* ���͵�ָ�룬���ܽ���+-�����Ĳ���
//	//char* ch = 'w';
//	//p = &ch;
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//ָ������
//	int* arr[10] = { 0 };
//	//����ָ��
//	int(*p)[10] = &arr;
//	//����ָ��
//	int (*pAdd)(int, int) = Add;
//	int sum = (*pAdd)(2,3);
//	printf("%d\n", sum);
//	//����ָ�������
//	int (*parr[4])(int, int);
//	//ָ����ָ�������ָ��
//	int (*(*parr)[4])(int,int) = &parr;
//	return 0;
//}