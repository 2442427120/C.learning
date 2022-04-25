#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <errno.h> 
#include <string.h>
//int main()
//{
//	//打开文件test.txt
//	//相对路径
//	//. 表示当前路径
//	//.. 表示上一级路径
//	//fopen("./test.txt","r");
//	//fopen("../../test.txt","r");
//	//fopen("test.txt","r");
//
//	//绝对路径
//	/*fopen("D:\c-learning\vs2022code\4.25","r");*/
//
//	//FILE* pf= fopen("test.txt","r"); //以读的形式打开 - "r"
//	FILE* pf = fopen("test.txt", "w"); //以写的形式打开 - "w"
//	if (pf == NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//
//	//打开成功
//	//读文件
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//在文件中写入信息
//int main()
//{
//	 FILE* pfWrite= fopen("test.txt", "w");
//	 if (pfWrite == NULL)
//	 {
//		 printf("%s\n",strerror(errno));
//		 return 0;
//	 }
//	 //写文件
//	 fputc('h',pfWrite);
//	 fputc('e', pfWrite);
//	 fputc('l', pfWrite);
//	 fputc('l', pfWrite);
//	 fputc('o', pfWrite);
//
//	 fclose(pfWrite);
//	 pfWrite = NULL;
//	return 0;
//}

int main()
{
	FILE* pfRead = fopen("test.txt", "r");
	if (pfRead == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//读文件
	printf("%c",fgetc(pfRead));//h
	printf("%c", fgetc(pfRead));//e
	printf("%c", fgetc(pfRead));//l
	printf("%c", fgetc(pfRead));//l
	printf("%c", fgetc(pfRead));//o

	fclose(pfRead);
	pfRead = NULL;
	return 0;
}
