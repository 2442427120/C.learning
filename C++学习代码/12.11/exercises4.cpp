//4.使用lambda重新编写程序清单16.15.具体地说，使用一个有名称的lambda替换函数outint(),并将函数符替换为两个
//匿名lambda表达式。
#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

auto outint = [](int n) { cout << n << " "; };

int main(void)
{
	int cutoff100 = 100;
	int cutoff200 = 200;

	int vals[10] = { 50, 100, 90, 180, 60, 210, 415, 88, 188, 201 };
	list<int> yadayada(vals, vals + 10);
	list<int> etcetera(vals, vals + 10);

	cout << "Original lists:\n";
	for_each(yadayada.begin(), yadayada.end(), outint);
	cout << endl;
	for_each(etcetera.begin(), etcetera.end(), outint);
	cout << endl;

	//将yadayada中大于100的数删除。
	yadayada.remove_if([&cutoff100](int v) { return v > cutoff100; });
	for_each(yadayada.begin(), yadayada.end(), outint);
	cout << endl;
	//将etcetera中大于200的数删除。
	etcetera.remove_if([&cutoff200](int v) { return v > cutoff200; });
	for_each(etcetera.begin(), etcetera.end(), outint);
	cout << endl;

	return 0;
}