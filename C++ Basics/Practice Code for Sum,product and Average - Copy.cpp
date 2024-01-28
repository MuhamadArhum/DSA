/* This program will display (sum,product & average of some numbers 
which is getting from user */

#include<iostream>
using namespace std;

int main (){
	int num1,num2,num3,num4,product;
	float avg,sum;
	// Beacuse average in the form of float so we are declare float variable.
	
	cout << "Enter 1st Number ";
	cin >> num1;
	
	cout << "Enter 2nd Number ";
	cin >> num2;
	
	cout << "Enter 3rd Number ";
	cin >> num3;
	
	cout << "Enter 4th Number ";	
	cin >> num4;
	
	sum = num1+num2+num3+num4;
	product = num1*num2*num3*num4;
	
	avg = sum/4; // We can type different value in avg.
	
	cout << "The sum is = ";
	cout << sum;
	cout <<endl;
	
	cout << "The Product is = ";
	cout << product;
	cout <<endl;
	
	cout << "The Average is = ";
	cout << avg;
	cout <<endl;
	
	return 0;
	
}
