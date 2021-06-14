// understanding "const" usage in pointers

#include <iostream>

using namespace std;

int main()
{
int x =5;
//int *add = &x;

int  y =10;

int  *pointer = &y;
int  *pointer = &x;
// cout << "x,y = " << x << "\t" <<y<< "\n";
cout << "*pointer " << *pointer ;


return 0;
}
