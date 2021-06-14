// using char input output

#include <iostream>

using namespace std;

int main()

{
      void print(char* x);   // works
      void print(char x);   // works

     char x ;
     cin >> x ;
     cout << x << "\n" ;

   // x="hello";    // works

   // print("hello"); \\ works
   // print(x);   // works
      print(x);
      return 0;

}

void print(char* x)

{
    cout << x<< endl;
    return;
}

void print(char x)

{
    cout << x<< endl;
    return;
}
