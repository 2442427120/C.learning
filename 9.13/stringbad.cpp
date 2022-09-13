//#define _CRT_SECURE_NO_WARNINGS
//#include "stringbad.h"
//#include <cstring>
//
//int StringBad::num_string = 0;
//
//StringBad::StringBad(const char* s)
//{
//	len = strlen(s);
//	str = new char[len + 1];
//	strcpy(str, s);
//	num_string++;
//	cout << num_string << ": \"" << str << "\" object created\n";
//}
//
//StringBad::StringBad()
//{
//	len = 4;
//	str = new char[4];
//	strcpy(str, "C++");
//	num_string++;
//	cout << num_string << ":\"" << str << "\" default created\n";
//}
//
////编写复制构造函数，避免因使用对象来初始化另一个对象时编译器自动调用默认复制构造函数而导致程序出错
//StringBad::StringBad(const StringBad& st)
//{
//	len = st.len;
//	str = new char[len + 1];
//	strcpy(str, st.str);
//	num_string++;
//	cout << num_string << ":\"" << str << "\" default created\n";
//}
//
////程序也可能是因为赋值运算符导致的错误，因此添加赋值运算符的重载函数
////函数返回值为类对象的引用，是因为可能存在连续赋值的情况
//StringBad& StringBad::operator=(const StringBad& st)
//{
//	//调用重载的赋值运算符的是对象自身，因此不能再删除在初始化时会主动创建的空间
//	if (this == &st)
//		return *this;
//
//	//在将一个对象赋值给另一个对象时，被赋值的对象可能会已经创建了一个空间，为了避免内存浪费，因先删除
//	delete[]str;
//	len = st.len;
//	str = new char[len + 1];
//	strcpy(str, st.str);
//	return *this;
//}
//
//StringBad::~StringBad()
//{
//	cout << "\"" << str << "\" object deleted\n";
//	--num_string;
//	cout << num_string << " left\n";
//	delete[]str;
//} 
//
//ostream& operator<<(ostream& os, const StringBad& st)
//{
//	cout << st.str;
//	return os;
//}