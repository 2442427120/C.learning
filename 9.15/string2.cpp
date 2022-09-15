#define _CRT_SECURE_NO_WARNINGS
#include "string2.h"
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

String& String::operator+(const String& s)
{
	int len1 = strlen(str);
	int len2 = strlen(s.str);
	char* temp = new char[len1 + len2 + 1];
	strcpy(temp, str);
	strcpy(temp + len1, s.str);
	strcpy(str, temp);
	delete[]temp;
	return *this;
}

void String::stringup()
{
	int i = 0;
	while (str[i++] != '\0')
		str[i] = toupper(str[i]);
}

void String::stringlow()
{
	int i = 0;
	while (str[i++] != '\0')
		str[i] = tolower(str[i]);
}

int String::has(char c)
{
	int i = 0;
	int count = 0;
	while (str[i++] != '\0')
	{
		if (str[i] == c)
			count++;
	}
	return count;
}

String& operator+(const char* s, String& st)
{
	int len1 = strlen(s);
	int len2 = strlen(st.str);
	char* temp = new char[len1 + len2 + 1];
	strcpy(temp, s);
	strcpy(temp + len1, st.str);
	/*stemp.str = temp;*/
	strcpy(st.str, temp);
	delete []temp;
	return st;
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
	while (is && is.get() != '\n')	//超出部分丢弃,并把换行符读取掉
		continue;

	return is;
}