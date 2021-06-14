#pragma once

class point
{
public:

	int x, y;

	point(int u, int v);

	point();

};


class pointarray
{
public:
	point *points;
	int size;
	pointarray(int size);
};

