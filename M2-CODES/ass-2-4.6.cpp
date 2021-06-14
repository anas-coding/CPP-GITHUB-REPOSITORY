// sum for arbitrary number of integers

// condition 1. two arguments 2. recursion 3. return an integer

int sum ( int arr[],  int n)

{
 int y=0;
 int *ptr = (arr + n-1) ;
 int *sumptr = &y;

 //cout << "hello" ;

if (n == 0)
    return y;
else
    *sumptr = *ptr + sum(arr,n-1) ;

    return y;
}

/*
int sum( const int numbers[], const int numbersLen)
{

 return numbersLen == 0 ? 0 : numbers[0] + sum(numbers + 1, numbersLen -1);

}
*/
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
