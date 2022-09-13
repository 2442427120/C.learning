#include "stonewt1.h"

Stonewt::Stonewt(double lbs)
{
	stone = (int)lbs / Lbs_per_stn;
	pds_left = (int)lbs % Lbs_per_stn + lbs - (int)lbs;
	pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
}

Stonewt::Stonewt()
{
	stone = pds_left = pounds = 0;
}

Stonewt::~Stonewt()
{

}

bool Stonewt::operator>(const Stonewt& st)
{
	return  (*this).pounds > st.pounds;
}

bool Stonewt::operator>=(const Stonewt& st)
{
	return (*this).pounds >= st.pounds;
}

bool Stonewt::operator<(const Stonewt& st)
{
	return (*this).pounds < st.pounds;
}

bool Stonewt::operator<=(const Stonewt& st)
{
	return  (*this).pounds <= st.pounds;
}

bool Stonewt::operator==(const Stonewt& st)
{
	return (*this).pounds == st.pounds;
}

bool Stonewt::operator!=(const Stonewt& st)
{
	return (*this).pounds != st.pounds;
}

void Stonewt::show_stn() const
{
	cout << stone << " stone, " << pds_left << " pounds\n";
}

void Stonewt::show_lbs() const
{
	cout << pounds << " pounds\n";
}