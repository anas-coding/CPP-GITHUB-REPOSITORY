// lecture -8 coding - memory allocation and deletion

#include <iostream>
#include "lect.h"

using namespace std;

int* getPtrToFive()
{
	int x = 5;
	return &x;
}


int main()
{
	cout << "start \n";

	// part-1  using default constructor
	number arr[4];

	// part-2  using method function
	number brr[] = { number(1), number(2) };

	// part-3 memory allottment inside func
	int  *p ;
	{      // with or without 'if' - same
		int x = 5;
		p = &x;
		cout << "part-3 " << x<< *p<<"\n";
	  }

    // cout << "part-3 " << x << "\n"; // x cannot be accessed
	 cout << "part-3 " << *p << "\n";   // *p can be

	// cout << "part-3" << x;

	 // part-4 memory allocatio using -- 'new int' -- didnt work as in lectures
	

		   {
			  int* p = getPtrToFive();
			  cout << "part-4 " << *p << endl; // ???
		  }






	cout << "\n end \n";
	return 0;
}