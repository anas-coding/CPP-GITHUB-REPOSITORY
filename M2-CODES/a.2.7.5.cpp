// assig-2 -7.5

#include <iostream>

using namespace std;

int main()

{
 char *oddOrEven =  "Never odd or even" ;

 char *nthcharptr = &oddOrEven[5] ;
 nthcharptr = nthcharptr-2 ;

 cout << *nthcharptr;

 char **pointerPtr = &nthcharptr;
 cout << pointerPtr;
 cout << **pointerPtr;

 nthcharptr ++;

 cout << nthcharptr-oddOrEven;

 return 0;
}
