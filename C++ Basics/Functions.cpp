/* In this Program, we will learn about Function .
   User defined Functions.
*/
#include<iostream>
using namespace std;
void test();   // prototype or Declaration of Function
            // Prototype is always declared before the main.

int main()
{
    test();	 // Function Calling
    test();  // Function Calling
    test();  // Function Calling
}

// User Defined Function always define outisde the main Function.
void test()
	{
		cout <<"Hello World"<<endl;
	}

