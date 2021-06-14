// break usage

#include <iostream>

using namespace std ;

int main()

{
    int i =1 ;

    while(true)

    {
        if (i > 10)

        {
            break;

        }

        else
        {


            cout << "i is " << i << "\n" ;
            i=i+1 ;
        }

    }
return 0;
}
