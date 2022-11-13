//9.采用两种方式来读取并显示输入中#字符（不包括）之前的内容。第一种方法读取字符，然后使用putback()将它插回到
//输入中。第二种方法在读取之前使用peek()查看下一个字符。
//#include <iostream>
//
//int main(void)
//{
//	using std::cout;
//	using std::cin;
//	using std::endl;
//
//	char ch;
//
//	while (cin.get(ch))
//	{
//		if (ch != '#')
//			cout << ch;
//		else
//		{
//			cin.putback(ch);
//			break;
//		}
//	}
//
//	if (!cin.eof())
//	{
//		cin.get(ch);
//		cout << endl << ch << " is next input character.\n";
//	}
//	else
//	{
//		cout << "End of file reached.\n";
//		std::exit(0);
//	}
//
//	while (cin.peek() != '#')
//	{
//		cin.get(ch);
//		cout << ch;
//	}
//	if (!cin.eof())
//	{
//		cin.get(ch);
//		cout << endl << ch << " is next input character.\n";
//	}
//	else
//		cout << "End of file reached.\n";
//
//	return 0;
//}