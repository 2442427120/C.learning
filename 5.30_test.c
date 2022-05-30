#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include <limits.h>


//int main()
//{
//	char name[20];
//	printf("please enter your name\n");
//	scanf("%s", name);
//	printf("name:\"%s\"\n", name);//打印名字，包括双引号
//	printf("\"%20s\"\n", name);//在宽度为20的字段右端打印名字，包括双引号
//	printf("\"%-20s\"\n", name);//在宽度为20的字段左端打印名字，包括双引号
//	printf("\"%*s\"\n", strlen(name)+3, name);//在比姓名字宽度宽3的字段打印名字，包括双引号
//
//	return 0;
//}
//int main()
//{
//	printf("Maximun value = %d\n", INT_MAX);
//	return 0;
//}
//#define STRING "hello world"
//int main(void)
//{
//	char name[20];
//	printf("please enter you name\n");
//	scanf("%s", name);
//	printf("%zd %zd\n",strlen(name),sizeof(name));
//	printf("%zd", sizeof STRING); 
//	//sizoeof 计算包含了"/0"  sizeof没使用(),使用圆括号取决于运算对象是类型还是特定量 - 
//	//对象是类型时，圆括号必不可少，对象是特定量时圆括号可省略
//	return 0;
//}

//int main(void)
//{
//	char fname[5], lname[5]; //fname[5] = first name - 用来存储姓   lname[5] = last name - 用来存储名 
//
//	printf("请输入你的名和姓:>");
//	scanf("%s%s", lname, fname);
//
//	printf("名:%s 姓:%s\n", lname, fname);
//
//	return 0;
//}