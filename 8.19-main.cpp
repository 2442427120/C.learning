//使用常规new运算符和定位new运算符创建动态分配的数组。该程序说明了常规new运算符和定位new运算符之间的一些重
//要差别。
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

//静态局部变量的用法演示 - 该程序演示了循环统计用户输入的字符的个数，且用循环处理了用户输入的字符数大于给定
//的字符数组的问题
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
//		//在程序前面，如果next是换行符，则说明cin.get(input, ArSize)读取了整行；否则说明行中还有字符没有被
//		//读取。随后，以下使用一个循环来丢弃余下的字符。
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

//该程序除定义remote_access()外，该文件还使用extern关键字来与第一个文件共享tom。接下来，该文件定义一个名为
//dick的静态变量。static限定符使该变量被限制在这个文件内，并覆盖相应的全局定义。然后，该文件定义了一个名为
//harry的外部变量，这不会与第一个文件中的harry发生冲突，因为后者链接性为内部的。随后，remote_access()函数
//显示这3个变量的地址，以便于将它们与第一个文件中相应变量的地址进行比较。
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

//演示如何使用关键字extern来重新声明以前定义过的外部变量，以及如何使用C++的作用域解析运算符来访问被隐藏的
//外部变量。
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