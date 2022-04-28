#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

#define PRINT(x) printf("the value of " #x " is %d\n",x);
int main()
{
	int a = 10;
	int b = 20;

	PRINT(a);
	PRINT(b);

	return 0;
}
//预定义符号的使用
//int main()
//{
//	//printf("%s\n",__FILE__);//代码所在的绝对路径
//	//printf("%d\n", __LINE__);//代码所在行号
//	//printf("%s\n",__DATE__);//日期
//	//printf("%s\n",__TIME__);//时间
//
//	//写日志文件
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("log.txt", "w");
//
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf,"file:%s line:%d data:%s time:%s i:%d\n",__FILE__, __LINE__, __DATE__, __TIME__, i);
//	}
//
//	fclose(pf);
//	pf = NULL;
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}
