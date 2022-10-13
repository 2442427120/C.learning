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
//ע�⣬�����νṹʹ���˴�������MI������Ҫ�μ�������������ڹ��캯����ʼ���б��������򡣻���Ҫע���
// �ǣ���Щ����������Ϊ�����ġ�����Լ�һЩhighfink�����Ĵ���( ���磬 ���highfink::ShowAll()ֻ�ǵ���
// fink::ShowAll()��manager::ShowAll(),������Ҫ����abstr_emp::ShowAll()����)��
// ���ṩ�෽����ʵ�֣�����һ�������ж���Щ����в��ԡ�������һ��С�Ͳ��Գ���
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
// Ϊʲôû�ж��帳ֵ�������
// ΪʲôҪ��ShowAll()��SetAll()����Ϊ��ģ�
// ΪʲôҪ��abstr_emp����Ϊ����ࣿ
// Ϊʲôhighfink��û�����ݲ��֣�
// Ϊʲôֻ��Ҫһ��operator<<()�汾��
// ���ʹ������Ĵ����滻����Ľ�β���֣�������ʲô�����
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

