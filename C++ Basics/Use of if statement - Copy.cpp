/* This Program is used for checking the sum & Product
02 Numbers which is getting from user. */
#include<iostream>
using namespace std;

int main()
{
	int num1,num2,sum,product;
	
	cout <<"Enter 1st Number = ";
	cin >> num1;
	
	cout <<"Enter 2nd Number = ";
	cin >> num2;
	
	// This is if statement.
	if(num1>0)
	{
		// This section is Put inside the statement.
		sum = num1 + num2;
		product = num1 * num2;
		
		cout << "The Sum is = "<<sum<<endl;
		cout << "The Product is = "<<product<<endl;
	}
}
