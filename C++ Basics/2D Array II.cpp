/* In this,we will store 10 integars in rows & columns  
   and check the largest Number. 
*/
#include<iostream>
using namespace std;
int main()
{
	int a[3][4] = { {12,21,30},{15,16,17},{7,19,10} };
	int max =a[0][0];
	
	
	// using Nested loop.
	for(int row=0; row<3; row++)
	{
		for(int col=0; col<4; col++)
		{
			if(a[row][col]>max)   // IF loop.
			max = a[row][col];
		}
	}
	  
	  cout <<max;	        // Output.Outside the loop.
}
