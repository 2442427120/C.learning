//#include "cpmv.h"
//
//Cpmv::Cpmv()
//{
//	pi = nullptr;
//}
//
//Cpmv::Cpmv(string q, string z)
//{
//	pi = new Info;
//	pi->qcode = q;
//	pi->zcode = z;
//}
//
//Cpmv::Cpmv(const Cpmv& cp)
//{
//	pi = new Info;
//	pi->qcode = cp.pi->qcode;
//	pi->zcode = cp.pi->zcode;
//}
//
//Cpmv::Cpmv(Cpmv&& mv)
//{
//	pi = mv.pi;
//	mv.pi = nullptr;
//}
//
//Cpmv::~Cpmv()
//{
//	delete pi;
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
//
//	return *this;
//}
//
//Cpmv Cpmv::operator+(const Cpmv& obj) const
//{
//	Cpmv temp;
//
//	temp.pi = new Info;
//	temp.pi->qcode = pi->qcode + obj.pi->qcode;
//	temp.pi->zcode = pi->zcode + obj.pi->zcode;
//
//	return temp;
//	delete temp.pi;
//}
//
//void Cpmv::Display() const
//{
//	cout << "Info:\n";
//	cout << "qcode: " << pi->qcode << ", zcode: " << pi->zcode << endl;
//}