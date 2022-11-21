//3.在Useless中添加了啰嗦的赋值运算符，并让以前啰嗦的构造函数和析构函数保持沉默
#include <iostream>

using namespace std;

class Useless
{
private:
	int n;	//number of elements
	char* pc;	//pointer to data
	static int ct;
	void ShowObject() const;
public:
	Useless();
	explicit Useless(int k);
	Useless(int k, char ch);
	Useless(const Useless& f);	//regular copy constructor
	Useless(Useless&& f);
	~Useless();
	Useless operator+(const Useless& f) const;
	Useless& operator=(const Useless& f);	//copy assignment
	Useless& operator=(Useless&& f);
	void ShowData() const;
};

int Useless::ct = 0;

Useless::Useless()
{
	++ct;
	n = 0;
	pc = nullptr;
	//cout << "default constructor called; number of objects: " << ct << endl;
	//ShowObject();
}

Useless::Useless(int k) : n(k)
{
	++ct;
	//cout << "int constructor called, number of objected: " << ct << endl;
	pc = new char[n];
	//ShowObject();
}

Useless::Useless(int k, char ch) : n(k)
{
	++ct;
	//cout << "int, char constructor called; number of objected: " << ct << endl;
	pc = new char[n];
	for (int i = 0; i < n; i++)
		pc[i] = ch;
	//ShowObject();
}

Useless::Useless(const Useless& f) : n(f.n)
{
	++ct;
	//cout << "copy const called; number of objects: " << ct << endl;
	pc = new char[n];
	for (int i = 0; i < n; i++)
		pc[i] = f.pc[i];
	//ShowObject();
}

Useless::Useless(Useless&& f) : n(f.n)
{
	++ct;
	//cout << "move constructor called; number of objects: " << ct << endl;
	pc = f.pc;
	f.pc = nullptr;
	f.n = 0;
	//ShowObject();
}

Useless::~Useless()
{
	//cout << "destructor called; objects left: " << --ct << endl;
	//cout << "deleted object:\n";
	//ShowObject();
	delete[]pc;
}

Useless& Useless::operator=(const Useless& f)
{
	cout << "copy assignment operator called:\n";
	if (this == &f)
		return *this;
	delete[]pc;
	n = f.n;
	pc = new char[n];
	for (int i = 0; i < n; i++)
		pc[i] = f.pc[i];
	return *this;
}

Useless& Useless::operator=(Useless&& f)
{
	cout << "move assgnment operator called:\n";
	if (this == &f)
		return *this;
	delete[]pc;
	n = f.n;
	pc = f.pc;
	f.n = 0;
	f.pc = nullptr;
	return *this;
}

Useless Useless::operator+(const Useless& f) const
{
	//cout << "Entering operator+()\n";
	Useless temp = Useless(n + f.n);
	for (int i = 0; i < n; i++)
		temp.pc[i] = pc[i];
	for (int i = n; i < temp.n; i++)
		temp.pc[i] = f.pc[i - n];
	//cout << "temp object:\n";
	//cout << "Leaving operator+()\n";
	return temp;
}

void Useless::ShowObject() const
{
	cout << "Number of elements: " << n;
	cout << " Data address: " << (void*)pc << endl;
}

void Useless::ShowData() const
{
	if (n == 0)
		cout << "(object empty)";
	else
		for (int i = 0; i < n; i++)
			cout << pc[i];
	cout << endl;
}

int main(void)
{
	Useless one(10, 'x');
	Useless two = one;	//calls copy constructor
	cout << "object one: ";
	one.ShowData();
	cout << "object two: ";
	two.ShowData();
	Useless three, four;
	cout << "three = one\n";
	three = one;	//automatic copy assignment
	cout << "now object three = ";
	three.ShowData();
	cout << "and object one = ";
	one.ShowData();
	cout << "four = one + two\n";
	four = one + two;	//authomatic move assignment
	cout << "now object four = ";
	four.ShowData();
	cout << "four = move(one)\n";
	four = move(one);
	cout << "now object fout = ";
	four.ShowData();
	cout << "and object one = ";
	one.ShowData();


	return 0;
}