#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//小端存储：低字节存在低地址，高字节存在高地址
//大端存储：低字节存在高地址，高字节存在低地址
//0x11223344
//小端存储：44 33 22 11
//打断存储：11 22 33 44
//int main()
//{
//	int a = 0x11223344;
//	return 0;
//}
//void test(void)//void 表示此函数无参
//{
//	printf("world");
//}
//int main()
//{
//	//test(100);
//	test();
//	return 0;
//}
//计算字符串长度
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL); //保证指针有效性
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//拷贝字符串
//最终优化后的代码
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	//把src指向的字符串拷贝到dest指向的空间，包含'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "##########";
//	char arr2[] = "my world";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}
//加上const优化的代码
//void my_strcpy(char* dest, const char* src) //const修饰的是*src,*src不能被改变  dest - 目的地不能加const，因为其一定会被修改
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	//while(*src++ = *dest++) 源头和目的地反了，若无const修饰源头，则错误不会被发现
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
////void my_strcpy(char* dest, char* src)
////{
////	//第三次优化
////	assert(dest != NULL);//assert - 断言 - 若此有错误会报告出来
////	assert(src != NULL);
////	while (*dest++ = *src++)
////	{
////		;
////	}
////	//第二次优化
////	/*if (dest != NULL && src != NULL)
////	{
////		while (*dest++ = *src++)
////		{
////			;
////		}
////	}*/
////	//第一次优化
////	//while (*dest++ = *src++) //此程序若传参为空指针(NULL)此程序会崩溃
////	//{
////	//	;
////	//}
////	//初始代码
////	//while (*src != '\0')
////	//{
////	//	*dest = *src;
////	//	dest++;
////	//	src++;
////	//}
////	//*dest = *src; // '\0'
////}
//int main()
//{
//	char arr1[] = "###########";
//	char arr2[] = "my world";
//	my_strcpy(arr1, arr2);
//	//my_strcpy(arr1,NULL);//传参为空指针
//	printf("%s\n", arr1);
//	return 0;
//}

//const 的用处
//int main()
//{
//	int num = 10;
//	int n = 100;
//	//const int* p = &num; 
//	////const放在指针变量左边时，修饰的是*p，也就是说，不能通过p来改变*p（num）的值了
//	//*p = 0;//err //*p不能被改变
//	//p = &n; //p可以被改变
//	//int* const p = &num;
//	////const放在指针变量右边时，修饰的是指针变量p本身，p不能被改变了
//	//*p = 0; // *p可以被改变
//	//p = &n; //err //p不可以被改变
//	const int* const p = &num;
//	//const同时放在左右两边时
//	*p = 0;//err
//	p = &n;//err
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	for (i = 0; i <= 11; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}
//计算1！+2！+3！+4！+....+n！
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		int ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			//ret = ret * j;
//			ret *= j;
//		}
//		//sum = sum + ret;
//		sum += ret;
//	}
//	printf("sum = %d", sum);
//	return 0;
//}