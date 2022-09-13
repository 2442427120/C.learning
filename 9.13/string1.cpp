#define _CRT_SECURE_NO_WARNINGS
#include "string1.h"
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
	cout << "\"" << str << "\" object deleted\n";
	--num_string;
	cout << num_string << " left\n";
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
	while (is && is.get() != '\n')
		continue;

	return is;
}