#define _CRT_SECURE_NO_WARNINGS
#include "golf822.h"
#include <cstring>
#include <string>

void setgolf(golf& g, const char* name, int hc)
{
	strcpy(g.fullname, name);
	g.handicap = hc;
}

int setgolf(golf& g)
{
	//方案1.不使用第一个版本的函数
	/*std::cout << "Please enter name: ";
	std::cin.getline(g.fullname, 20);
	if (strcmp(g.fullname, "") != 0)
	{
		std::cout << "Please enter grade: ";
		std::cin >> g.handicap;
		std::cin.get();

		return 1;
	}
	else
	{
		std::cout << "enter quit!!!\n";
		return 0;
	}*/

	char name[Len];
	int grade;

	std::cout << "Please enter name: ";
	std::cin.getline(name, Len);
	if (strcmp(name, "") != 0)
	{
		std::cout << "Please enter grade: ";
		std::cin >> grade;
		std::cin.get();
		setgolf(g, name, grade);
		return 1;
	}
	else
	{
		std::cout << "enter quit!!!";
		return 0;
	}
}

void handicap(golf& g, int hc)
{
	g.handicap = hc;
}

void showgolf(const golf& g)
{
	std::cout << g.fullname << ": " << g.handicap << std::endl;
}


//#include <iostream>
//#include "main822.h"
//
//namespace pers
//{
//	using std::cout;
//	using std::cin;
//
//	void getPerson(Person& rp)
//	{
//		cout << "Enter first name: ";
//		cin >> rp.fname;
//		cout << "Enter last name: ";
//		cin >> rp.lname;
//	}
//	void showPerson(const Person& rp)
//	{
//		cout << rp.lname << ", " << rp.fname;
//	}
//}
//
//namespace debts
//{
//	void getDebt(Debt& rd)
//	{
//		getPerson(rd.name);
//		std::cout << "Enter debt: ";
//		std::cin >> rd.amount;
//	}
//	void showDebt(const Debt& rd)
//	{
//		showPerson(rd.name);
//		std::cout << ": $" << rd.amount << std::endl;
//	}
//	double sumDebt(const Debt arr[], int n)
//	{
//		double total = 0;
//
//		for (int i = 0; i < n; i++)
//			total += arr[i].amount;
//		return total;
//	}
//}