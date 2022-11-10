//9.相对于数组，在链表中添加和删除元素更容易，但排序速度更慢。这就引出了一种可能性：相对于使用链表算法进
//行排序，将链表复制到数组中，对数组进行排序，再将排序后的结果复制到链表中的速度可能更快，但这也可能占用
//更多的内存。请使用如下方法检验上述假设。
//a. 创建大型vector<int>对象vi0，并使用rand()给它提供初始值。
//b. 创建vector<int>对象vi和list<int>对象li，它们的长度和初始值都与vi0相同。
//c. 计算使用STL算法sort()对vi进行排序所需的时间，再计算使用list的方法sort()对li进行排序所需的时间。
//d. 将li重置为排序的vi0的内容，并计算执行如下操作所需的时间：将li的内容复制到vi中，对vi进行排序，并将结
//   果复制到li中。
//要计算这些操作所需的时间，可使用ctime库中的clock()。正如程序清单5.14演示的，可使用下面的语句来获取时间:
//  clock_t start = clock();
// 再在操作结束后使用下面的语句来获取经过多长时间:
//	clock_t end = clock();
//	cout << (double)(end - start)
//这种测试并非绝对可靠，因为结果取决于很多因素，如可用内存量、是否支持多处理以及数组（列表）的长度(随着要
//排序的元素数增加，数组相对于列表的效率将更明显)。另外，如果编译器提供了默认生成方式和发布生成方式，请使
//用发布生成方式。鉴于当今计算机的速度非常快，要获得有意义的结果，可能需要使用尽可能大的数组。例如，可尝
//试包含100000、1000000和10000000个元素。
//#include <iostream>
//#include <vector>
//#include <list>
//#include <algorithm>
//#include <ctime>
//#include <cstdlib>
//
//using namespace std;
//
//int main(void)
//{
//	srand((unsigned int)time(0));
//	vector<int> vi0;
//	vector<int> vi;
//	list<int> li;
//
//	for (int i = 0; i < 10000000; i++)
//		vi0.push_back(rand());
//
//	//将vi0的内容分贝复制到vi和li中
//	copy(vi0.begin(), vi0.end(), insert_iterator<vector<int>>(vi, vi.begin()));
//	copy(vi0.begin(), vi0.end(), insert_iterator<list<int>>(li, li.begin()));
//
//	//计算STLsort()算法的时间
//	clock_t vi_sort_start = clock();
//	sort(vi.begin(), vi.end());
//	clock_t vi_sort_end = clock();
//	cout << "vi sort time = " << (double)(vi_sort_end - vi_sort_start) / CLOCKS_PER_SEC << endl;
//	//计算list的方法sort()的时间
//	clock_t li_sort_start = clock();
//	li.sort();
//	clock_t li_sort_end = clock();
//	cout << "li sort time = " << (double)(li_sort_end - li_sort_start) / CLOCKS_PER_SEC << endl;
//
//	//将li的内容复制到vi中，对vi进行排序完后再复制到li中
//	clock_t start = clock();
//	copy(li.begin(), li.end(), insert_iterator<vector<int>>(vi, vi.end()));
//	sort(vi.begin(), vi.end());
//	copy(vi.begin(), vi.end(), insert_iterator<list<int>>(li, li.begin()));
//	clock_t end = clock();
//	cout << "li copy to vi and sort and copy in li time = " << (double)(end - start) / CLOCKS_PER_SEC << endl;
//
//	return 0;
//}