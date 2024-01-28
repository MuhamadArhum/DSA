#include<iostream>
using namespace std;

// Global Variable
int x = 100;

main()
{
	// Local Variable
	int x = 10;
	cout << :: x << endl; // In this (::) is used to display global variable
	
	
}
