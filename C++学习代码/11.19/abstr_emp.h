//#pragma once
#pragma once
#ifndef __ABSTR_EMP_H__
#define __ABSTR_EMP_H__

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

enum classkind { Employee, Manager, Fink, Highfink };

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
	virtual void GetAll(ifstream& ifs);
	virtual void writeall(ofstream& ofs);
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
	virtual void GetAll(ifstream& ifs);
	virtual void writeall(ofstream& ofs);
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
	virtual void GetAll(ifstream& ifs);
	virtual void writeall(ofstream& ofs);
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
	virtual void GetAll(ifstream& ifs);
	virtual void writeall(ofstream& ofs);
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
	virtual void GetAll(ifstream& ifs);
	virtual void writeall(ofstream& ofs);
};

#endif


//emp.h
//#pragma once
//#include <iostream>
//#include <string>
//#include<fstream>
//
//enum classkind { Employee, Manager, Fink, Highfink };
//
//class abstr_emp
//{
//private:
//    std::string fname;
//    std::string lname;
//    std::string job;
//public:
//    abstr_emp();
//    abstr_emp(const std::string& fn, const std::string& ln,
//        const std::string& j);
//    virtual void ShowAll()const;
//    virtual void SetAll();
//    virtual void GetAll(std::ifstream& ifs);
//    virtual void WriteAll(std::ofstream& ofs);
//    friend std::ostream& operator<<(std::ostream& os, const abstr_emp& e);
//
//    virtual ~abstr_emp() = 0;
//};
//class employee : public abstr_emp
//{
//public:
//    employee();
//    employee(const std::string& fn, const std::string& ln,
//        const std::string& j);
//    virtual void ShowAll()const;
//    virtual void SetAll();
//    virtual void GetAll(std::ifstream& ifs);
//    virtual void WriteAll(std::ofstream& ofs);
//};
//
//class manager : virtual public abstr_emp
//{
//private:
//    int inchargeof;
//protected:
//    int InChargeOf()const { return inchargeof; }
//    int& InChargeOf() { return inchargeof; }
//public:
//    manager();
//    manager(const std::string& fn, const std::string& ln,
//        const std::string& j, int ico = 0);
//    manager(const abstr_emp& e, int ico);
//    manager(const manager& m);
//    virtual void ShowAll()const;
//    virtual void SetAll();
//    virtual void GetAll(std::ifstream& ifs);
//    virtual void WriteAll(std::ofstream& ofs);
//};
//
//class fink : virtual public abstr_emp
//{
//private:
//    std::string reportsto;
//protected:
//    const std::string ReportsTo()const { return reportsto; }
//    std::string& ReportsTo() { return reportsto; }
//public:
//    fink();
//    fink(const std::string& fn, const std::string& ln,
//        const std::string& j, const std::string& rpo)
//        :abstr_emp(fn, ln, j), reportsto(rpo) {}
//    fink(const abstr_emp& e, const std::string& rpo)
//        :abstr_emp(e), reportsto(rpo) {}
//    fink(const fink& e);
//    virtual void ShowAll()const;
//    virtual void SetAll();
//    virtual void GetAll(std::ifstream& ifs);
//    virtual void WriteAll(std::ofstream& ofs);
//};
//
//class highfink : public manager, public fink
//{
//public:
//    highfink() :abstr_emp(), manager(), fink() { }
//    highfink(const std::string& fn, const std::string& ln,
//        const std::string& j, std::string& rpo,
//        int ico)
//        : abstr_emp(fn, ln, j), manager(fn, ln, j, ico), fink(fn, ln, j, rpo) {}
//    highfink(const abstr_emp& e, const std::string& rpo, int ico)
//        :abstr_emp(e), manager(e, ico), fink(e, rpo) { }
//    highfink(const fink& f, int ico) : abstr_emp(f), manager(f, ico), fink(f) {}
//    highfink(const manager& m, const std::string& rpo)
//        : abstr_emp(m), manager(m), fink(m, rpo) {}
//    highfink(const highfink& h) : abstr_emp(h), manager(h), fink(h) { }
//    virtual void ShowAll() const;
//    virtual void SetAll();
//    virtual void GetAll(std::ifstream& ifs);
//    virtual void WriteAll(std::ofstream& ofs);
//};
