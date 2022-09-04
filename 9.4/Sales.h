#pragma once
#ifndef __SALES_H__
#define __SALES_H__

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
		Sales(const double ar[] = { 0 }, int n = 0);
		void setSales();
		void showSales(int n) const;
	};
}

#endif