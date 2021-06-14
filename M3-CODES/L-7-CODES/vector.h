#pragma once

class point
{
public:
	int x, y;
	//void off(int offx, int offy);
	//void print();
};

class vector
{
public:
	point start, end;
	void offset(int offsetx,int  offsety);
	void print();
};

