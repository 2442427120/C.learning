//#include "stonewt.h"
//
//Stonewt::Stonewt(double lbs)
//{
//	stone = (int)lbs / Lbs_per_stn;
//	pds_left = (int)lbs % Lbs_per_stn + lbs - (int)lbs;
//	pounds = lbs;
//}
//
//Stonewt::Stonewt(int stn, double lbs)
//{
//	stone = stn;
//	pds_left = lbs;
//	pounds = stn * Lbs_per_stn + lbs;
//}
//
//Stonewt::Stonewt()
//{
//	stone = pds_left = pounds = 0;
//}
//
//Stonewt::~Stonewt()
//{
//
//}
//
//void Stonewt::Set_Type(Type m)
//{
//	type = m;
//}
//
//Stonewt Stonewt::operator+(const Stonewt& st) const
//{
//	return Stonewt(pounds + st.pounds);
//}
//
//Stonewt Stonewt::operator-(const Stonewt& st) const
//{
//	return Stonewt(pounds - st.pounds);
//}
//
//Stonewt Stonewt::operator*(double n) const
//{
//	return Stonewt(n * pounds);
//}
//
//ostream& operator<<(ostream& os, const Stonewt& st)
//{
//	if (st.type == Stonewt::STONE)
//		cout << st.stone << " stones, " << st.pds_left << " pounds\n";
//	else if (st.type == Stonewt::POUNDS)
//		cout << (int)st.pounds << " pounds\n";
//	else if (st.type == Stonewt::FLOATPOUNDS)
//		cout << st.pounds << " pounds\n";
//
//	return os;
//}
//
////void Stonewt::show_stn() const
////{
////	cout << stone << " stone, " << pds_left << " pounds\n";
////}
////
////void Stonewt::show_lbs() const
////{
////	cout << pounds << " pounds\n";
////}