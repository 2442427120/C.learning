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
	printf("������ISBN�š�����������\n");
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
//	printf("���������е��ó̺����ĵ�������\n");
//	scanf("%f%f", &journey, &consumption);
//
//	printf("����ÿ����������ʻ��Ӣ������:%.1f\n", journey/consumption);
//
//	printf("ȼ������:%.1f\/100", MILE / GOLLON * 100);
//	return 0;
//}
//int main()
//{
//	double a;
//	float b;
//	float c = 3.0;
//	a = 1.0 / 3.0;
//	//�����ͳ���Ĭ����Ϊ˫���ȣ���3.0����float���Ͷ���double���ͣ�
//	//�������ĺô����������ľ��ȵ�Ӱ�������ٶȣ���ˣ������Ҫֱ�Ӱ�float���Ͷ����ݽ������㣬�������ֺ����f����
//	b = 1.0f / 3.0f; //1.0��3.0Ϊdouble���ͣ���ֹ����"��double��float�ض�"���棬��1.0��3.0���f����ʾfloat����
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
//	printf("������������������\n");
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
//	printf("�����������ٶ�����λÿ��(Mb/s)Ϊ��λ�������ٶȺ������ֽ�(MB)Ϊ��λ���ļ���С\n");
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
//	printf("That is %.0f%c of list.", percent, '%'); // .0f��ʾ�Ը����ʹ�ӡ��������С��λ��
//	return 0;
//}

//
//int main()
//{
//	char str[10] = {"hello"};
//	printf("%zd", strlen(str));//strlen����ȡ��β���ַ�"/0"
//	return 0;
//}