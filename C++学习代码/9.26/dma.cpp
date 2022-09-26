//#define _CRT_SECURE_NO_WARNINGS
//#include "dma.h"
//#include <cstring>
//
//ABC::ABC(const char* l, int r)
//{
//	lable = new char[strlen(l) + 1];
//	strcpy(lable, l);
//	rating = r;
//}
//
//ABC::ABC(const ABC& rs)
//{
//	lable = new char[strlen(rs.lable) + 1];
//	strcpy(lable, rs.lable);
//	rating = rs.rating;
//}
//
//ABC::~ABC()
//{
//	delete[]lable;
//}
//
//ABC& ABC::operator=(const ABC& rs)
//{
//	if (this == &rs)
//		return *this;
//	delete[]lable;
//	lable = new char[strlen(rs.lable) + 1];
//	rating = rs.rating;
//	return *this;
//}
//
//ostream& operator<<(ostream& os, const ABC& rs)
//{
//	os << "Lable: " << rs.lable << endl;
//	os << "Rating: " << rs.rating << endl;
//	return os;
//}
//
//void ABC::View() const
//{
//	cout << "Lable: " << lable << endl;
//	cout << "Rating: " << rating << endl;
//}
//
////baseDMA派生类
//baseDMA::baseDMA(const char* l, int r) : ABC(l, r)
//{
//}
//
//baseDMA::baseDMA(const baseDMA& rs) : ABC(rs)
//{
//	
//}
//
//void baseDMA::View() const
//{
//	ABC::View();
//}
//
////不是用new的派生类
//lacksDMA::lacksDMA(const char* l, int r, const char* c) : ABC(l, r)
//{
//	strncpy(color, c, 39);
//	color[39] = '\0';
//}
//
//lacksDMA::lacksDMA(const ABC& rs, const char* c) : ABC(rs)
//{
//	strncpy(color, c, COL_LEN - 1);
//	color[COL_LEN - 1] = '\0';
//}
//
//ostream& operator<<(ostream& os, const lacksDMA& ls)
//{
//	os << (const baseDMA&)ls;
//	os << "Color: " << ls.color << endl;
//	return os;
//}
//
//void lacksDMA::View() const
//{
//	ABC::View();
//	cout << "Color: " << color << endl;
//}
//
////使用new的派生函数
//hasDMA::hasDMA(const char* l, int r, const char* s) : ABC(l, r)
//{
//	style = new char[strlen(s) + 1];
//	strcpy(style, s);
//}
//
//hasDMA::hasDMA(const ABC& rs, const char* s) : ABC(rs)
//{
//	style = new char[strlen(s) + 1];
//	strcpy(style, s);
//}
//
//hasDMA::hasDMA(const hasDMA& hs) : ABC(hs)
//{
//	style = new char[strlen(hs.style) + 1];
//	strcpy(style, hs.style);
//}
//
//hasDMA::~hasDMA()
//{
//	delete[]style;
//}
//
//hasDMA& hasDMA::operator=(const hasDMA& hs)
//{
//	if (this == &hs)
//		return *this;
//
//	ABC::operator=(hs);//等价于调用baseDMA里的=重载运算符给hasDMA里的公共部分赋值
//	delete[]style;
//	style = new char[strlen(hs.style) + 1];
//	strcpy(style, hs.style);
//	return *this;
//}
//
//ostream& operator<<(ostream& os, const hasDMA& hs)
//{
//	os << (const ABC&)hs;
//	os << "Style: " << hs.style << endl;
//	return os;
//}
//
//void hasDMA::View() const
//{
//	ABC::View();
//	cout << "Style: " << style << endl;
//}