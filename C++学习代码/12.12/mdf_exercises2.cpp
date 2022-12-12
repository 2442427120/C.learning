//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Cpmv
//{
//public:
//	struct Info
//	{
//		string qcode;
//		string zcode;
//	};
//private:
//	Info* pi;
//public:
//	Cpmv();
//	Cpmv(string q, string z);
//	Cpmv(const Cpmv& cp);
//	Cpmv(Cpmv&& mv);
//	~Cpmv();
//	Cpmv& operator=(const Cpmv& cp);
//	Cpmv& operator=(Cpmv&& mv);
//	Cpmv operator+(const Cpmv& obj) const;
//	void Display() const;
//};
//
//Cpmv::Cpmv()
//{
//	pi = nullptr;
//	cout << "Ĭ�ϵ��޲ι��캯��������!\n";
//}
//
//Cpmv::Cpmv(string q, string z)
//{
//	pi = new Info;
//	pi->qcode = q;
//	pi->zcode = z;
//	cout << "�вι��캯��������!\n";
//}
//
//Cpmv::Cpmv(const Cpmv& cp)
//{
//	pi = new Info;
//	pi->qcode = cp.pi->qcode;
//	pi->zcode = cp.pi->zcode;
//	cout << "���ƹ��캯��������!\n";
//}
//
//Cpmv::Cpmv(Cpmv&& mv)
//{
//	pi = mv.pi;
//	mv.pi = nullptr;
//	cout << "�ƶ����ƹ��캯��������!\n";
//}
//
//Cpmv::~Cpmv()
//{
//	delete pi;
//	cout << "��������������!\n";
//}
//
//Cpmv& Cpmv::operator=(const Cpmv& cp)
//{
//	if (this == &cp)
//		return *this;
//	delete pi;
//	pi = new Info;
//	pi->qcode = cp.pi->qcode;
//	pi->zcode = cp.pi->zcode;
//	cout << "=��������غ���������!\n";
//
//	return *this;
//}
//
//Cpmv& Cpmv::operator=(Cpmv&& mv)
//{
//	if (this == &mv)
//		return *this;
//	pi = mv.pi;
//	mv.pi = nullptr;
//	cout << "�ƶ�=��������غ���������!\n";
//
//	return *this;
//}
//
//Cpmv Cpmv::operator+(const Cpmv& obj) const
//{
//	/*Cpmv temp;
//
//	temp.pi = new Info;
//	temp.pi->qcode = pi->qcode + obj.pi->qcode;
//	temp.pi->zcode = pi->zcode + obj.pi->zcode;
//
//	return temp;
//	delete temp.pi;*/
//	cout << "+��������غ���������!\n";
//	return Cpmv((pi->qcode + obj.pi->qcode), (pi->zcode + obj.pi->zcode));
//}
//
//void Cpmv::Display() const
//{
//	cout << "Info:\n";
//	cout << "qcode: " << pi->qcode << ", zcode: " << pi->zcode << endl;
//}
//
//int main(void)
//{
//	Cpmv cp1("C", "C++");
//	Cpmv cp2("computer", "languge");
//
//	Cpmv cp3(cp2);
//	cp3 = cp1;
//	Cpmv cp4(cp1 + cp2);
//
//	cp3 = cp1 + cp2;
//
//	return 0;
//}