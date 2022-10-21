//异常
//该程序用hmean()函数来求调和平均数的值，函数有两个参数，在运行阶段，若两个参数互为相反数:
// 在没有异常处理时，输入两个相反的数程序会输出无穷大的浮点数来表示，cout将这种值表示为inf
// 经过异常处理，利用abort()函数终止程序。
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
//		z = hmean(x, y);
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
//	{
//		std::cout << "nutenale arguement to hmean()\n";
//		abort();
//	}
//
//	return 2 * a * b / (a + b);
//}