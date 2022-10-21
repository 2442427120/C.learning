//C++异常处理机制：
//处理异常的3个组成部分：
//*引发异常 （throw关键字）
//*使用处理程序捕获异常 （catch关键字）
//*使用try块 (try关键字)

//#include <iostream>
//
//double hmean(double a, double b);
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
//		}
//		catch (const char* s)	//使用处理程序捕获异常
//		{
//			std::cout << s << std::endl;
//			std::cout << "Enter a new pair of numbers: ";
//			continue;
//		}
//
//		std::cout << "Harmonic mean of " << x << " and " << y << " is " << z << std::endl;
//		std::cout << "Enter next set of nubmers <q to quit>: ";
//	}
//
//	return 0;
//}
//
//double hmean(double a, double b)
//{
//	if (a == -b)
//		throw "bad hmean() arguments: a = -b not allowed";	//引发异常
//
//	return 2 * a * b / (a + b);
//}