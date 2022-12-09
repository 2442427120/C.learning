////1.演示不使用包装器的缺点
//#include "somedefs.h"
//
//double dub(double x) { return 2 * x; }
//double square(double x) { return x * x; }
//
//int main(void)
//{
//	double y = 1.21;
//
//	//method 1 - use function pointer
//	cout << use_f(y, dub) << endl;
//	cout << use_f(y, square) << endl;
//
//	//method 2 - use function object
//	cout << use_f(y, Fp(5.0)) << endl;
//	cout << use_f(y, Fq(5.0)) << endl;
//
//	//method 3 - use lambda expression
//	cout << use_f(y, [](double u) { return u * u; }) << endl;
//	cout << use_f(y, [](double u) { return u + u / 2; }) << endl;
//
//	return 0;
//}