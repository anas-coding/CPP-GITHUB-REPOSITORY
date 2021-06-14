// using arrays in functions

#include <iostream>

using namespace std;

int sum(int array[])

{
    int sum =0;

    for(int i=0; i<5; i=i+1)
    {
        sum =sum + array[i];
    }

    return sum;
}

int main()

{
    int array[]={1,2,3,4,5};

//    int sum(array[]);

    int value ;

    value = sum(array);

    cout << value ;

    return 0;
}



