#pragma once

#include <iostream>

using namespace std;

class number
{
public:
	int x;

	// default constructor
	number()
	{
		x = 0;
		cout << "part -1 \n";
	}
	//  custom constructor
	number(int x)
	{
		this->x = x;   // when function aruguments are same as class arguments
		cout << "part -2 \n";
	}

};