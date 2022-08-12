#include <iostream>

//关键字decltype
//第一步，如果expression是一个没有括号括起的标识符，则var的类型与该标识符的类型相同:
// decltype(expression) var;
double x = 5.5;
double y = 7.9;
double& rx = x;
const double* pd;
decltype(x) w; // w is type double
decltype(rx) u = y; //u is type double &
decltype(pd) v; //v is type const double*

//第二步：如果expression是一个函数，则var的类型与函数的返回类型相同
long indeed(int);
decltype(indeed(3)) m; //m is type long

//第三步：如果expression是用括号括起来的标识符，则var为指向其类型的引用
double xx = 4.4;
decltype((xx)) r2 = xx; // r2 is double&
decltype(xx) w = xx; // w is double;

//第四步：如果前面的条件都不满足，则var的类型与erpression的类型相同
int j = 3;
int& k = j;
int& n = j;
decltype(j + 6) i1; // i1 type int
decltype(100L) i2; //i2 type long
decltype(k + n) i3; //i3 type int
//虽然k+n都是引用，但表达式k+n不是引用；它是两个int的和，因此类型为int

//另一种函数声明语法 - 后置返回类型
template <typename T1, typename T2>
? type ? gt(T1 x, T2 y)
{
	...
	return x + y;
}
//在此例子中无法预知将x和y相加得到的类型。也无法将返回类型设置为decltype(x + y)，因为此时还未声明x和y参数，
//它们不在作用域内。为解决此问题，可以将函数声明定义成如下类型：
auto h(int x, float y) -> double;
//这将返回类型移到了参数声明后面。->double被称为后置返回类型。其中auto是一个占位符，表示后置返回类型提供的
//类型，通过与decltype结合使用，便可以给gt()指定返回类型，如下所示：
template <typename T1, typename T2>
auto gt(T1 x, T2 y) -> decltype(x + y)
{
	...
	return x + y;
}




//创建自定义选择 - 通过编写合适的函数调用
//using namespace std;
//
//template <typename T>
//T lesser(T a, T b)
//{
//	return a < b ? a : b;
//}
//
//int lesser(int a, int b)
//{
//	a = a < 0 ? -a : a;
//	b = b < 0 ? -b : b;
//
//	return a < b ? a : b;
//}
//
//int main(void)
//{
//	int m = 20;
//	int n = -30;
//	double x = 15.5;
//	double y = 25.9;
//
//	cout << lesser(m, n) << endl;
//	cout << lesser(x, y) << endl;
//	cout << lesser<>(m, n) << endl;
//	cout << lesser<int>(x, y) << endl;
//
//	return 0;
//}

//完全匹配和最佳匹配 - 有两个用来显示数组内容的模板定义。第一个定义(模板A)假设作为参数传递数组中包含了要显
//示的数据；第二个定义(模板B)假设数组元素为指针，指向要显示的数据
//using namespace std;
//
//template <typename T>
//void ShowArray(T arr[], int n);
//
//template <typename T>
//void ShowArray(T* arr[], int n);
//
//struct debts
//{
//	char name[50];
//	double amount;
//};
//
//int main(void)
//{
//	int things[6] = { 13, 31, 103, 301, 310, 130 };
//	struct debts mr_E[3] =
//	{
//		{"Rock", 2400.0},
//		{"Jack", 1300.0},
//		{"Rose", 1800.0}
//	};
//	double* pd[3];
//
//	for (int i = 0; i < 3; i++)
//		pd[i] = &mr_E[i].amount;
//
//	cout << "Listing Mr.E's count of things:\n";
//	ShowArray(things, 6);
//	cout << "Listing Mr.E's debts:\n";
//	ShowArray(pd, 3);
//
//	return 0;
//}
////完全匹配
//template <typename T>
//void ShowArray(T arr[], int n)
//{
//	cout << "Template A:\n";
//
//	for (int i = 0; i < n; i++)
//		cout << arr[i] << ' ';
//	cout << endl;
//}
////最佳匹配
//template <typename T>
//void ShowArray(T* arr[], int n)
//{
//	cout << "Template B:\n";
//
//	for (int i = 0; i < n; i++)
//		cout << *arr[i] << ' ';
//	cout << endl;
//}

//显示具体化的例子 - 无法使用重载的模板来完成对结构体部分内容的交换(仅交换结构体的后两项，
//因此采用显示具体化；演示具体化优先于常规模板，而非模板函数优先于具体化和常规模板
//using namespace std;
//
//struct job
//{
//	char name[40];
//	double salary;
//	int floor;
//};
//
//
//template <typename T>
//void Swap(T& a, T& b);
//
//template <> void Swap<job>(job& j1, job& j2);
//
//void Swap(int a, int b);
//
//void Show(job& j);
//
//int main(void)
//{
//	int i = 10;
//	int j = 20;
//
//	cout << "i, j = " << i << ", " << j << endl;
//	cout << "Using copiler-geneated int swapper:\n";
//	Swap(i, j);
//	cout << "Now i, j = " << i << ", " << j << endl;
//
//	job sue = { "Susan Yaffee", 73000.60, 7 };
//	job sidney = { "Sidney Taffee", 78060.72, 9 };
//	cout << "Before job swapping:\n";
//	Show(sue);
//	Show(sidney);
//	Swap(sue, sidney);
//	cout << "After job swapping:\n";
//	Show(sue);
//	Show(sidney);
//
//	return 0;
//}
//
//void Swap(int a, int b)	//具体化优先于常规模板，而非模板函数优先于具体化和常规模板
//{
//	cout << "hello world i, j = " << a << ", " << b << endl;
//}
//
//template <typename T>
//void Swap(T& a, T& b)
//{
//	T temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//
//template <> void Swap<job>(job& j1, job& j2)
//{
//	double t1;
//	int t2;
//
//	t1 = j1.salary;
//	j1.salary = j2.salary;
//	j2.salary = t1;
//
//	t2 = j1.floor;
//	j1.floor = j2.floor;
//	j2.floor = t2;
//}
//
//void Show(job& j)
//{
//	cout << j.name << ": $" << j.salary << " on floor " << j.floor << endl;
//}

