//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class abstr_emp
//{
//private:
//	string fname;
//	string lname;
//	string job;
//public:
//	abstr_emp();
//	abstr_emp(const string& fn, const string& ln, const string& j);
//	virtual void ShowAll() const;	// lable and shows all data
//	virtual void SetAll();			// prompts user for values
//	friend ostream& operator<<(ostream& os, const abstr_emp& e);
//	// just displays first and last name
//	virtual ~abstr_emp() = 0;
//};
//
//class employee : public abstr_emp
//{
//public:
//	employee();
//	employee(const string& fn, const string& ln, const string& j);
//	virtual void ShowAll() const;
//	virtual void SetAll();
//};
//
//class manager : virtual public abstr_emp
//{
//private:
//	int inchargeof; // number of abstr_emp managed
//protected:
//	int InChargeOf() const { return inchargeof; }	// output
//	int& InChargeOf() { return inchargeof; }		// input
//public:
//	manager();
//	manager(const string& fn, const string& ln, const string& j, int ico);
//	manager(const abstr_emp& e, int ico);
//	manager(const manager& m);
//	virtual void ShowAll() const;
//	virtual void SetAll();
//};
//
//class fink : virtual public abstr_emp
//{
//private:
//	string reportsto;	// to whom fink reports
//protected:
//	const string ReportsTo() const { return reportsto; }
//	string& ReportsTo() { return reportsto; }
//public:
//	fink();
//	fink(const string& fn, const string& ln, const string& j, const string rpo);
//	fink(const abstr_emp& e, const string& rpo);
//	fink(const fink& f);
//	virtual void ShowAll() const;
//	virtual void SetAll();
//};
//
//class highfink : public manager, public fink
//{
//	highfink();
//	highfink(const string& fn, const string& ln, const string& j, const string& rpo, int ico);
//	highfink(const abstr_emp& e, const string& rpo, int ico);
//	highfink(const fink& f, int ico);
//	highfink(const manager& m, const string& rpo);
//	highfink(const highfink& hf);
//	virtual void ShowAll() const;
//	virtual void SetAll();
//};
//注意，该类层次结构使用了带虚基类的MI，所以要牢记这种情况下用于构造函数初始化列表的特殊规则。还需要注意的
// 是，有些方法被声明为保护的。这可以简化一些highfink方法的代码( 例如， 如果highfink::ShowAll()只是调用
// fink::ShowAll()和manager::ShowAll(),则它将要调用abstr_emp::ShowAll()两次)。
// 请提供类方法的实现，并在一个程序中对这些类进行测试。下面是一个小型测试程序：
//#include <iostream>
//#include "abstr_emp.h"
//
//int main(void)
//{
//	employee em("Trip", "Harris", "Thumper");
//	cout << em << endl;
//	em.ShowAll();
//	manager ma("Amorphia", "Spindregon", "Nuancer", 5);
//	cout << ma << endl;
//	ma.ShowAll();
//
//	fink fi("Matt", "Oggs", "Oiler", "Juno Barr");
//	cout << fi << endl;
//	fi.ShowAll();
//	highfink hf(ma, "Curly Kew");
//	hf.ShowAll();
//	cout << "Press a key for next phass:\n";
//	cin.get();
//	highfink hf2;
//	hf2.SetAll();
//
//	cout << "Using an abstr_emp* pointer:\n";
//	abstr_emp* tri[4] = { &em, &fi, &hf, &hf2 };
//	for (int i = 0; i < 4; i++)
//		tri[i]->ShowAll();
//
//	return 0;
//}
// 为什么没有定义赋值运算符？
// 为什么要讲ShowAll()和SetAll()定义为虚的？
// 为什么要将abstr_emp定义为虚基类？
// 为什么highfink类没有数据部分？
// 为什么只需要一个operator<<()版本？
// 如果使用下面的代码替换程序的结尾部分，将发生什么情况？
// abstr_emp tri[4] = { em, fi, hf, hf2 };
// for (int i = 0; i < 4; i++)
//		tri[4].ShowAll();

#include <iostream>
#include "abstr_emp.h"

int main(void)
{
	employee em("Trip", "Harris", "Thumper");
	cout << em;
	em.ShowAll();

	cout << endl;
	manager ma("Amorphia", "Spindregon", "Nuancer", 5);
	cout << ma;
	ma.ShowAll();

	cout << endl;
	fink fi("Matt", "Oggs", "Oiler", "Juno Barr");
	cout << fi;
	fi.ShowAll();

	cout << endl;
	highfink hf(ma, "Curly Kew");
	hf.ShowAll();
	cout << "\nPress a key for next phass:\n";
	cin.get();
	highfink hf2;
	hf2.SetAll();

	cout << "Using an abstr_emp* pointer:\n";
	abstr_emp* tri[4] = { &em, &fi, &hf, &hf2 };
	for (int i = 0; i < 4; i++)
		tri[i]->ShowAll();

	return 0;
}

