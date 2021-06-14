// dart throws finding x and y

#include <iostream>
#include <cstdlib>
#include<ctime>
#include<cmath>

using namespace std;

int main()
{
    double x,y,d,z,ratio;

    srand(time(0)) ;

    int count =0;
    long int n;
    cout << "enter n \n" ;
    cin >> n;

    for (int i=0; i<n ; i++)
    {
    x = rand() / double(RAND_MAX);
    y = rand() / double(RAND_MAX);

    d = x*x +y*y;
    z =sqrt(d);

    if (z <1)
        count = count +1;
    }

    ratio  =  double(n)/count;

    double pi;
    pi = 4.0 / ratio;

    cout << "pi = " << pi ;

    return 0;
}
