// assign4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "geometry.h"

using namespace std;

int main()
{
	 points p;
	p.a = 9;
	p.b = 10;
	int x = 4; 
	
	parray parr(7);
	
	int poi[2] = { 1,2 };
	poin po;
	parray barr(po.member, 2);
	
	parr.data[0] = 1;
	parr.data[1] = 2;
	parr.data[2] = 3;
	parr.data[3] = 4;
	parr.data[4] = 5;
	parr.data[5] = 6;
	parr.data[6] = 7;
	
	//cout << parr.size << "\n";
    //	parr.remove(2);
	//parr.clear();
	//cout << parr.size << "\n";
	
	
	
	//points *q = new points;
	//q->a = 1;
	//q->b = 2;

	//q = parr.get(3);

	//cout << q->a << "\n";
	//cout << q->b << "\n";
//	int d = parr.getSize();

//	cout << d<<"\n";

	//parr.insert(3, p);
	//	parr.push_back(p);
	//parray sarr = parr;
	int c = barr.getSize();



	for (int k = 0; k <c; ++k)
	{
		cout << barr.data[k] << "\n";
	}
	
	cout << "Hello  World!\n";
	
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
