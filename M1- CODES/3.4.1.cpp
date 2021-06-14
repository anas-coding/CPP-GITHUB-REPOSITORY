// multiples of numbers -- ternary operator

#include <iostream>

using namespace std;

int main()

{
    int N, Result;

    while(true)
    {


    cin >> N;

    if(N>=0)

        Result = N%5 == 0 ? N/5 :-1;

    else

        Result = -1;

    cout << Result << "\n";
    }

    return 0;
}
