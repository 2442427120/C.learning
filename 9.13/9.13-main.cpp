//该程序通过一个小程序来使用这个类，该程序允许输入几个字符串。程序首先提示用户输入，然后将用户输入的字符串
//存储到String对象中，并显示它们，最后指出哪个字符串最短，哪个字符串按字母顺序排在前面。
#include "string1.h"

const int ArSize = 10;
const int MaxLen = 81;

int main(void)
{
	String name;
	cout << "Hi, what's your name?\n";
	cin >> name;

	cout << name << ", please enter up to " << ArSize << " short saying <empty line to quit>:\n";
	String sayings[ArSize];
	char temp[MaxLen];
	int i;
	for (i = 0; i < ArSize; i++)
	{
		cout << i + 1 << ": ";
		cin.getline(temp, MaxLen);
		while (cin && cin.get() != '\n')	//超出部分丢弃
			continue;
		if (!cin || temp[0] == '\0')	//输入为空行结束
			break;
		else
			sayings[i] = temp;
	}
	int total = i;

	if (total > 0)
	{
		cout << "Here are your sayings:\n";
		for (i = 0; i < total; i++)
			cout << sayings[i][0] << ": " << sayings[i] << endl;

		int shortest = 0;
		int first = 0;
		for (i = 0; i < total; i++)
		{
			if (sayings[i].length() < sayings[shortest].length())
				shortest = i;
			if (sayings[i] < sayings[first])
				first = i;
		}
		cout << "Shortest saying:\n" << sayings[shortest] << endl;
		cout << "First alphabetically:\n" << sayings[first] << endl;
		cout << "This program used " << String::HowMany() << "String objects. Bye.\n";

	}
	else
		cout << "No input! Bye.\n";

	return 0;
}

//演示stringbad的构造函数析构函数是何时以及如何运行的。该程序演示了一个因复制构造函数调用析构函数而导致
//程序的错误。
//错误原因1：复制构造函数的隐式调用
//也可能的错误原因：重载的赋值运算符的隐式调用而导致
//#include "stringbad.h"
//
//void callme1(StringBad& rsb);
//void callme2(StringBad sb);
//
//int main(void)
//{
//	StringBad headline1("hello world");
//	StringBad headline2("good morning");
//	StringBad sports("basketball");
//
//	cout << "headline1: " << headline1 << endl;
//	cout << "headline2: " << headline2 << endl;
//	cout << "soprts: " << sports << endl;
//
//	callme1(sports);
//	callme2(headline1);	
//
//
//	return 0;
//}
//
//void callme1(StringBad& rsb)
//{
//	cout << "String passed by reference:\n";
//	cout << "\"" << rsb << "\"\n";
//}

//按值传递 - 会使传过来的实参产生一个形参的副本，实参为sports，而产生的形参副本就会是
//StringBad(const StringBad& ),而程序中没有与之匹配的构造函数，函数将会调用默认构造函数
//StringBad(const StringBad& )，而此默认构造函数并没有动态创建内存，所以在析构函数删除创建的内存时会产生错误
//void callme2(StringBad sb)
//{
//	cout << "String passed by value:\n";
//	cout << "\"" << sb << "\"\n";
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//void address(const char* s);
//
//int main(void)
//{
//	const char* ptr = "hello world";
//
//	address(ptr);
//
//	return 0;
//}
//
//void address(const char* s)
//{
//	int len = strlen(s);
//	const char* pt = new char[len + 1];
//	pt = s;
//	cout << pt << endl;
//
//}