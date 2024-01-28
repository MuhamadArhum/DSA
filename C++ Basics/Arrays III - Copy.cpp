/* This Program is Displaying Arrays Which are 
   stored in Memory.In this code snippet the program will 
   getting value of Array from user. */
   
#include<iostream>
using namespace std;
int main()
{
	// Declartion of Array
	int marks[5];
	
	// Getting Arrays Value From User
	cin>>marks[0];
	cin>>marks[1];
	cin>>marks[2];
	cin>>marks[3];
	cin>>marks[4];
	
	// The Output of All Arays.
	cout <<"The initialized Arrays:" <<endl;
	cout <<marks[0] <<endl;
	cout <<marks[1] <<endl;
	cout <<marks[2] <<endl;
	cout <<marks[3] <<endl;
	cout <<marks[4] <<endl;
}
