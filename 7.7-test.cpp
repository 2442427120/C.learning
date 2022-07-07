#include <iostream>
#include <climits>

int main(void)
{
	using namespace std;

	int chest = 42;
	int waist = 0x42;
	int inseam = 042;

	cout << "Monsieur cuts a striking figure!\n";
	cout << "chest = " << chest << " (decimal)\n";

	cout << hex;	//以下数据以十六进制显示
	cout << "waist = " << waist << " (in hex)\n";

	cout << oct;	//以下数据以八进制显示
	cout << "inseam = " << inseam << " (in octal)\n";

	return 0;
}

//#define ZERO 0
//
//int main(void)
//{
//	using namespace std;
//
//	short sam = SHRT_MAX;
//	unsigned short sue = sam;
//
//	cout << "Sam has " << sam << " dollars and Sue has " << sue;
//	cout << " dollars deposited." << endl
//		<< "Add $1 to each account." << endl << "Now ";
//	sam = sam + 1;
//	sue = sue + 1;
//	cout << "Sam has " << sam << " dollars and Sue has " << sue;
//	cout << " dollars deposited.\nPoor Sam!" << endl;
//	sam = ZERO;
//	sue = ZERO;
//	cout <<"Sam has " << sam << " dollars and Sue has " << sue;
//	cout << " dollars deposited. " << endl;
//	cout << "Take $1 from each account." << endl << "Now ";
//	sam = sam -1;
//	sue = sue -1;
//	cout << "Sam has " << sam << " dollars and sue has " << sue;
//	cout << " dollars desposited." << endl << "Lucky Sue!" << endl;
//
//	return 0;
//}

//int main(void)
//{
//	using namespace std;
//
//	int n_int = INT_MAX;
//	short n_short = SHRT_MAX;
//	long n_long = LONG_MAX;
//	long long n_llong = LLONG_MAX;
//
//	cout << "int is " << sizeof(int) << " bytes." << endl;
//	cout << "short is " << sizeof n_short << " bytes." << endl;
//	cout << "long is " << sizeof n_long << " bytes." << endl;
//	cout << "long long is " << sizeof n_llong << " bytes." << endl;
//	cout << endl;
//
//	cout << "Maximum values:" << endl;
//	cout << "int: " << n_int << endl;
//	cout << "short: " << n_short << endl;
//	cout << "long: " << n_long << endl;
//	cout << "long long: " << n_llong << endl << endl;
//
//	cout << "Minimum int value = " << INT_MIN << endl;
//	cout << "Bits per byte = " << CHAR_BIT <<endl;
//
//	return 0;
//}

//编写一个程序，要求用户输入小时数和分钟数。在main()函数中，将这两个值传递给一个void函数，后者以下面这样
//的格式显示这两个值:
//	Enter the number of hours: 9
//	Enter the number of minutes: 28
//	Time: 9:28
//void Time(int hours, int minutes);
//
//using namespace std;
//
//int main(void)
//{
//	int hours, minutes;	//小时，分钟
//	cout << "Enter the number of hours: ";
//	cin >> hours;
//	cout << "Enter the number of minutes: ";
//	cin >> minutes;
//	Time(hours, minutes);
//
//	return 0;
//}

//根据用户输入的小时和分钟显示时间函数
//void Time(int hours, int minutes)
//{
//	cout << "Time: " << hours << ":" << minutes << endl;
//}

//编写一个程序，其main()调用一个用户定义的函数(以光年值为参数，并返回对应天文单位的值)。该程序按下面的格
//式要求用户输入光年值，并显示结果:
//	Enter the number of light years: 4.2
//	4.2 light years = 265608 astronomical units.
//	天文单位是从地球到太阳的平均距离(约150000000公里或93000000英里)，光年是光一年走的距离(约10万亿公里或
//6万亿英里)(除太阳外，最近的恒星大约离地球4.2光年)。请使用double类型，转换公式为:
//							1光年 = 63040天文单位
//void Transform(double light);
//
//using namespace std;
//
//int main(void)
//{
//	double light;	//光年
//
//	cout << "Enter the number of light years: ";
//	cin >> light;
//	Transform(light);
//
//
//	return 0;
//}
//
////光年转换为天文单位函数
//void Transform(double light)
//{
//	cout << light << " light years = " << light * 63240 << " astronomical units." << endl;
//}

//编写一个程序，其中的main()调用一个用户定义的函数（以摄氏温度值为参数，并返回相应的华氏温度值）。该程序
//按下面的格式要求用户输入摄氏温度值，并显示结果:
//Please enter a Celsius valus: 20
//20 degrees Celsius is 68 degrees Fahrenheit.
//下面是转换公式：
//					华氏温度 = 1.8 * 摄氏温度 + 32.0
//void tr_tmp(double tmp);
//
//using namespace std;
//
//int main(void)
//{
//	double tmp;	//摄氏温度
//
//	cout << "Please enter a Celsius value: ";
//	cin >> tmp;
//	tr_tmp(tmp);
//
//	return 0;
//}
//
////摄氏温度转换成华氏温度函数
//void tr_tmp(double tmp)
//{
//	cout << tmp << " degrees Celsius is " << 1.8 * tmp + 32.0 << " degrees Fahrenheit." << endl;
//}

//编写一个程序，让用户输入其年龄，然后显示该年龄包含多少个月，如下所示：
//Enter your age: 29
//You age in month is 348.
//int main(void)
//{
//	using namespace std;
//
//	int age;	//年龄
//
//	cout << "Enter your age: ";
//	cin >> age;
//	cout << "You age in month is " << age * 12 << "." <<endl;
//
//	return 0;
//}

//编写一个C++程序，它使用3个用户定义的函数(包括main())，并生成下面的输出
//There blind mice
//There blind mice
//See how they run
//See how they run
//其中一个函数要调用两次，该函数生成前两行；另一个函数也被调用两次，并生成其余输出。
//void Print1(void);
//void Print2(void);
//
//using namespace std;
//
//int main(void)
//{
//	Print1();
//	Print1();
//	Print2();
//	Print2();
//
//	return 0;
//}
//
//void Print1(void)
//{
//	cout << "There blid mice" << endl;
//}
//
//void Print2(void)
//{
//	cout << "See how they run" << endl;
//}

//编写一个C++程序，它要求用户输入一个以long为单位的距离，然后将它转换为码(一long等于220码)
//int main(void)
//{
//	using namespace std;
//
//	int distance;
//
//	cout << "请输入一个以long为单位的距离: ";
//	cin >> distance;
//	cout << distance << " long的距离等于" << distance * 220 << " 码" << endl;
//
//	return 0;
//}

//编写一个C++程序，它显示您的姓名和地址
//int main(void)
//{
//	using namespace std;
//
//	cout << "姓名：五号" << endl;
//	cout << "地址：江西" << endl;
//
//	return 0;
//}