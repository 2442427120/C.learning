#pragma once
#ifndef __MAIN903_H__
#define __MAIN903_H__

//stack.h -- class definition for the stack ADT
typedef unsigned long Item;

class Stack
{
private:
	enum { MAX = 10 };
	Item items[MAX];
	int top;
public:
	Stack();
	bool isempty() const;
	bool isfull() const;
	//push() return false if stack already is full, true otherwise
	bool push(Item &item);
	//pop() return false if stack already is empty, true otherwise
	bool pop(Item &item);
};

//#include <string>
//
//class Stock
//{
//private:
//	std::string company;
//	long shares;
//	double share_val;
//	double total_val;
//	void set_tot() { total_val = shares * share_val; }
//public:
//	/*void acquire(const std::string& co, long n, double pr);*/
//	/*Stock(const std::string& co, long n, double pr);*/
//	/*Stock(const std::string& co = "ERROR", long n = 0, double pr = 0);*/
//	Stock();
//	Stock(const std::string& co, long n = 0, double pr = 0.0);
//	~Stock();
//	void buy(long num, double price);
//	void sell(long num, double price);
//	void update(double price);
//	void show() const;
//	const Stock& topval(const Stock& s) const;
//};


#endif