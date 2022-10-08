//使用多个类型参数，该程序演示了创建并使用Pair模板来保存两个不同的值。其中，方法first() const和second()const
//报告存储的值，由于这两个方法返回Pair数据成员的引用，因此让您能够通过赋值重新设置存储的值
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//template<class T1, class T2>
//class Pair
//{
//private:
//	T1 a;
//	T2 b;
//public:
//	T1& first();
//	T2& second();
//	T1 first() const { return a; }
//	T2 second() const { return b; }
//	Pair(const T1& aval, const T2& bval) : a(aval), b(bval) {}
//	Pair() {}
//};
//
//template<class T1, class T2>
//T1& Pair<T1, T2>::first()
//{
//	return a;
//}
//
//template<class T1, class T2>
//T2& Pair<T1, T2>::second()
//{
//	return b;
//}
//
//int main(void)
//{
//	Pair<string, int> rating[4] =
//	{
//		Pair<string, int>("Duck", 5),
//		Pair<string, int>("Fresco", 4),
//		Pair<string, int>("Cafe", 5),
//		Pair<string, int>("Bertie", 3)
//	};
//
//	int joints = sizeof(rating) / sizeof(Pair<string, int>);
//	for (int i = 0; i < joints; i++)
//		cout << rating[i].second() << ":\t" << rating[i].first() << endl;
//	rating[3].first() = "Fab";
//	rating[3].second() = 6;
//	cout << rating[3].second() << ":\t" << rating[3].first() << endl;
//
//	return 0;
//}
