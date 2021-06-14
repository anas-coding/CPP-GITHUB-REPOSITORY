// reversing array
// a.2.6.2

#include <iostream>

using namespace std;
void reverse(int a[],int n);
int main()

{
  int n;
  cin >> n;
  int a[n],b[n] ;

  for (int i= 0 ; i< n ; i ++)
  {
      cin >> a[i] ;
      //cout << a[i] << "\n" ;
  }
  reverse(a,n);
 return 0;

}

void reverse(int a[],int n)
{
    int b[n];
 //  int  *ptr = a;
   int  *btr = b;

 for (int i= 0 ; i< n ; i ++)
  {
    //  b[i] = a[n -(i+1)] ;
     int  *ptr = a+ n-i-1;
     int  *btr = b+ i;
      *btr = *ptr ;
    // cout << a[i] << "\n" ;
     cout << b[i] << "\n" ;
  }

  for (int i= 0 ; i< n ; i ++)
  {
      a[i] = b[i] ;
    //  cout << a[i] << "\n" ;
  }
}
