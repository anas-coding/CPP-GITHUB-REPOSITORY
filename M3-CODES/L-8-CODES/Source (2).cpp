
// proj - memory management for class using -- new

#include <iostream>
using namespace std;

class point
{
public:
	int x, y;
	point();
	~point();

private:

};

point::point()
{
	cout << "constructor" << "\n";
}

point::~point()
{
	cout << "destructor" << "\n";
}

int main()
{
	point *p= new point;
	delete p;

	point k;
	
}