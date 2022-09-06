//-和*运算符的重载演示，并演示解决*运算符在运用时出现的问题（传递的实参在*的左边这种情况）
//第一种，在类外声明一个*运算符的重载函数，并在函数中调用类的成员函数；第二种通过创建友元函数来解决
#include "mytime2.h"

int main(void)
{
	Time weeding(4, 35);
	Time waxing(2, 47);
	Time total;
	Time diff;
	Time adjusted;
	Time adjusted1;

	cout << "weeding time = ";
	weeding.Show();
	cout << endl;

	cout << "waxing time = ";
	waxing.Show();
	cout << endl;

	cout << "total work time = ";
	total = weeding + waxing;	//using operator+();
	total.Show();
	cout << endl;

	diff = weeding - waxing;	//using operator-();
	cout << "weeding time - waxing time = ";
	diff.Show();
	cout << endl;

	adjusted = total * 1.5;	//using operator*()
	cout << "adjusted work time = ";
	adjusted.Show();
	cout << endl;

	adjusted1 = 1.5 * total;
	cout << "adjusted1 work time = ";
	adjusted1.Show();
	cout << endl;

	return 0;
}

//运算符重载限制的演示
//#include <iostream>
//
//using namespace std;
//
//class Num
//{
//private:
//	int n;
//public:
//	Num();
//	Num(int m);
//	void operator=(int m);
//};
//
//Num::Num()
//{
//	n = 0;
//	cout << "hello world\n";
//}
//
//Num::Num(int m)
//{
//	n = m;
//	cout << "good morning\n";
//}
//
//void Num::operator=(int m)
//{
//	n = m;
//	cout << "Successful\n";
//}
//
//int main(void)
//{
//	Num a;
//
//	//a = 10; //在类中没有重载=运算符时，效果等于a(10);
//	a = 10; //类中有重载=运算符的情况下,将只调用重载的=运算符
//
//	return 0;
//}

//该程序将调用operator+方法的两种表达法。在运算符表示法中，运算符左侧的对象（这里为coding）是调用对象，运
//算符右边的对象（这里为fixing）是作为参数被传递的对象。
//#include "mytime1.h"
//
//int main(void)
//{
//	Time Planning;
//		Time coding(2, 40);
//		Time fixing(5, 55);
//		Time total;
//	
//		cout << "Planning time = ";
//		Planning.Show();
//		cout << endl;
//	
//		cout << "coding timr = ";
//		coding.Show();
//		cout << endl;
//	
//		cout << "fixing time = ";
//		fixing.Show();
//		cout << endl;
//	
//		total = coding + fixing;	//运算符表示法
//		cout << "coding + fixing = ";
//		total.Show();
//		cout << endl;
//
//		Time morefixing(3, 28);
//		cout << "more fixing time = ";
//		morefixing.Show();
//		cout << endl;
//		total = morefixing.operator+(total);	//函数表示法
//		cout << "morefixing.operator+(total) = ";
//		total.Show();
//		cout << endl;
//	
//		return 0;
//}

//采用一个使用方法来处理假发的Time类。首先使用一个名为Sum()的常规方法
//#include "mytime0.h"
//
//int main(void)
//{
//	Time Planning;
//	Time coding(2, 40);
//	Time fixing(5, 55);
//	Time total;
//
//	cout << "Planning time = ";
//	Planning.Show();
//	cout << endl;
//
//	cout << "coding timr = ";
//	coding.Show();
//	cout << endl;
//
//	cout << "fixing time = ";
//	fixing.Show();
//	cout << endl;
//
//	total = coding.Sum(fixing);
//	cout << "coding.sum(fixing) = ";
//	total.Show();
//	cout << endl;
//
//	return 0;
//}