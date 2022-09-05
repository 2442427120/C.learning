//第十章编程练习第8题修改
#include "list.h"

int main(void)
{
	Item num;
	List list;

	cout << "Please enter ten number.\n";
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter number:#" << i + 1 << endl;
		cin >> num;
		list.add(num);
	}
	list.visit(visit_items);

	return 0;
}

//第十章编程练习第6题修改
//#include <iostream>
//#include "Move.h"
//
//int main(void)
//{
//	double x, y;
//	Move move1(11.1, 22.2);
//	Move move2(10.0, 20.0);
//	Move move3;
//
//	move1.showmove();
//	move2.showmove();
//
//	cout << "Enter new x and y:\n";
//	cin >> x >> y;
//	cout << "after reset move1 content:\n";
//	move1.reset(x, y);
//	move1.showmove();
//
//	cout << "move3's content:\n";
//	move3 = move1.add(move2);
//	move3.showmove();
//
//	return 0;
//}

//第十章编程练习第4题修改
//#include "Sales.h"
//
//using namespace std;
//
//int main(void)
//{
//	using SALES::Sales;
//	double arr[8] = { 1.1, 3.3, 7.7, 5.5, 2.2, 4.4, 8.8, 6.6 };
//
//	Sales sales1(arr, 8);
//	Sales sales2;
//
//	cout << "Show sales1 and sales2 content:\n";
//	sales1.showSales(8);
//	sales2.showSales(4);
//
//	return 0;
//}

//第十章编程练习第3题修改
//#include "golf.h"
//
//using namespace std;
//
//int main(void)
//{
//	Golf golf1("NanoSmart", 5);
//	Golf golf2;
//
//	cout << "show golf1 and golf2 content:\n";
//	golf1.showgolf();
//	golf2.showgolf();
//
//	golf2.handicap_golf(15);
//	cout << "\nNow golf2's content:\n";
//	golf2.showgolf();
//
//	return 0;
//}

//第十章编程练习第2题修改
//#include "Person.h"
//
//int main(void)
//{
//	Person one;
//	Person two("Smythecraft");
//	Person three("Dimwiddy", "Sam");
//
//	one.show();
//	one.FormalShow();
//	cout << endl;
//
//	two.show();
//	two.FormalShow();
//	cout << endl;
//
//	three.show();
//	three.FormalShow();
//	cout << endl;
//
//	return 0;
//}

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
//#include <iostream>
//#include "list.h"
//
//using namespace std;
//
//void display(Item& num);
//
//int main(void)
//{
//	List list1;
//	for (int i = 0; i < 16; i++)
//		list1.add(i);
//	if (list1.isfull())
//		cout << "List is already full\n";
//
//	List list2;
//	if (list2.isempty())
//		cout << "List is already empty\n";
//
//	list1.visit(display);
//
//	return 0;
//}
//
//void display(Item& num)
//{
//	cout << num << " ";
//}