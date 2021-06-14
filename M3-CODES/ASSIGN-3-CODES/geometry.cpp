#include "geometry.h"

pointarray::pointarray(int size = 0) {
	points = new point[size];
	this->size = size;
}

point::point(int u, int v)
{
	x = u;
	y = v;
}

point::point()
{
	x = 0;
	y = 0;
}