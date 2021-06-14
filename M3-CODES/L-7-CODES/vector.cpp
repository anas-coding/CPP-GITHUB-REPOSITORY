#include <iostream>
using namespace std;

#ifndef vector_H
#define vector_H

#include "vector.h"




void vector::offset(int offsetx, int  offsety) {
	start.x += offsetx;
	end.x += offsetx;

	start.y += offsety;
	end.y += offsety;
};
void vector::print() {

	cout << start.x << "\n" << start.y << "\n";
	cout << end.x << "\n" << end.y << "\n" <<"\n";
};

#endif