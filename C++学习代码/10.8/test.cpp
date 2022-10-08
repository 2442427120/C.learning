//演示模板的具体化:隐式实例化，显示实例化，显示具体化，部分具体化
//#include <iostream>
//
//using namespace std;
//
//template<class T1, class T2>
//class Test
//{
//public:
//	void show() const;
//};
//
//template<class T1, class T2>
//void Test<T1, T2>::show() const
//{
//	cout << "implicit instantiation\n";
//}
//
////显示实例化，在未实例化对象之前在内存中就已经存在了
//template class Test<double, double>;
//
////显示具体的声明和定义
//template<>
//class Test<int, int>
//{
//public:
//	void show() const;
//};
//
//void Test<int, int>::show() const
//{
//	cout << "explicit specialization\n";
//}
//
////部分具体化的声明和定义
//template<class T1>
//class Test<T1, int>
//{
//public:
//	void show() const;
//};
//
//template<class T1>
//void Test<T1, int>::show() const
//{
//	cout << "partial specialization\n";
//}
//
//int main(void)
//{
//	//隐式实例化的调用
//	Test<char, char> test1;	
//	test1.show();
//
//	//显示具体化的调用
//	Test<int, int> test3;
//	test3.show();
//
//	//部分具体化的调用
//	Test<char, int> test4;
//	test4.show();
//
//	return 0;
//}