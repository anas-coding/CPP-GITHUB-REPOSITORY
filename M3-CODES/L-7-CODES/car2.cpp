
class Car : public  Vehicle   // Makes Car inherit from Vehicle

{
	string style;  // new element in car
  public:
	 Car(const string & myLicense, const int myYear, const string & myStyle) // constructor
	 : Vehicle(myLicense, myYear), style(myStyle) {} //intialisation of function outside body

	  const string getDesc() // Overriding this member function of vehilce
		   {
               return stringify(year) + ’ ’ + style + ": " + license;
            }
       const string &getStyle() { return style; } // a new fuction
};