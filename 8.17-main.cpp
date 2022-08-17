#include <iostream>

//自动变量只在包含它们的函数或代码块可见
using namespace std;

void oil(int x);

int main(void)
{
	int texas = 31;
	int year = 2011;

	cout << "In main() texas = " << texas << ", &texas = " << &texas << endl;
	cout << "In main() year = " << year << ", &year = " << &year << endl;

	oil(texas);

	cout << "In main() texas = " << texas << ", &texas = " << &texas << endl;
	cout << "In main() year = " << year << ", &year = " << &year << endl;

	return 0;
}

void oil(int x)
{
	int texas = 5;

	cout << "In oil() texas = " << texas << ", &texas = " << &texas << endl;
	cout << "In oil() x = " << x << ", &x = " << &x << endl;

	//在函数中新建一个代码块
	{
		int texas = 113;

		cout << "In block texas = " << texas << ", &texas = " << &texas << endl;
		cout << "In block x = " << x << ", &x = " << &x << endl;
	}

	cout << "Post-block texas = " << texas << ", &texas = " << &texas << endl;
}

//using namespace std;
//
//int main(void)
//{
//	int a = 15;
//	cout << "a = " << a << ", &a = " << &a << endl;
//	a = 25;
//	cout << "a = " << a << ", &a = " << &a << endl;
//
//	return 0;
//}

//#include <iostream>
//#include "8.17-main.h"
//
////单独编译，分别编写头文件，主函数文件和函数定义文件
//using namespace std;
//
//int main(void)
//{
//	rect rplace;
//	polar pplace;
//
//	cout << "Enter the x and y values: ";
//	while (cin >> rplace.x >> rplace.y)
//	{
//		pplace = rect_to_polar(rplace);
//		show_polar(pplace);
//		cout << "Next two number (q to quit): ";
//	}
//	cout << "Bye.\n";
//
//	return 0;
//}