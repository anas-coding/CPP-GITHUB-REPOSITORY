// printing integer array with , comma

#include <iostream>

using namespace std ;

int main()

{
    int n;
    cout << "input size \n";
    cin >> n;

    cout << "input numbers \n";
    int arr[n];
    for(int i =0 ;i <n ; i++)
    {
        cin >> arr[i];
    }

    cout << "printing with comma \n";

    for(int i =0 ;i <n-1 ; i++)
    {
        cout << arr[i]<<",";
    }

     cout << arr[n-1];

     return 0;
}
