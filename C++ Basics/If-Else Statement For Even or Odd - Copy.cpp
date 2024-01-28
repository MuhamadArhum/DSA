/* This Program is use for checking The number is 
even or odd.*/
#include<iostream>
using namespace std;

int main()
{
	int num;
	
	cout << "Enter Number = ";
	cin >> num;
	
	// This is if statement
	// Modulus Operator is Used in this Statement.
	if( num%2 == 0)
	{
		cout <<"The Number is Even:";
	}
	// This is ELSE statement.
	else
	{
		cout << "The Number is Odd:";
	}
}
