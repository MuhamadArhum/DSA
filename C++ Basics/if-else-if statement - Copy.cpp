/* This Program is used to check Number is Positive,
Negative or Zero.*/
#include<iostream>
using namespace std;
int main ()
{
	int num;
	cout <<"Enter A Number";
	cin >> num;
	
	// This is if Statement.
	if(num>0)
	{
		cout <<"The Number is Positive";
	}
	// This else-if statement.
	else if(num<0)
	{
		cout <<"The Number is Negative";
	}
	// else is same as .
	else
	{
		cout <<"The Number is Zero";
	}
}
