//4.static_cast第一种用法

//#include <iostream>
//
//using namespace std;
//
//int main(void)
//{
//	//没有经过C和C++语法的强制类型转换，因为10/3取的是整数部分，即使设置x1为double类型，实际显示的x1也是整形
//	double x1 = 10 / 3;
//	cout << "x1 = " << x1 << endl;
//	//经过C语法的强制类型转化，将10转换为double类型，这样x2 = 10/3将会显示成double类型的值,x2为double类型
//	double x2 = (double)10 / 3;
//	cout << "x2 = " << x2 << endl;
//	//经过C++语法的强制类型转化，效果同C语言语法的效果相同，但更符合C++规定
//	double x3 = static_cast<double>(10) / 3;
//	cout << "x3 = " << x3 << endl;
// 
//	return 0;
//}