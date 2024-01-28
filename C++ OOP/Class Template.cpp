// This program shows about class Templates
#include<iostream>
using namespace std;

// This is template of class ( ARHUM )
template <class A>
class ARHUM
{
	public:
	ARHUM(int a){
		cout << a << " is not a character" << endl;
	}
};

// Make Object of class
// Then we check template is working or not ?

 
main()
{

   ARHUM <int> ko(100);   // ( Ko ) is object of this class
	
}
