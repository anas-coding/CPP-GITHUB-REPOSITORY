// a.7.4
// using pointers to swap


#include <iostream>

using namespace std;

void swap (int ** , int **) ;

int main()
{
 int x = 5, y = 6;
 int * ptr1 = &x, * ptr2 = &y;
 swap (& ptr1 , & ptr2 );
 cout << *ptr1 << " \n" << *ptr2 ; // Prints "6 5"
 return 0;
 }

 void swap(int **x, int **y)

 {

    int *temp = *x;
     *x=*y;
     *y=temp;
    // cout << **x<<**y;
 }
