//1.����ָ����˳���������һ�����ַ��������硰tot������otto�����Ǽ�̻��ġ���дһ���������û������ַ�����
//�����ַ������ô��ݸ�һ��bool����������ַ����ǻ��ģ��ú�������true�����򷵻�false����ʱ����Ҫ���������С
//д���ո�ͱ�������Щ���ӵ����⡣������򵥵İ汾���ܾ���Otto���͡�Madam��I��m Adam������鿴��¼F���ַ�
//�������б��Լ���������

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