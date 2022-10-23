#pragma once
#ifndef __SALES_H__
#define __SALES_H__

#include <iostream>
#include <string>
#include <stdexcept>

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

	class bad_index : public logic_error
	{
	private:
		int bi;
	public:
		explicit bad_index(int ix, const string& s = "Index error in Sales object\n");
		int bi_val() const { return bi; }
		virtual ~bad_index() noexcept {}	//表示析构函数不抛出异常
	};

private:
	double gross[MONTHS];
	int year;
};

class LabeledSales : public Sales
{
private:
	string label;
public:
	explicit LabeledSales(const string& lb = "none", int yy = 0);
	LabeledSales(const string& lb, int yy, const double* gr, int n);
	virtual ~LabeledSales() {}
	const string& Label() const { return label; }
	virtual double operator[](int i) const;
	virtual double& operator[](int i);

	class nbad_index : public bad_index
	{
	private:
		string lbl;
	public:
		nbad_index(const string& lb, int ix, const string& s = "Index error in LabeledSales object\n");
		const string& label_val() const { return lbl; }
		virtual ~nbad_index() noexcept {}
	};
};

#endif
