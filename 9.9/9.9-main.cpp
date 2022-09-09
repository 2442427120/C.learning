//7.复数有两个组成部分：实数部分和虚数部分。复数的一种书写方式是：（3.0， 4.0），其中，3.0是实数部分，4.0
// 是虚数部分。假设a = （A, Bi），c = （C, Di）,则下面是一些复数运算。
// * 加法：a + c = (A + C,（B + D)i)。
// * 减法：a - c = (A - C, (B - D)i)。
// * 乘法：a * c = (A * C - B * D, (A * D + B * C)i)。
// * 乘法：x * c = (x * C, x * Di);	其中x为实数
// * 共轭：~a = (-A, -Bi)。
// 请定义一个复数类，以便下面的程序可以使用它来获得正确的结果。
// #include <iostream>
// using namesapce std;
// #include "complex0.h"	//to avoid confusion with complex.h
// int main(void)
// {
//		complex a(3.0, 4.0);
//		complex c;
//		cout << "Enter a complex number (q to quit):\n";
//		while (cin >> c)
//		{
//			cout << "c is " << c << endl;
//			cout << "complex conjugate is " << ~c << endl;
//			cout << "a is " << a << endl;
//			cout << "a + c is " << a + c << endl;
//			cout << "a - c is " << a - c << endl;
//			cout << "a * c is " << a * c << endl;
//			cout << "2 * c is " << 2 * c << endl;
//			cout << "Enter a complexe number (q to quit):\n";
//		}
//		cout <<"Done!\n";
// 
//		return 0;
// }
//注意，必须重载运算符<<和>>。标准C++使用头文件complex提供了比这个示例更广泛的复数支持，因此应将自定义的
// 头文件命名为complex0.h，以免法发生冲突。应尽可能使用const。
// 下面是该程序的运行情况。
// Enter a complex number (q to quit):
// real: 10
// imaginary: 12
// c is (10, 12i)
// complex conjugate is (10, -12i)
// a is (3, 4i)
// a + c is (13, 16i)
// a - c is (-7, -8i)
// a * c is (-18, 76i)
// 2 * c is (20, 24i) 
// Enter a complex number (q to quit):
// real: q
// Done!
#include <iostream>
#include "complex0.h"	//to avoid confusion with complex.h

using namespace std;

 int main(void)
 {
		complex a(3.0, 4.0);
		complex c;
		cout << "Enter a complex number (q to quit):\n";
		while (cin >> c)
		{
			cout << "c is " << c << endl;
			cout << "complex conjugate is " << ~c << endl;
			cout << "a is " << a << endl;
			cout << "a + c is " << a + c << endl;
			cout << "a - c is " << a - c << endl;
			cout << "a * c is " << a * c << endl;
			cout << "2 * c is " << 2 * c << endl;
			cout << "Enter a complexe number (q to quit):\n";
		}
		cout <<"Done!\n";
 
		return 0;
 }

//#include <iostream>
//using namespace std;
//int main(void)
//{
//	int num = '8';
//
//	cout << isdigit(num);
//
//	return 0;
//}

//6.重新编写Stonewt类（程序清单11.16和程序清单11.17），重载全部6个关系运算符。运算符对pounds成员进行比较，
//并返回一个bool值。编写一个程序，它声明一个包含6个Stonewt对象的数组，并在数组声明中初始化前3个对象。然后
//使用循环来读取用于设置剩余3个数组元素的值。接着报告最小的元素、最大的元素以及大于或等于11英石的元素的数
//量（最简单的方法是创建一个Stonewt对象，并将其初始化为11英石，然后将其同其他对象进行比较）。
//#include "stonewt1.h"
//
//const int Size = 6;
//
//int main(void)
//{
//	int count = 0;
//	double u_pound;
//	Stonewt max;
//	Stonewt min(9999);
//	Stonewt stone(11);
//	Stonewt stonewt_arr[Size] =
//	{ Stonewt(22.2), Stonewt(33.3), Stonewt(11.1),Stonewt(), Stonewt(), Stonewt() };
//
//	cout << "请为Stonewt数组后" << Size - 3 << "个对象赋值\n";
//	for (int i = 3; i < Size; i++)
//	{
//		cout << "第" << i + 1 << "个对象：";
//		cin >> u_pound;
//		stonewt_arr[i] = Stonewt(u_pound);
//	}
//
//	for (int i = 0; i < Size; i++)
//	{
//		max = stonewt_arr[i] > max ? stonewt_arr[i] : max;
//		min = stonewt_arr[i] < min ? stonewt_arr[i] : min;
//
//		if (stonewt_arr[i] >= stone)
//		{
//			count++;
//		}
//	}
//
//	cout << "Stone数组对象中pounds值大于11的有" << count << "个\n";
//	cout << "Stonewt数组对象中的最大值：";
//	max.show_lbs();
//	cout << "Stonewt数组对象中的最小值：";
//	min.show_lbs();
//
//	/*for (int i = 0; i < Size - 1; i++)
//	{
//		for (int j = 0; j < Size - i - 1; i++)
//		{
//			if (stonewt_arr[j] > stonewt_arr[j + 1])
//			{
//				temp = stonewt_arr[j];
//				stonewt_arr[j] = stonewt_arr[j + 1];
//				stonewt_arr[j + 1] = temp;
//			}
//		}
//	}*/
//
//	return 0;
//}

