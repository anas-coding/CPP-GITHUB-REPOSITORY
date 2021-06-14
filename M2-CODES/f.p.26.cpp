// function overloading

#include <iostream>

using namespace std;

int main()

{

int a,b;
string c;

cin >> a;
cin>> b ;
cin>> c ;

void print(int,int);
void print(int);
void print(string);

print(a,b);
print(b);
print(c);

return 0;

}

void print(int a, int b)
{
    cout << "a , b"<< "\t"<< a << "\t" << b<< "\t"<< "\n";
    return;
}

void print(int b)
{
    cout << "b"<< "\t"<< b <<"\n" ;
    return;
}

void print(string c)
{
    cout << "c"<<"\t"<< c <<"\n" ;
    return;
}


