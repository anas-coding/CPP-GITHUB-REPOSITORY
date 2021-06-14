// sum for arbitrary number of integers

// condition 1. two arguments 2. a loop 3. return an integer

int sum (const int arr[], const int n)

{
int value =0;

for(int i=0 ; i <n ; i++)

{
value = arr[i] + value;
}

return value;

}

#include <iostream>

using namespace std;

int main()

{
    int x;
cout << "enter the number of integers \n";

cin >> x;

int a[x-1];
cout << "enter values \n";

for(int i=0 ; i <x ;i++)

{
cin >> a[i];
}

int value = sum(a,x);

cout << value;

return 0;
}
