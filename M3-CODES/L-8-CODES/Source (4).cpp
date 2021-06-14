// testing memory allocation of functions

#include <iostream> // using "new" seems not necessary.
using namespace std;

//int* pointer();

int* pointer()
{
	int a = 12;
	return &a;
}

int main()
{
	int x = 5;
	int* ptr = &x;
	

	int *y = pointer();
	cout << *y;
}

