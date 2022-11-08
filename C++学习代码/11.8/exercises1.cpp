//1.回文指的是顺读和逆读都一样的字符串。例如“tot”，“otto”都是简短回文。编写一个程序，让用户输入字符串，
//并将字符串引用传递给一个bool函数。如果字符串是回文，该函数返回true，否则返回false。此时，不要担心诸如大小
//写、空格和标点符号这些复杂的问题。即这个简单的版本将拒绝“Otto”和“Madam，I’m Adam”。请查看附录F中字符
//串方法列表，以简化这项任务。

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
//	getline(cin, st1);
//	bool flag = IsReply(st1);
//
//	if (flag == true)
//		cout << "The string is a palindrome\n";
//	else
//		cout << "The string is not a palindrome\n";
//
//	return 0;
//}
//
//bool IsReply(const string& str)
//{
//	int len = str.size();
//	int left, right;
//
//	for (int i = 0, left = i, right = len - 1; left < right; i++, left++, right--)
//	{
//		if (isupper(str[left]) || isupper(str[right]) || isspace(str[left]) ||
//			isspace(str[right]) || ispunct(str[left]) || ispunct(str[right]))
//		{
//			cout << "The input string is not legal\n";
//		}
//		if (str[left] == str[right] && i < (len / 2))
//			continue;
//		else
//			return false;
//	}
//
//	return true;
//}