
#include "geometry.h"

point:: point()
{
	 x = 0;
	 y = 0;
}


point::point(int u, int v)
{
	x = u;
	y = v;
}

int point::getX() const
{
	return x;
}

int point::getY() const
{
	return y;
}

void point::setX(const int new_x)
{
	x = new_x;
}

void point::setY(const int new_y)
{
	y = new_y;
}