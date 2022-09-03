//3.完成第九章编程练习1，但要用正确的golf类声明替换那里的代码。用带合适参数的构造函数替换setgolf(golf &, 
// const char*, int),以提供初始值。保留setgolf()的交互版本，但要用构造函数来实现它（例如，setgolf的代码应
// 该获得数据，将数据传递给构造函数来创建一个临时对象，并将其赋给调用对象，即*this）。
#include <iostream>
#include "golf.h"

const int Arsize = 4;

int main(void)
{
	int i = 0;
	int count = 0;

	Golf ann = { "Ann Birdfree", 24 };
	ann.showgolf();
	ann.handicap(38);
	ann.showgolf();

	Golf andy;
	andy.setgolf();
	andy.showgolf();

	Golf team[Arsize];
	while (i < Arsize && team[i].setgolf())
	{
		i++;
		count++;
	}

	for (int i = 0; i < count; i++)
	{
		team[i].showgolf();
	}
	std::cout << std::endl;

	return 0;
}

//2.下面是一个非常简单的类定义
//class Person
// {
//	private:
//		static const int LIMIT = 25;
//		string lname;	//Person's last name
//		char fname[LIMIT];	//Person's first name
//	public:
//		Person() { lname = ""; fname[0] = '\0'; }	//#1
//		Person(const string& ln, const char *fn = "Heyyou");	//#2
//		//the following methods display lname and fname
//		void show() const;	//firstname lastname format
//		void FormalShow() const; //	lastname, first format
// };
// 它使用了一个string对象和一个字符数组，让您能够比较它们的用法。请提供未定义的方法的代码，以完成这个类的
// 实现。再编写一个使用这个类的程序，它使用了三种可能的构造函数调用（没有参数、一个参数和两个参数）以及两
// 种显示方法。下面是一个使用这些构造函数方法的例子：
// Person one;	//use default constructor
// Person two("Smythecraft");	//use #2 with one default argument
// Person three("Dimwiddy", "Sam");	//use #2,no defaults
// one.show();
// cout << endl;
// one.FormalShow();
// etc.for two and three
//#include <iostream>
//#include "Person.h"
//
//int main(void)
//{
//    using std::cout;
//    using std::endl;
//
//	Person one;	//use default constructor
//    Person two("Smythecraft");	//use #2 with one default argument
//    Person three("Dimwiddy", "Sam");	//use #2,no defaults
//
//    one.show();
//    one.FormalShow();
//    cout << endl;
//
//    two.show();
//    two.FormalShow();
//    cout << endl;
//
//    three.show();
//    three.FormalShow();
//    cout << endl;
//
//	return 0;
//}

//1.为复习题5描述的类提供方法定义，并编写一个小程序来演示所有可能性
//#include <iostream>
//#include "BankAccount.h"
//
//int main(void)
//{
//	BankAccount bankaccount = { "xiaoxiao", "12580", 15000};
//	bankaccount.show();
//
//	//向账户中存钱
//	bankaccount.deposit(10000);
//	bankaccount.show();
//
//	//从账户中取钱
//	bankaccount.withdraw(5000);
//	bankaccount.show();
//
//	return 0;
//}


//测试stack类 - 该程序模拟了售货员的行为--使用栈的后进先出方式，从购物筐的最上面开始处理购物订单
//#include <cctype>
//using namespace std;
//
//int main(void)
//{
//	char ch;
//	unsigned long po;
//	Stack st;
//
//	cout << "Please enter A to add a purchase order,\n"
//		<< "P to process a PO, or Q to quit.\n";
//
//	while (cin >> ch && toupper(ch) != 'Q')
//	{
//		while (cin.get() != '\n')
//			continue;
//
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
//			cout << "Enter a PO number to add: ";
//			cin >> po;
//			if (st.isfull())
//				cout << "Stack already full\n";
//			else
//				st.push(po);
//			break;
//		case 'p':
//		case 'P':
//			if (st.isempty())
//				cout << "Stack already empty\n";
//			else
//			{
//				st.pop(po);
//				cout << "PO #" << po << " popped\n";
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

//该程序对个数组元素进行初始化，显示它们的内容，并找出这些元素中总值最高的一个。由于topval()每次值检查两个
//对象，因此程序使用for循环来检查整个数组。另外，它使用stock指针来跟踪值最高的元素。
//const int STKS = 4;
//
//int main(void)
//{
//	//create an array of initialized objects
//	Stock stocks[STKS] =
//	{
//		Stock("NanoSmart", 12, 20.0),
//		Stock("Boffo Bojects", 200, 2.0),
//		Stock("Monolithis Obelisks", 130, 3.25),
//		Stock("Fleep Enterprises", 60, 6.5)
//	};
//
//	std::cout << "Stock holding:\n";
//	int st;
//	for (st = 0; st < STKS; st++)
//		stocks[st].show();
//
//	//set pointer to first element
//	const Stock* top = &stocks[0];
//	for (st = 1; st < STKS; st++)
//		top = &top->topval(stocks[st]);
//
//	//now top points to the most valuable holding
//	std::cout << "\nMost valuable holding:\n";
//	top->show();
//
//	return 0;
//}

//this指针的用法
//int main(void)
//{
//	Stock stock1("NanoSmart", 12, 20.0);
//	stock1.show();
//	
//	Stock stock2 = Stock("Boffo Objects", 2, 2.0);
//	stock2.show();
//
//	Stock top = stock1.topval(stock2);
//	top.show();
//
//	return 0;
//}