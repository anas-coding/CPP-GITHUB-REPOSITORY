// swap integer by call by reference

#include <iostream>

using namespace std;

void swapp(int &,int &);

int main()
{
    int x ;
    int y;
    cin>>x;
    cin>>y;
    swapp(x,y);
     cout <<"x,y="<< x<<y;
    return 0;
}

void swapp(int &a,int &b)
{
    int temp=0;
    temp =a;
    a=b;
    b=temp;

    }
