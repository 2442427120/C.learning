#pragma once 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <float.h>
#include <assert.h>
#include <stdlib.h>

typedef struct BookInfo
{
	char ISBN[10];
	char name[20];
	char author[10];
}Book;

typedef  Book* book;
//typedef struct LNode
//{
//	Book data;
//	struct LNode* next;
//}Node;
int main()
{
	Book book1 = { 0 };
	book b;
	b = (Book*)malloc(sizeof(Book));
	printf("请输入ISBN号、书名、作者\n");
	scanf("%s%s%s", b->ISBN, b->name, b->author);
	/*printf("%s %s %s", b->ISBN, b->name, b->author);*/

	/*printf("%s %s %s", book.ISBN, book.name, book.author);*/
	FILE* pf = fopen("booklist11.txt", "w+");
	///*fprintf(pf, "%s %s %s", book->ISBN, book->name, book->author);*/
	//rewind(pf);
	fseek(pf, 0, SEEK_SET);
	fscanf(pf, "%s%s%s", b->ISBN, b->name, b->author);
	///*fprintf(buf, 1, strlen(book1), pf);*/
	fprintf(pf, "%s %s %s\n", b->ISBN, b->name, b->author);
	fclose(pf);

	return 0;
}
//int main()
//{
//	char str1[10] = { 0 };
//	char str2[10] = { 0 };
//	FILE* pf = fopen("test1.txt", "w+");
//	fprintf(pf, "%s", "hello world");
//	rewind(pf);
//	fscanf(pf, "%s", str1);
//	fscanf(pf, "%s", str2);
//	fclose(pf);
//	printf("%s\n", str1);
//	printf("%s\n", str2);
//	return 0;
//}
//int main()
//{
//	char str[80];
//	float f;
//	FILE* pFile;
//
//	pFile = fopen("myfile.txt", "w+");
//	fprintf(pFile, "%f %s", 3.1416, "PI");
//	rewind(pFile);
//	fscanf(pFile, "%f", &f);
//	fscanf(pFile, "%s", str);
//	fclose(pFile);
//	printf("I have read: %f and %s \n", f, str);
//	return 0;
//}
//#define GOLLON 3.785
//#define MILE 1.609
//int main()
//{
//	float journey = 0.0;
//	float consumption = 0.0;
//	printf("请输入旅行的旅程和消耗的汽油量\n");
//	scanf("%f%f", &journey, &consumption);
//
//	printf("消耗每加仑汽油行驶的英里数是:%.1f\n", journey/consumption);
//
//	printf("燃料消耗:%.1f\/100", MILE / GOLLON * 100);
//	return 0;
//}
//int main()
//{
//	double a;
//	float b;
//	float c = 3.0;
//	a = 1.0 / 3.0;
//	//浮点型常量默认作为双精度，如3.0并非float类型而是double类型，
//	//这样做的好处是提高运算的精度但影响运算速度，因此，如果需要直接按float类型对数据进行运算，则在数字后面加f即可
//	b = 1.0f / 3.0f; //1.0和3.0为double类型，防止出现"从double到float截断"警告，在1.0和3.0后加f，表示float类型
//
//	printf("%f\n", c);
//	printf("%.6lf, %.12lf, %.16lf\n", a, a, a);
//	printf("%.6f, %.12f, %.16f\n", b, b, b);
//	printf("%d, %d", FLT_DIG, DBL_DIG);
//
//	return 0;
//}

//int main()
//{
//	char name[10] = { 0 };
//	char surname[10] = { 0 };
//	printf("请先输入名再输入姓\n");
//	scanf("%s%s", &name, &surname);
//
//	printf("%s %s\n", name, surname);
//	printf("%*zd %*zd\n", strlen(name), strlen(name), strlen(surname), strlen(surname));
//
//	printf("%s %s\n", name, surname);
//	printf("%-*zd %-*zd\n", strlen(name), strlen(name), strlen(surname), strlen(surname));
//
//	return 0;
//}
//int main()
//{
//	float speed = 0.0;
//	float fsize = 0.0;
//	printf("请输入下载速度以兆位每秒(Mb/s)为单位的下载速度和以兆字节(MB)为单位的文件大小\n");
//	scanf("%f%f", &speed, &fsize);
//	printf("At %.2f megabits per second, a file of %.2f megabits\n", speed, fsize);
//	printf("download in %.2f seconds.", fsize/speed);
//	return 0;
//}
//int main()
//{
//	float height = 0.0;
//	char name[10] = { 0 };
//	printf("please enter your height and name\n");
//	scanf("%f%s", &height,name);
//	printf("%s, you are %.3f feet tall\n", name, height);
//	return 0;
//}
//int main()
//{
//	float a = 21.29;
//	printf("The input is %.1f or %.1e\n", a, a);
//	return 0;
//}
//#define BOOK "War and Peace"
//int main()
//{
//	float cost = 12.99;
//	float percent = 80.0;
//
//	printf("This copy of %s sells for $%.2f.\n", BOOK, cost);
//	printf("That is %.0f%c of list.", percent, '%'); // .0f表示以浮点型打印，且舍弃小数位。
//	return 0;
//}

//
//int main()
//{
//	char str[10] = {"hello"};
//	printf("%zd", strlen(str));//strlen不读取结尾空字符"/0"
//	return 0;
//}