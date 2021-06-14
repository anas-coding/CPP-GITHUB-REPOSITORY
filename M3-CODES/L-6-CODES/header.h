#pragma once

#include <iostream>
using namespace std;


class cordinate
{
public:
	int x, y;

	cordinate () {
		x = 0; 
		y = 0;
		//cout << "part-10" << "constructors" << x << y << "\n";
	}

	cordinate(int a, int b) {
		x = a;
		y = b;
	}


};

class vector
{
public:
	cordinate  one, two;
};



class vectorfunc
{
public:
	cordinate one, two;

	void print();
	void offseti(int a, int b);


};



