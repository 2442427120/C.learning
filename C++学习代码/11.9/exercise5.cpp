//5.问题与编程练习4相同，但要编写一个模板函数:
//template<class T>
//int reduce(T ar[], int n);
//在一个使用long实例string实例的小程序中测试该函数。
//#include <iostream>
//#include <list>
//#include <string>
//#include <iterator>
//#include <algorithm>
//
//using namespace std;
//
//const int NUM = 10;
//
//template<class T>
//int reduce(T ar[], int n);
//
//
//int main(void)
//{
//	long arr1[NUM] = { 2, 3, 3, 5, 6, 7, 2, 1, 9, 6 };
//	//str为string类型的数组猜可以将之用于模板函数里
//	string str[NUM] = { "grade", "apple", "banana", "test", "blanket",
//		"captain", "bubble", "grade", "apple", "scout" };
//
//	int long_len = reduce(arr1, NUM);
//	int string_len = reduce(str, NUM);
//
//	cout << "long arr length = " << long_len << endl;
//	cout << "strin str length = " << string_len << endl;
//
//	return 0;
//}
//
//template<class T>
//int reduce(T ar[], int n)
//{
//	list<T> li;
//	li.insert(li.begin(), ar, ar + n);
//	li.sort();
//	li.unique();
//
//	return li.size();
//}


//void output(const string& s) { cout << s << " "; }
//
//int main(void)
//{
//	string arr = { "lottery winner winner lottery" };
//	int len = arr.size();
//	
//
//	list<string> str;
//	str.insert(str.begin(), arr);
//	str.sort();
//	str.unique();
//	for_each(str.begin(), str.end(), output);
//	cout << endl;
//
//	return 0;
//}