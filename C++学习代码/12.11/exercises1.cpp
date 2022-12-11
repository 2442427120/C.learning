//《C++ Primer Plus》第十八章编程练习第1题
// 1.下面是简短程序的一部分
//int main(void)
//{
//	using namespace std;
//
//	//list of double deduced from list contents
//	auto q = average_list({ 15.4, 10.7, 9.0 });
//	cout << q << endl;
//	//list of int deduced from list contents
//	cout << average_list({ 20, 30, 19, 17, 45, 38 }) << endl;
//	//forced list of double 
//	auto ad = average_list<double>({ 'A', 70, 65.33 });
//	cout << ad << endl;
//
//	return 0;
//}
// 请提供函数aerage_list()，让程序变得完整。它应该是一个模板函数，其中类型参数指定了用作函数参数的initialize_
// list模板的类型以及函数返回类型。
//#include <iostream>
//#include <initializer_list>
//
//using namespace std;
//
//template<typename T>
//T average_list(initializer_list<T> il);
//
//int main(void)
//{
//	//list of double deduced from list contents
//	auto q = average_list({ 15.4, 10.7, 9.0 });
//	cout << q << endl;
//	//list of int deduced from list contents
//	cout << average_list({ 20, 30, 19, 17, 45, 38 }) << endl;
//	//forced list of double 
//	auto ad = average_list<double>({ 'A', 70, 65.33 });
//	cout << ad << endl;
//
//	return 0;
//}
//
//template<typename T>
//T average_list(initializer_list<T> il)
//{
//	double total = 0.0;
//	double ave = 0.0;
//	int n = il.size();
//
//	if (n > 0)
//	{
//		for (auto p = il.begin(); p != il.end(); p++)
//			total += *p;
//		ave = total / n;
//	}
//
//	return ave;
//}