//  to find length of string
// a-2-7.1

#include <iostream>

using namespace std;

 int measure(char *);

int main()
{
 char *msg;
 int length =0;

 cout << "input string \n";

 cin>> msg;
 //cout << *(msg+1) << "\n";
 length =   measure( msg);

cout << length;

return 0;
}
int measure(char *msg)
{
    int count =0;
    while(*(msg+count) != '\0')
    {
        count = count +1;
        *msg = *(msg + 1);
    //    cout << *msg;
    }
    return count;
}


