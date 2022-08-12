#include <iostream>

//�ؼ���decltype
//��һ�������expression��һ��û����������ı�ʶ������var��������ñ�ʶ����������ͬ:
// decltype(expression) var;
double x = 5.5;
double y = 7.9;
double& rx = x;
const double* pd;
decltype(x) w; // w is type double
decltype(rx) u = y; //u is type double &
decltype(pd) v; //v is type const double*

//�ڶ��������expression��һ����������var�������뺯���ķ���������ͬ
long indeed(int);
decltype(indeed(3)) m; //m is type long

//�����������expression���������������ı�ʶ������varΪָ�������͵�����
double xx = 4.4;
decltype((xx)) r2 = xx; // r2 is double&
decltype(xx) w = xx; // w is double;

//���Ĳ������ǰ��������������㣬��var��������erpression��������ͬ
int j = 3;
int& k = j;
int& n = j;
decltype(j + 6) i1; // i1 type int
decltype(100L) i2; //i2 type long
decltype(k + n) i3; //i3 type int
//��Ȼk+n�������ã������ʽk+n�������ã���������int�ĺͣ��������Ϊint

//��һ�ֺ��������﷨ - ���÷�������
template <typename T1, typename T2>
? type ? gt(T1 x, T2 y)
{
	...
	return x + y;
}
//�ڴ��������޷�Ԥ֪��x��y��ӵõ������͡�Ҳ�޷���������������Ϊdecltype(x + y)����Ϊ��ʱ��δ����x��y������
//���ǲ����������ڡ�Ϊ��������⣬���Խ���������������������ͣ�
auto h(int x, float y) -> double;
//�⽫���������Ƶ��˲����������档->double����Ϊ���÷������͡�����auto��һ��ռλ������ʾ���÷��������ṩ��
//���ͣ�ͨ����decltype���ʹ�ã�����Ը�gt()ָ���������ͣ�������ʾ��
template <typename T1, typename T2>
auto gt(T1 x, T2 y) -> decltype(x + y)
{
	...
	return x + y;
}




//�����Զ���ѡ�� - ͨ����д���ʵĺ�������
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

//��ȫƥ������ƥ�� - ������������ʾ�������ݵ�ģ�嶨�塣��һ������(ģ��A)������Ϊ�������������а�����Ҫ��
//ʾ�����ݣ��ڶ�������(ģ��B)��������Ԫ��Ϊָ�룬ָ��Ҫ��ʾ������
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
////��ȫƥ��
//template <typename T>
//void ShowArray(T arr[], int n)
//{
//	cout << "Template A:\n";
//
//	for (int i = 0; i < n; i++)
//		cout << arr[i] << ' ';
//	cout << endl;
//}
////���ƥ��
//template <typename T>
//void ShowArray(T* arr[], int n)
//{
//	cout << "Template B:\n";
//
//	for (int i = 0; i < n; i++)
//		cout << *arr[i] << ' ';
//	cout << endl;
//}

//��ʾ���廯������ - �޷�ʹ�����ص�ģ������ɶԽṹ�岿�����ݵĽ���(�������ṹ��ĺ����
//��˲�����ʾ���廯����ʾ���廯�����ڳ���ģ�壬����ģ�庯�������ھ��廯�ͳ���ģ��
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
//void Swap(int a, int b)	//���廯�����ڳ���ģ�壬����ģ�庯�������ھ��廯�ͳ���ģ��
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

//ģ������� - ���Swap()����������int���ͺ�double�Ĳ������Լ�ʹ�����������������������
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
////����int���ͻ�double���Ͳ�����ģ�庯��
//template <typename T>
//void Swap(T& a, T& b)
//{
//	T temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
////�����������ݵ����ص�ģ��
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


//����ģ������� - ���Swap()������������int���͵Ĳ�����������double���͵Ĳ���
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

//�������ص����� - left()�������ֱ���ʾ�ַ�����ǰnλ�����ֵ�ǰnλ
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
//	//�����ݵ�����Ϊ0����Ҫȡ�����ֵĸ���Ϊ0����ֱ�ӷ���0
//	if (num == 0 || n == 0)
//		return 0;
//	//����λ��
//	while (n /= 10)
//		digits++;
//	//��λ������Ҫȡ�ĸ���ʱ
//	if (digits > ct)
//	{
//		ct = digits - ct;
//		while (ct--)
//			num /= 10;
//		return num;
//	}
//	else //Ҫȡ��λ������λ������ֱ�ӷ���num�����
//		return num;
//}