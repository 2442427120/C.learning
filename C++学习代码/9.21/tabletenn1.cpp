#include "tabletenn1.h"

TableTennisPlayer::TableTennisPlayer(const string& fn, const string& ln, bool ht) :
	firstname(fn), lastname(ln), hasTable(ht) {}	//ʹ�ó�Ա��ʼ���б��﷨����ʼ��

void TableTennisPlayer::Name() const
{
	cout << lastname << ", " << firstname;
}

//��һ�ֻ��๹�캯��
RatedPlayer::RatedPlayer(unsigned int r, const string& fn, const string& ln, bool ht) : TableTennisPlayer(fn, ln, ht)
{
	rating = r;
}

//�ڶ��ֻ��๹�캯��
RatedPlayer::RatedPlayer(unsigned int r, const TableTennisPlayer& tp) : TableTennisPlayer(tp), rating(r)
{
}



