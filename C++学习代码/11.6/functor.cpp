//3.演示函数符这种技术,包含remove_if()方法
//#include <iostream>
//#include <list>
//#include <iterator>
//#include <algorithm>
//
//using namespace std;
//
//template<class T>
//class TooBig
//{
//private:
//	T cutoff;
//public:
//	TooBig(const T& t) : cutoff(t) {}
//	bool operator()(const T& v) { return v > cutoff; }
//};
//
//void outint(int n)
//{
//	cout << n << " ";
//}
//
//int main(void)
//{
//	TooBig<int> f100(100);
//	int vals[10] = { 50, 100, 90, 180, 60, 210, 415, 88, 188, 201 };
//	list<int> yadayada(vals, vals + 10);
//	list<int> etcetera(vals, vals + 10);
//
//	cout << "Original lists:\n";
//	for_each(yadayada.begin(), yadayada.end(), outint);
//	cout << endl;
//	for_each(etcetera.begin(), etcetera.end(), outint);
//	cout << endl;
//
//	yadayada.remove_if(f100);
//	etcetera.remove_if(TooBig<int>(200));
//
//	cout << "Terimmed lists:\n";
//	for_each(yadayada.begin(), yadayada.end(), outint);
//	cout << endl;
//	for_each(etcetera.begin(), etcetera.end(), outint);
//	cout << endl;
//
//	return 0;
//}