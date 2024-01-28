/* This Program is Displaying counting From 1 to 5
   in the Form of Rows & Columns. */
   
#include<iostream>
using namespace std;
int main()
{
	int row,col;
	
	for(row=1;row<=5;row++)     // There are Minor Changings
	{
		for(col=row;col<=5;col++)   
		{
			cout <<col<<" ";          
		}
	    cout <<endl;
	}
}
