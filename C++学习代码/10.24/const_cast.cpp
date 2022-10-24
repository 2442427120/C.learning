//3.const_cast的演示与用途

//#include <iostream>
//
//using namespace std;
//
//int main(void)
//{
//	int a = 10;
//	cout << a << endl;
//
//	const int* p1 = &a;
//	//*p1 = 20;	//此条语句不合法，因为*p1被const限定,无法修改其里面的值
//	//利用const_cast运算符将p1修改成int*,并用int* p2指向它，这样就可以将*p1所指向的值修改
//	int* p2 = const_cast<int*> (p1);	
//	*p2 = 20;
//	cout << *p2 << endl;
//
//	return 0;
//}