// This Program displays the Reference Data type
// How reference Data Type works in C++

#include<iostream>
using namespace std;
main()
{
	int i;         // This is a int
	int &k = i;    // This is Reference data type ( k )
	
	i = 1100;
	
	cout << "The Value of I is = ";
	cout << i;
	cout <<endl;
	
	cout << "The Value of K is = ";
	cout << k;
	
	return 0;
}
