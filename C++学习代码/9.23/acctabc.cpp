//#include "acctabc.h"
//
//AcctABC::AcctABC(const string& fn, long an, double bal)
//{
//	fullName = fn;
//	acctNum = an;
//	balance = bal;
//}
//
//void AcctABC::Deposit(double amt)
//{
//	if (amt < 0)
//		cout << "Negative deposit not allowed; deposit is cancelled.\n";
//	else
//		balance += amt;
//}
//
//void AcctABC::Withdraw(double amt)
//{
//	balance -= amt;
//}
//
//void Brass::Withdraw(double amt)
//{
//	if (amt < 0)
//		cout << "Withdraw amount must be positive; withdraw canceled.\n";
//	else if (amt <= Balance())
//		AcctABC::Withdraw(amt);
//	else
//		cout << "Withdraw amount of $" << amt << " exceeds your balance. withdraw canceled.\n";
//}
//
//
//void Brass::ViewAcct() const
//{
//	cout << "Client: " << FullName() << endl;
//	cout << "Account Number: " << AcctNum() << endl;
//	cout << "Balance: $" << Balance() << endl;
//}
//
//BrassPlus::BrassPlus(const string& fn, long an, double bal, double ml, double r) : AcctABC(fn, an, bal)
//{
//	maxLoan = ml;
//	rate = r;
//	owesBank = 0.0;
//}
//
//BrassPlus::BrassPlus(const AcctABC& ba, double ml, double r) : AcctABC(ba)
//{
//	maxLoan = ml;
//	rate = r;
//	owesBank = 0.0;
//}
//
//void BrassPlus::ViewAcct() const
//{
//	cout << "Client: " << FullName() << endl;
//	cout << "Account Number: " << AcctNum() << endl;
//	cout << "Balance: $" << Balance() << endl;
//	cout << "Maximum loan: $" << maxLoan << endl;
//	cout << "Owed to bank: $" << owesBank << endl;
//	cout << "Loan Rate: " << 100 * rate << "%\n";
//}
//
//void BrassPlus::Withdraw(double amt)
//{
//	double bal = Balance();
//	if (amt <= bal)
//		AcctABC::Withdraw(amt);
//	else if (amt <= bal + maxLoan - owesBank)
//	{
//		double advance = amt - bal;
//		owesBank += advance * (1.0 + rate);
//		cout << "Bank advance: $" << advance << endl;
//		cout << "Finance charge: $" << advance * rate << endl;
//		Deposit(advance);
//		AcctABC::Withdraw(amt);
//	}
//	else
//		cout << "Credit limit exceeded. Transaction cancelled.\n";
//}