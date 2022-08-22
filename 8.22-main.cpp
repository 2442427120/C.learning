//编程练习4
//请基于下面这个名称空间编写一个由3个文件组成的程序：
//namespace SALES
// {
//		const int QUARTERS = 4;
//		struct Sales
//		{
//			double sales[QUARTERS];
//			double average;
//			double max;
//			double min;
//		};
// 
// //copies the lesser of 4 or n items from the array ar to the sales member of s and computers and 
// //stores the average, maximum, and miximum values of the entered items;remaining elements of sales
// //, if any, set to 0
// void setSales(Sales &s, const double ar[], int n);
// //gathers sales for 4 quarters interactively, stores them in the sales member of s and computers 
// //and stores the average, maximum, and miximum values  
// void setSales(Sales &s)
// //display all information in structure s
// void showSales(const Sales &s);
// }
// 第一个文件是一个头文件，其中包含名称空间；第二个文件是一个源代码文件，它对这个名称空间进行扩展，以提
// 供这三个函数的定义；第三个文件声明两个Sales对象，并使用setSales()的交互式版本为一个结构提供值，然后
// 使用setSales()的非交互式版本为另一个结构体提供值。另外它还使用showSales()来显示这两个结构体的内容
//


//编程练习3
//下面是一个结构声明
// struct chaff
// {
//		char dross[20]; 
//		int slag;
// }
// 编写一个程序，使用定位new运算符将一个包含两个这种结构的数组放在一个缓冲区中。然后，给结构体成员赋值（
// 对于char数组，使用函数strcpy()），并使用一个循环来显示内容。一种方法是像程序清单9.10那样将一个静态数
// 数组用作缓冲区；另一种方法是使用常规new运算符来分配缓冲区。
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//const int BUF = 512;
//
//struct chaff
//{
//	char dross[20];
//	int slag;
//};
//
//chaff buffer[2];
//
//void setchaff(chaff* pd, int n);
//void show(const chaff* pd, int n);
//
//int main(void)
//{
//	chaff* cpd = new(buffer) chaff[2];
//	setchaff(cpd, 2);
//	show(cpd, 2);
//
//	return 0;
//}
//
//void setchaff(chaff* pd, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << "Please enter string:";
//		cin.getline(pd[i].dross, 20);
//		cout << "Please enter a nubmer:";
//		cin >> pd[i].slag;
//		cin.get();
//		/*strcpy(pd[i].dross, "hello");
//		pd[i].slag = i + 1;*/
//	}
//}
//
//void show(const chaff* pd, int n)
//{
//	for (int i = 0; i < n; i++)
//		cout << pd[i].dross << ": " << pd[i].slag << endl;
//}

//编程练习2
//修改程序清单9.9：用string对象代替字符数组。这样，该程序将不再需要检查输入的字符串是否过长，同时可以将
//输入字符串同字符串“”进行比较，以判断是否为空行
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//const int ArSize = 10;
//
//void strcount(const string str);
//
//int main(void)
//{
//	/*char input[ArSize];*/
//	string input;
//	char next;
//
//	cout << "Enter a line:\n";
//	//cin.get(input, ArSize);
//	getline(cin, input);
//	while (cin)
//	{
//		/*cin.get(next);*/
//		//在程序前面，如果next是换行符，则说明cin.get(input, ArSize)读取了整行；否则说明行中还有字符没有被
//		//读取。随后，以下使用一个循环来丢弃余下的字符。
//		/*while (next != '\n')
//			cin.get(next);*/
//		strcount(input);
//		cout << "Enter next line (empty line to quit):\n";
//		/*cin.get(input, ArSize);*/
//		getline(cin, input);
//	}
//	cout << "Bye.\n";
//
//	return 0;
//}
//
//void strcount(const string str)
//{
//	static int total = 0;
//
//	cout << "\"" << str << "\" contains ";
//	total += str.size();
//
//	cout << str.size() << " characters\n";
//	cout << total << " characters total\n";
//}

//编程练习1
//下面是一个头文件：
////golf.h -- for pe9-1.cpp

//const int Len = 40;
//struct golf
//{
// char fullname[Len];
// int handicap;
// };
// 
// //non-interactive version:
// //function sets golf structure to provided name, handicap using values passed as arguments to the 
// //function 
// void setgolf(golf& g, const char* name, int hc);
// 
// //interactive version:
// //function solicits name and handicap from user and sets the mumber of g to the values entered return 1
// // if name is entered, 0 if name is empty string
// int setgolf(golf &g);
// 
// //function resets handicap to new value
// void handicap(golf& g, int hc);
// 
// //function display contents of golf structurs
// void showgolf(const golf &g);
// 注意到setgolf()函数被重载，可以这样使用第一个版本：
// golf ann
// setgolf(ann, "Ann Birdfree", 24);
// 上述函数调用提供了存储在ann结构中的信息。可以这样使用其第二个版本：
// golf andy
// setgolf(andy);
// 上述函数将提示用户输入姓名和等级，并将它们存储在andy结构中。这个函数可以（但是不一定必须）在内部使用第一
// 个版本。
// 根据这个头文件，创建一个多文件程序。其中的一个文件名为golf.cpp，它提供了与头文件中的原型匹配的函数定义
// ；另一个文件应包含main()，并演示原型函数的所有特性。例如，包含一个让用户输入的循环，并使用输入的数据来
// 填充一个由golf结构组成的数组，数组被填满或用户将高尔夫选手的姓名设置为空字符串时，循环将结束。main()函
// 数只使用头文件中原型化的函数来访问golf结构。
//#define _CRT_SECURE_NO_WARNINGS
//#include "golf822.h"
//
//using namespace std;
//
//int main(void)
//{
//	int flag = 1;
//	int count = 0;
//	golf ann;
//	golf andy;
//	golf info[10];
//
//	setgolf(ann, "Ann Birdfree", 24);
//	handicap(ann, 25);
//
//	while (flag != 0 && count < 10)
//	{
//		std::cout << "Please enter related content(enter enpty string to quit):\n";
//		flag = setgolf(andy);
//		strcpy(info[count].fullname, andy.fullname);
//		info[count].handicap = andy.handicap;
//		count++;
//	}
//
//	std::cout << endl;
//	showgolf(ann);
//
//	return 0;
//}

//名称空间的示例，该示例说明了名称空间的一些特性。
//#include <iostream>
//#include "main822.h"
//
//void other(void);
//void another(void);
//
//int main(void)
//{
//	using debts::Debt;
//	using debts::showDebt;
//
//	Debt golf = { {"Benny", "Goatsniff"}, 120.0 };
//	showDebt(golf);
//	other();
//	another();
//
//	return 0;
//}
//
//void other(void)
//{
//	using std::cout;
//	using std::endl;
//	using namespace debts;
//
//	Person dg = { "Doodles", "Glister" };
//	showPerson(dg);
//	cout << endl;
//	Debt zippy[3];
//	int i;
//	for (i = 0; i < 3; i++)
//		getDebt(zippy[i]);
//
//	for (i = 0; i < 3; i++)
//		showDebt(zippy[i]);
//	cout << "Total debt: $" << sumDebt(zippy, 3) << endl;
//
//	return;
//}
//
//void another(void)
//{
//	using pers::Person;
//
//	Person collector = { "Milo", "Rightshift" };
//	pers::showPerson(collector);
//	std::cout << std::endl;
//}