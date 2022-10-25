//3.�����ϰ������ϰ2��ͬ�����쳣���Ǵ�һ�������Ļ������������ģ����Ǵ�logic_error���������ģ����洢����
//����ֵ���쳣��Ӧ����һ�������ķ���:������Щֵ�Լ�������������ʹ��һ��catch������������쳣�������κ�һ��
//�Ӹû����쳣�����������쳣��������ѭ��������
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
		try  //try���ʶ�����ض����쳣���ܱ�hmean()����
		{
			z = hmean(x, y);
			std::cout << "Harmonic mean of " << x << " and " << y << " is " << z << std::endl;
			std::cout << "Geometric mean of " << x << " and " << y << " is " << gmean(x, y) << std::endl;
			std::cout << "Enter next set of nubmers <q to quit>: ";
		}
		catch (bad_hmean& bh)	//ʹ�ô�����򲶻��쳣
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
		throw bad_hmean(a, b);	//�����쳣

	return 2 * a * b / (a + b);
}

double gmean(double a, double b)
{
	if (a < 0 || b < 0)
		throw bad_gmean(a, b);
	return std::sqrt(a * b);
}