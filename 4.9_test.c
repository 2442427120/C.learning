#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//qsort库函数的声明
void qsort(void* base, //元素的首元素地址
	       size_t num, //数组的元素个数
	       size_t width, //数组元素的大小
	       int(*cmp)(const void* e1, const void* e2));//函数指针 - 函数的返回值类型是int，函数的两个参数const void*
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
// //趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序
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
//创建一个结构体类型
struct stu 
{
	char name[20];
	int age;
};
//qsort - quick sort - 快速排序
//将int类型的数组用qsort升序排序
int cmp_int(const void* e1, const void* e2) //此函数规定返回值是0 || 1 || -1
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
//将float类型的数组进行qsort升序排序
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
//用qsort将结构体类型的数组按年龄升序排序
int cmp_str_by_age(const void* e1, const void* e2)
{
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}
void test3()
{
	struct stu s[3] = { {"张三",25},{"李四",29},{"王五",24}};
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_str_by_age);
	int k = 0;
	for (k = 0; k < sz; k++)
	{
		printf("%s %d \n", s[k].name, s[k].age);
	}
	printf("\n");
}
//用qsort将结构体类型的数组按名字升序排序
int cmp_str_by_name(const void* e1, const void* e2)
{
	//比较名字就是比较字符串
	//不能直接用><=来比较，应该用strcmp
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
}
void test4()
{
	struct stu s[3] = { {"张三",25},{"李四",29},{"王五一",24} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_str_by_name);
	int k = 0;
	for (k = 0; k < sz; k++)
	{
		printf("%s %d \n", s[k].name, s[k].age);
	}
	printf("\n");
}
//qsort库函数的用法
int main()
{
	test1();//int类型
	test2();//浮点类型
	test3();//结构体类型按年龄
	test4();//结构体类型按名字
	//bubble_sort(arr, sz);
	return 0;
}
//int main()
//{
//	int a = 10;
//	//int *p = &a;
//	//char* pc = &a;
//	void* ps = &a;
//	//void* 类型的指针，可以接收任何类型的地址
//	*ps = 0;
//	//void* 类型的指针，不可以进行解引用操作
//	ps++;
//	//void* 类型的指针，不能进行+-整数的操作
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
//	//指针数组
//	int* arr[10] = { 0 };
//	//数组指针
//	int(*p)[10] = &arr;
//	//函数指针
//	int (*pAdd)(int, int) = Add;
//	int sum = (*pAdd)(2,3);
//	printf("%d\n", sum);
//	//函数指针的数组
//	int (*parr[4])(int, int);
//	//指向函数指针数组的指针
//	int (*(*parr)[4])(int,int) = &parr;
//	return 0;
//}