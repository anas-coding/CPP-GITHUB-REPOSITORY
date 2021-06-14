//  nested loops

#include <iostream>

using namespace std;

int main()

{
    int x =5;
    int y =7;

    if (x>y)
    {

     cout << "x is greater than y \n";

     if (x == 6)

     {
         cout << "x equals six \n";
     }
     else
     {
         cout << "x not equal to six \n";
     }
    }

    else

    {
        cout << "y is greater than x \n";
    }

    return 0;
}
