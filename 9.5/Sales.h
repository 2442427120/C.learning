#pragma once
#ifndef __SALES_H__
#define __SALES_H__

#include <iostream>

namespace SALES
{
	class Sales
	{
	private:
		enum { QUARTERS = 10 };
		double sales[QUARTERS];
		double average;
		double max;
		double min;
	public:
		Sales(const double ar[], int n = 0);
		Sales();
		void showSales(int n) const;
	};
}

#endif