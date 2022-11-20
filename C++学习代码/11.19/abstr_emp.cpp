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

void abstr_emp::GetAll(ifstream& ifs)
{
	getline(ifs, fname);
	getline(ifs, lname);
	getline(ifs, job);
}

void abstr_emp::writeall(ofstream& ofs)
{
	ofs <<  fname << endl <<  lname << endl;
	ofs <<  job << endl;

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

void employee::GetAll(ifstream& ifs)
{
	abstr_emp::GetAll(ifs);
}

void employee::writeall(ofstream& ofs)
{
	ofs << Employee << endl;
	abstr_emp::writeall(ofs);
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

void manager::GetAll(ifstream& ifs)
{
	abstr_emp::GetAll(ifs);
	ifs >> inchargeof;
}

void manager::writeall(ofstream& ofs)
{
	ofs << Manager << endl;
	abstr_emp::writeall(ofs);
	ofs <<  inchargeof << endl;

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

void fink::GetAll(ifstream& ifs)
{ 
	abstr_emp::GetAll(ifs);
	getline(ifs, reportsto);
}

void fink::writeall(ofstream& ofs)
{
	ofs << Fink << endl;
	abstr_emp::writeall(ofs);
	ofs <<  reportsto << endl;
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

void highfink::GetAll(ifstream& ifs)
{
	abstr_emp::GetAll(ifs);
	getline(ifs, ReportsTo());
	ifs >> manager::InChargeOf();
	ifs.get();
}

void highfink::writeall(ofstream& ofs)
{
	ofs << Highfink << endl;
	abstr_emp::writeall(ofs);
	ofs <<  fink::ReportsTo() << endl <<  manager::InChargeOf() << endl;
}



//#include<iostream>
//#include"abstr_emp.h"
//#include<fstream>
//using namespace std;
//
////abstr_emp
//abstr_emp::abstr_emp()
//{
//    fname = lname = job = "NULL";
//}
//
//abstr_emp::abstr_emp(const std::string& fn, const std::string& ln,
//    const std::string& j) :fname(fn), lname(ln), job(j)
//{
//
//}
//
//void abstr_emp::ShowAll()const
//{
//    cout << "Name: " << lname << " " << fname << endl;
//    cout << "Job: " << job << endl;
//}
//
//void abstr_emp::SetAll()
//{
//    cout << "Enter firstname:\n";
//    getline(cin, fname);
//    cout << "Enter lastname:\n";
//    getline(cin, lname);
//    cout << "Enter job:\n";
//    getline(cin, job);
//}
//
//void abstr_emp::GetAll(std::ifstream& ifs)
//{
//    getline(ifs, lname);
//    getline(ifs, fname);
//    getline(ifs, job);
//}
//
//void abstr_emp::WriteAll(std::ofstream& ofs)
//{
//    ofs << lname << endl << fname << endl << job << endl;
//}
//
//std::ostream& operator<<(std::ostream& os, const abstr_emp& e)
//{
//    os << "Name: " << e.lname << " " << e.fname << endl;
//    os << "Job: " << e.job << endl;
//    return os;
//}
//
//abstr_emp::~abstr_emp()
//{
//
//}
//
////employee
//employee::employee() :abstr_emp()
//{
//
//}
//
//employee::employee(const std::string& fn, const std::string& ln,
//    const std::string& j) : abstr_emp(fn, ln, j)
//{
//
//}
//
//void employee::ShowAll()const
//{
//    cout << "Employee:\n";
//    abstr_emp::ShowAll();
//}
//
//void employee::SetAll()
//{
//    cout << "Enter employee information:\n";
//    abstr_emp::SetAll();
//}
//
//void employee::GetAll(std::ifstream& ifs)
//{
//    abstr_emp::GetAll(ifs);
//}
//
//void employee::WriteAll(std::ofstream& ofs)
//{
//    ofs << Employee << endl;
//    abstr_emp::WriteAll(ofs);
//}
//
////manager
//manager::manager() :abstr_emp()
//{
//
//}
//
//manager::manager(const std::string& fn, const std::string& ln,
//    const std::string& j, int ico) :abstr_emp(fn, ln, j), inchargeof(ico)
//{
//
//}
//
//manager::manager(const abstr_emp& e, int ico) : abstr_emp(e), inchargeof(ico)
//{
//
//}
//
//manager::manager(const manager& m) :abstr_emp(m)
//{
//    inchargeof = m.inchargeof;
//}
//
//void manager::ShowAll()const
//{
//    cout << "Manager:\n";
//    abstr_emp::ShowAll();
//    cout << "Inchargeof: " << inchargeof << endl;
//}
//
//void manager::SetAll()
//{
//    cout << "Enter manager information:\n";
//    abstr_emp::SetAll();
//    cout << "Enter inchargeof:\n";
//    cin >> inchargeof;
//}
//
//void manager::GetAll(std::ifstream& ifs)
//{
//    abstr_emp::GetAll(ifs);
//    ifs >> inchargeof;
//}
//
//void manager::WriteAll(std::ofstream& ofs)
//{
//    ofs << Manager << endl;
//    abstr_emp::WriteAll(ofs);
//    ofs << inchargeof << endl;
//}
//
////fink
//fink::fink() :abstr_emp()
//{
//    reportsto = "NULL";
//}
//
//fink::fink(const fink& e) :abstr_emp(e)
//{
//    reportsto = e.reportsto;
//}
//
//void fink::ShowAll()const
//{
//    cout << "Fink:\n";
//    abstr_emp::ShowAll();
//    cout << "Reportsto: " << reportsto << endl;
//}
//
//void fink::SetAll()
//{
//    cout << "Enter fink information:\n";
//    abstr_emp::SetAll();
//    cout << "Enter reportsto:\n";
//    getline(cin, reportsto);
//}
//
//void fink::GetAll(std::ifstream& ifs)
//{
//    abstr_emp::GetAll(ifs);
//    getline(ifs, reportsto);
//}
//
//void fink::WriteAll(std::ofstream& ofs)
//{
//    ofs << Fink << endl;
//    abstr_emp::WriteAll(ofs);
//    ofs << reportsto << endl;
//}
//
////highfink
//void highfink::ShowAll() const
//{
//    cout << "Highfink:\n";
//    abstr_emp::ShowAll();
//    cout << "Inchargeof: " << InChargeOf() << endl;
//    cout << "Reportsto: " << ReportsTo() << endl;
//}
//
//void highfink::SetAll()
//{
//    cout << "Highfink information:\n";
//    abstr_emp::SetAll();
//    cout << "Enter inchargeof:\n";
//    cin >> manager::InChargeOf();
//    cin.get();
//    cout << "Enter reportsto:\n";
//    getline(cin, fink::ReportsTo());
//}
//
//void highfink::GetAll(std::ifstream& ifs)
//{
//    abstr_emp::GetAll(ifs);
//    ifs >> manager::InChargeOf();
//    //ifs >> fink::ReportsTo(); //只能读取空格之前的字符串
//    ifs.get();
//    getline(ifs, fink::ReportsTo());
//}
//
//void highfink::WriteAll(std::ofstream& ofs)
//{
//    ofs << Highfink << endl;
//    abstr_emp::WriteAll(ofs);
//    ofs << manager::InChargeOf() << endl
//        << fink::ReportsTo() << endl;
//}
