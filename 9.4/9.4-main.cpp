//8.可以将简单列表描述成下面这样
// * 可存储0或多个某种类型的列表；
// * 可创建空列表；
// * 可在列表中添加数据项；
// * 可确定列表是否为空；
// * 可确定列表是否为满；
// * 可访问列表中每一个数据项，并对它执行某种操作。
// 可以看到，这个列表确实简单，例如，它不允许插入或删除数据项。
// 请设计一个List类来表示这种抽象类型。您应提供头文件list.h和实现文件list.cpp，前者包含类定义，后者包含类
// 的实现方法。您还应创建一个简短的程序来使用这个类。
// 该列表的规范很简单，这主要旨在简化这个编程练习。可以选择使用数组或链表来实现该列表，但公有接口不应依赖
// 于所做的选择。也就是说，公有接口不应有数组索引、节点指针等。应使用通用概念来表达创建列表、在列表中添加
// 数据项等操作。对于访问数据项以及执行操作，通常应使用将函数指针作为参数的函数来处理：
//			void visit(void (*pf)(Item &));
// 其中，pf指向一个将Item引用作为参数的函数（不是成员函数），Item是列表中数据项的类型。visit()函数将该函数
// 用于列表中的每个数据项


//7.Betelgeusean plorg有这些特征
// 数据：
// * plorg的名称不超过19个字符；
// * plorg有满意指数（CI），这是一个整数。
// 操作：
// * 新的plorg将由名称，其CI值为50；
// * plorg的CI可以修改；
// * plorg可以报告其名称和CI;
// * plorg的默认名称为“Plorg”。
// 请编写一个Plorg类声明（包括数据成员和成员函数原型）来表示plorg，并编写成员函数的函数定义。然后编写一个
// 小程序，以演示Plorg类的所有特征。
//#include <iostream>
//#include "Plorg.h"
//
//using namespace std;
//
//int main(void)
//{
//	Plorg plorg1;
//	plorg1.show_plorg();
//
//	Plorg plorg2("Nanosmart", 100);
//	plorg2.show_plorg();
//
//	plorg2.revise_ci(120);
//	plorg2.show_plorg();
//
//	return 0;
//}

//6.下面是一个类声明：
// class Move
// {
//	private:
//		double x;
//		double y;
//  public:
//		Move(double a = 0, double b = 0);	//set x, y to a, b
//		void showmove() const;	//show current x, y values
//		//This function add x of m to x of invoking object to get new x, adds y of m to y of invoking
//		//object to get new y, creates a new move object initialized to new x, y values and returns it
//		Move add(const Move &m) const;
//		void reset(double a = 0, double b = 0); //reset x, y to a, b
// };
//请提供成员函数的定义和测试这个类的程序
//#include <iostream>
//#include "Move.h"
//
//using namespace std;
//
//int main(void)
//{
//	Move m1;
//	m1.showmove();
//	cout << endl;
//	Move m2(3.0, 4.0);
//	m2.showmove();
//	cout << endl;
//
//	m1.add(m2).showmove();
//	m1.add(m2).add(m2).showmove();
//	cout << endl;
//
//	m2.reset();
//	m2.showmove();
//	m2.reset(1.1, 2.2);
//	m2.showmove();
//	cout << endl;
//
//	return 0;
//}

//5.考虑下面的结构声明：
// struct customer
// {
//		char fullname[35];
//		double payment;
// };
//编写一个程序，它从栈中添加和删除customer结构(栈用Stack类声明表示)。每次customer结构被删除时，其payment
// 的值都被添加到总数中，并报告总数。注意：应该可以直接使用Stack类而不作修改；只需修改typedef声明，使Item
// 的类型为customer，而不是unsigned long即可。 
//#include <iostream>
//#include "Stack.h"
//#include <cctype>
//
//using namespace std;
//
//int main(void)
//{
//	char ch;
//	Stack st;
//	customer cu;
//	double total = 0;
//
//	cout << "Please enter A to add a purchase order,\n"
//		<< "P to process a PO, or Q to quit.\n";
//
//	while (cin >> ch && toupper(ch) != 'Q')
//	{
//		while (cin.get() != '\n')
//			continue;
//		if (!isalpha(ch))
//		{
//			cout << "\a";
//			continue;
//		}
//
//		switch (ch)
//		{
//		case 'a':
//		case 'A':
//			cout << "Please enter fullname:\n";
//			cin.getline(cu.fullname, 50);
//			cout << "Please enter payment: ";
//			cin >> cu.payment;
//			cin.get();
//			if (st.isfull())
//				cout << "stack already full\n";
//			else
//				st.push(cu);
//			break;
//		case 'p':
//		case 'P':
//			if (st.isempty())
//				cout << "stack already empty\n";
//			else
//			{
//				st.pop(cu);
//				total += cu.payment;
//				cout << "PO #:\n";
//				cout << "fullname: " << cu.fullname << endl;
//				cout << "payment: " << cu.payment << endl;
//				cout << "total: " << total << endl;
//			}
//			break;
//		}
//
//		cout << "Please enter A to add a purchase order,\n"
//			<< "P to process a PO, or Q to quit.\n";
//	}
//	cout << "Bye\n";
//
//	return 0;
//}


//4.完成第九章的编程练习4，但将Sales结构及相关的函数转换为一个类及方法。用构造函数替换setSales(sale&，
// double [], int )函数。用构造函数实现setSales(Sales &)方法的交互版本。将类保留在名称空间SALS中。
//#include <iostream>
//#include "Sales.h"
//
//int main(void)
//{
//	using SALES::Sales;
//
//	double arr1[8] = { 1.1, 3.3, 7.7, 5.5, 2.2, 4.4, 8.8, 6.6 };
//	double arr2[3] = { 3.3, 7.7, 5.5 };
//
//	Sales sa1(arr1, 8);
//	sa1.showSales(8);
//
//	Sales sa2(arr2, 3);
//	sa2.showSales(3);
//
//	sa1.setSales();
//	sa1.showSales(4);
//
//	return 0;
//}