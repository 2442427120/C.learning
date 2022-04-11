#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int a[4] = { 1,2,3,4 };
	int *ptr1 = (int *)(&a + 1);
	int *ptr2 = (int *)((int)a + 1);
	printf("%#x,%#x\n",ptr1[-1],*ptr2);
 	return 0;
}
//struct Test
//{
//	int num;
//	char* pcName;
//	short sdata;
//	char cha[2];
//	short sBa[4];
//}* p;
////p的值是0x100000
////结构体Test类型的变量大小是20个字节
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);//p转化为unsigned long类型，整形+1就是值加1
//	printf("%p\n", (unsigned int*)p + 0x1);//p转化为unsigned int*类型，整形指针值是4，加1个整形指针就是加4
//	return 0;
//}
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d %d\n", *(a + 1), *(ptr - 1));
//	return 0;
//}
//int main()
//{
//	//二维数组
//	int a[3][4] = { 0 };
//	printf("%zd\n", sizeof(a));//48
//	printf("%zd\n", sizeof(a[0][0]));//4
//	printf("%zd\n", sizeof(a[0]));//16 - a[0]相当于第一行作为一维数组的数组名，sizeof(arr[0])把数组名单独放在sizeof()内,计算的是第一行的大小
//	printf("%zd\n", sizeof(a[0]+1));//4/8 - a[0]是第一行数组名，数组名此时是首元素地址，a[0]其实就是第一行第一个元素的地址，
//	                                //所以a[0]+1就是第一行第二个元素的地址
//
//	printf("%zd\n", sizeof(*(a[0]+1)));//4 - *(a[0]+1)就是第一行第二个元素
//	printf("%zd\n", sizeof(a+1));//4/8 - a是二维数组的数组名，没有sizeof(a)，也没有&a,所以a是首元素地址，而把二维数组看成一维数组时，
//	                             //二维数组的首元素地址是第一行，a就是第一行(首元素)的地址，a+1就是第二行的地址
//
//	printf("%zd\n", sizeof(*(a+1)));//16 sizeof(*(a+1))计算的是第二行的大小，
//	printf("%zd\n", sizeof(&a[0]+1));//4/8 - 第二行的地址
//	printf("%zd\n", sizeof(*a));//16 - a是首元素地址，第一行的地址，sizeof(*a)就是计算第一行的大小
//	printf("%zd\n", sizeof(a[3]));//16 - sizeof()内部的表达式不参与真实运算，所以sizeof(arr[3])是和sizeof(arr[0])一样的
//	return 0;
//}
//int main(void)
//{
//	//char* p = "abcdef";
//	//printf("%zd\n", strlen(p));//6
//	//printf("%zd\n", strlen(p + 1));//5
//	////printf("%zd\n", strlen(*p));//err
//	////printf("%zd\n", strlen(p[0]));//err
//	//printf("%zd\n", strlen(&p)); //随机值 p变量的地址
//	//printf("%zd\n", strlen(&p + 1));//随机值
//	//printf("%zd\n", strlen(&p[0] + 1));//5
//
//	//char *p = "abcdef";
//	//printf("%zd\n", sizeof(p));//4/8 计算指针变量p的大小
//	//printf("%zd\n", sizeof(p+1));//4/8 p+1得到的是b的地址
//	//printf("%zd\n", sizeof(*p));//1 *p就是字符串的第一个字符 - 'a'
//	//printf("%zd\n", sizeof(p[0]));//1 int arr[10]; arr[0] = *(arr+0) - p[0] = *(p+0)
//	//printf("%zd\n", sizeof(&p)); //4/8 取得是p变量的地址，而并非是a的地址
//	//printf("%zd\n", sizeof(&p+1));//4/8 地址
//	//printf("%zd\n", sizeof(&p[0]+1));//4/8 地址
//	//char arr[] = "abcdef";
//	//printf("%zd\n", strlen(arr));//6
//	//printf("%zd\n", strlen(arr + 0));//6
//	////printf("%zd\n", strlen(*arr));//err strlen接收的参数需要为地址，而*arr则为一个元素
//	////printf("%zd\n", strlen(arr[1]));//err
//	//printf("%zd\n", strlen(&arr));//6 &arr - 数组的地址 - char(*p) = &arr
//	//printf("%zd\n", strlen(&arr + 1));//随机值
//	//printf("%zd\n", strlen(&arr[0] + 1));//5
//
//	//printf("%zd\n",sizeof(arr));//7 sizeof(arr)计算的是数组的大小，单位是字节
//	//printf("%zd\n", sizeof(arr+0));//4/8 计算的是地址的大小，arr+0是首元素地址
//	//printf("%zd\n", sizeof(*arr));//1 *arr首元素，sizeof(*arr)是计算首元素的大小
//	//printf("%zd\n", sizeof(arr[1]));//1 arr[1]是第二个元素，sizeof(arr[1])计算的是第二个元素的大小
//	//printf("%zd\n", sizeof(&arr));//4/8 &arr虽然是数组的地址，但还是地址，所以是4/8个字节
//	//printf("%zd\n", sizeof(&arr+1));//4/8 &arr1虽然是跳过整个数组的地址，但还是地址
//	//printf("%zd\n", sizeof(&arr[0] + 1));//4/8 &arr[0]+1是第二个元素的地址
//	return 0;
//}