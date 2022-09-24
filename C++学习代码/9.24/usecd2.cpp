//《C++ Primer Plus》第十三章编程练习第2题
//完成编程练习1，但让两个类使用动态内存分配而不是长度固定的数组来记录字符串
#include "cd2.h"
#include <iostream>

using namespace std;

void Bravo(const Cd& disk);

int main(void)
{	
	Cd c1("Beatles", "Captiol", 14, 35.5);
	Classic c2 = Classic("Piano Sonata in B flat, Fantasia in C", "Alfred Brendel", "Philips", 2, 57.17);
	Cd* pcd = &c1;

	cout << "Using object directly:\n";
	c1.Report();
	c2.Report();
	cout << endl;

	cout << "Using type cd * pointer to object:\n";
	pcd->Report();
	pcd = &c2;
	pcd->Report();
	cout << endl;

	cout << "Calling a function with a CD reference argument:\n";
	Bravo(c1);
	Bravo(c2);
	cout << endl;

	cout << "Testing assignment:\n";
	Classic copy;
	copy = c2;
	copy.Report();

	return 0;
}

void Bravo(const Cd& disk)
{
	disk.Report();
}