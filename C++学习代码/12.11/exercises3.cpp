//3.编写并测试可变参数模板函数sum_value()，它接受任意长度的参数列表（其中包含数值，但可以是任何类型），并
//以long double的方式返回这些数值的和。
//#include <iostream>
//
//using namespace std;
//
//void sum_value() {}
//
//template<typename T>
//long double sum_value(const T& value)
//{
//	return value;
//}
//
//template<typename T, typename... Args>
//long double sum_value(const T& value, const Args&... args)
//{
//	long double sum = value;
//
//	sum += sum_value(args...);
//
//	return sum;
//}
//
//int main(void)
//{
//	int a = 10;
//	double b = 3.14;
//
//	cout << sum_value(a, 5) << endl;;
//	cout << sum_value(a, b, 5) << endl;
//	cout << sum_value(1, 2.5, 3, 7.0, 4.5) << endl;
//
//	return 0;
//}