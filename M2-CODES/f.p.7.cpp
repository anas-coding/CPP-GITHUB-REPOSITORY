// using functions

#include <iostream>

using namespace std;

int main()

{
    int answer;
    int power(int,int);

    answer = power(2,3);
    cout<< "2^3 is " << answer<<"\n";

    answer = power(3,5);
     cout<< "3^5 is " << answer<<"\n";

     return 0;
}

     int power(int base, int exp)
       {
         int result=1;

         for(int i =0 ; i< exp; i = i+1)
         {
             result = result *base;
         }
         return result;
         }


