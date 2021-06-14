// nested for loop

#include <iostream>

using namespace std;

int main()

{
for(int x = 0 ; x < 5; x = x+1)
{
    cout << "x = " << x << "\n" ;

    for(int y = 0 ; y < 5 ; y = y +1)

    {

     cout << "y = " << y << "\n" ;

    }
}

return 0;

}
