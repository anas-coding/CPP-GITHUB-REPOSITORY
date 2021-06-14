// switch cases

#include <iostream>

using namespace std;

int main()

{
    int x;
    cout <<"input 1,2,3 or 4 \n";
    cin >> x ;

    switch(x)

    {
    case 1:
        cout << " x is one \n";
        break;
    case 2:
    case 3:
        cout<< "x is two or three \n";
        break;
    case 4:
        cout << "x is four \n";
            break;
    default:
        cout << "x is not one, two , three or four \n";

    }
    return 0;
}
