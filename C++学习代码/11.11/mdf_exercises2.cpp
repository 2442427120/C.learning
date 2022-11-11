//《C++ Primer Plus》第十六章编程练习第2题修改
//#include <iostream>
//#include <string>
//#include <iterator>
//#include <algorithm>
//
//using namespace std;
//
//bool IsReply(const string& str);
//
//int main(void)
//{
//	string st1;
//
//	cout << "Please enter the string:\n";
//	cin >> st1;
//	if (IsReply(st1))
//		cout << "The string is a palindrome\n";
//	else
//		cout << "The string is not a palindrome\n";
//
//	return 0;
//}
//
//bool IsReply(const string& str)
//{
//	string temp;
//
//	for (int i = 0; i < temp.size(); i++)
//	{
//		if (isalpha(str[i]))
//			temp += tolower(str[i]);
//	}
//
//	string temp1;
//	temp1 = temp;
//
//	reverse(temp1.begin(), temp1.end());
//
//	return temp1 == temp;
//}