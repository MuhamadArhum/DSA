/* This Program is a simple calculator 
   which is calculate the square root of any number
   which is getting from user. After the calculation
   the program ask to the user  
      "Do you want to Perform another Operation ?"
   then program decide what to do .*/
   
      
#include<iostream>
using namespace std;
int main()
{
	int num,sqr;
	char op;        // char is a Data Type of Characters
	
	do
	{
		cout <<"Enter a Number:";
		cin>>  num;
		sqr = num*num;
		cout <<sqr<<endl;
		cout <<"Do you want to Perform another Operation ?";
		cin >>op;
	} while(op!='n');     // Condition of Do while loop.
	
	
	cout <<"Okay.Program is Terminated";
}
