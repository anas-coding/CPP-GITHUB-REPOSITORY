// lecture -6 user defined data types using header files
// classes 

#include<iostream>

#include "header.h"

using namespace std;
int print(int a, int b, int c, int d);
int offset(int& a, int& b, int& c, int& d, int x);
int offsetcordinate(vector& vector1, int a, int b);


int main()
{

	cout << "start \n \n \n ";
	// part -1 printing two points

	int a = 1, b = 2, c = 3, d = 4;
	int x = 1;



	cout << "part -1 " << a << b << c << d << "\n";

	// part -2 printing using function

	print(a, b, c, d);

	// part -3 offsetting  function

	offset(a, b, c, d, x);

	cout << "part -3 " << a << b << c << d << "\n";

	// part -4 and 10 using class and using constructors

	//cordinate one;
	//cordinate two;

	//cout << "part-10 " << one.x << one.y<<two.x<<two.y<<"\n";

	cordinate one(12, 12);
	cordinate two(13, 13);

	cout << "part-11 " << one.x << one.y << two.x << two.y << "\n";

	one.x = 1;
	one.y = 2;

	two.x = 3;
	two.y = 4;

	cout << "part-5 " << one.x << one.y << two.x << two.y << "\n";

	// part -6 using class inside class
	vector vector1;
	vector vector2;

	vector1.one.x = 1;
	vector1.one.y = 2;

	vector1.two.x = 3;
	vector1.two.y = 4;

	vector2.one.x = 5;
	vector2.one.y = 6;

	vector2.two.x = 7;
	vector2.two.y = 8;

	cout << "part-7 " << vector2.two.x << vector2.two.y << "\n";


	// part -8 passing classes into function

	offsetcordinate(vector1, 1, 1);

	cout << "part-8 " << vector1.one.x << vector1.one.y << "\n";



	// part -9 functions inside the class

	vectorfunc vecfunc1;
	vectorfunc vecfunc2;

	vecfunc1.one.x = 1;
	vecfunc1.one.y = 2;

	vecfunc1.two.x = 3;
	vecfunc1.two.y = 4;

	vecfunc1.print();
	vecfunc1.offseti(1, 1);
	vecfunc1.print();

	cout << "\n" << "end";

	return 0;
}

int print(int a, int b, int c, int d)
{

	cout << "part -2 " << a << b << c << d << "\n";
	return 0;
}

int offset(int& a, int& b, int& c, int& d, int x)
{
	a = a + x;
	b = b + x;
	c = c + x;
	d = d + x;
	return 0;
}

int offsetcordinate(vector& vector1, int a, int b)
{
	vector1.one.x += a;
	vector1.one.y += b;
	return 0;
}
