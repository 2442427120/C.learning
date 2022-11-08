//2.与编程练习1给出的问题相同，但要考虑诸如大小写、空格和标点符号这样的复杂问题。即“Madam，I’m Adam”将
//作为回文来测试。例如，测试函数可能将字符串缩略为“madamimadam”，然后测试倒过来是否一样。不要忘了有用的
//cctype库，您可能从中找到几个有用的STL函数，尽管不一定非要使用它们。
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool IsReply(string& str);

int main(void)
{
	string st1;
	
	cout << "Please enter the string:\n";
	getline(cin, st1);
	bool flag = IsReply(st1);
	if (flag == true)
		cout << "The string is a palindrome\n";
	else
		cout << "The string is not a palindrome\n";

	return 0;
}

bool IsReply(string& str)
{
	int left, right;
	string temp;
	int str_len = str.size();

	for (int i = 0; i < str_len; i++)
	{
		if (ispunct(str[i]) || isspace(str[i]))
			continue;
		temp += tolower(str[i]);
	}

	int temp_len = temp.size();

	for (int i = 0, left = i, right = temp_len - 1; left < right; i++, left++, right--)
	{
		if (temp[left] == temp[right] && i < (temp_len / 2))
			continue;
		else
			return false;
	}

	return true;
}