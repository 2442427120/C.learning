//4.编写一个具有老式风格接口的函数，其原型如下：
//int reduce(long ar[], int n);
//实参应是数组名和数组中的元素个数。该函数对数组进行排序，删除重复的值，返回缩减后数组中的元素数目。请使用
//STL函数编写该函数(如果决定使用通用的unique()函数，请注意它将返回结果区间的结尾)。使用一个小程序来测试该函
//数。

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
//	cout << "This string's length: " << len << endl;
//
//	return 0;
//}
//
//int reduce(long ar[], int n)
//{
//	list<int> li;
//	li.insert(li.begin(), ar, ar + n);  //将数组内容都插入到li中
//	li.sort();	//将数组排序
//	li.unique(); //使用unique()将连续重复的元素删除
//	for_each(li.begin(), li.end(), outlong);  //显示当前li的内容
//	cout << endl;
//
//	return li.size();	//返回此时li元素的个数
//}
//
//void outlong(long n)
//{
//	cout << n << " ";
//}