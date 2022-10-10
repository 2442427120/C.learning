//#include "winec.h"
//
//Wine::Wine(const char* l, int y, const int yr[], const int bot[]) : lable(l), years_count(y)
//{
//	ArrayInt a(yr, y);	//将yr数组中的前y个元素填入数组a中
//	ArrayInt b(bot, y);	//将bot数组中的前y个元素填入数组b中
//	pa = PairArray(a, b);	//调用Pair类的构造函数为pa初始化
//}
//
//Wine::Wine(const char* l, int y) : lable(l), years_count(y)
//{
//	ArrayInt a(y);
//	ArrayInt b(y);
//	pa = PairArray(a, b);
//}
//
//void Wine::GetBottles()
//{
//	ArrayInt yr(years_count);	//临时变量，存储用户输入的年份，元素个数为用户自定义
//	ArrayInt bot(years_count);	//临时变量，存储用户输入的瓶数，元素个数为用户自定义
//
//	cout << "Enter " << lable << " data for " << years_count << " year(s):\n";
//	for (int i = 0; i < years_count; i++)
//	{
//		cout << "Enter years: ";
//		cin >> yr[i];
//		cout << "Enter bottles for that year: ";
//		cin >> bot[i];
//	}
//
//	pa = PairArray(yr, bot); //调用构造函数为pa设置值
//}
//
//void Wine::Show() const
//{
//	cout << "Wine: " << lable << endl;
//	cout << "\tYear\tBottles\n";
//	for (int i = 0; i < years_count; i++)
//	{
//		cout << "\t" << pa.first()[i] << "\t" << pa.second()[i] << endl;
//	}
//}
//
//int Wine::sum()
//{
//	int total = 0;
//
//	for (int i = 0; i < years_count; i++)
//	{
//		total += pa.second()[i];
//	}
//
//	return total;
//}