#include "header.h"
# include <iostream>

using namespace std;

void vectorfunc::print()
{
	cout << "part-9 " << one.x << one.y << two.x << two.y << "\n";
}

void vectorfunc::offseti(int a, int b)
{
	one.x += a;
	one.y += b;

	two.x += a;
	two.y += b;

}
