//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include "BankAccount.h"
//
//BankAccount::BankAccount(const char* client, const char* num, double bal)
//{
//	strncpy(name, client, 49);
//	name[49] = '\0';
//	strncpy(accountnum, num, 49);
//	accountnum[49] = '\0';
//	balance = bal;
//}
//
//void BankAccount::show(void)
//{
//	std::cout << "Now your account information:\n";
//	std::cout << "Name: " << name << std::endl;
//	std::cout << "Account: " << accountnum << std::endl;
//	std::cout << "Balance: " << balance << std::endl;
//}
//
//void BankAccount::deposit(double cash)
//{
//	if (cash < 0)
//		std::cout << "Please enter a legal amount\n";
//	else
//	{
//		balance += cash;
//		std::cout << "\nYou have deposited $" << cash << std::endl;
//	}
//}
//
//void BankAccount::withdraw(double cash)
//{
//	//若要取的钱超过账户余额，则显示账户所示余额不足的提示
//	if (cash > balance)
//		std::cout << "Insufficient balance in the account\n";
//	else
//	{
//		balance -= cash;
//		std::cout << "\nYou have withdrawed $" << cash << std::endl;
//	}
//}
