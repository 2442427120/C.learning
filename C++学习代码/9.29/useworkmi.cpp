//多重继承
//Worker为抽象虚基类，Waiter,Singer为Worker的派生类，SingingWaiter是Waiter，Singer的派生类
//#include "workermi.h"
//#include <cstring>
//
//const int SIZE = 5;
//
//int main(void)
//{
//	Worker* lolas[SIZE];
//	int ct;
//
//	for (ct = 0; ct < SIZE; ct++)
//	{
//		char choice;
//		cout << "Enter the employee category:\n"
//			<< "w: waiter  s: singer  t: singing waiter  q: quit\n";
//		cin >> choice;
//
//		while (strchr("wstq", choice) == NULL)
//		{
//			cout << "Please entar a w, s, t or q: ";
//			cin >> choice;
//		}
//		if (choice == 'q')
//			break;
//		switch (choice)
//		{
//		case 'w':
//			lolas[ct] = new Waiter;
//			break;
//		case 's':
//			lolas[ct] = new Singer;
//			break;
//		case 't':
//			lolas[ct] = new SingingWaiter;
//			break;
//		}
//		while (cin.get() != '\n');
//		lolas[ct]->Set();
//	}
//
//	cout << "\nHere is your staff:\n";
//	int i;
//	for (i = 0; i < ct; i++)
//	{
//		cout << endl;
//		lolas[i]->Show();
//	}
//	for (i = 0; i < ct; i++)
//		delete lolas[i];
//	cout << "Bye.\n";
//
//	return 0;
//}