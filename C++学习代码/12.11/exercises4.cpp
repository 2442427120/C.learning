//4.ʹ��lambda���±�д�����嵥16.15.�����˵��ʹ��һ�������Ƶ�lambda�滻����outint(),�����������滻Ϊ����
//����lambda���ʽ��
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

	//��yadayada�д���100����ɾ����
	yadayada.remove_if([&cutoff100](int v) { return v > cutoff100; });
	for_each(yadayada.begin(), yadayada.end(), outint);
	cout << endl;
	//��etcetera�д���200����ɾ����
	etcetera.remove_if([&cutoff200](int v) { return v > cutoff200; });
	for_each(etcetera.begin(), etcetera.end(), outint);
	cout << endl;

	return 0;
}