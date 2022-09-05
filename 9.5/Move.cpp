#include <iostream>
#include "Move.h"

Move::Move(double a, double b)
{
	x = a;
	y = b;
}

void Move::showmove() const
{
	std::cout << "x:" << x << ", y:" << y << std::endl;
}

Move Move::add(const Move& m) const
{
	/*return Move(x + m.x, y + m.y);*/
	Move temp;

	temp.x = x + m.x;
	temp.y = y + m.y;

	return temp;
}

void Move::reset(double a, double b)
{
	x = a;
	y = b;
}