//5.重新编写Stonewt类（程序清单11.16和程序清单11.17），使它有一个状态成员，由该成员控制对象应转换为英石格式
//、整数磅格式还是浮点磅格式。重载<<运算符，使用它来替换show_stn()和show_lbs()方法。重载加法、减法和乘法运算
// ，以便可以对Stonewt值进行加、减、乘运算。编写一个使用所有类方法和友元的小程序，来测试这个类。
//#include "stonewt.h"
//
//int main(void)
//{
//	Stonewt stonewt1(348.14);
//	Stonewt stonewt2(169.94);
//	Stonewt sum;
//	Stonewt diff;
//	Stonewt mult;
//
//	cout << "----------在POUND模式下----------\n";
//
//	cout << "显示stonewt1和stonewt2的内容:\n";
//	cout << stonewt1 << stonewt2;
//
//	cout << "stonewt1 + stonewt2的内容:\n";
//	sum = stonewt1 + stonewt2;
//	cout << sum;
//
//	cout << "stonewt1 - stonewt2的内容:\n";
//	diff = stonewt1 - stonewt2;
//	cout << diff;
//
//	cout << "stonewt2 * 5的内容:\n";
//	mult = stonewt2 * 5;
//	cout << mult;
//
//	cout << "5 * stonewt2的内容:\n";
//	mult = 5 * stonewt2;
//	cout << mult;
//
//	cout << "----------在STONE模式下----------\n";
//	stonewt1.stone_mode();
//	stonewt2.stone_mode();
//
//
//	cout << "显示stonewt1和stonewt2的内容:\n";
//	cout << stonewt1 << stonewt2;
//
//	cout << "stonewt1 + stonewt2的内容:\n";
//	sum = stonewt1 + stonewt2;
//	sum.stone_mode();
//	cout << sum;
//
//	cout << "stonewt1 - stonewt2的内容:\n";
//	diff = stonewt1 - stonewt2;
//	diff.stone_mode();
//	cout << diff;
//
//	cout << "stonewt2 * 5的内容:\n";
//	mult = stonewt2 * 5;
//	mult.stone_mode();
//	cout << mult;
//
//	cout << "5 * stonewt2的内容:\n";
//	mult = 5 * stonewt2;
//	mult.stone_mode();
//	cout << mult;
//
//
//	return 0;
//}

//4.重新编写最后Time类示例（程序清单10.10，程序清单10.11和程序清单10.12），使用友元函数来实现所有的重载
//运算符。
//#include "time.h"
//
//int main(void)
//{
//	Time weeding(4, 35);
//	Time waxing(2, 47);
//	Time total;
//	Time diff;
//	Time adjusted;
//	Time adjusted1;
//
//	cout << "weeding time = ";
//	/*weeding.Show();*/
//	cout << weeding;	//重载<<运算符后显示类的内容
//	cout << endl;
//
//	cout << "waxing time = ";
//	/*waxing.Show();*/
//	cout << waxing;
//	cout << endl;
//
//	cout << "total work time = ";
//	total = weeding + waxing;	//using operator+();
//	/*total.Show();*/
//	cout << total;
//	cout << endl;
//
//	diff = weeding - waxing;	//using operator-();
//	cout << "weeding time - waxing time = ";
//	/*diff.Show();*/
//	cout << diff;
//	cout << endl;
//
//	adjusted = total * 1.5;	//using operator*()
//	cout << "adjusted work time = ";
//	/*adjusted.Show();*/
//	cout << adjusted;
//	cout << endl;
//
//	adjusted1 = 1.5 * total;	//友元函数重载*运算符，使得*左边可以使用非类
//	cout << "adjusted1 work time = ";
//	/*adjusted1.Show();*/
//	cout << adjusted1;
//	cout << endl;
//
//	cout << "**************************************\n";
//	cout << weeding << waxing;	//演示cout连续输出
//
//	return 0;
//}