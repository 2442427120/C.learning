#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

struct antarctica_years_end
{
	int year;
};

int main(void)
{
	using namespace std;

	antarctica_years_end s01, s02, s03;
	s01.year = 1998;
	antarctica_years_end* pa = &s02;
	pa->year = 1999;
	antarctica_years_end trio[3];
	trio[0].year = 2003;

	cout << trio->year << endl;
	const antarctica_years_end* arp[3] = {&s01, &s02, &s03};
	cout << arp[1]->year << endl;
	const antarctica_years_end** ppa = arp;
	auto ppb = arp;

	cout << (*ppa)->year << endl;
	cout << (*(ppb + 1))->year << endl;

	return 0;
}

//using namespace std;
//char* getname(void);
//
//int main(void)
//{
//	char* name;
//
//	name = getname();
//	cout << name << " at " << (int*)name << endl;
//	delete[] name;
//
//	name = getname();
//	cout << name << " at " << (int*)name << endl;
//	delete[]name;
//
//	return 0;
//}
//
//char* getname()
//{
//	char temp[80];
//	cout << "Enter last name: ";
//	cin >> temp;
//	char* pn = new char[strlen(temp) + 1];
//	strcpy(pn, temp);
//
//	return pn;
//}

//指向结构体的指针
//struct inflatable
//{
//	char name[20];
//	float volume;
//	double price;
//
//};
//
//int main(void)
//{
//	using namespace std;
//
//	inflatable* ps = new inflatable;
//
//	cout << "Enter name of inflatable item: ";
//	cin.get(ps->name, 20);
//	cout << "Enter volume in cubic feet: ";
//	cin >> (*ps).volume;
//	cout << "Enter price: $";
//	cin >> ps->price;
//
//	cout << "Name: " << (*ps).name << endl;
//	cout << "Volume: " << ps->volume << endl;
//	cout << "Price: $" << ps->price << endl;
//
//	delete ps;
//
//	return 0;
//}

//int main(void)
//{
//	using namespace std;
//
//	char animal[20] = "bear";
//	const char* bird = "wren";
//	char* ps;
//
//	cout << animal << " and ";
//	cout << bird << "\n";
//
//	cout << "Enter a kind of animal: ";
//	cin >> animal;
//
//	ps = animal;
//	cout << ps << "!\n";
//	cout << "Before using strcpy():\n";
//	cout << animal << " at " << (int*)ps << endl;
//	cout << ps << " at " << (int*)ps << endl;
//
//	ps = new char[strlen(animal) + 1];
//	strcpy(ps, animal);
//	cout << "After using strcpy():\n";
//	/*cout << ps << " at " << (int*)ps << endl;*/
//	cout << animal << " at " << (int*)animal << endl;
//	cout << ps << " at " << (int*)ps << endl;
//
//	delete[] ps;
//
//	return 0;
//}

//int main(void)
//{
//	using namespace std;
//
//	char flower[] = "rose";
//	cout << flower << "s are red" << endl;
//	int arr[] = { 0, 1, 2 };
//	cout << arr << " is " << endl;
//	cout << flower << endl;
//	cout << arr << endl;
//
//	return 0;
//}

//int main(void)
//{
//	using namespace std;
//
//	double wages[3] = { 10000.0, 20000.0, 30000.0 };
//	short stacks[3] = {3, 2, 1};
//
//	//两种获取数组地址的方式
//	double* pw = wages;
//	short* ps = &stacks[0];
//	
//	cout << "pw = " << pw << " , *pw = " << *pw << endl;
//	pw = pw + 1;
//	cout << "add 1 to the pw pointer:\n";
//	cout << "pw = " << pw << " , *pw = " << *pw << endl;
//
//	cout << "ps = " << ps << " , *ps = " << *ps << endl;
//	ps = ps + 1;
//	cout << "add 1 to the pw pointer:\n";
//	cout << "ps = " << ps << " , *ps = " << *ps << "\n\n";
//
//	//使用数组表示法访问两个元素
//	cout << "access two elements with array notation\n";
//	cout << "stacks[0] = " << stacks[0] << " , stacks[1] = " << stacks[1] << endl;
//	//使用指针表示法访问两个元素
//	cout << "access two elements with pointer notation\n";
//	cout << "*stacks = " << *stacks << " , *(stacks + 1) = " << *(stacks + 1) << endl;
//
//	cout << sizeof(wages) << " = size of wages array\n";
//	cout << sizeof(pw) << " = size of pw pointer\n";
//
//
//
//	return 0;
//}

//使用指针访问数组
//int main(void)
//{
//	using namespace std;
//
//	double* p3 = new double[3];
//	p3[0] = 0.2;
//	p3[1] = 0.5;
//	p3[2] = 0.8;
//
//	cout << "p3[1] is " << p3[1] << ".\n";
//	p3 = p3 + 1;
//	cout << "Now p3[0] is " << p3[0] << " and ";
//	cout << "p3[1] is " << p3[1] << ".\n";
//	p3 = p3 - 1;
//	delete[] p3;
//
//	return 0;
//}

//C++,new为指针开辟空间
//int main(void)
//{
//	using namespace std;
//
//	int nights = 1001;
//	int* pt = new int;
//	*pt = 1001;
//
//	cout << "nights value = ";
//	cout << nights << ": location " << &nights << endl;
//	cout << "int ";
//	cout << "value = " << *pt << ": location = " << pt << endl;
//	double* pd = new double;
//	*pd = 10000001.0;
//
//	cout << "double ";
//	cout << "value = " << *pd << ": location = " << pd << endl;
//	cout << "location of pointer pd: " << &pd << endl;
//	cout << "sizeof pt = " << sizeof(pt);
//	cout << ": size of *pt = " << sizeof(*pt) << endl;
//	cout << "size of pd = " << sizeof(pd);
//	cout << ": size of *pd = " << sizeof(*pd) << endl;
//
//	return 0;
//}