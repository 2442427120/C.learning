//�ó���ͨ��һ��С������ʹ������࣬�ó����������뼸���ַ���������������ʾ�û����룬Ȼ���û�������ַ���
//�洢��String�����У�����ʾ���ǣ����ָ���ĸ��ַ�����̣��ĸ��ַ�������ĸ˳������ǰ�档
#include "string1.h"

const int ArSize = 10;
const int MaxLen = 81;

int main(void)
{
	String name;
	cout << "Hi, what's your name?\n";
	cin >> name;

	cout << name << ", please enter up to " << ArSize << " short saying <empty line to quit>:\n";
	String sayings[ArSize];
	char temp[MaxLen];
	int i;
	for (i = 0; i < ArSize; i++)
	{
		cout << i + 1 << ": ";
		cin.getline(temp, MaxLen);
		while (cin && cin.get() != '\n')	//�������ֶ���
			continue;
		if (!cin || temp[0] == '\0')	//����Ϊ���н���
			break;
		else
			sayings[i] = temp;
	}
	int total = i;

	if (total > 0)
	{
		cout << "Here are your sayings:\n";
		for (i = 0; i < total; i++)
			cout << sayings[i][0] << ": " << sayings[i] << endl;

		int shortest = 0;
		int first = 0;
		for (i = 0; i < total; i++)
		{
			if (sayings[i].length() < sayings[shortest].length())
				shortest = i;
			if (sayings[i] < sayings[first])
				first = i;
		}
		cout << "Shortest saying:\n" << sayings[shortest] << endl;
		cout << "First alphabetically:\n" << sayings[first] << endl;
		cout << "This program used " << String::HowMany() << "String objects. Bye.\n";

	}
	else
		cout << "No input! Bye.\n";

	return 0;
}

//��ʾstringbad�Ĺ��캯�����������Ǻ�ʱ�Լ�������еġ��ó�����ʾ��һ�����ƹ��캯��������������������
//����Ĵ���
//����ԭ��1�����ƹ��캯������ʽ����
//Ҳ���ܵĴ���ԭ�����صĸ�ֵ���������ʽ���ö�����
//#include "stringbad.h"
//
//void callme1(StringBad& rsb);
//void callme2(StringBad sb);
//
//int main(void)
//{
//	StringBad headline1("hello world");
//	StringBad headline2("good morning");
//	StringBad sports("basketball");
//
//	cout << "headline1: " << headline1 << endl;
//	cout << "headline2: " << headline2 << endl;
//	cout << "soprts: " << sports << endl;
//
//	callme1(sports);
//	callme2(headline1);	
//
//
//	return 0;
//}
//
//void callme1(StringBad& rsb)
//{
//	cout << "String passed by reference:\n";
//	cout << "\"" << rsb << "\"\n";
//}

//��ֵ���� - ��ʹ��������ʵ�β���һ���βεĸ�����ʵ��Ϊsports�����������βθ����ͻ���
//StringBad(const StringBad& ),��������û����֮ƥ��Ĺ��캯���������������Ĭ�Ϲ��캯��
//StringBad(const StringBad& )������Ĭ�Ϲ��캯����û�ж�̬�����ڴ棬��������������ɾ���������ڴ�ʱ���������
//void callme2(StringBad sb)
//{
//	cout << "String passed by value:\n";
//	cout << "\"" << sb << "\"\n";
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//void address(const char* s);
//
//int main(void)
//{
//	const char* ptr = "hello world";
//
//	address(ptr);
//
//	return 0;
//}
//
//void address(const char* s)
//{
//	int len = strlen(s);
//	const char* pt = new char[len + 1];
//	pt = s;
//	cout << pt << endl;
//
//}