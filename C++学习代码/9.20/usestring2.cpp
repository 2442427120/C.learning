//《C++ Primer Plus》第十二章编程练习第2题修改
#include <iostream>
using namespace std;
#include "string2.h"

int main(void)
{
	String s1(" and I am a C++ student.");
	String s2 = "Please enten your name: ";
	String s3;
	cout << s2;	//重载<<运算符
	cin >> s3;	//重载>>运算符
	s2 = "My name is " + s3;	//重载=，+运算符
	cout << s2 << ".\n";
	s2 = s2 + s1;
	s2.stringup();	//将s2里的字符转换成大写
	cout << "The string\n" << s2 << "\ncontains " << s2.has('A') << " 'A' characters in it.\n";
	s1 = "red";	//String(const char* ) then String& operator=(const String&)
	String rgb[3] = { String(s1), String("green"), String("blue") };
	cout << "Enter the name of a primary color for mixing light: ";
	String ans;
	bool success = false;
	while (cin >> ans)
	{
		ans.stringlow();	//将ans中的字符转换为小写
		for (int i = 0; i < 3; i++)
		{
			if (ans == rgb[i])	//重载==运算符
			{
				cout << "That's right!\n";
				success = true;
				break;
			}
		}
		if (success)
			break;
		else
			cout << "Try again!\n";
	}
	cout << "Bye\n";

	return 0;
}