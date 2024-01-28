/* This is Simple While Loop same as Previous Code:
which is getting Input from user at 2 Time and again & again
 when user enter the value, the program will automatically 
add that value for 02 timeBut when user Put the 0 the program 
will be finished. */

#include<iostream>
using  namespace std;
int main()
{
	int num;
	cout<<"Enter A Number:";  // Getting Num From User
	cin>> num;
	
	while(num!=0)   // Loop Condition
	{
		int sqr = num+num;
		cout << sqr <<endl;
		
		// Again getting Input From User
		cout <<"Enter A Number:"<<endl;
		cin >> num;
	}
	cout << "Bye";	
}
