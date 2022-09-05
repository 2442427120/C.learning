#include "Sales.h"
#include <iostream>

namespace SALES
{
	Sales::Sales(const double ar[], int n)
	{
		double maximum, minimum;
		double total = 0.0;
		double temp;

		if (n < 0)
		{
			std::cout << "传递的参数小于0\n";
			return;
		}
		else if (n <= 4)
		{
			for (int i = 0; i < n; i++)
			{
				sales[i] = ar[i];
				total += sales[i];
			}

			maximum = sales[0];
			minimum = sales[0];
			for (int i = 1; i < n; i++)
			{
				/*if (maximum < sales[i])
					maximum = sales[i];
				if (minimum > sales[i])
					minimum = sales[i];*/
				maximum = maximum < sales[i] ? sales[i] : maximum;
				minimum = minimum > sales[i] ? sales[i] : minimum;
			}
			max = maximum;
			min = minimum;
			average = total / 4;
		}
		else
		{
			//将ar[]数组中的元素拷贝到sales中
			for (int i = 0; i < n; i++)
				sales[i] = ar[i];
			//冒泡排序，将数组中元素值较小的4个值放入sales数组中
			for (int i = 0; i < n - 1; i++)
			{
				if (i < 4)
					total += sales[i];

				for (int j = 0; j < n - i - 1; j++)
				{
					if (sales[j + 1] < sales[j])
					{
						temp = sales[j];
						sales[j] = sales[j + 1];
						sales[j + 1] = temp;
					}

				}
			}
			max = sales[3];
			min = sales[0];
			average = total / 4;
		}
	}

	Sales::Sales()
	{
		double num;

		std::cout << "请输入4个数字：\n";
		for (int i = 0; i < 4; i++)
		{
			std::cin >> num;
			sales[i] = num;
		}

		*this = Sales(sales, 4);
	}

	void Sales::showSales(int n) const
	{
		std::cout << "Sales数组的内容是：\n";
		for (int i = 0; i < n; i++)
			std::cout << sales[i] << " ";
		std::cout << std::endl;

		std::cout << "Maximun = " << max << ", Minimun = " << min << ", Average = " << average << std::endl;
	}
}