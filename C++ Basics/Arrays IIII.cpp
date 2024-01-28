/* This Program is abou filling an Array with 
   the help of FOR Loop. */
   
#include<iostream>
using namespace std;
int main()
{
	int marks[5];
	
	// using FOR Loop 
	// This Loop is used for storing array.
	for(int i=0; i<=4 ;i++)  // using Loop for Cin.
	{
		cin>>marks[i];
	}
	
	// This Loop is used for Printing/Cout of array.
	for(int j=0;j<=4;j++)    // again Using Loop for Cout.
	{
		cout <<marks[j]<<" ";
	}
}
