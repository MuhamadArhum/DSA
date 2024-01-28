#include<iostream>
using namespace std;

class student
{
	// Access modifiers
	// Private, Public, Protected
	
	public: // This is Public class 
	     // if we use private class the compiler dont compile the program
		void call()
		{
			cout << " This is a Call function of class student " << endl;
		}
	int x;
	string name;
};
main()
{
	student s,k,l; // This is objects of class
	s.call();  // This object call the void function
	k.name;
	l.x;
}
