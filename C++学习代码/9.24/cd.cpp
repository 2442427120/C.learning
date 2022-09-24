//#define _CRT_SECURE_NO_WARNINGS
//#include "cd.h"
//#include <cstring>
//
//Cd::Cd(const char* s1, const char* s2, int n, double x)
//{
//	strncpy(performers, s1, 49);
//	performers[49] = '\0';
//	strncpy(lable, s2, 19);
//	lable[19] = '\0';
//	selections = n;
//	playtime = x;
//}
//
//Cd::Cd(const Cd& d)
//{
//	strncpy(performers, d.performers, 49);
//	performers[49] = '\0';
//	strncpy(lable, d.lable, 19);
//	lable[19] = '\0';
//	selections = d.selections;
//	playtime = d.playtime;
//}
//
//void Cd::Report() const
//{
//	cout << "Performers: " << performers << endl;
//	cout << "Lable: " << lable << endl;
//	cout << "Selections: " << selections << endl;
//	cout << "Playtime: " << playtime << endl;
//}
//
//Cd& Cd::operator=(const Cd& d)
//{
//	if (this == &d)
//		return *this;
//	strncpy(performers, d.performers, 49);
//	performers[49];
//	strncpy(lable, d.lable, 19);
//	lable[19];
//	selections = d.selections;
//	playtime = d.playtime;
// return *this;
//}
//
////派生类
//Classic::Classic(const char* cn, const char* s1, const char* s2, int n, double x) : Cd(s1, s2, n, x)
//{
//	cd_name = new char[strlen(cn) + 1];
//	strcpy(cd_name, cn);
//}
//
//Classic::Classic(const char* cn, const Cd& d) : Cd(d)
//{
//	cd_name = new char[strlen(cn) + 1];
//	strcpy(cd_name, cn);
//}
//
//Classic::Classic(const Classic& cs) : Cd(cs)
//{
//	delete[]cd_name;
//	cd_name = new char[strlen(cs.cd_name) + 1];
//	strcpy(cd_name, cs.cd_name);
//}
//
//Classic::~Classic()
//{
//	delete[]cd_name;
//}
//
//void Classic::Report() const
//{
//	Cd::Report();
//	cout << "Cd_name: " << cd_name << endl;
//}
//
//Classic& Classic::operator=(const Classic& cs)
//{
//	if (this == &cs)
//		return *this;
//
//	Cd::operator=(cs);	//派生类无法直接访问基类的私有成员，只有通过基类的接口
//	delete[]cd_name;
//	cd_name = new char[strlen(cs.cd_name) + 1];
//	strcpy(cd_name, cs.cd_name);
//	return *this;
//}