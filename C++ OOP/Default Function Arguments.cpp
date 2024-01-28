// Default Function Arguments/Parameters

#include<iostream>
using namespace std;

// This is a Function
void run (int x = 3,double y = 9.1)
{
	cout << x << endl;
	cout << y << endl;
}
main(){
	run(); /* if we write any int in () then Program execute the writen value 
	otherwise print default value */
	
}
