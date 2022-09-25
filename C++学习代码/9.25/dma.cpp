//#define _CRT_SECURE_NO_WARNINGS
//#include "dma.h"
//#include <cstring>
//
////基类
//baseDMA_ABC::baseDMA_ABC(const char* l, int r)
//{
//	lable = new char[strlen(l) + 1];
//	strcpy(lable, l);
//	rating = r;
//}
//
//baseDMA_ABC::baseDMA_ABC(const baseDMA_ABC& rs)
//{
//	delete[]lable;
//	lable = new char[strlen(rs.lable) + 1];
//	strcpy(lable, rs.lable);
//	rating = rs.rating;
//}
//
//baseDMA_ABC::~baseDMA_ABC()
//{
//	delete[]lable;
//}
//
//baseDMA_ABC& baseDMA_ABC::operator=(const baseDMA_ABC& rs)
//{
//	if (this == &rs)
//		return *this;
//	delete[]lable;
//	lable = new char[strlen(rs.lable) + 1];
//	rating = rs.rating;
//	return *this;
//}
//
//void baseDMA_ABC::View() const
//{
//	cout << "Lable: " << lable << endl;
//	cout << "Rating: " << rating << endl;
//}
//
////ostream& operator<<(ostream& os, const baseDMA_ABC& rs)
////{
////	os << "Lable: " << rs.lable << endl;
////	os << "Rating: " << rs.rating << endl;
////	return os;
////}
//
////不是用new的派生类
//lacksDMA::lacksDMA(const char* l, int r, const char* c) : baseDMA_ABC(l, r)
//{
//	strncpy(color, c, 39);
//	color[39] = '\0';
//}
//
//lacksDMA::lacksDMA(const baseDMA_ABC& rs, const char* c) : baseDMA_ABC(rs)
//{
//	strncpy(color, c, COL_LEN - 1);
//	color[COL_LEN - 1] = '\0';
//}
//
//void lacksDMA::View() const
//{
//	baseDMA_ABC::View();
//	cout << "Color: " << color << endl;
//}
////ostream& operator<<(ostream& os, const lacksDMA& ls)
////{
////	os << (const baseDMA_ABC&)ls;
////	os << "Color: " << ls.color << endl;
////	return os;
////}
//
////使用new的派生函数
//hasDMA::hasDMA(const char* l, int r, const char* s) : baseDMA_ABC(l, r)
//{
//	style = new char[strlen(s) + 1];
//	strcpy(style, s);
//}
//
//hasDMA::hasDMA(const baseDMA_ABC& rs, const char* s) : baseDMA_ABC(rs)
//{
//	style = new char[strlen(s) + 1];
//	strcpy(style, s);
//}
//
//hasDMA::hasDMA(const hasDMA& hs) : baseDMA_ABC(hs)
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
//	baseDMA_ABC::operator=(hs);//等价于调用baseDMA里的=重载运算符给hasDMA里的公共部分赋值
//	delete[]style;
//	style = new char[strlen(hs.style) + 1];
//	strcpy(style, hs.style);
//	return *this;
//}
//
//void hasDMA::View() const
//{
//	baseDMA_ABC::View();
//	cout << "Style: " << style;
//}
//
////ostream& operator<<(ostream& os, const hasDMA& hs)
////{
////	os << (const baseDMA_ABC&)hs;
////	os << "Style: " << hs.style << endl;
////	return os;
////}