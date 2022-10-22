////2.利用编程练习第二题演示exception类
//#include <iostream>
//#include <cmath>
//#include <stdexcept>
//#include <string>
//
//double hmean(double a, double b);
//double gmean(double a, double b);
//
////class logic_error : public std::exception
//
//class bad_hmean : public std::logic_error
//{
//public:
//	bad_hmean(const std::string& what_arg = "hmean, invalid arguments") : logic_error(what_arg) {}
//};
//
//class bad_gmean : public std::logic_error
//{
//public:
//	bad_gmean(const std::string& what_arg = "gmean, invalid arguments") : logic_error(what_arg) {}
//};
//
//int main(void)
//{
//	double x, y, z;
//
//	std::cout << "Enter two numbers: ";
//	while (std::cin >> x >> y)
//	{
//		try  //try块标识其中特定的异常可能被hmean()激活
//		{
//			z = hmean(x, y);
//			std::cout << "Harmonic mean of " << x << " and " << y << " is " << z << std::endl;
//			std::cout << "Geometric mean of " << x << " and " << y << " is " << gmean(x, y) << std::endl;
//			std::cout << "Enter next set of nubmers <q to quit>: ";
//		}
//		catch (bad_hmean& bh)	//使用处理程序捕获异常
//		{
//			std::cout << bh.what() << std::endl;	//what()是excption基类的虚函数，它返回一个字符串
//			std::cout << "Try again:";
//			continue;
//		}
//		catch (bad_gmean& bg)
//		{
//			std::cout << bg.what() << std::endl;
//			//std::cout << "Values used: " << bg.v1 << ", " << bg.v2 << std::endl;
//			std::cout << "Sorry, you don't get to play any more.\n";
//			break;
//		}
//	}
//	std::cout << "Bye.\n";
//
//	return 0;
//}
//
//double hmean(double a, double b)
//{
//	if (a == -b)
//		throw bad_hmean();	//引发异常, 无需参数，因为bad_hmean()的构造函数有默认参数
//
//	return 2 * a * b / (a + b);
//}
//
//double gmean(double a, double b)
//{
//	if (a < 0 || b < 0)
//		throw bad_gmean(); //以上面同理
//	return std::sqrt(a * b);
//}