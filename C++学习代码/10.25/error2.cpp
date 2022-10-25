//3.这个练习与编程练习2相同，但异常类是从一个这样的基类派生而来的：它是从logic_error派生而来的，并存储两个
//参数值。异常类应该有一个这样的方法:报告这些值以及函数名。程序使用一个catch块来捕获基类异常，其中任何一种
//从该基类异常派生而来的异常都将导致循环结束。
#include <iostream>
#include <cmath>
#include "except.h"

double hmean(double a, double b);
double gmean(double a, double b);

int main(void)
{
	double x, y, z;

	std::cout << "Enter two numbers: ";
	while (std::cin >> x >> y)
	{
		try  //try块标识其中特定的异常可能被hmean()激活
		{
			z = hmean(x, y);
			std::cout << "Harmonic mean of " << x << " and " << y << " is " << z << std::endl;
			std::cout << "Geometric mean of " << x << " and " << y << " is " << gmean(x, y) << std::endl;
			std::cout << "Enter next set of nubmers <q to quit>: ";
		}
		catch (bad_hmean& bh)	//使用处理程序捕获异常
		{
			std::cout << bh.what();
			std::cout << "Try again:";
			continue;
		}
		catch (bad_gmean& bg)
		{
			std::cout << bg.what();
			/*std::cout << "Values used: " << bg.v1 << ", " << bg.v2 << std::endl;*/
			std::cout << "Sorry, you don't get to play any more.\n";
			break;
		}
	}
	std::cout << "Bye.\n";

	return 0;
}

double hmean(double a, double b)
{
	if (a == -b)
		throw bad_hmean(a, b);	//引发异常

	return 2 * a * b / (a + b);
}

double gmean(double a, double b)
{
	if (a < 0 || b < 0)
		throw bad_gmean(a, b);
	return std::sqrt(a * b);
}