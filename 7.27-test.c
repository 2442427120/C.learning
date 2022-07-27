#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//C++ Primer Plus 编程练习第4题C语言实现
//#define STRSIZE 50
//
//struct bop
//{
//	char fullname[STRSIZE];	//real name
//	char title[STRSIZE];	//job title
//	char bopname[STRSIZE];	//secret BOP name
//	int preference;	// 0 = fullname, 1 = title, 2 = bopname 
//};
//
//void print_display_by_name(struct bop bop_info[5]);
//void print_display_by_title(struct bop bop_info[5]);
//void print_display_by_bopname(struct bop bop_info[5]);
//void print_display_by_preference(struct bop bop_info[5]);
//
//int main(void)
//{
//	char ch;
//
//	struct bop bop_info[5] =
//	{
//		{"Wimp Macho", "doctor", "DR", 0},
//		{"Raki Rhodes", "Junior Programmer", "JP", 1},
//		{"Celia Laiter", "college", "MIPS", 2},
//		{"Hoppy Hipman", "Analyst", "AN", 1},
//		{"Pat Hand", "teacher", "LOOPY", 2}
//	};
//
//	printf("Benvolen Order of Programmers Report\n");
//	printf("a. display by name		b. display by title\n");
//	printf("c. display by bopname		d. display by preference\n");
//	printf("q. quit\n");
//
//	printf("Enter your choice: ");
//	scanf("%c", &ch);
//	do
//	{
//		switch (ch)
//		{
//		case 'a':
//			print_display_by_name(bop_info);
//			break;
//		case 'b':
//			print_display_by_title(bop_info);
//			break;
//		case 'c':
//			print_display_by_bopname(bop_info);
//			break;
//		case 'd':
//			print_display_by_preference(bop_info);
//			break;
//		}
//
//		printf("Next choice: ");
//		getchar();
//
//	} while (scanf("%c", &ch) && ch != 'q');
//
//	printf("Bye.\n");
//
//	return 0;
//}
//
//void print_display_by_name(struct bop bop_info[5])
//{
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%s\n", bop_info[i].fullname);
//	}
//}
//
//void print_display_by_title(struct bop bop_info[5])
//{
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%s\n", bop_info[i].title);
//	}
//}
//
//void print_display_by_bopname(struct bop bop_info[5])
//{
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%s\n", bop_info[i].bopname);
//	}
//}
//
//void print_display_by_preference(struct bop bop_info[5])
//{
//	for (int i = 0; i < 5; i++)
//	{
//		switch (bop_info[i].preference)
//		{
//		case 0:
//			printf("%s\n", bop_info[i].fullname);
//			break;
//		case 1:
//			printf("%s\n", bop_info[i].title);
//			break;
//		case 2:
//			printf("%s\n", bop_info[i].bopname);
//			break;
//		}
//	}
//}

//C++ Primer Plus 编程练习第3题C语言实现
//int main(void)
//{
//	char ch;
//
//	printf("Please enter one of the following choices:\n");
//	printf("c) carnivore p) pianist\n");
//	printf("t) tree g) game\n");
//
//	do
//	{
//		scanf("%c", &ch);
//		getchar();
//
//		switch (ch)
//		{
//		case 'c':
//			printf("A maple is a carnivore.\n");
//			break;
//		case 'p':
//			printf("A maple is a pianist.\n");
//			break;
//		case 't':
//			printf("A maple is a tree.\n");
//			break;
//		case 'g':
//			printf("A maple is a game.\n");
//		default:
//			printf("Please enter a c, p, t, or, g: ");
//		}
//	} while (ch != 'c' && ch != 'p' && ch != 't' && ch != 'g');
//
//	return 0;
//}