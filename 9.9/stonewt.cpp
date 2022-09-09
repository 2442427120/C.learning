//#include "stonewt.h"
//
////Stonewt::Stonewt(double lbs)
////{
////	stone = (int)lbs / Lbs_per_stn;
////	pds_left = (int)lbs % Lbs_per_stn + lbs - (int)lbs;
////	pounds = lbs;
////}
//
////Stonewt::Stonewt(int stn, double lbs)
////{
////	stone = stn;
////	pds_left = lbs;
////	pounds = stn * Lbs_per_stn + lbs;
////}
//
//void Stonewt::set_pound(Stonewt& st)
//{
//	st.pounds = st.stone * Lbs_per_stn + st.pds_left;
//}
//
//void Stonewt::set_stone(Stonewt& st)
//{
//	st.stone = (int)st.pounds / Lbs_per_stn;
//	st.pds_left = (int)st.pounds % Lbs_per_stn + st.pounds - (int)st.pounds;
//}
//
//Stonewt::Stonewt()
//{
//	stone = pds_left = pounds = 0;
//	mode = POUND;
//}
//
//Stonewt::Stonewt(double po, Mode form)
//{
//	mode = form;
//
//	if (mode == POUND)
//	{
//		pounds = po;
//		set_stone(*this);
//	}
//	else if (mode == STONE)
//	{
//		stone = (int)po / Lbs_per_stn;
//		pds_left = (int)po % Lbs_per_stn + po - (int)po;
//		set_pound(*this);
//	}
//	else
//	{
//		cout << "incorrect 2rd argument to Stonewt() -- stone set to 0\n";
//		stone = pds_left = pounds = 0;
//		mode = POUND;
//	}
//}
//
//Stonewt::~Stonewt()
//{
//
//}
//
//void Stonewt::stone_mode()
//{
//	mode = STONE;
//}
//
//void Stonewt::pound_mode()
//{
//	mode = POUND;
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
//Stonewt operator*(double n, Stonewt& st)
//{
//	return st * n;
//}
//
//ostream& operator<<(ostream& os, const Stonewt& st)
//{
//	if (st.mode == st.POUND)
//		os << st.pounds << " pounds\n";
//	else if (st.mode == st.STONE)
//		os << st.stone << " stones, " << st.pds_left << " pounds\n";
//	else
//		os << "Invalid value.\n";
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