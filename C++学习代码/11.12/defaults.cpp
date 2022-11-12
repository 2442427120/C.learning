//1.演示默认输出的情况，它在每个值后面都显示一个冒号(：)，以便可以知道每种情况下的字段宽度。该程序使用表达式
//1.0/9.0来生成一个无穷小数，以便能够知道打印了多少位
//#include <iostream>
//
//int main(void)
//{
//	using std::cout;
//	cout << "12345678901234567890\n";
//	char ch = 'K';
//	int t = 273;
//	cout << ch << ":\n";
//	cout << t << ":\n";
//	cout << -t << ":\n";
//
//	double f1 = 1.200;
//	cout << f1 << ":\n";
//	cout << (f1 + 1.0 / 9.0) << ":\n";
//
//	double f2 = 1.67E2;
//	cout << f2 << ":\n";
//	cout << (f2 + 1.0e4) << ":\n";
//	
//	double f3 = 2.3e-4;
//	cout << f3 << ":\n";
//	cout << f3 / 10 << ":\n";
//
//	return 0;
//}