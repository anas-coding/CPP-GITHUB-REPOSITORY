// basic statistics

#include <iostream>

using namespace std;

int main()

{

     int N,n;
     int i = 0;
     double sum = 0;
     int  n_max, n_min;
     double mean;
     int maximum,minimum,range;

     cin>> N;

     while(i < N)

     {
         cin >> n  ;

         sum = sum + n;
         mean = sum/(i+1) ;

         if(i == 0)
         {
             n_max = n;
             n_min = n;
         }

         else

         {
             if(n > n_max)
             {
                 n_max = n ;
             }

              if(n < n_min)
             {
                 n_min = n ;
             }


         }

         i = i+1 ;
     }

     maximum = n_max;
     minimum = n_min;
     range = maximum-minimum ;

     cout << "max = " << maximum<<"\n";
     cout << "min = " <<  minimum<<"\n";
     cout << "range= " <<  range<<"\n";
     cout << "mean= " <<  mean<<"\n";
     return 0;

}


