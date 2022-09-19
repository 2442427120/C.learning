//3.重新编写程序清单10.7和程序清单10.8描述的stock类，使之使用动态分配的内存，而不是string类对象来存储股票名
//称。另外，使用重载的operator<<()成员函数。再使用程序清单10.9测试新的程序。
//#include "stock20.h"
//
//const int STKS = 4;
//int main(void)
//{
//	Stock stocks[STKS] = 
//	{
//		Stock("NanoSmart", 12, 20.0),
//		Stock("Boffo Objects", 200, 2.0),
//		Stock("Monolithic Obelisks", 130, 3.25),
//		Stock("Fleep Enterprises", 60, 6.5)
//	};
//
//	cout << "Stock holding:\n";
//	int st;
//	for (st = 0; st < STKS; st++)
//		cout << stocks[st];
//
//	const Stock* top = &stocks[0];
//	for (st = 1; st < STKS; st++)
//		top = &top->topval(stocks[st]);
//
//	cout << "\nMost valuable holding:\n";
//	cout << *top;	//top为地址，因此解引用完才能访问top里面的内容
//
//	return 0;
//}