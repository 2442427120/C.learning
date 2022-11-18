//1.编写一个程序计算输入流中第一个$之前的字符数目，并将$留在输入流中。
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//
//const int LIM = 255;
//
//int main(void)
//{
//	int i = 0;
//	int count = 0;
//	char ch;
//	char input[LIM];
//
//	cout << "Enter a string:\n";
//	cin.get(input, LIM, '$');	//用cin.get()输入，最后会将$留在输入流中
//
//	while (input[i] != '#' && i < strlen(input))
//	{
//		count++;
//		i++;
//	}
//
//	cout << "before $ has " << count << " characters.\n";
//	cin.get(ch);
//	cout << "next character is " << ch << endl;
//
//	return 0;
//}