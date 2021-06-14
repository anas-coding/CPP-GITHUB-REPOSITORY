#include "geometry.h"


//tested
parray::parray(int size)
{
	data = new int [size];
	this->size = size;
}

//tested
parray::parray()
{
	data = new int[0];
	this->size = 0;
}

// tested
parray::parray(const int poin[], const int size)
{
	data = new int[size];
	this->size = size;
	for (int i=0;i<size;++i)
	{
		data[i] = poin[i];
	}
}
//tested
parray::parray(const parray &barray)
{
	data = new int[barray.size];

	size = barray.size;

	for (int j = 0; j < size; ++j)
	{
		data[j] = barray.data[j];
	}
}

//tested
parray::~parray()
{
//	delete[] data;
}



//tested
 void parray::resize(int n)
{

	parray copy(n);

	for (int i = 0; i < n;++i)
	{
		copy.data[i] = data[i];
	}
	for (int i = 0; i < n; ++i)
	{
		data[i] = copy.data[i]  ;
	}
	
	//delete[] copy.data;
	
}
 //tested
 void parray::push_back(const points& p)
 {
	 
	 size = size+2;
	 resize(size);
	 data[size-1] = p.b;
	 data[size - 2] = p.a;
 }
//tested
 void parray::insert(const int position, const points& p)
 {
	 size = size + 2;
	 resize(size);
	 for (int i = size; i >= position; --i)
	 {
		 data[i] = data[i - 2];
	 }

	 data[position-1] = p.a;
	 data[position] = p.b;

 }
 //tested
 void parray::remove(const int position)
 {
	 for (int i = position + 2; i <= size; ++i)
	 {
		 data[i - 2] = data[i];
	 }
	 size = size- 2;
	 resize(size);
 }
 //tested
 const int parray::getSize() const
 {
	 return size;
 }
 //tested
 void parray::clear()
 {

	 // delete[] data;
	 size = 0;
	 data = new int[size];
 }
 //tested
 points *parray::get(const int position)
 {
	 points * q = new points;
	 q->a = data[position];
	 q->b = data[position+1];
	 return q;
 }
 //tested
 const points* parray::get(const int position) const
 {
	 points* q = new points;
	 q->a = data[position];
	 q->b = data[position + 1];
	 return q;
 }