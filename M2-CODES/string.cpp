// using string functions

#include <iostream>
#include <cstring>
using namespace std;


int main()
{
char string[] = "hello, anas"; // works
char copy[]=" mama";
char cat[100];
char total[100] ;

strcpy(cat,string);
strcat(total, string);
strcat(total, copy);

cout << total;
return 0;

}
