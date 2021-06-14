// returning anywhere in the function

#include <iostream>

using namespace std;

int main()

{
    int n;
    void print(int);
    cin >> n;
    print(n);
    return 0;
}

void print(int n)
{
    if(n%2 ==0)
    {
        cout<<"number is even" << "\n";
        return;
    }
    else{
        cout << "number is odd " << "\n" ;
    }
}
