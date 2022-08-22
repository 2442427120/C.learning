#pragma once
namespace SALES
	 {
			const int QUARTERS = 4;
			struct Sales
			{
				double sales[QUARTERS];
				double average;
				double max;
				double min;
			};
	 
	 //copies the lesser of 4 or n items from the array ar to the sales member of s and computers and 
	 //stores the average, maximum, and miximum values of the entered items;remaining elements of sales
	 //, if any, set to 0
	 void setSales(Sales &s, const double ar[], int n);
	 //gathers sales for 4 quarters interactively, stores them in the sales member of s and computers 
	 //and stores the average, maximum, and miximum values  
	 void setSales(Sales& s);
	 //display all information in structure s
	 void showSales(const Sales &s);
	 }

//#include <string>
//
//namespace pers
//{
//	struct Person
//	{
//		std::string fname;
//		std::string lname;
//	};
//	void getPerson(Person &rp);
//	void showPerson(const Person& rp);
//}
//
//namespace debts
//{
//	using namespace pers;
//
//	struct Debt
//	{
//		Person name;
//		double amount;
//	};
//	void getDebt(Debt& rd);
//	void showDebt(const Debt& rd);
//	double sumDebt(const Debt arr[], int n);
//}
