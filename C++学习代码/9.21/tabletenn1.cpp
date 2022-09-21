#include "tabletenn1.h"

TableTennisPlayer::TableTennisPlayer(const string& fn, const string& ln, bool ht) :
	firstname(fn), lastname(ln), hasTable(ht) {}	//使用成员初始化列表语法来初始化

void TableTennisPlayer::Name() const
{
	cout << lastname << ", " << firstname;
}

//第一种基类构造函数
RatedPlayer::RatedPlayer(unsigned int r, const string& fn, const string& ln, bool ht) : TableTennisPlayer(fn, ln, ht)
{
	rating = r;
}

//第二种基类构造函数
RatedPlayer::RatedPlayer(unsigned int r, const TableTennisPlayer& tp) : TableTennisPlayer(tp), rating(r)
{
}



