// arithmetic using pointers in function

#include <iostream>

using namespace std ;

void funct (int *ptr)
{
*ptr = *ptr *2;
}

int main()
{
int num =35;
int *ptr = &num;

funct(&num);
cout << num;
return 0;
}
