/* This program is working on break statement.
    How Programs are going to be breaked */

#include<iostream>
using namespace std;
int main()
{
	string pass;      // string data Type.
	
	while(1)          // Loop & Condition
	{
		cout << "Enter a Password";
	    getline(cin,pass);         // Getline is Usercomand
	    
		if(pass!="123")           // if statement
		{
			cout <<"Invalid Password:" <<endl;
			break;               // Break statement
		}
		else                     // Else statement
		{
			cout <<"Correct Password:" <<endl;
			break;               // Break statement
		}
	}
}
