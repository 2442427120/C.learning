#define _CRT_SECURE_NO_WARNINGS
#include "string1.h"
#include <cstring>

int String::num_string = 0;

int String::HowMany()
{
	return num_string;
}

String::String(const char* s)
{
	len = strlen(s);
	str = new char[len + 1];
	strcpy(str, s);
	num_string++;
}

String::String()
{
	len = 4;
	str = new char[1];
	str[0] = '\0';
	num_string++;
}

//编写复制构造函数，避免因使用对象来初始化另一个对象时编译器自动调用默认复制构造函数而导致程序出错
String::String(const String& st)
{
	len = st.len;
	str = new char[len + 1];
	strcpy(str, st.str);
	num_string++;
}

String::~String()
{
	cout << "\"" << str << "\" object deleted\n";
	--num_string;
	cout << num_string << " left\n";
	delete[]str;
}

//程序也可能是因为赋值运算符导致的错误，因此添加赋值运算符的重载函数
//函数返回值为类对象的引用，是因为可能存在连续赋值的情况
String& String::operator=(const String& st)
{
	//调用重载的赋值运算符的是对象自身，因此不能再删除在初始化时会主动创建的空间
	if (this == &st)
		return *this;

	//在将一个对象赋值给另一个对象时，被赋值的对象可能会已经创建了一个空间，为了避免内存浪费，因先删除
	delete[]str;
	len = st.len;
	str = new char[len + 1];
	strcpy(str, st.str);
	return *this;
}

String& String::operator=(const char* s)
{
	delete[]str;
	len = strlen(s);
	str = new char[len + 1];
	strcpy(str, s);
	return *this;
}

char& String::operator[](int i)
{
	return str[i];
}

const char& String::operator[](int i) const
{
	return str[i];
}

bool operator<(const String& st1, const String& st2)
{
	return (strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String& st1, const String& st2)
{
	return st1.str < st2.str;
}

bool operator==(const String& st1, const String& st2)
{
	return (strcmp(st1.str, st2.str) == 0);
}

ostream& operator<<(ostream& os, const String& st)
{
	cout << st.str;
	return os;
}

istream& operator>>(istream& is, String& st)
{
	char temp[String::CINLIM];
	is.get(temp, String::CINLIM);
	if (is)
		st = temp;
	while (is && is.get() != '\n')
		continue;

	return is;
}