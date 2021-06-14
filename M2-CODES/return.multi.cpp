// returning multiple values

int sum(int a, int b, int &c)
{
b= a+3;
c=c+3;
return b;
}

#include <iostream>
using namespace std;

int main()
{
    int x,y,z;

    x=3;
    y=3;
    z=3;
    cout << x<< "\t" << y<< "\t"<< z<< "\t" << "\n" ;
    y=sum(x,y,z);

    cout << x<< "\t" << y<< "\t"<< z<< "\t" << "\n" ;
}
