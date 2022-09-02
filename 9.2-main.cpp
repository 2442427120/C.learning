//const成员变量
#include <iostream>
#include "main902.h"

int main(void)
{
	const Stock land = Stock("Kludgehorn Properties");
	land.show();

	return 0;
}

//该程序显示了构造函数和析构函数
//#include <iostream>
//#include "main902.h"
//
//int main(void)
//{
//	{
//		using std::cout;
//		cout << "Using constructors to create new object\n";
//		Stock stock1("NanoSmart", 12, 20.0);
//		stock1.show();
//		Stock stock2 = Stock("Boffo objects", 2, 2.0);
//		stock2.show();
//
//		cout << "Assgning stock1 to stock2:\n";
//		stock2 = stock1;
//		cout << "Listing stock1 and stock2:\n";
//		stock1.show();
//		stock2.show();
//
//		cout << "Using a constructor to reset an object\n";
//		stock1 = Stock("Nifty Foods", 10, 50.0);
//		cout << "Revised stock1:\n";
//		stock1.show();
//		cout << "Done\n";
//	}
//		return 0;
//}

//构造函数的显式和隐式使用
//两种方式定义构造函数（1.在声明部分为形参赋予默认值  2.重载的方式定义构造函数）
//#include <iostream>
//#include "main902.h"
//
//int main(void)
//{
//	Stock fluffy_the_cat;
//	//Stock fluffy_the_cat = Stock("NanoSmart", 20, 12.5);	//显式使用构造函数
//	fluffy_the_cat.show();
//
//	//Stock garment("Furry Mason", 50, 2.5);	//隐式使用构造函数
//	//garment.show();
//
//	return 0;
//}

//演示类的声明，实现类成员函数以及使用类
//#include <iostream>
//#include "main902.h"

//int main(void)
//{
	//Stock fluffy_the_cat;
//	fluffy_the_cat.acquire("NanoSmart", 20, 12.50);
//	fluffy_the_cat.show();
//
//	fluffy_the_cat.buy(15, 18.125);
//	fluffy_the_cat.show();
//
//	fluffy_the_cat.sell(400, 20.00);
//	fluffy_the_cat.show();
//
//	fluffy_the_cat.buy(30000, 40.125);
//	fluffy_the_cat.show();
//
//	fluffy_the_cat.sell(30000, 0.125);
//	fluffy_the_cat.show();
//
//	return 0;
//}