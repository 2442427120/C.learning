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

String& String::operator+(const String& s)
{
	int len1 = strlen(str);
	int len2 = strlen(s.str);
	char* temp = new char[len1 + len2 + 1];
	strcpy(temp, str);
	strcpy(temp + len1, s.str);
	strcpy(str, temp);
	delete[]temp;
	return *this;
}

void String::stringup()
{
	int i = 0;
	while (str[i++] != '\0')
		str[i] = toupper(str[i]);
}

void String::stringlow()
{
	int i = 0;
	while (str[i++] != '\0')
		str[i] = tolower(str[i]);
}

int String::has(char c)
{
	int i = 0;
	int count = 0;
	while (str[i++] != '\0')
	{
		if (str[i] == c)
			count++;
	}
	return count;
}

String& operator+(const char* s, String& st)
{
	int len1 = strlen(s);
	int len2 = strlen(st.str);
	char* temp = new char[len1 + len2 + 1];
	strcpy(temp, s);
	strcpy(temp + len1, st.str);
	/*stemp.str = temp;*/
	strcpy(st.str, temp);
	delete []temp;
	return st;
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