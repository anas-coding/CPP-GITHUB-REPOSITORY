 // pointer arithmetic

#include <iostream>

 using namespace std;

 int main()

 {
     int x;
     int arr[] = {1,2,3,4};
     int * ptr =arr ;
     x =*ptr +3;

     cout << x;
     return 0;
 }
