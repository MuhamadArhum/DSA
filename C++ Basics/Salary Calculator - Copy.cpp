/* This Program is Calculates the Basic,Net Pay 
   of any Employee. And Calculate House Rent Also: */

#include<iostream>
using namespace std;
int main()
{
	float basic_pay,house_rent,net_pay;   // Variables Declaration
	cout <<"Enter Basic Pay :";
	cin >> basic_pay;
	
	if(basic_pay<=30000)             // Condition
	{
		house_rent=basic_pay*30/100; 
	}
	else if(basic_pay>=30000 && basic_pay<=50000) // Condition
	{
		house_rent=basic_pay*35/100;
	}
	else if(basic_pay>=50000)         // Condition
	{
		house_rent=basic_pay*40/100;
	}
	
	net_pay = basic_pay + house_rent;    // Net Pay Formula.
	
	cout <<"The Net Pay is = "<< net_pay << endl;
	cout <<"The Basic Pay is = "<< basic_pay << endl;
	cout <<"The Rent of House is = "<< house_rent <<  endl;
	cout <<"***** Thanks For Coding *****";
}
