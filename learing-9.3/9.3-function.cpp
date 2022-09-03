//#include <iostream>
//#include "main903.h"
//
////stcak.cpp -- Stack member functions
//Stack::Stack()
//{
//	top = 0;
//}
//
//bool Stack::isempty() const
//{
//	return top == 0;
//}
//
//bool Stack::isfull() const
//{
//	return top == MAX;
//}
//
//bool Stack::push(Item& item)
//{
//	if (top < MAX)
//	{
//		items[top++] = item;
//		return true;
//	}
//	else
//		return false;
//}
//
//bool Stack::pop(Item& item)
//{
//	if (top > 0)
//	{
//		item = items[--top];
//		return true;
//	}
//	else
//		return false;
//}

//函数重载的方式定义构造函数
//Stock::Stock()
//{
//	company = "No name";
//	shares = 0;
//	share_val = 0.0;
//	total_val = 0.0;
//}
////创建构造函数
//Stock::Stock(const std::string& co, long n, double pr)
//{
//	company = co;
//
//	if (n < 0)
//	{
//		std::cout << "Number of shares can't be negative;" << company << " shares set to 0\n";
//		shares = 0;
//	}
//	else
//		shares = n;
//	share_val = pr;
//	set_tot();
//}
////析构函数
//Stock::~Stock()
//{
//	/*std::cout << "Bye, " << company << "!\n";*/
//}
////void Stock::acquire(const std::string& co, long n, double pr)
////{
////	company = co;
////
////	if (n < 0)
////	{
////		std::cout << "Number of shares can't be negative;" << company << " shares set to 0\n";
////		shares = 0;
////	}
////	else
////		shares = n;
////	share_val = pr;
////	set_tot();
////}
//
//void Stock::buy(long num, double price)
//{
//	if (num < 0)
//	{
//		std::cout << "Number of shares purchased can't negative.Transaction is aborted.\n";
//	}
//	else
//	{
//		shares += num;
//		share_val = price;
//		set_tot();
//	}
//}
//
//void Stock::sell(long num, double price)
//{
//	using std::cout;
//	if (num < 0)
//		cout << "Number of shares sold can't negative.Transaction is aborted.\n";
//	else if (num > shares)
//		cout << "You can't sell more than you have! Transaction is aborted.\n";
//	else
//	{
//		shares -= num;
//		share_val = price;
//		set_tot();
//	}
//}
//
//void Stock::update(double price)
//{
//	share_val = price;
//	set_tot();
//}
//
//void Stock::show() const
//{
//	std::cout << "Company: " << company << " Shares: " << shares << "\n" << "Share Price: $" << share_val
//		<< " Total Worth: $" << total_val << "\n";
//}
//
//const Stock& Stock::topval(const Stock& s) const
//{
//	if (s.total_val > total_val)
//		return s;
//	else
//		return *this;
//
//}