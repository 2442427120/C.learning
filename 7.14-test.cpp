#include <iostream>

//int main(void)
//{
//	using namespace std;
//
//	int higgnes = 5;
//	int* pt = &higgnes;
//	
//	cout << "Value of higgnes = " << higgnes << "; Address of higgnes = " << &higgnes << endl;
//	cout << "Value of *pt" << *pt << "; Values of pt = " << pt << endl;
//
//	return 0;
//}

//*运算符 - 解除引用运算符
//int main(void)
//{
//	using namespace std;
//
//	int updates = 6;
//	int* p_updates;
//	p_updates = &updates;
//
//	cout << "Values: updates = " << updates;
//	cout << ", *p_updates = " << *p_updates <<endl;
//
//	cout << "Addresses: &updates = " << &updates;
//	cout << ", p_updates = " << p_updates <<endl;
//
//	*p_updates = *p_updates + 1;
//	cout << "Now updates = " << updates << endl;
//
//	return 0;
//}

//枚举
//enum Color
//{
//	red,
//	orange,
//	yellow,
//	green,
//	blue,
//	purple
//};
//
//int main(void)
//{
//	using namespace std;
//
//	cout << "red = " << red << endl;
//	cout << "orange = " << orange << endl;
//	cout << "yellow = " << yellow << endl;
//	cout << "green = " << green << endl;
//	cout << "blue = " << blue << endl;
//	cout << "purple = " << purple << endl;
//
//	return 0;
//}

//using namespace std;
//
//union toall
//{
//	char a;
//	int b;
//};
//
//int main(void)
//{
//	toall u;
//
//	u.a = 'A';
//
//	cout << "sizeof(toall) = " << sizeof(toall) << endl;
//	cout << "u.a = " << u.a << endl;
//	cout << "u.b = " << u.b << endl;
//
//	return 0;
//}