//模板的重载 - 设计Swap()函数来交换int类型和double的参数，以及使用其重载来交换数组的内容
//using namespace std;
//
//const int Lim = 8;
//
//template <typename T>
//void Swap(T& a, T& b);
//
//template <typename T>
//void Swap(T a[], T b[], int n);
//
//void show(int a[], int n);
//
//int main(void)
//{
//	int i = 10;
//	int j = 20;
//
//	cout << "i, j = " << i << ", " << j << endl;
//	Swap(i, j);
//	cout << "Now i, j = " << i << ", " << j << endl;
//
//	double x = 24.5;
//	double y = 81.75;
//
//	cout << "x, y = " << x << ", " << y << endl;
//	Swap(x, y);
//	cout << "Now x, y = " << x << ", " << y << endl;
//
//	int d1[Lim] = { 0, 7, 0, 4, 1, 7, 7, 6 };
//	int d2[Lim] = { 0, 7, 2, 0, 1, 9, 6, 9 };
//
//	show(d1, Lim);
//	show(d2, Lim);
//	Swap(d1, d2, Lim);
//	cout << "Swapped arrays:\n";
//	show(d1, Lim);
//	show(d2, Lim);
//
//	return 0;
//}
////交换int类型或double类型参数的模板函数
//template <typename T>
//void Swap(T& a, T& b)
//{
//	T temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
////交换数组内容的重载的模板
//template <typename T>
//void Swap(T a[], T b[], int n)
//{
//	T temp;
//
//	for (int i = 0; i < Lim; i++)
//	{
//		temp = a[i];
//		a[i] = b[i];
//		b[i] = temp;
//	}
//}
//
//void show(int a[], int n)
//{
//	for (int i = 0; i < n; i++)
//		cout << a[i] << " ";
//	cout << endl;
//}


//函数模板的例子 - 设计Swap()函数交换两个int类型的参数，和两个double类型的参数
//using namespace std;
//
//template <typename T>	//or class T
//void Swap(T& a, T& b);
//
//int main(void)
//{
//	int i = 10;
//	int j = 20;
//
//	cout << "i, j = " << i << ", " << j << ".\n";
//	Swap(i, j);
//	cout << "Now i, j = " << i << ", " << j << ".\n";
//
//	double x = 24.5;
//	double y = 81.7;
//
//	cout << "x, y = " << x << ", " << y << ".\n";
//	Swap(x, y);
//	cout << "Now x, y = " << x << ", " << y << ".\n";
//
//	return 0;
//}
//
//template <typename T>
//void Swap(T& a, T& b)
//{
//	T temp;
//	temp = a;
//	a = b;
//	b = temp;
//}

//函数重载的例子 - left()函数，分别显示字符串的前n位和数字的前n位
//using namespace std;
//
//char* left(const char* str, int n);
//unsigned long left(unsigned long num, unsigned int ct);
//
//int main(void)
//{
//	const char* trip = "Hawaii!!";
//	unsigned long n = 12345678;
//	int i;
//	char* temp;
//
//	for (i = 0; i < 10; i++)
//	{
//		cout << left(n, i) << endl;
//		temp = left(trip, i);
//		cout << temp << endl;
//		delete[]temp;
//	}
//
//	return 0;
//}
//
//char* left(const char* str, int n)
//{
//	int i;
//
//	if (n < 0)
//		n = 0;
//
//	int m = 0;
//	while (m <= n && str[m] != '\0')
//		m++;
//
//	char* p = new char[m + 1];
//	for (i = 0; i < m; i++)
//		p[i] = str[i];
//
//	p[i] = '\0';
//
//	return p;
//}
//
//unsigned long left(unsigned long num, unsigned int ct)
//{
//	unsigned digits = 1;
//	unsigned long n = num;
//
//	//若传递的数字为0或者要取的数字的个数为0，则直接返回0
//	if (num == 0 || n == 0)
//		return 0;
//	//计算位数
//	while (n /= 10)
//		digits++;
//	//当位数大于要取的个数时
//	if (digits > ct)
//	{
//		ct = digits - ct;
//		while (ct--)
//			num /= 10;
//		return num;
//	}
//	else //要取的位数大于位数，则直接返回num这个数
//		return num;
//}