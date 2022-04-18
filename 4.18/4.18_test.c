#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <errno.h>
#include<ctype.h>
//void* my_memmove(void* dest, void* src, size_t num)
//{
//	assert(dest && src);
//	void* start = dest;
//
//	if (dest < src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else if (dest > src)
//	{
//		while (num--)
//		{
//			(*(char*)dest + 5) = (*(char*)src + 5);
//		}
//	}
//}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9, 10 }; //处理内存重置的情况的
	int i = 0;

	/*memmove(arr + 2, arr, 20);*/
	my_memmove(arr + 2, arr, 20);

	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}

}
//memcpy函数的用法和自定义memcpy函数
//struct s
//{
//	char name[20];
//	int age;
//};
//void* my_memcpy(void* dest, void* src, size_t num)
//{
//	//*dest;//err void*类型不能解引用，++和--
//	assert(dest != NULL);
//	assert(src != NULL);
//	void* start = dest;
//
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return start;
//}

//int main()
//{
//	/*int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };*/
//	struct s arr3[] = { {"张三",25},{"李四",30} };
//	struct s arr4[2] = { 0 };
//	int i = 0;
//
//	//memcpy(arr2, arr1, sizeof(arr1));
//	my_memcpy(arr4, arr3,sizeof(arr3));
//
//	for (i = 0; i < (sizeof(arr4) / sizeof(arr4[0])); i++)
//	{
//		printf("%s %d\n",arr4[i].name,arr4[i].age);
//	}
//
//	return 0;
//}
//字符转换函数
//int main()
//{
//	//将字母转换为小写字母
//	//char ch = tolower('C');
//	////将字母转换为大写字母
//	/*char ch = toupper('d');
//	putchar(ch);*/
//	char arr[] = "Im Am A sTudEnt";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}
//字符分类函数
//int main()
//{
//	//char ch = 'w';
//	//char ch = '2';
// //   /*int ret = islower(ch);*/ //判断是不是字母是不是小写
//	//int ret = isdigit(ch);//判断字符内是否是数字，是返回一个大于0的数，不是返回0
//	//printf("%d\n",ret);
//	
//	return 0;
//}
//strerror 函数的用法
//int main()
//{
//	//错误码   错误信息
//	//0 -      No error
//	//1 -      Operation not permitted
//	//2 -      No such file or directory
//	//...
//	//errno是一个全局的错误码的变量
//	//当c语言的库函数在执行过程中，发生了错误，就会把对应的错误码，赋值到errno中
//	/*char* str = strerror(errno);
//	printf("%s\n",str);*/
//
//	//打开文件
//	// fopen("文件名","r"); r - 表示读
//	//返回值用FILE* 类型接收
//	FILE* ret= fopen("test.txt","r");
//	if (ret == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file sucess\n");
//	}
//	return 0;
//}
//strtok函数的使用方法
//int main()
//{
//	char arr[] = "2442427120@qq.com";
//	char* p = "@.";
//
//	char buf[1024] = { 0 };
//	strcpy(buf,arr);//拷贝一份原字符串，防止原字符串数据丢失
//
//	//切割buf中的字符串
//	char* ret = NULL;
//
//	for (ret = strtok(buf, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	//char* ret = strtok(buf,p); //strtok第一次传参时传首元素地址
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);//第二次以后传参传空指针(NULL)
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//	return 0;
//}
//自定义实现strstr函数
//char* my_strstr(const char* p1, const char* p2)
//{
//	//将p1与p2均存在一个新地址里，使得p1和p2的值不会被改变
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	char* s1 = NULL;
//    char* s2 = NULL;
//    char* cur = (char*) p1;
//
//	//字符串里为空，只有'\0'
//	if (*p2 == '\0') // if(!*p2) ,当p2等于'\0'时，*p2为假，!*p2则为真
//	{
//		return (char*) p1;
//	}
//
//	
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*) p2;
//
//		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//
//		if (*s2 == '\0')
//		{
//			return (char*) cur;//找到了子串
//		}
//		//优化:当p1字符串长度小于p2时，代表找不到p2的子串了，提前返回NULL
//		if (*s1 == '\0')
//		{
//			return NULL; 
//		}
//
//		cur++;//cur指针,当s1在a位置寻找子串失败时，让cur++,在把++后的值赋给s1,使s2从b位置开始寻找子串，
//		      //第一个b查找失败，cur++，赋值给s2，使得s2指向第二个b在开始寻找子串
//	}
//	return NULL;//找不到子串
//}
//
//int main()
//{
//	const char* p1 = "abbbcdefg";
//	const char* p2 = "bbc";
//	char* ret = my_strstr(p1, p2);
//
//	if (ret == NULL)
//	{
//		printf("找不到子串");
//	}
//	else
//	{
//		printf("%s\n",ret);
//	}
//	return 0;
//}
//strstr - 查找子字符串 - 找不到返回值为NULL(空指针),找到返回子字符串地址
//int main()
//{
//	const char* p1 = "abcdefabcdef";
//	const char* p2 = "def";
//	char* ret = strstr(p1, p2);//找到的是第一个子字符串出现的地址
//
//	if (ret == NULL)
//	{
//		printf("找不到子字符串");
//	}
//	else
//	{
//		printf("%s\n",ret);
//	}
//	return 0;
//}
//strcmp和strncmp
//int main()
//{
//	const char* p1 = "abcdefg";
//	const char* p2 = "abcghff";
//	//int ret = strcmp(p1, p2);
//	int ret = strncmp(p1, p2, 3);
//
//	printf("%d\n",ret);
//	return 0;
//}
//char* my_strcat(char* front, const const char* back, size_t count)
//{
//	char* start = front;
//
//	while (*front++)
//	{
//		;
//	}
//	front--;
//
//	while (count--)
//	{
//		if (!(*front++ = *back++))
//		{
//			return(start);
//		}
//	}
//	*front = '\0';
//	return(start);
//}
//int main()
//{
//	char arr[30] = "hello";
//	char arr1[] = "world";
//	//strcat(arr, arr1);
//	char* ret = my_strcat(arr, arr, 20);
//	printf("%s\n", arr);
//	return 0;
//}
