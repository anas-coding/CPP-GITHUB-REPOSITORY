// class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// this is to learn programming using class and methods inside the class using header files'
#include "vector.h"
#include <iostream>


using namespace std;

int main()
{
	point start, end;
	vector vec1;

	vec1.start.x = 1;
	vec1.start.y = 2;

	vec1.end.x = 3;
	vec1.end.y = 4;

	


	vec1.print();

	vec1.offset(1, 1);

	vec1.print();

	cout << "Hi !"<< endl;
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
