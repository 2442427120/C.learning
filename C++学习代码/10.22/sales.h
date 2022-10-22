#pragma once
#ifndef __SALES_H__
#define __SALES_H__

#include <iostream>
#include <string>

using namespace std;

class Sales
{
public:
	enum { MONTHS = 12 };
	explicit Sales(int yy = 0);
	Sales(int yy, const double* gr, int n);
	virtual ~Sales() {}
	int Year() const { return year; }
	virtual double operator[](int i) const;
	virtual double& operator[](int i);
	class bad_index : logic_error
	{
	private:
		int bi;
	public:
		explicit bad_index(int ix, const string& s = "Index error in Sales object\n");
		int bi_val() const { return bi; }
		virtual ~bad_index() throw() {}
	};

private:
	double gross[MONTHS];
	int year;
};

#endif
