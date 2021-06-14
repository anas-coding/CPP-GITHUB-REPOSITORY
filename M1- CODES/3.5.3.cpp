// N is a nonnegative integer

#include <iostream>

using namespace std;

int main()

{

int N;

cin >> N;

 double acc = 0;
  double acc1;

 for(int i = 1; i <= N; ++i)
 {

 double term = (1.0/ i);
 acc += term * term ;
 for (int j = 1; j < i; ++j)
 {
 acc *= -1;
 }
 acc1= acc;
 cout << acc1 << "\n";
 }
 cout << acc << "\n";

}
