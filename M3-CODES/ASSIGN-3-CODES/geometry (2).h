#pragma once
// class for points
class points

{
public:
	int a, b;
};
// class for points array with non array points
class parray
{
public :
	int *data;
	int size;
	void resize(int);
	
	
public:
	

	parray(int);
	parray();
	parray(const int [], const int);
	parray(const parray &);
	~parray();

	void push_back(const points& p);
	void insert(const int position, const points& p);

	void remove(const int position);

	const int getSize() const;

	void clear();

	points *get(const int position);

	const points* get(const int position) const;
	
	
};
// class for array of points
class poin {
public:
	int tze;
	int* member;
	
public:	
	poin(int u = 0, int v = 0)
	{ 
		int tze = 2;
		member = new int[tze];
		member[1] = v;
		member[0] = u;
	}
};
