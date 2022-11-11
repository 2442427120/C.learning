//《C++ Primer Plus》第十六章编程练习第4题修改
//#include <iostream>
//#include <list>
//#include <algorithm>
//#include <iterator>
//
//using namespace std;
//
//const int NUM = 10;
//
//int reduce(long ar[], int n);
//void outlong(long n);
//
//int main(void)
//{
//	long arr[NUM] = { 2, 3, 3, 5, 6, 7, 2, 1, 9, 6 };
//
//	int len = reduce(arr, NUM);
//
//	for (int i = 0; i < len; i++)
//		cout << arr[i] << " ";
//
//	return 0;
//}
//
//int reduce(long ar[], int n)
//{
//	//list<int> li;
//	//li.insert(li.begin(), ar, ar + n);  //将数组内容都插入到li中
//	//li.sort();	//将数组排序
//	//li.unique(); //使用unique()将连续重复的元素删除
//	//for_each(li.begin(), li.end(), outlong);  //显示当前li的内容
//	//cout << endl;
//
//	//return li.size();	//返回此时li元素的个数
//	sort(ar, ar + n);
//	long* pl = unique(ar, ar + n);	//unique()函数返回的是结果区间的结尾
//
//	return pl - ar;
//}

//void outlong(long n)
//{
//	cout << n << " ";
//}