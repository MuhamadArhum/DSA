/* This Program displays the days of week when the User 
will give the Input & this program display the same name 
of day(1-7). Otherwise Displays (invalid Input)*/

#include<iostream>
using namespace std;

int main()
{
	int day_of_week;
	cout <<"Enter a Day (1-7):";
	cin >> day_of_week;
	
	
	// This is Switch Statement.
	switch(day_of_week)
	{
		// Break Statement braeks the code.
		// cases are same as if-else structure.
	 case 1: 
		cout <<"Monday";
		break;
		
	 case 2:
		cout <<"Tuesday";
		break;
		
	 case 3:
		cout <<"Wednesday";
		break;
		
	 case 4:
		cout <<"Thursday";
		break;
		
	 case 5:
		cout <<"Friday";
		break;
		
	 case 6:
		cout <<"Saturday";
		break;
		
	 case 7:
		cout <<"Sunday";
		break;
		
		/* default statement is same as else statemen which
		is held at the last of whole code.*/
		
	  default:
	  	cout <<"Invalid Input";
	}
}
