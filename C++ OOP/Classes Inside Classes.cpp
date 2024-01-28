// Class inside Class

#include<iostream>
using namespace std;

// This is Main Class
// A = Main class
// B = Inside Class
class A{
	public:
		string username;
		
		//This is 2nd Class which is inside the main class
		class B{
		public:
			string bestfriend;
			float CGPA;
		};
		B o;    // This is object of Class B
		
		void display()
		{
			cout << username << endl;       // Function calling Class A
			cout << o.bestfriend << endl;   // Function calling Class B
			cout << o.CGPA << endl;         // Function calling Class B
		}
}; 

main ()
{
	A K;
	K.username = "ARHUM WAHEED";
	// Let we use O. Operator to accces Class B 
	K.o.CGPA=3.12;   
	K.o.bestfriend="ALI";
	K.display();
}
