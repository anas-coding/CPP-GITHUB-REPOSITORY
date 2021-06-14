
// proj - allocating arrays using new int in "class"

#include <iostream>
using namespace std;

class barray{
public:
	int size;
	int* elements;

	barray(int size)
	{
		elements = new int[size];
		this->size = size;
	}
	~barray()
	{
		delete[] elements;
	}

	barray(barray& arr)
	{
		size = arr.size;
		elements = new int[arr.size];
			for(int i=0;i<size;i++)
			{
				elements[i] = arr.elements[i];
			}

	}

};


int main()
{
	int x;
	barray arr(2);
	//
	//arr.size = 2;
	//arr.elements = new int[arr.size];
	arr.elements[0] = 1;
	arr.elements[1] = 2;

	barray brr = arr;


	//
	cout << brr.elements[0];
	return 0;
}