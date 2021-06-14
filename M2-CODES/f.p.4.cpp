// hard coding copy paste

#include <iostream>

using namespace std;

int main()

{
    int threeExpFour=1;

    for(int i = 0; i < 4; i= i+1)
    {
        threeExpFour = threeExpFour *3;
    }
    cout << "3^4 = "<< threeExpFour<<"\n" ;

     int sixExpFive=1;

    for(int i = 0; i < 5; i= i+1)
    {
        sixExpFive = sixExpFive *6;
    }
    cout << "6^5 = "<< sixExpFive<< "\n" ;

     double twelveExpten=1;

    for(int i = 0; i < 10; i= i+1)
    {
        twelveExpten = twelveExpten *12;
    }
    cout << "12^10 = "<< twelveExpten<< "\n" ;

    return 0;

}
