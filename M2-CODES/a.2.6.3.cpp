// transpose of a matrix

#include <iostream>

using namespace std;

 void transpose (const int input[3][3], int output[3][3]);

int main()
{

int n=3,m=3;
int input[3][3], b[m][n];
int output[3][3];



cout << "input matrix values \n" ;

for (int i=0 ; i<n;++i)
{

    for(int j=0; j<m; ++j)
{
  cin >> input[i][j];
//  cout << input[i][j];
}

}

 transpose(input, output);

for (int i=0;i<n; ++i)
{
    for(int j=0;j<m;++j)
    {
    cout << output[i][j]<< "\n";
    }

    }
    return 0;


}

void transpose(const int  input[][3] , int  output[][3])
{

    int c[3][3];
    int n=3,m=3;

    cout << "hello \n";

    for (int i=0 ; i<n; ++i)
    {
    for (int j=0; j<m; ++j)
       {
         c[j][i]=input[i][j];
         output[j][i] = c[j][i];
    //     cout <<output[j][i] << "\n";
       }

     //  return output[][];
    }

}
