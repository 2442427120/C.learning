#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
int main()
{
	char* p1 = "abcdef";
	char* p2 = "sqwer";
	//strcmp比较的是元素的ASCII码值
	//int ret = strcmp(p1,p2);//比较的是a和s的ASCII码值

	//strcmp返回值
	//第一个字符串的大于第二个字符串，返回值是一个大于0的数
	//第一个字符串的等于第二个字符串，返回值是0
	//第一个字符串的小于第二个字符串，返回值是一个小于0的数
	if (strcmp(p1, p2) > 0) // 不能写成if(strcmp(p1,p2) == 1),将比较的值设为1的话，在vs编译器下可行，但在其他编译器下不一定行
	{
		printf("p1大于p2\n");
	}
	else if (strcmp(p1, p2) == 0)
	{
		printf("p1等于p2\n");
	}
	else if (strcmp(p1, p2) < 0)
	{
		printf("p1小于p2");
	}
	//printf("%d\n", ret);//-1

	return 0;
}
//自定义strcat函数
//char* my_strcat(char* dest, char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	//1.找到目的目的字符串的'/0'
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2.追加 - 将源字符串拷贝到目的字符串中
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello ";
//	char arr2[] = "world";
//	my_strcat(arr1,arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//自定义strcpy函数
//char* my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//拷贝src指向的字符串到dest空间，包含'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//返回目的空间的地址
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[] = "world";
//
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//int main()
//{
//	//strlen库函数的返回值类型是 size_t 其实是 unsigned int 重命名
//	//如果是自定义的my_strlen函数，返回值可以是int，这样可以避免产生下面情况的歧义
//	if (strlen("abc") - strlen("abcdef") > 0)//两个无符号数相减的值还是无符号数
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}
//杨氏矩阵
//有一个数字矩阵，矩阵的每行从左往右是递增的，矩阵的每列从上往下是递增的，编写程序在这样的矩阵中查找到一个数
//要求时间复杂度小于O(N)；（不能用穷举法）
// 方法2.
//int Find_num(int arr[5][5], int k, int* px, int* py)
//{
//	int x = 0;
//	int y = *py - 1;
//	//用右上角的数去和要找的数进行比较，如果这个数比要找的数k大，则此数所在的列没有k，往前一列寻找；
//	//如果右上角的数比要找的数k小，则此行没有k，往下一行寻找
//	while (x <= *px-1 && y >= 0)
//	{
//		if (arr[x][y] > k) 
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			//将找到数的下标对应的值传给外面x和y
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	//找不到
//	return 0;
//}
//
//int main()
//{
//	int arr[5][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };
//	int k = 17;
//	int x = 5;
//	int y = 5;
//	//返回型参数 - 函数参数传过去的是x和y的地址，使函数可以在函数内部改变函数外面x和y的参数
//	int ret = Find_num(arr,k,&x,&y);
//	if (ret == 1)
//	{
//		printf("找到了\n");
//		printf("下标是(%d,%d)\n",x,y);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//方法1.没打印出找到元素的下标
//int Find_num(int arr[5][5], int k, int row, int col)
//{
//	int x = 0;
//	int y = col - 1;
//	//用右上角的数去和要找的数进行比较，如果这个数比要找的数k大，则此数所在的列没有k，往前一列寻找；
//	//如果右上角的数比要找的数k小，则此行没有k，往下一行寻找
//	while (x <= row-1 && y >= 0)
//	{
//		if (arr[x][y] > k) 
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	//找不到
//	return 0;
//}
//int main()
//{
//	int arr[5][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };
//	int k = 17;
//	int ret = Find_num(arr,k,5,5);
//	if (ret == 1)
//	{
//		printf("找到了\n");
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
//写一个函数，判断一个字符串是否为另一个字符串的旋转后的字符串
//例如:给定s1 = AABCD 和s2 = BCDAA，返回1 ； 给定s1 = abcd 和s2 = ACBD，返回0
// AABCD左旋一个字符得到ABCDA
// AABCD左旋两个字符得到BCDAA
// AABCD右旋一个字符得到DAABC
//方法二，运用库函数
//int is_left_move(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//	{
//		return 0;
//	}
//	//1.在str1字符串中追加一个str1字符串
//	//strncat函数的功能可以给字符串本身加一个本身字符串，第三个参数是要加的字符串长度，
//	//与strcat函数不同在于strcat只能让两个不同的字符串追加起来
//	strncat(str1,str1,len1);
//	//2.判断str2指向的字符串是否是str1指向的字符串的子串
//	//strstr函数 - 找子串 - 其如果找到的str2是str1的子串，会返回str2首元素的地址，如果不是，则返回NULL
//	char* ret = strstr(str1,str2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	char arr1[30] = "abcdefgh";
//	char arr2[] = "defghabc";
//	int ret = is_left_move(arr1,arr2);
//	if (ret == 1)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}
