////��C++ Primer Plus����ʮ���±����ϰ��1��
////class Cd	//resprent a CD disk
////{
////private:
////	char performers[50];
////	char lable[20];
////	int selections;	//number of selections
////	double playtime;	//playing time in minutes
////public:
////	Cd(char* s1, char* s2, int n, double x);
////	Cd(const Cd& d);
////	Cd();
////	~Cd();
////	void Report() const;	//reports all CD data
////	Cd& operator=(const Cd& d);
////};
////������һ��Classic�࣬�����һ��char��Ա�����ڴ洢ָ��CD����Ҫ��Ʒ���ַ������޸�����������ʹ��������к���
////������ġ�������߶���������ĳ������������Ҫ������ɾ������ʹ������ĳ���������Ĳ�Ʒ��
//#include "cd.h"
//#include <iostream>
//
//using namespace std;
//
//void Bravo(const Cd& disk);
//
//int main(void)
//{	
//	Cd c1("Beatles", "Captiol", 14, 35.5);
//	Classic c2 = Classic("Piano Sonata in B flat, Fantasia in C", "Alfred Brendel", "Philips", 2, 57.17);
//	Cd* pcd = &c1;
//
//	cout << "Using object directly:\n";
//	c1.Report();
//	c2.Report();
//	cout << endl;
//
//	cout << "Using type cd * pointer to object:\n";
//	pcd->Report();
//	pcd = &c2;
//	pcd->Report();
//	cout << endl;
//
//	cout << "Calling a function with a CD reference argument:\n";
//	Bravo(c1);
//	Bravo(c2);
//	cout << endl;
//
//	cout << "Testing assignment:\n";
//	Classic copy;
//	copy = c2;
//	copy.Report();
//
//	return 0;
//}
//
//void Bravo(const Cd& disk)
//{
//	disk.Report();
//}