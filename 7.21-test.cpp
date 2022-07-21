#include <iostream>
#include <string>
#include <array>

//3.编写一个要求用户输入数字的程序。每次输入后，程序都将报告到目前为止，所有输入的累计和。当用户输入0时，
//程序结束。
//int main(void)
//{
//	using namespace std;
//
//	int input;
//	long sum = 0;
//	
//	cout << "请输入一个整数: ";
//	cin >> input;
//	while (input != 0)
//	{
//		sum += input;
//
//		cout << "当前输入的累计和: " << sum << endl;
//		cout << "请输入一个整数（输入0时停止）: ";
//		cin >> input;
//	}
//
//	return 0;
//}

//2.使用array对象(而不是数组)和long double(而不是long long)重新编写程序清单5.4，并计算100！的值。
//const int ArSize = 101;
//int main(void)
//{
//	using namespace std;
//
//	array<long double, ArSize> factorial;
//	//0的阶乘和1的阶乘特殊处理
//	factorial[0] = factorial[1] = 1;
//
//	//将2-100的阶乘存入数组中
//	for (int i = 2; i < ArSize; i++)
//	{
//		factorial[i] = i * factorial[i - 1];
//	}
//	//打印数组内容
//	for (int i = 0; i < ArSize; i++)
//	{
//		cout << i << "! = " << factorial[i] << endl;
//	}
//
//	return 0;
//}

//1.编写一个要求用户输入两个整数的程序。该程序将计算并输出这两个整数之间(包括这两个整数)所有整数的和。这里
//假设先输入较小的整数。例如，如果用户输入的是2和9，则程序将指出2-9之间所有整数的和为44。
//int main(void)
//{
//	using namespace std;
//
//	int sum = 0;
//	int lower_limit, up_limit;
//	cout << "请输入下限整数: ";
//	cin >> lower_limit;
//	cout << "请输入上限整数: ";
//	cin >> up_limit;
//
//	for (int i = lower_limit; i <= up_limit; i++)
//	{
//		sum += i;
//	}
//
//	cout << "下限值为: " << lower_limit << ", 上限值为: " << up_limit << endl;
//	cout << "上限到下限的数之和：" << sum << endl;
//
//	return 0;
//}

//int main(void)
//{
//	using namespace std;
//
//	string arr[5];
//
//	return 0;
//}

//const int Cities = 5;
//const int Years = 4;
//
//int main(void)
//{
//	using namespace std;
//
//	const char* cities[Cities] =
//	{
//		"Gribble City",
//		"Gribbletown",
//		"New Gribble",
//		"San Gribble",
//		"Gribble Vista"
//	};
//
//	int maxtemps[Years][Cities] =
//	{
//		{96, 100, 87, 101, 105},
//		{96, 98, 91, 107, 104},
//		{97, 101, 93, 108, 107},
//		{98, 103, 95, 109, 108}
//	};
//
//	cout << "Maximum temperatures for 2008 - 2011\n\n";
//	for (int city = 0; city < Cities; ++city)
//	{
//		cout << cities[city] << ":\t";
//		for (int year = 0; year < Years; ++year)
//		{
//			cout << maxtemps[year][city] << "\t";
//		}
//		cout << endl;
//	}
//
//	return 0;
//}