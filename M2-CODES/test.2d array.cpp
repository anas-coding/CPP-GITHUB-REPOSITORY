// second dimension array

#include <iostream>

 using namespace std;
 void into(int a[2][2], int b[2][2]);

int main()

{
    int x;
    int a[2][2];
    int b[2][2];

  a[0][0] = 1;
  a[0][1] = 2;
  a[1][0] = 3;
  a[1][1] = 4;

   into(a,b);

 cout << a[0][0];

 return 0;

}

void into(int a[][2],int b[][2]){}
