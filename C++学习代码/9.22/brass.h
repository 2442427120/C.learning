#pragma once
#ifndef __BRASS_H__
#define __BRASS_H__

#include <iostream>
#include <string>

using namespace std;

class Brass
{
private:
	string fullName;
	long acctNum;
	double balance;
public:
	Brass(const string& fn = "Nullbody", long an = -1, double bal = 0.0);
	void Deposit(double amt);
	virtual void Withdraw(double amt);
	double Balance() const;
	virtual void ViewAcct() const;
	virtual ~Brass() {}	//若不将Brass定义为虚析构函数，将会导致delete删除内存时无法调用派生类的析构函数
};

class BrassPlus : public Brass
{
private:
	double maxLoan;
	double rate;
	double owesBank;
public:
	BrassPlus(const string& fn = "Nullbody", long an = -1, double bal = 0.0, double ml = 500, double r = 0.11125);
	BrassPlus(const Brass& ba, double ml = 500, double r = 0.11125);
	virtual void ViewAcct() const;
	virtual void Withdraw(double amt);
	void ResetMax(double m) { maxLoan = m; }
	void ResetRate(double r) { rate = r; }
	void ResetOwes() { owesBank = 0; }
};

#endif