// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

 #include <iostream >  // input and out put class def


using namespace std;  // using std defenition for input and out put


class CDummy     // a class defined
	{
	
 public:
	 static int n;    // n cannot be initialised here
	 CDummy() { ++n; }  // 1. constructor   2. everytime class is called value of "n" is incremented

	 ~CDummy() { --n; } // 2. destructor    2. everytime n is decremented
	 };

 int CDummy::n = 0;    // intializing 'n'

 int main()            // main file
 {
	 CDummy a;       // defining a new class named -a
	 CDummy b[5];   // defining a new class named- b[5]
	 CDummy * c = new CDummy; // defininG A new class -c- using -new-
	 cout << a.n << "\n"; // prints out 7 // -n- is called everytime class -cdummy- is called.
	 delete c;  // -n- is decremented
	 cout << CDummy::n << "\n"; // prints out 6
	 return 0;
	 }
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
