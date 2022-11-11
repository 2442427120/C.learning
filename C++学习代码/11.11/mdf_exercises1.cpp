//《C++ Primer Plus》第十六章编程练习第1题修改
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
//	/*int len = str.size();
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
//	}*/
//	string temp;
//	temp = str;
//
//	reverse(temp.begin(), temp.end());
//
//	return str == temp;
//}