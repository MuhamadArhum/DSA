/* This Program is displays stars in the form of 
   rows and columns. This is an Example of Nested Loop.*/
   
#include<iostream>
using namespace std;
int main()
{
	int row,col;
	
	for(row=1;row<=5;row++)      // Outer Loop:
	{
		for(col=1;col<=5;col++)    // Inner Loop:
		{
			cout <<"*";
		}
	    cout <<endl;             // For line breaking:
	}
} 
