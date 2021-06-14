
class Vehicle {
protected:     // elements of class
	string license; 
	int year;
		   
 public:    // constructors
	 // part-1 - constructors
	 Vehicle(const string &myLicense, const int myYear) // constructor 
		 : license(myLicense), year(myYear) {}    // unclear{}-clear- new method-intialising before body // intialising

	 const string getDesc() const  // its a new function inside class
	              {return license + " from " + stringify(year); } // stringify converts numbers to strings

	 const string &getLicense() const  // second const is added to make sure no changes can be made in this current function body
	              { return license; } // new function
	 
	 const int getYear() 
		      const { return year; }  // new function

};