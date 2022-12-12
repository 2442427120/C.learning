//#include <iostream>
//
//using namespace std;
//
//long double sum_value(){ return 0; }
//
//template<typename T, typename... Args>
//long double sum_value(T value, Args...args)
//{
//	long double sum = (long double)value + sum_value(args...);
//
//	return sum;
//}
//
//int main(void)
//{
//	cout << sum_value(1, 2, 3, 4, 5) << endl;
//	cout << sum_value('a', 'b', 2.2, 3.3, 5, 6, 7);
//
//	return 0;
//}