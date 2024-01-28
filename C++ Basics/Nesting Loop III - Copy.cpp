/* This program is about Printing of Digits in the Form 
    of Rows & Columns */
    
#include<iostream>
using namespace std;
int main()
{
	int row,col;
	
	for(row=5;row>=1;row--)      // Outer Loop 
	// This should be Changed from Previous Code:
	{
		for(col=1;col<=row;col++)    // Inner Loop:
		{
			cout <<col <<" ";          // Printing of Didits Pattern
		}
	    cout <<endl;             // For line breaking:
	}
}
