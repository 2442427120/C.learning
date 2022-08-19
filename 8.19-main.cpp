//ʹ�ó���new������Ͷ�λnew�����������̬��������顣�ó���˵���˳���new������Ͷ�λnew�����֮���һЩ��
//Ҫ���
#include <iostream>
#include <new>

using namespace std;

const int BUF = 512;
const int N = 5;
char buffer[BUF];

int main(void)
{
	double* pd1, * pd2;
	int i;
	
	cout << "Calling new and placement new:\n";
	pd1 = new double[N];
	pd2 = new(buffer) double[N];
	for (i = 0; i < N; i++)
		pd2[i] = pd1[i] = 1000 + 20.0 * i;
	cout << "Memory addresses:\n" << " heap: " << pd1 << " static: " << (void*)buffer << endl;
	cout << "Memory contents:\n";
	for (i = 0; i < N; i++)
	{
		cout << pd1[i] << " at " << &pd1[i] << "; ";
		cout << pd2[i] << " at " << &pd2[i] << endl;
	}

	cout << "\nCalling new and placement new a second time:\n";
	double* pd3, * pd4;
	pd3 = new double[N];
	pd4 = new(buffer) double[N];
	for (i = 0; i < N; i++)
		pd4[i] = pd3[i] = 1000 + 40.0 * i;
	cout << "Memory contents:\n";
	for (i = 0; i < N; i++)
	{
		cout << pd3[i] << " at " << &pd3[i] << "; ";
		cout << pd4[i] << " at " << &pd4[i] << endl;
	}

	cout << "\nCalling new and placement new a third time:\n";
	delete[] pd1;
	pd1 = new double[N];
	pd2 = new(buffer + N * sizeof(double)) double[N];
	for (i = 0; i < N; i++)
		pd2[i] = pd1[i] = 1000 + 60.0 * i;
	cout << "Memory contents:\n";
	for (i = 0; i < N; i++)
	{
		cout << pd1[i] << " at " << &pd1[i] << "; ";
		cout << pd2[i] << " at " << &pd2[i] << endl;
	}

	delete[] pd1;
	delete[] pd3;

	return 0;
}

//��̬�ֲ��������÷���ʾ - �ó�����ʾ��ѭ��ͳ���û�������ַ��ĸ���������ѭ���������û�������ַ������ڸ���
//���ַ����������
//#include <iostream>
//
//using namespace std;
//
//const int ArSize = 10;
//
//void strcount(const char* str);
//
//int main(void)
//{
//	char input[ArSize];
//	char next;
//
//	cout << "Enter a line:\n";
//	cin.get(input, ArSize);
//	while (cin)
//	{
//		cin.get(next);
//		//�ڳ���ǰ�棬���next�ǻ��з�����˵��cin.get(input, ArSize)��ȡ�����У�����˵�����л����ַ�û�б�
//		//��ȡ���������ʹ��һ��ѭ�����������µ��ַ���
//		while (next != '\n')
//			cin.get(next);
//		strcount(input);
//		cout << "Enter next line (empty line to quit):\n";
//		cin.get(input, ArSize);
//	}
//	cout << "Bye.\n";
//
//	return 0;
//}
//
//void strcount(const char* str)
//{
//	static int total = 0;
//	int count = 0;
//
//	while (*str++)
//		count++;
//	total += count;
//
//	cout << count << " characters\n";
//	cout << total << " characters total\n";
//}

//�ó��������remote_access()�⣬���ļ���ʹ��extern�ؼ��������һ���ļ�����tom�������������ļ�����һ����Ϊ
//dick�ľ�̬������static�޶���ʹ�ñ���������������ļ��ڣ���������Ӧ��ȫ�ֶ��塣Ȼ�󣬸��ļ�������һ����Ϊ
//harry���ⲿ�������ⲻ�����һ���ļ��е�harry������ͻ����Ϊ����������Ϊ�ڲ��ġ����remote_access()����
//��ʾ��3�������ĵ�ַ���Ա��ڽ��������һ���ļ�����Ӧ�����ĵ�ַ���бȽϡ�
//#include <iostream>
//
//using namespace std;
//
//int tom = 3;
//int dick = 30;
//static int harry = 300;
//
//void remote_access(void);
//
//int main(void)
//{
//	cout << "main() reports the following addresses:\n";
//	cout << "&tom = " << &tom << ", &dick = " << &dick << ", &harry = " << &harry << endl;
//	remote_access();
//
//	return 0;
//}

//��ʾ���ʹ�ùؼ���extern������������ǰ��������ⲿ�������Լ����ʹ��C++���������������������ʱ����ص�
//�ⲿ������
//#include "main819.h"

//using namespace std;
//
//double warming = 0.3;
//
//int main(void)
//{
//	cout << "Global warming is " << warming << " degrees.\n";
//	update(0.1);
//	cout << "Global warming is " << warming << " degrees.\n";
//	local();
//	cout << "Global warming is " << warming << " degrees.\n";
//
//	return 0;
//}