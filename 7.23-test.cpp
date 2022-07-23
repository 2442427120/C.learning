#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>

//C语言实现
//int main(void)
//{
//	int rows = 0;
//
//	printf("Enter number of rows: ");
//	scanf("%d", &rows);
//
//	for (int i = 0; i < rows; i++)
//	{
//		// 显示句号
//		for (int period = rows - i - 1; period > 0; --period)
//		{
//			printf(".");
//		}
//
//		//显示星号
//		for (int asterisk = 0; asterisk < i + 1; ++asterisk)
//		{
//			printf("*");
//		}
//
//		printf("\n");
//	}
//
//	return 0;
//}

//10.编写一个使用嵌套循环的程序，要求用户输入一个值，指出要显示多少行。然后，程序将显示相应行数的星号，其
//中第一行包括一个星号，第二行包含两个星号，依此类推。每一行包含的字符数等于用户指定的行数，在星号不够的
//情况下，在星号前面加上句点。该程序的运行情况如下：
//	Enter number of rows: 5
//	....*
//  ...**
//  ..***
//	.****
//  *****
//int main(void)
//{
//	using namespace std;
//
//	int rows = 0;	//用于存储用户输入的行数
//
//	cout << "Enter number of rows: ";
//	cin >> rows;
//
//	for (int i = 0; i < rows; ++i)
//	{
//		//显示句点
//		for (int period = rows - i - 1; period > 0; --period)
//		{
//			cout << ".";
//		}
//
//		//显示星号
//		for (int asterisk = 0; asterisk < i+1; ++asterisk)
//		{
//			cout << "*";
//		}
//
//		cout << endl;	//一行输入完毕后换行
//	}
//
//	return 0;
//}


//9.编写一个满足前一个练习中描述的程序，但使用string对象而不是字符数组。请在程序中包含头文件string，并使
//用关系运算符来进行比较测试。
//int main(void)
//{
//	using namespace std;
//
//	int count = 0;
//	string word;
//
//	cout << "Enter words (to stop, type the word done):\n";
//	cin >> word;
//
//	while (word != "done")
//	{
//		count++;
//		cin >> word;
//	}
//
//	cout << "You entered a total of " << count << " words.\n";
//
//	return 0;
//}

//C语言完成编程练习8
//int main(void)
//{
//	int count = 0;
//	char word[20];
//
//	printf("Enter words (to stop, type the word done):\n");
//	scanf("%s", word);
//
//	while (strcmp(word, "done"))
//	{
//		count++;
//		scanf("%s", word);
//	}
//
//	printf("You entered a total of %d words.\n", count);
//
//	return 0;
//}

//8.编写一个程序，它使用一个char数组和循环来每次读取一个单词，直到用户输入done为止。随后，该程序指出用户
//输入了多少个单词(不包括done在内)。下面是该程序的运行情况：
//	Enter words (to stop, type the word done):
//	anteater birthday category dumpster
//	envy finagle geometry done for sure
//	You entered a total of 7 words.
//int main(void)
//{
//	using namespace std;
//
//	int count = 0;
//	char word[20];
//
//	cout << "Enter words (to stop, type the word done):\n";
//	cin >> word;
//
//	while (strcmp(word, "done"))
//	{
//		count++;
//		cin >> word;
//	}
//
//	cout << "You entered a total of " << count << " words.\n";
//
//	return 0;
//}

//7.设计一个名为car的结构，用它存储下述有关汽车的信息：生产商（存储在字符数组或string对象中的字符串）、
//生产年份（整数）。编写一个程序，向用户询问有多少辆汽车。随后，程序使用new来创建一个由相应数量的car结构
//组成的动态数组。接下来，程序提示用户输入每辆车的生产商（可能由多个单词组成）和年份信息。请注意，这需要
//特别小心，因为它将交替读取数值和字符串。最后，程序将显示每个结构的内容。该程序运行情况如下：
//	How many cars do you wish to catalog? 2
//	Car #1:
//	Please enter the make: Hudson Hornet
//	Please enter the year made: 1952
//	Car #2:
//	Please enter the make: Kaiser
//	Please enter the year made: 1951
//	Here is collection:
//	1952 Hudson Hornet
//  1951 Kaiser

//using namespace std;
//
//struct Car
//{
//	string manufacturer;
//	int production_year;
//};
//
//int main(void)
//{
//	int input;
//
//	cout << "How many cars do you wish to catalog? ";
//	cin >> input;
//	cin.get();	//将换行读取，防止影响下次输入
//
//	Car* car = new Car[input];	//创建对应的结构体数组
//
//	//将数据存入结构体数组中
//	for (int i = 0; i < input; i++)
//	{
//		cout << "Car #" << i + 1 << endl;
//		cout << "Please enter the make: ";
//		getline(cin, car[i].manufacturer);
//		cout << "Please enter the year made: ";
//		cin >> car[i].production_year;
//		cin.get(); //将换行读取，防止影响下一次输入
//	}
//
//	cout << "Here is Collection:\n";
//	//显示结构体数组中的内容
//	for (int i = 0; i < input; i++)
//	{
//		cout << car[i].production_year << " " << car[i].manufacturer << endl;
//	}
//
//	delete[]car;	//释放开辟的数组空间
//
//	return 0;
//}

//6.完成编程练习5，但这一次使用一个二维数组来存储输入----3年中每个月的销售量。程序将报告每年销售量以及三年
//的总销售量。
//const int Years_month = 12;
//
//int main(void)
//{
//	using namespace std;
//
//	int quantity[3][12];
//	int sum = 0;
//	int total_sum = 0;
//
//	string month[Years_month] =
//	{
//		"January",
//		"February",
//		"March",
//		"April",
//		"May",
//		"June",
//		"July",
//		"August",
//		"September",
//		"October",
//		"November",
//		"December"
//	};
//
//	cout << "请输入3年中每个月的销售量" << endl;
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "第" << i + 1 << "年" << endl;
//		for (int j = 0; j < 12; j++)
//		{
//			cout << month[j] << ":";
//			cin >> quantity[i][j];
//			sum += quantity[i][j];
//		}
//		total_sum += sum;
//
//		cout << "\t\t\t\t\t年总销售量：" << sum << endl;
//	}
//
//	/*for (int i = 0; i < 3; i++)
//	{
//		cout << "第" << i + 1 << "年" << endl;
//		for (int j = 0; j < 12; j++)
//		{
//			cout << month[j] << ":";
//			cout << quantity[i][j];
//			cout << "\t";
//		}*/
//	cout << endl << "\t\t\t\t\t三年总销售量是: " << total_sum << endl;
//	/*cout << endl;*/
//	/*}*/
//
//	return 0;
//}