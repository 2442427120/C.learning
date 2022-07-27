#include <iostream>
#include <string>

//5.在Neutronia王国，货币单位是tvarp,收入所得税的计算方式如下：
//5000 tvarps: 不收税
//5000 - 15000 tvarps: 10%
//15001 - 35000 tvarps: 15%
//35000 tvarps以上: 20%
//例如，收入为38000 tvarps时，所得税为5000 * 0.00 + 10000 * 0.10 + 20000 * 0.15 + 3000 * 0.20，即4600
//tvarps。请编写一个程序，使用循环来要求用户输入收入，并报告所得税。当用户输入负数或非数字时，循环将结束
//using namespace std;
//
//const double Rate1 = 0.0;
//const double Rate2 = 0.10;
//const double Rate3 = 0.15;
//const double Rate4 = 0.20;
//
//
//const int Break1 = 5000;
//const int Break2 = 15000;
//const int Break3 = 35000;
//
//const double Base1 = 5000 * Rate1;
//const double Base2 = (Base1 + ((Break2 - Break1) * Rate2));
//const double Base3 = (Base2 + ((Break3 - Break2) * Rate3));
//
//
//int main(void)
//{
//	int income;
//
//	cout << "Please enter income: ";
//
//	while (cin >> income)
//	{
//		if (income <= Break1)
//			cout << "income tax: " << Base1 << endl;
//		else if (income > Break1 && income <= Break2)
//			cout << "income tax: " << (income - Break1) * Rate2 << endl;
//		else if (income > Break2 && income <= Break3)
//			cout << "income tax: " << (Base2 + (income - Break2) * Rate3) << endl;
//		else
//			cout << "income tax: " << (Base3 + ((income - Break3) * Rate4)) << endl;
//
//		cout << "Please enter income(enter q to quit): ";
//
//	}
//
//	return 0;
//}

//4.加入Benevolent Order of Programmer后，在BOP大会上，人们便可以通过加入者的真实姓名、头衔或秘密BOP姓名
//来了解他(她)。请编写一个程序，可以使用真实姓名、头衔、秘密姓名或成员偏好来列出成员。编写该程序时，请使
//用下面的结构：
//	//Benevolent Order of Programmers name structure
//	struct bop
//	{
//		char fullname[strsize];	
//		char title[strsize];	
//		char bopname[strsize];
//		int preference;
//	}
//该程序创建一个由上述结构组成的小型数组，并将其初始化为适当的值。另外，该程序使用一个循环，让用户在下面
//的选项中进行选择：
//	a. display by name		b. display by title
//	c. display by bopname	d. display by preference
//	q. quit
//注意，"display by preference"并不意味着显示成员的偏好，而是意味着根据成员的偏好来列出成员。例如，如果偏
//好号为1，则选择d将显示程序员的头衔。该程序的运行情况如下：
//	Benevolent Order of Programmer Report
//	a. display by name		b. display by title
//	c. display by bopname	d. display by preference
//	q. quit
//	Enter your choice: a
//	Wimp Macho
//	Raki Rhodes
//	Celia Laiter
//	Hoppy Hipman
//	Pat Hand
//	Next choice: d
//	Wimp Macho
//	Junior Programmer
//	MIPS
//	Analyst Trainee
//	LOOPY
//	Next choice: q
//	Bye!
//using namespace std;
//
//const int strsize = 50;
//
//struct bop
//{
//	char fullname[strsize];	//real name
//	char title[strsize];	//job title
//	char bopname[strsize];	//secret BOP name
//	int preference;	// 0 = fullname, 1 = title, 2 = bopname 
//};
//
//int main(void)
//{
//	char ch;
//
//	bop bop_info[5] =
//	{
//		{"Wimp Macho", "doctor", "DR", 0},
//		{"Raki Rhodes", "Junior Programmer", "JP", 1},
//		{"Celia Laiter", "college", "MIPS", 2},
//		{"Hoppy Hipman", "Analyst", "AN", 1},
//		{"Pat Hand", "teacher", "LOOPY", 2}
//	};
//
//	cout << "Benvolen Order of Programmers Report\n";
//	cout << "a. display by name		b. display by title\n";
//	cout << "c. display by bopname  d. display by preference\n";
//	cout << "q. quit\n";
//
//	cout << "Enter your choice: ";
//	do
//	{
//		ch = cin.get();
//		cin.get();
//
//		switch (ch)
//		{
//		case 'a':
//			for (int i = 0; i < 5; ++i)
//				cout << bop_info[i].fullname << endl;
//			break;
//		case 'b':
//			for (int i = 0; i < 5; ++i)
//				cout << bop_info[i].title << endl;
//			break;
//		case 'c':
//			for (int i = 0; i < 5; ++i)
//				cout << bop_info[i].bopname << endl;
//			break;
//		case 'd':
//			for (int i = 0; i < 5; i++)
//			{
//				switch (bop_info[i].preference)
//				{
//				case 0:
//					cout << bop_info[i].fullname << endl;
//					break;
//				case 1:
//					cout << bop_info[i].title << endl;
//					break;
//				case 2:
//					cout << bop_info[i].bopname << endl;
//					break;
//				}
//			}
//			break;
//		default:
//			cout << "error.\n";
//			
//		}
//
//		cout << "Next choice: ";
//
//	} while (ch != 'q');
//
//	return 0;
//}

//3.编写一个菜单驱动程序的雏形。该程序显示一个提供4个选项的菜单----每个选项用一个字母标记。如果用户使用有效
//选项之外的字母进行响应，程序将提示用户输入一个有效的字母，直到用户这样做为止。然后，该程序使用一条switch
//语句，根据用户的选择执行一个简单操作。该程序运行情况如下：
//	Please enter one of the following choices:
//	c) carnivore p) pianist
//	t) tree g) game
//	f
//	Please enter a c, p, t, or g: q
//	Please enter a c,p,t, or g: t
//	A mapple is a tree.
//int main(void)
//{
//	using namespace std;
//
//	char ch;
//
//	cout << "Please enter one of the following choices:\n";
//	cout << "c) carnivore p) pianist\n";
//	cout << "t) tree g) game\n";
//
//	do
//	{
//		cin >> ch;
//
//		switch (ch)
//		{
//		case 'c':
//			cout << "A maple is a tree.\n";
//			break;
//		case 'p':
//			cout << "A mapple is a pianist.\n";
//			break;
//		case 't':
//			cout << "A mapple is a tree.\n";
//			break;
//		case 'g':
//			cout << "A mapple is a game.\n";
//		default:
//			cout << "Please enter a c, p, t, or, g: ";
//		}
//	} while (ch != 'c' && ch != 'p' && ch != 't' && ch != 'g');
//
//	return 0;
//}