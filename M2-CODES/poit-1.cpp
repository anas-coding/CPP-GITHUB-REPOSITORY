// understanding pointers

#include <iostream>

using namespace std;

int x =5;
int y =20;

int *ptr =&x ;
int *add =&y;
int main()
{


  cout << "x = " << x << "\n";

   cout << "*ptr = " << *ptr<< "\n" ;

   cout << "y = " << y << "\n";

    cout << "*add = " << *add<< "\n" ;

    cout << "adding = " << *ptr + *add ;


return 0;
}

















































