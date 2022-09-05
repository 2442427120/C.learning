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
			std::cout << "���ݵĲ���С��0\n";
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
			//��ar[]�����е�Ԫ�ؿ�����sales��
			for (int i = 0; i < n; i++)
				sales[i] = ar[i];
			//ð�����򣬽�������Ԫ��ֵ��С��4��ֵ����sales������
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

		std::cout << "������4�����֣�\n";
		for (int i = 0; i < 4; i++)
		{
			std::cin >> num;
			sales[i] = num;
		}

		*this = Sales(sales, 4);
	}

	void Sales::showSales(int n) const
	{
		std::cout << "Sales����������ǣ�\n";
		for (int i = 0; i < n; i++)
			std::cout << sales[i] << " ";
		std::cout << std::endl;

		std::cout << "Maximun = " << max << ", Minimun = " << min << ", Average = " << average << std::endl;
	}
}