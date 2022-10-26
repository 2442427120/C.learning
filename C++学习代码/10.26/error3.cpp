//《C++ Primer Plus》第十五章编程练习第3题的修改
#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

class bad_mean : public std::logic_error
{
private:
	double v1;
	double v2;
public:
	bad_mean(double a, double b, const std::string& s = "invliad argument:\n")
		: logic_error(s), v1(a), v2(b) {}
	virtual void show() const;
};

class bad_hmean : public bad_mean
{
public:
	bad_hmean(double a, double b, const std::string& s = "invalid, hmean arguments: a = -b\n")
		: bad_mean(a, b, s) {}
	void show() const;
};

class bad_gmean : public bad_mean
{
public:
	bad_gmean(double a, double b, const std::string& s = "invalid, gmean argument should be >= 0\n")
		: bad_mean(a, b, s) {}
	void show() const;
};

void bad_mean::show() const
{
	cout << "v1 = " << v1 << ", v2 = " << v2 << endl;
}

void bad_hmean::show() const
{
	cout << what();
	bad_mean::show();
}

void bad_gmean::show() const
{
	cout << what();
	bad_mean::show();
}


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
		catch (bad_mean& bm)
		{
			if (typeid(bad_hmean) == typeid(bm))
			{
				bm.show();
				break;
			}
			if (typeid(bad_gmean) == typeid(bm))
			{
				bm.show();
				break;
			}
		}
		//catch (bad_hmean& bh)	//使用处理程序捕获异常
		//{
		//	std::cout << bh.what();
		//	std::cout << "Try again:";
		//	continue;
		//}
		//catch (bad_gmean& bg)
		//{
		//	std::cout << bg.what();
		//	/*std::cout << "Values used: " << bg.v1 << ", " << bg.v2 << std::endl;*/
		//	std::cout << "Sorry, you don't get to play any more.\n";
		//	break;
		//}
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