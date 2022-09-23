//#pragma once
//#ifndef __ACCTABC_H__
//#define __ACCTABC_H__
//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
////���д��麯������Ϊ�����࣬�޷�ʵ��������
//class AcctABC
//{
//private:
//	string fullName;
//	long acctNum;
//	double balance;
//protected:
//	const string& FullName() const { return fullName; }
//	long AcctNum() const { return acctNum; }
//public:
//	AcctABC(const string& fu = "Nullbody", long an = -1, double bal = 0.0);
//	void Deposit(double amt);
//	virtual void Withdraw(double amt) = 0;	//������Ĺ������óɴ��麯��
//	double Balance() const { return balance; }
//	virtual void ViewAcct() const = 0;
//	virtual ~AcctABC() {}
//};
//
//class Brass : public AcctABC
//{
//public:
//	Brass(const string& fn = "Nullbody", long an = -1, double bal = 0.0) : AcctABC(fn, an, bal) {}
//	virtual void Withdraw(double amt);
//	virtual void ViewAcct() const;
//	virtual ~Brass() {}	//������Brass����Ϊ���������������ᵼ��deleteɾ���ڴ�ʱ�޷��������������������
//};
//
//class BrassPlus : public AcctABC
//{
//private:
//	double maxLoan;
//	double rate;
//	double owesBank;
//public:
//	BrassPlus(const string& fn = "Nullbody", long an = -1, double bal = 0.0, double ml = 500, double r = 0.11125);
//	BrassPlus(const AcctABC& ba, double ml = 500, double r = 0.11125);
//	virtual void ViewAcct() const;
//	virtual void Withdraw(double amt);
//	void ResetMax(double m) { maxLoan = m; }
//	void ResetRate(double r) { rate = r; }
//	void ResetOwes() { owesBank = 0; }
//};
//
//#endif