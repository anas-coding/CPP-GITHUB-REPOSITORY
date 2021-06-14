// swapping

void swap(int &a, int &b)
{
    int t;
    t=a;
    a=b;
    b=t;
    return;
}

#include <iostream>

using namespace std;

int main()
{
    int x=2;
    int y=3;
     cout << x << "\t"<< y <<"\n" ;
    swap(x,y);
    cout << x << "\t"<< y <<"\n" ;
    return 0;
}
