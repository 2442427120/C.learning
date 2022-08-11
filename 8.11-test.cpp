#include <iostream>
#include <fstream>
#include <cstdlib>

int main(void)
{
	using namespace std;

	int a = 10;
	int b = 20;

	const int& c = 10;
	const int& d = (a + b);

	cout << c << endl;
	cout << d << endl;

	//��ֵ����
	int&& x = 10;
	int&& y = (a + b);

	cout << x << endl;
	cout << y << endl;

	return 0;
}

//Ĭ�ϲ�����ʹ�� - ���һ��left()�����������ַ�����n��Ϊ�����������ظ��ַ�ǰn���ַ���
//using namespace std;
//
//const int ArSize = 80;
//
//char* left(const char* str, int n = 1);
//
//int main(void)
//{
//	char sample[ArSize];
//	cout << "Enter a string:\n";
//	cin.get(sample, ArSize);
//	char* ps = left(sample, 40);
//	cout << ps << endl;
//	delete[]ps;
//
//	ps = left(sample);
//	cout << ps << endl;
//	delete[]ps;
//
//	return 0;
//}
//
////����һ��������ռ���˷�
////char* left(const char* str, int n)
////{
////	if (n < 0)
////		n = 0;
////	
////	char* p = new char[n + 1];
////	int i;
////	for (i = 0; i < n && str[i]; i++)
////		p[i] = str[i];
////
////	while (i <= n)
////		p[i++] = '\0';
////
////	return p;
////}
//
////��������������strlen()�����������ַ�����
//char* left(const char* str, int n)
//{
//	int m = 0;
//	while (m <= n && str[m] != '\0')
//		m++;
//
//	char* p = new char[m + 1];
//	int i;
//	for (i = 0; i < m; i++)
//		p[i] = str[i];
//
//	p[i] = '\0';
//
//	return p;
//}

//����ͨ������ͬһ������(ֻ�к������ò�����ͬ)������д���ļ�����ʾ����Ļ����˵����һ�㡣�ó���Ҫ���û�����
//��Զ����һЩĿ���Ľ��࣬Ȼ����㲢��ʾÿ��Ŀ���ķŴ������Ŵ��������ﾵ�Ľ������Ŀ���Ľ������0.5��
//using namespace std;
//
//const int LIMIT = 5;
//
//void file_it(ostream &os, double fo, const double fe[], int n);
//
//int main(void)
//{
//	ofstream fout;
//	const char* fn = "ep-data.txt";
//	fout.open(fn);
//	if (!fout.is_open())
//	{
//		cout << "Can't open " << fn << endl;
//		exit(EXIT_FAILURE);
//	}
//
//	double object;
//	cout << "Enter the focal length of your telescope objective in mm: ";
//	cin >> object;
//	double eps[LIMIT];
//	cout << "Enter the focal lengths, in mm, of " << LIMIT << " eyepieces:\n";
//	for (int i = 0; i < LIMIT; i++)
//	{
//		cout << "Eyepieces #" << i + 1 << ": ";
//		cin >> eps[i];
//	}
//
//	file_it(fout, object, eps, LIMIT);
//	file_it(cout, object, eps, LIMIT);
//	cout << "Done.\n";
//
//	return 0;
//}
//
//void file_it(ostream &os, double fo, const double fe[], int n)
//{
//	os << "\nFocal legth of objective: " << fo << " mm\n";
//	os << "f.1. eyepiece megnifiation\n";
//
//	for (int i = 0; i < n; i++)
//	{
//		cout << "     ";
//		os << fe[i];
//		cout << "       ";
//		os << int(fo / fe[i] + 0.5) << endl;
//	}
//}