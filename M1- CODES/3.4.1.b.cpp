//using if and continue

#include <iostream>

using namespace std;

int main()

{
    int N, Result;
    while(true)
    {
        cin >> N ;
        if(N>=0)
        {
            if(N%5 == 0)
            {
                Result = N/5 ;
                cout << Result << "\n" ;
            }}
            else
            {

                cout << "Good bye \n" ;
                break ;
        }
}
return 0;
}
