// prime numbers

#include <iostream>

using namespace std;

int main()

{
    int N,k ;

    cin >> N ;
    cout << "prime number are \n" ;
    for(int i =1 ; i <= N ; i= i+1)

    {
        k = 0;

        for(int j =1; j <= i ; j= j+1)
        {
            if(i%j == 0)
            {
                k = k+1;
            }

        }



         if(k==1 || k==2)
            {
                cout <<  i << "\n";
            }
    }
    return 0;
}
