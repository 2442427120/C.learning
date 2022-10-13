#include "abstr_emp.h"

//abstr_emp method
abstr_emp::abstr_emp() : fname("none"), lname("none"), job("none") {}

abstr_emp::abstr_emp(const string& fn, const string& ln, const string& j) : fname(fn), lname(ln), job(j) {}

void abstr_emp::ShowAll() const
{
	cout << "Full name: " << fname << " " << lname << endl;
	cout << "Job: " << job << endl;
}

void abstr_emp::SetAll()
{
	cout << "Enter first name: ";
	getline(cin, fname);
	cout << "Enter last name: ";
	getline(cin, lname);
	cout << "Enter job: ";
	getline(cin, job);
}

ostream& operator<<(ostream& os, const abstr_emp& e)
{
	os << "Full name: " << e.fname << " " << e.lname << endl;
	os << "Job: " << e.job << endl;

	return os;
}

//employee method
employee::employee() : abstr_emp() {}

employee::employee(const string& fn, const string& ln, const string& j) : abstr_emp(fn, ln, j) {}

void employee::ShowAll() const
{
	cout << "Category: employee\n";
	abstr_emp::ShowAll();
}

void employee::SetAll()
{
	cout << "Enter employee's fullname:\n";
	abstr_emp::SetAll();
}

//manager method
manager::manager() : abstr_emp(), inchargeof(0) {}

manager::manager(const string& fn, const string& ln, const string& j, int ico)
	: abstr_emp(fn, ln, j), inchargeof(ico) {}

manager::manager(const abstr_emp& e, int ico) : abstr_emp(e), inchargeof(ico) {}

//派生类的复制构造函数，其继承的基类的数据部分需要调用基类的构造函数来初始化继承而来的数据
manager::manager(const manager& m) : abstr_emp(m)	
{
	inchargeof = m.inchargeof;
	/*cout << "Enter manager's fullname:\n";
	abstr_emp::SetAll();
	cout << "Enter inchargeof:";
	cin >> inchargeof;
	while (cin.get() != '\n');*/
}

void manager::ShowAll() const
{
	cout << "Category: manager\n";
	abstr_emp::ShowAll();
	cout << "Inchargeof: " << inchargeof << endl;
}

void manager::SetAll()
{
	cout << "Enter manager's fullname:\n";
	abstr_emp::SetAll();
	cout << "Enter inchargeof:";
	cin >> inchargeof;
	while (cin.get() != '\n');
}

//fink method
fink::fink() : abstr_emp(), reportsto("none") {}

fink::fink(const string& fn, const string& ln, const string& j, const string& rpo)
	: abstr_emp(fn, ln, j), reportsto(rpo) {}

fink::fink(const abstr_emp& e, const string& rpo) : abstr_emp(e), reportsto(rpo) {}

fink::fink(const fink& f) : abstr_emp(f)
{
	reportsto = f.reportsto;
	/*cout << "Enter fink's fullname:\n";
	abstr_emp::SetAll();
	cout << "Enter reportsto: ";
	getline(cin, reportsto);*/
}

void fink::ShowAll() const
{
	cout << "Category: fink\n";
	abstr_emp::ShowAll();
	cout << "Reportsto: " << reportsto << endl;
}

void fink::SetAll()
{
	cout << "Enter fink's fullname:\n";
	abstr_emp::SetAll();
	cout << "Enter reportsto: ";
	getline(cin, reportsto);
}

//highfink method
highfink::highfink() {}

highfink::highfink(const string& fn, const string& ln, const string& j, const string& rpo, int ico)
	: abstr_emp(fn, ln, j), fink(fn, ln, j, rpo), manager(fn, ln, j, ico) {}

highfink::highfink(const abstr_emp& e, const string& rpo, int ico)
	: abstr_emp(e), fink(e, rpo), manager(e, ico) {}

highfink::highfink(const fink& f, int ico) : abstr_emp(f), fink(f), manager(f, ico) {}

highfink::highfink(const manager& m, const string& rpo) : abstr_emp(m), fink(m, rpo), manager(m) {}

highfink::highfink(const highfink& hf) : abstr_emp(hf), manager(hf), fink(hf)
{
	/*cout << "Enter highfink's fullname:\n";
	abstr_emp::SetAll();
	getline(cin, ReportsTo());
	cin >> InChargeOf();
	while (cin.get() != '\n');*/
	//fink::SetAll();
	//manager::SetAll();
}

void highfink::ShowAll() const
{
	cout << "Category: highfink\n";
	abstr_emp::ShowAll();
	//调用const string ReportsTo() const { return reportsto; }来显示从fink处继承的reportsto值
	//调用int InChargeOf() const { return inchargeof; }来显示inchargeof值
	cout << "reportsto: " << fink::ReportsTo() << ", inchargeof: " << manager::InChargeOf() << endl;
	//fink::ShowAll();
	//manager::ShowAll();
}

void highfink::SetAll()
{
	cout << "Enter highfink's fullname:\n";
	/*cin.get();*/
	abstr_emp::SetAll();
	cout << "Enter reportsto: ";
	//调用string& ReportsTo() { return reportsto; }为从fink类中继承的reportsto成员进行自定义赋值
	getline(cin, ReportsTo());	
	cout << "Enter inchargeof: ";
	cin >> InChargeOf();	//调用int& InChargeof() { return inchargeof; }函数
	while (cin.get() != '\n');
	/*getline(cin, InChargeOf());*/
	//fink::SetAll();
	//manager::SetAll();
}

