//返回错误码的方式来解决程序运行时出现的异常，这种方法可以在用户输入错误时提示错误，然后再继续往下让用户重
//新输入新的值
//#include <iostream>
//#include <cfloat>
//
//bool hmean(double a, double b, double* ans);
//
//int main(void)
//{
//	double x, y, z;
//
//	std::cout << "Enter two numbers: ";
//	while (std::cin >> x >> y)
//	{
//		if (hmean(x, y, &z))
//			std::cout << "Harmonic mean of " << x << " and " << y << " is " << z << std::endl;
//		else
//			std::cout << "One value should not be the nagetive of the other - try again.\n";
//
//		std::cout << "Enter next set of nubmers <q to quit>: ";
//	}
//
//	std::cout << "Bye.\n";
//
//	return 0;
//}
//
//bool hmean(double a, double b, double* ans)
//{
//	if (a == -b)
//	{
//		*ans = DBL_MAX;
//		return false;
//	}
//	else
//	{
//		*ans = 2 * a * b / (a + b);
//		return true;
//	}
//}