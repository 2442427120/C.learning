//1.��дһ����������������е�һ��$֮ǰ���ַ���Ŀ������$�����������С�
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
//	cin.get(input, LIM, '$');	//��cin.get()���룬���Ὣ$������������
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