
class Car : public Vehicle { // Makes Car inherit from Vehicle 
 string style;  // only new element of class car

 public : 
	 Car( const string &myLicense, const int myYear, const string  // constructor
	         &myStyle)
	 : Vehicle(myLicense, myYear), style(myStyle) {} // constructor initialisation
	 
		  const string &getStyle() // function
		           { return style; } 
	
};