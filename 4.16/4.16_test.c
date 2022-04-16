#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
char* my_strncat(char* front, char* src, int count)
{
	char* start = front;

	while (*front++)
		;
	front--;

	while (count--)
		if (!(*front++ = *src++))
			return(start);

	*front = '\0';
	return(start);
}
int main()
{
	char arr1[30] = "hello";
	char arr2[] = "my world";
	char* ret = my_strncat(arr1, arr1, 8);
	printf("%s\n", ret);
	return 0;
}
//自定义实现strncpy
//char* my_strncpy(char* dest, const char* src, int count)
//{
//	assert(dest && src);
//	char* start = dest;
//	//将源字符串拷贝到目的字符串中，当count为0和源字符串全部拷贝到目的字符串时停止循环
//	while (count && (*dest++ = *src++))
//	{
//		count--;
//	}
//	//当源字符串全部拷贝到目的字符串中，拷贝的个数还不为0时，将目的字符串的后面补'\0'
//	if (count != 0)
//	{
//		while (--count)
//		{
//			*dest++ = '\0';
//		}
//	}
//	return start;
//}
//int main()
//{
//	char arr1[7] = "welcom";
//	char arr2[] = "hello";
//	char* ret = my_strncpy(arr1,arr2,5);
//
//	printf("%s\n",ret);
//	return 0;
//}
//自定义实现strcmp函数
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//
//	while (*str1 == *str2)
//	{
//		if (str1 == '\0')
//		{
//			return 0; //相等
//		}
//		str1++;
//		str2++;
//	}
//	//if (*str1 > *str2)
//	//{
//	//	return 1;// 大于
//	//}
//	//else
//	//{
//	//	return -1;//小于
//	//}
//	return *str1 - *str2; // 更符合定义的写法
//	//在测试中，字母都是小写的情况下，发现要比较的第一个字符串的字母是c，第二个是d，则返回为-1；
//	//第一个c，第二个为e，返回是-2；其返回值好像是其之间相差的单词个数
//}
//int main()
//{
//	char arr1[] = "abCcef";
//	char arr2[] = "abaegf";
//	int ret = my_strcmp(arr1, arr2);
//	printf("%d\n", ret);
//	return 0;
//}
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "sqwer";
//	//strcmp比较的是元素的ASCII码值
//	//int ret = strcmp(p1,p2);//比较的是a和s的ASCII码值
//
//	//strcmp返回值
//	//第一个字符串的大于第二个字符串，返回值是一个大于0的数
//	//第一个字符串的等于第二个字符串，返回值是0
//	//第一个字符串的小于第二个字符串，返回值是一个小于0的数
//	if (strcmp(p1, p2) > 0) // 不能写成if(strcmp(p1,p2) == 1),将比较的值设为1的话，在vs编译器下可行，但在其他编译器下不一定行
//	{
//		printf("p1大于p2\n");
//	}
//	else if (strcmp(p1, p2) == 0)
//	{
//		printf("p1等于p2\n");
//	}
//	else if (strcmp(p1, p2) < 0)
//	{
//		printf("p1小于p2");
//	}
//	//printf("%d\n", ret);//-1
//
//	return 0;
//}
