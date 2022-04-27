#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

extern Add(int x, int y); // 声明

int main()
{
	int a = 10;
	int b = 20;

	int c = Add(a, b);
	printf("c = %d\n",c);

	return 0;
}
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (!pf)
//	{
//		perror("open test.txt file");
//		return 0;
//	}
//
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		putchar(ch);
//	}
//
//	if (ferror(pf))
//	{
//		printf("error");
//	}
//	else if (feof(pf))
//	{
//		printf("\nend of file\n");
//	}
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//int main()
//{
//	FILE* pf = fopen("test2.txt","r");
//	if (!pf)
//	{
//		perror("open test2.txt file");
//		return 0;
//	}
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//int main()
//{
//	FILE* pf = fopen("test.txt","r");
//	if (pf == NULL)
//	{
//		printf("%s\n",strerror(errno));
//	}
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	rewind(pf);//rewind - 让文件指针的位置回到文件的起始位置
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	/*fseek(pf, -2, SEEK_CUR);*/
//	//int pos = ftell(pf); // ftell - 读取偏移量
//	//printf("%d\n",pos);
//	/*int ch = fgetc(pf);
//	printf("%c\n", ch);*/
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
