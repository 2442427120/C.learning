//定义并使用了Useless类，这个类动态分配内存，并包含常规复制构造函数和移动构造函数，其中移动构造函数使用了移
//动语义和右值引用。为演示流程，构造函数和析构函数都比较啰嗦，同时Useless类还使用了一个静态变量来跟踪对象数
//量。另外，省略了一些重要方法，如赋值运算符。
//#include <iostream>
//
//using namespace std;
//
//class Useless
//{
//private:
//	int n;	//number of elements
//	char* pc;	//pointer to data
//	static int ct;
//	void ShowObject() const;
//public:
//	Useless();
//	explicit Useless(int k);
//	Useless(int k, char ch);
//	Useless(const Useless& f);	//regular copy constructor
//	Useless(Useless&& f);
//	~Useless();
//	Useless operator+(const Useless& f) const;
//	void ShowData() const;
//};
//
//int Useless::ct = 0;
//
//Useless::Useless()
//{
//	++ct;
//	n = 0;
//	pc = nullptr;
//	cout << "default constructor called; number of objects: " << ct << endl;
//	ShowObject();
//}
//
//Useless::Useless(int k) : n(k)
//{
//	++ct;
//	cout << "int constructor called, number of objected: " << ct << endl;
//	pc = new char[n];
//	ShowObject();
//}
//
//Useless::Useless(int k, char ch) : n(k)
//{
//	++ct;
//	cout << "int, char constructor called; number of objected: " << ct << endl;
//	pc = new char[n];
//	for (int i = 0; i < n; i++)
//		pc[i] = ch;
//	ShowObject();
//}
//
//Useless::Useless(const Useless& f) : n(f.n)
//{
//	++ct;
//	cout << "copy const called; number of objects: " << ct << endl;
//	pc = new char[n];
//	for (int i = 0; i < n; i++)
//		pc[i] = f.pc[i];
//	ShowObject();
//}
//
//Useless::Useless(Useless&& f) : n(f.n)
//{
//	++ct;
//	cout << "move constructor called; number of objects: " << ct << endl;
//	pc = f.pc;
//	f.pc = nullptr;
//	f.n = 0;
//	ShowObject();
//}
//
//Useless::~Useless()
//{
//	cout << "destructor called; objects left: " << --ct << endl;
//	cout << "deleted object:\n";
//	ShowObject();
//	delete[]pc;
//}
//
//Useless Useless::operator+(const Useless& f) const
//{
//	cout << "Entering operator+()\n";
//	Useless temp = Useless(n + f.n);
//	for (int i = 0; i < n; i++)
//		temp.pc[i] = pc[i];
//	for (int i = n; i < temp.n; i++)
//		temp.pc[i] = f.pc[i - n];
//	cout << "temp object:\n";
//	cout << "Leaving operator+()\n";
//	return temp;
//}
//
//void Useless::ShowObject() const
//{
//	cout << "Number of elements: " << n;
//	cout << " Data address: " << (void*)pc << endl;
//}
//
//void Useless::ShowData() const
//{
//	if (n == 0)
//		cout << "(object empty)";
//	else
//		for (int i = 0; i < n; i++)
//			cout << pc[i];
//	cout << endl;
//}
//
//int main(void)
//{
//	Useless one(10, 'x');
//	Useless two = one;	//calls copy constructor
//	Useless three(20, 'o');
//	Useless four(one + three);	//calls operator+(), move constructor
//	cout << "object one: ";
//	one.ShowData();
//	cout << "object two: ";
//	two.ShowData();
//	cout << "object three: ";
//	three.ShowData();
//	cout << "object four: ";
//	four.ShowData();
//
//	return 0;
//}