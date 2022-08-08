#include <iostream>

//10.设计一个名为calcuate()的函数，它接受两个double值和一个指向函数的指针，而被指向的函数接受两个double参
//数，并返回一个double值。calculate()函数的类型也是double，并返回被指向的函数使用calculate()的两个double
//参数计算得到的值。例如，假设add()函数的定义如下：
//	double add(double x, double y)
//	{
//		return x + y;
// 
//	}
//则下述代码中的函数调用将导致calculate()把2.5和10.4传递给add()函数，并返回add()的返回值：
//	double q = calculate(2.5, 10.4, add);
//请编写一个程序，它调用上述两个函数和至少另一个与add()类似的函数。该程序使用循环来让用户成对地输入数字。
//对于每对数字，程序都使用calculate()来调用add()和至少一个其他的函数。如果读者爱冒险，可以尝试创建一个指
//针数组，其中的指针指向add()样式的函数，并编写一个循环，使用这些指针连续让calculate()调用这些函数。提示：
//下面是声明这种指针数组的方式，其中包含三个指针：
//	double (*pf[3])(double, double);
//可以采用数组初始化语法，并将函数名作为地址来初始化这样的数组。

//通过访问指针数组的内容来调用函数
using namespace std;

double sum(double x, double y);
double sub(double x, double y);
double mul(double x, double y);
double div(double x, double y);
double calculate(double x, double y, double (*pf[4])(double, double), int i);

int main(void)
{
	double user1, user2;
	double value;
	double(*pa[4])(double, double) = { sum, sub, mul, div };

	cout << "Please enter two integer:";
	while (cin >> user1 >> user2)
	{
		for (int i = 0; i < 4; i++)
		{
			value = calculate(user1, user2, pa, i);	//指针数组pa本身就是地址
			cout << "function #" << i + 1 << endl;
			cout << value << endl;
		}

		cout << "Please enter two integer again(enter q to quit): ";
	}

	return 0;
}

double sum(double x, double y)
{
	return x + y;
}

double sub(double x, double y)
{
	return x - y;
}

double mul(double x, double y)
{
	return x * y;
}

double div(double x, double y)
{
	return x / y;
}

double calculate(double x, double y, double (*pf[4])(double, double), int i)
{
	return (*pf[i])(x, y);  //等价于pf[i](x, y);
}


//using namespace std;
//
//double add(double x, double y);
//double calculate(double x, double y, double (*pf)(double, double));
//
//int main(void)
//{
//	double user1, user2;
//	double sum;
//
//	cout << "Please enter two integer:\n";
//	while (cin >> user1 >> user2)
//	{
//		sum = calculate(user1, user2, add);
//		cout << "The sum of " << user1 << " and " << user2 << " = " << sum << endl;
//		cout << "Please enter two integer again(enter q to quit): ";
//	}
//
//	return 0;
//}
//
//double add(double x, double y)
//{
//	return x + y;
//}
//
//double calculate(double x, double y, double (*pf)(double, double))
//{
//	return (*pf)(x, y);
//}