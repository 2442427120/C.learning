#pragma once
#include<stdio.h>
void Print(char* str)
{
	printf("%s\n", str);
}
int main()
{
	void (*p)(char*) = Print;
	(*p)("hello world");
	return 0;
}
//函数指针 - 指向函数的指针 - 存放函数地址的指针
//int Add(int x, int y)
//{
//	int z =x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	/*printf("%d\n", Add(a, b));*/
//	//&函数名 和 函数名 都是函数的地址
//	/*printf("%p\n", &Add);
//	printf("%p\n", Add);*/
//	int (*pa)(int, int) = &Add;//存函数的地址
//	printf("%d\n",(*pa)(2, 3));//5
//	return 0;
//}
//二级指针传参
//void test(int** p) //int** p可以接收test1,test2,test3传来的参数
//{}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int** ps = &p;
//	int* arr[10] = {0};
//	test1(ps);//将二级指针ps本身进行传参
//	test2(&p);//将一级指针的地址进行传参
//	test(arr);//将数组的首元素地址进行传参
//	return 0;
//}
//一级指针传参
//void test(int* p)
//{}
//int main()
//{
//	int a = 0;
//	int* p = &a;
//	//test1和test2传的参都可以被test接收
//	test1(p);//传的是指针p本身
//	test2(&a);//传的是a的地址
//	return 0;
//}
//二维数组传参
//void test1(int arr[3][5])
//{}
//void test2(int arr[][5]) //二位数组传参时参数部分的行可以省略，列不行
//{}
//void test3(int(*arr)[5]) //arr的首元素地址有5个元素，也就是该二维数组的第一行 - 该指针指向有五个整形元素的数组
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test1(arr);
//	test2(arr);
//	test3(arr);
//	return 0;
//}
//一维数组的传参
//void test(int arr[])
// {}
//void test(int arr[10])
// {}
//void test(int* arr //arr-首元素地址-将首元素地址存入int*的指针中
// {}
//void test(int* arr[20])
// {}
//void test(int **arr) //*arr-首元素地址-将首元素地址存入int*指针中
// {}
//int main()
//{
//	int arr1[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr1);
//	test(arr2);
//	return 0;
//}
//int main()
//{
//	int arr[10];//arr是一个10个元素的整形数字组
//	int* parr1[10];//parr1是一个数组，数组有10个元素，每个元素的类型数int*，parr1是指针数组
//	int(*parr2)[10];//parr2是一个指针，该指针指向了一个数组，该数组有10个元素，每个元素的类型是int - parr2是数组指针
//	int(*parr3[10])[5];//parr3是一个数组，该数组有10个元素，每个元素数是一个数组指针，该数组指针指向的的数组有5个元素，每个元素是int
//	return 0;
//}