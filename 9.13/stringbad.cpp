//#define _CRT_SECURE_NO_WARNINGS
//#include "stringbad.h"
//#include <cstring>
//
//int StringBad::num_string = 0;
//
//StringBad::StringBad(const char* s)
//{
//	len = strlen(s);
//	str = new char[len + 1];
//	strcpy(str, s);
//	num_string++;
//	cout << num_string << ": \"" << str << "\" object created\n";
//}
//
//StringBad::StringBad()
//{
//	len = 4;
//	str = new char[4];
//	strcpy(str, "C++");
//	num_string++;
//	cout << num_string << ":\"" << str << "\" default created\n";
//}
//
////��д���ƹ��캯����������ʹ�ö�������ʼ����һ������ʱ�������Զ�����Ĭ�ϸ��ƹ��캯�������³������
//StringBad::StringBad(const StringBad& st)
//{
//	len = st.len;
//	str = new char[len + 1];
//	strcpy(str, st.str);
//	num_string++;
//	cout << num_string << ":\"" << str << "\" default created\n";
//}
//
////����Ҳ��������Ϊ��ֵ��������µĴ��������Ӹ�ֵ����������غ���
////��������ֵΪ���������ã�����Ϊ���ܴ���������ֵ�����
//StringBad& StringBad::operator=(const StringBad& st)
//{
//	//�������صĸ�ֵ��������Ƕ���������˲�����ɾ���ڳ�ʼ��ʱ�����������Ŀռ�
//	if (this == &st)
//		return *this;
//
//	//�ڽ�һ������ֵ����һ������ʱ������ֵ�Ķ�����ܻ��Ѿ�������һ���ռ䣬Ϊ�˱����ڴ��˷ѣ�����ɾ��
//	delete[]str;
//	len = st.len;
//	str = new char[len + 1];
//	strcpy(str, st.str);
//	return *this;
//}
//
//StringBad::~StringBad()
//{
//	cout << "\"" << str << "\" object deleted\n";
//	--num_string;
//	cout << num_string << " left\n";
//	delete[]str;
//} 
//
//ostream& operator<<(ostream& os, const StringBad& st)
//{
//	cout << st.str;
//	return os;
//}