// pointers in functions

#include <iostream>

using namespace std ;


int main ()
{
    int add;
    int did;

    int x =5;
    int z = 24;

    int *ptr = &x;

    int sum(int  *) ;

    add = x + z;

    cout << "add = " << add << "\n" ;

     cout << "*ptr = " << *ptr << "\n" ;

     did =  sum(&x);

    cout << "did = " << did << "\n" ;

    return 0;
}

int sum(int *ptr )
{
    int sum = 0;
    int y = 35 ;
    sum = *ptr + y ;
    return  sum ;
}



