//2.������ϰ1������������ͬ����Ҫ���������Сд���ո�ͱ����������ĸ������⡣����Madam��I��m Adam����
//��Ϊ���������ԡ����磬���Ժ������ܽ��ַ�������Ϊ��madamimadam����Ȼ����Ե������Ƿ�һ������Ҫ�������õ�
//cctype�⣬�����ܴ����ҵ��������õ�STL���������ܲ�һ����Ҫʹ�����ǡ�
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