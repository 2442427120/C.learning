//7.一个简单的initializer_list使用示例。
//#include <iostream>
//#include <initializer_list>
//
//using namespace std;
//
//double sum(initializer_list<double> il);
//double average(const initializer_list<double> ril);
//
//int main(void)
//{
//	cout << "List 1: sum = " << sum({ 2, 3, 4 }) << ", ave = " << average({ 2, 3, 4 }) << '\n';
//
//	initializer_list<double> d1 = { 1.1, 2.2, 3.3, 4.4, 5.5 };
//	cout << "List 2: sum = " << sum(d1) << ", ave = " << average(d1) << '\n';
//
//	return 0;
//}
//
//double sum(initializer_list<double> il)
//{
//	double total = 0.0;
//
//	for (auto p = il.begin(); p != il.end(); p++)
//		total += *p;
//
//	return total;
//}
//
//double average(const initializer_list<double> ril)
//{
//	double total = 0.0;
//	int n = ril.size();
//	double ave = 0.0;
//
//	if (n > 0)
//	{
//		for (auto p = ril.begin(); p != ril.end(); p++)
//			total += *p;
//		ave = total / n;
//	}
//
//	return ave;
//}

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <initializer_list>

using namespace std;

int main(void)
{
	/*char s[8];
	s = { "hello" };*/

	/*const char* s;
	s = { "hello" };

	cout << s << endl;*/

	/*char s[8];
	s = "hello";*/

	/*char* s;
	s = "hello";*/

	/*double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	cout << "a = " << a << ", b = " << b << ", c = " << c << endl;*/

	const char* p = "hello";

	return 0;
}