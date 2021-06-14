// inputing 2d array with for loop

#include <iostream>

using namespace std;

int main()

{
  int array[2][2];

  for(int i=0; i < 2 ; i =i+1)
  {
    for(int j=0; j < 2 ; j =j+1)
    {
      cin>> array[i][j];
    }
  }

  for(int i=0; i < 2 ; i =i+1)
  {
    for(int j=0; j < 2 ; j =j+1)
    {
      cout << array[i][j];
    }
  }

  return 0;


}
