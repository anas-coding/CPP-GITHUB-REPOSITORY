// testing memory scope

#include <iostream>
using namespace std;

int main()
{
	int* k;
	int x = 5;
	{int y = -6;
	int z = 7;
	//int* p = &z;
	int* k = &z;
	}
	cout << x<< "\n";
	//cout << y; error
	//cout << *p; error
	//cout << *k; error -- anything defined in the bracket is not accessabile outside
	return 0;
}

