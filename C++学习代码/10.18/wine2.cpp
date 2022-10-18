#include "winec2.h"

//私有继承，需使用基类来对派生类的对象进行初始化
Wine::Wine(const char* l, int y, const int yr[], const int bot[])
	: string(l), years_count(y), PairArray(ArrayInt(yr, y), ArrayInt(bot, y))
{
	//ArrayInt a(yr, y);	//将yr数组中的前y个元素填入数组a中
	//ArrayInt b(bot, y);	//将bot数组中的前y个元素填入数组b中
	//pa = PairArray(a, b);	//调用Pair类的构造函数为pa初始化
}

Wine::Wine(const char* l, int y) : string(l), years_count(y), PairArray(ArrayInt(y), ArrayInt(y))
{
	/*ArrayInt a(y);
	ArrayInt b(y);
	pa = PairArray(a, b);*/
}

void Wine::GetBottles()
{
	//ArrayInt yr(years_count);	//临时变量，存储用户输入的年份，元素个数为用户自定义
	//ArrayInt bot(years_count);	//临时变量，存储用户输入的瓶数，元素个数为用户自定义
	cout << "Enter " << (const string&)*this << " data for " << years_count << " year(s):\n";
	for (int i = 0; i < years_count; i++)
	{
		cout << "Enter years: ";
		cin >> PairArray::first()[i];	//为数组a填充葡萄酒的年份
		/*cin >> yr[i];*/
		cout << "Enter bottles for that year: ";
		cin >> PairArray::second()[i];	//为数组b填充葡萄酒的瓶数
		/*cin >> bot[i];*/
	}

	//pa = PairArray(yr, bot); //调用构造函数为pa设置值
}

const string&Wine::Lable()
{
	return (const string&)*this;	//使用强制类型转换来访问基类中的对象
}

void Wine::Show() const
{
	cout << "Wine: " << (const string&) *this << endl;
	cout << "\tYear\tBottles\n";
	for (int i = 0; i < years_count; i++)
	{
		//使用作用域解析运算符来访问基类中的成员方法
		cout << "\t" << PairArray::first()[i] << "\t" << PairArray::second()[i] << endl;
	}
}

int Wine::sum()
{
	/*int total = 0;

	for (int i = 0; i < years_count; i++)
	{
		total += pa.second()[i];
	}*/

	return PairArray::second().sum();	//调用valarray库函数里的sun()方法计算数组的总和
}