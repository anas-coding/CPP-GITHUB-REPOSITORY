// sum of two integers

// assign-2-4.1

#include <iostream>

using namespace std;
/*
int sum(const int x, const int y)
{
return x+y ;
}

double sum(const double x, const double y)
{
return x+y ;
}

*/
int sum(const int x, const int y, const int z)
{
return x+y+z ;
}
/*
int sum(const int x, const int y,const int z,const int l)
{
return x+y+z+l ;
}
*/
int sum(const int x=0, const int y=0,const int z=0,const int l=0)
{
return x+y+z+l ;
}
int main()
{
int a =3;
int b= 4;
int c=5;
int d=6;

//int value = sum(a,b);
//int value = sum(a,b,c);
int value = sum(a,b,c);
//double value = sum(a,b);

cout << value ;

return 0;
}
