//4.ʹ��lambda���±�д�����嵥16.15.�����˵��ʹ��һ�������Ƶ�lambda�滻����outint(),�����������滻Ϊ����
//����lambda���ʽ��
#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

auto outint = [](int n) { cout << n << " "; };

int main(void)
{
	int vals[10] = { 50, 100, 90, 180, 60, 210, 415, 88, 188, 201 };
	list<int> yadayada(vals, vals + 10);
	list<int> etcetera(vals, vals + 10);

	cout << "Original lists:\n";
	for_each(yadayada.begin(), yadayada.end(), outint);
	cout << endl;
	for_each(etcetera.begin(), etcetera.end(), outint);
	cout << endl;

	cout << "Trimmed lists:\n";
	//��yadayada�д���100����ɾ����
	yadayada.remove_if([](int v) { return v > 100; });
	for_each(yadayada.begin(), yadayada.end(), outint);
	cout << endl;
	//��etcetera�д���200����ɾ����
	etcetera.remove_if([](int v) { return v > 200; });
	for_each(etcetera.begin(), etcetera.end(), outint);
	cout << endl;

	return 0;
}