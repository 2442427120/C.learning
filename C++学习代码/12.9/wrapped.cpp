//2.使用包装器的优点
//#include "somedefs.h"
//#include <functional>
//
//double dub(double x) { return 2 * x; }
//double square(double x) { return x * x; }
//
//int main(void)
//{
//	double y = 1.21;
//	function<double(double)> ef1 = dub;
//	function<double(double)> ef2 = square;
//	function<double(double)> ef3 = Fp(10.0);
//	function<double(double)> ef4 = Fq(10.0);
//	function<double(double)> ef5 = [](double u) { return u * u; };
//	function<double(double)> ef6 = [](double u) { return u + u / 2; };
//
//	//method 1 - use function pointer
//	cout << use_f(y, ef1) << endl;
//	cout << use_f(y, ef2) << endl;
//
//	//method 2 - use function object
//	cout << use_f(y, ef3) << endl;
//	cout << use_f(y, ef4) << endl;
//
//	//method 3 - use lambda expression
//	cout << use_f(y, ef5) << endl;
//	cout << use_f(y, ef6) << endl;
//
//	return 0;
//}