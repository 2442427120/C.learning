#pragma once
#ifndef __ABSTR_EMP_H__
#define __ABSTR_EMP_H__

#include <iostream>
#include <string>

using namespace std;

class abstr_emp
{
private:
	string fname;
	string lname;
	string job;
public:
	abstr_emp();
	abstr_emp(const string& fn, const string& ln, const string& j);
	virtual void ShowAll() const;	// lable and shows all data
	virtual void SetAll();			// prompts user for values
	friend ostream& operator<<(ostream& os, const abstr_emp& e);
	// just displays first and last name
	virtual ~abstr_emp() = 0 {}
};

class employee : public abstr_emp
{
public:
	employee();
	employee(const string& fn, const string& ln, const string& j);
	virtual void ShowAll() const;
	virtual void SetAll();
};

class manager : virtual public abstr_emp
{
private:
	int inchargeof; // number of abstr_emp managed
protected:
	int InChargeOf() const { return inchargeof; }	// output
	int& InChargeOf() { return inchargeof; }		// input
public:
	manager();
	manager(const string& fn, const string& ln, const string& j, int ico);
	manager(const abstr_emp& e, int ico);
	manager(const manager& m);
	virtual void ShowAll() const;
	virtual void SetAll();
};

class fink : virtual public abstr_emp
{
private:
	string reportsto;	// to whom fink reports
protected:
	const string ReportsTo() const { return reportsto; }
	string& ReportsTo() { return reportsto; }
public:
	fink();
	fink(const string& fn, const string& ln, const string& j, const string& rpo);
	fink(const abstr_emp& e, const string& rpo);
	fink(const fink& f);
	virtual void ShowAll() const;
	virtual void SetAll();
};

class highfink : public manager, public fink
{
public:
	highfink();
	highfink(const string& fn, const string& ln, const string& j, const string& rpo, int ico);
	highfink(const abstr_emp& e, const string& rpo, int ico);
	highfink(const fink& f, int ico);
	highfink(const manager& m, const string& rpo);
	highfink(const highfink& hf);
	virtual void ShowAll() const;
	virtual void SetAll();
};

#endif
