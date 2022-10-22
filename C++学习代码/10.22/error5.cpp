////1栈解退的演示。增加一个求调和平均数，平方根，两数平均数这三个数的平均值来演示。
//#include <iostream>
//#include <cmath>
//#include "exc_mean.h"
//
//double hmean(double a, double b);
//double gmean(double a, double b);
//double mean(double a, double b);
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
//			z = mean(x, y);
//			std::cout << "The mean mean of " << x << " and " << y << " is " << z << std::endl;
//			/*std::cout << "Geometric mean of " << x << " and " << y << " is " << gmean(x, y) << std::endl;*/
//			std::cout << "Enter next set of nubmers <q to quit>: ";
//		}
//		catch (bad_hmean& bh)	//使用处理程序捕获异常
//		{
//			bh.mesg();
//			std::cout << "2) exception\n";
//			std::cout << "Try again:";
//			continue;
//		}
//		catch (bad_gmean& bg)
//		{
//			std::cout << bg.mesg();
//			std::cout << "Values used: " << bg.v1 << ", " << bg.v2 << std::endl;
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
//		throw bad_hmean(a, b);	//引发异常,会返回mean中的catch。若mean中没有，则会返回再上一级
//
//	return 2 * a * b / (a + b);
//}
//
//double gmean(double a, double b)
//{
//	if (a < 0 || b < 0)
//		throw bad_gmean(a, b);
//	return std::sqrt(a * b);
//}
//
//double mean(double a, double b)
//{
//	double hm, gm, am;
//	am = (a + b) / 2;
//
//	try
//	{
//		hm = hmean(a, b);
//		gm = gmean(a, b);
//	}
//	catch (bad_hmean& bh)
//	{
//		bh.mesg();
//		std::cout << "1) exception\n";
//		throw;	//这次异常的抛出会返回main中的catch
//	}
//
//	std::cout << "Testing\n";
//
//	return (hm + gm + am) / 3;
//}