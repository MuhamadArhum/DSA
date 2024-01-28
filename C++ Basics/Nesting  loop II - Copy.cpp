#include<iostream>
using namespace std;
int main()
{
	int row,col;
	
	for(row=1;row<=20;row++)      // Outer Loop:
	{
		for(col=1;col<=row;col++)    // Inner Loop:
		{
			cout <<"*";
		}
	    cout <<endl;             // For line breaking:
	}
}
