////��C++ Primer Plus����ʮ���±����ϰ��5���޸�
//#include <iostream>
//#include <list>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//template <class T>
//int reduce(T ar[], int n);
//
//int main(void)
//{
//	long arr[10] = { 2, 3, 3, 5, 6, 7, 2, 1, 9, 6 };
//	int size = reduce(arr, 10);
//	for (int i = 0; i < size; i++)
//		cout << arr[i] << " ";
//	cout << endl;
//
//	string str[5] = { "hello", "world", "good", "morning", "world" };
//	size = reduce(str, 5);
//	for (int i = 0; i < size; i++)
//		cout << str[i] << " ";
//	cout << endl;
//
//	return 0;
//}
//
//template <class T>
//int reduce(T ar[], int n)
//{
//	list<T> ls;
//	for (int i = 0; i < n; i++)
//	{
//		ls.push_back(ar[i]);
//	}
//	ls.sort();
//	ls.unique();
//
//	auto pt = ls.begin();	//��ptָ��ls�Ŀ�ʼλ��,auto�Զ��ƶ�pt����
//	for (int i = 0; i < ls.size(); i++, pt++)
//		ar[i] = *pt;
//
//	return ls.size();
//}