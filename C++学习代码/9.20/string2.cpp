#define _CRT_SECURE_NO_WARNINGS
#include "string2.h"
#include <cstring>

int String::num_string = 0;

int String::HowMany()
{
	return num_string;
}

String::String(const char* s)
{
	len = strlen(s);
	str = new char[len + 1];
	strcpy(str, s);
	num_string++;
}

String::String()
{
	len = 4;
	str = new char[1];
	str[0] = '\0';
	num_string++;
}

//��д���ƹ��캯����������ʹ�ö�������ʼ����һ������ʱ�������Զ�����Ĭ�ϸ��ƹ��캯�������³������
String::String(const String& st)
{
	len = st.len;
	str = new char[len + 1];
	strcpy(str, st.str);
	num_string++;
}

String::~String()
{
	/*cout << "\"" << str << "\" object deleted\n";*/
	--num_string;
	/*cout << num_string << " left\n";*/
	delete[]str;
}

//����Ҳ��������Ϊ��ֵ��������µĴ��������Ӹ�ֵ����������غ���
//��������ֵΪ���������ã�����Ϊ���ܴ���������ֵ�����
String& String::operator=(const String& st)
{
	//�������صĸ�ֵ��������Ƕ���������˲�����ɾ���ڳ�ʼ��ʱ�����������Ŀռ�
	if (this == &st)
		return *this;

	//�ڽ�һ������ֵ����һ������ʱ������ֵ�Ķ�����ܻ��Ѿ�������һ���ռ䣬Ϊ�˱����ڴ��˷ѣ�����ɾ��
	delete[]str;
	len = st.len;
	str = new char[len + 1];
	strcpy(str, st.str);
	return *this;
}

String& String::operator=(const char* s)
{
	delete[]str;
	len = strlen(s);
	str = new char[len + 1];
	strcpy(str, s);
	return *this;
}

char& String::operator[](int i)
{
	return str[i];
}

const char& String::operator[](int i) const
{
	return str[i];
}

String String::operator+(const String& s)
{
	String temp;

	temp.len = len + s.len;
	temp.str = new char[temp.len + 1];
	strcpy(temp.str, str);
	strcat(temp.str, s.str);

	return temp;
}

void String::stringup()
{
	for (int i = 0; i < len; i++)
		str[i] = toupper(str[i]);
}

void String::stringlow()
{
	for (int i = 0; i < len; i++)
		str[i] = tolower(str[i]);
}

int String::has(char c)
{
	int count = 0;
	
	for (int i = 0; i < len; i++)
	{
		if (str[i] == c)
			count++;
	}

	return count;
}

String operator+(const char* s, String& st)
{
	String temp;

	temp.len = strlen(s) + st.len;
	temp.str = new char[temp.len + 1];
	strcpy(temp.str, s);
	strcat(temp.str, st.str);

	return temp;
}

bool operator<(const String& st1, const String& st2)
{
	return (strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String& st1, const String& st2)
{
	return st1.str < st2.str;
}

bool operator==(const String& st1, const String& st2)
{
	return (strcmp(st1.str, st2.str) == 0);
}

ostream& operator<<(ostream& os, const String& st)
{
	cout << st.str;
	return os;
}

istream& operator>>(istream& is, String& st)
{
	char temp[String::CINLIM];
	is.get(temp, String::CINLIM);
	if (is)
		st = temp;
	while (is && is.get() != '\n')	//�������ֶ���,���ѻ��з���ȡ��
		continue;

	return is;
}