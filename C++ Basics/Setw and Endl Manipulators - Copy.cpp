// This Program will describe Manipulators

#include<iostream>
#include <iomanip> // This Library is mandatory to use setw and endl manipulators in C++
using namespace std;

// This Program shows Some information about Marks and Names.
// This is practice program.
int main(){
	
	cout << "Sr" <<setw(10) << "Name" << setw(10) <<"Marks" <<endl;
	cout << "1" <<setw(10) << "Arhum" << setw(10) <<"87" <<endl;
	cout << "2" <<setw(10) << "Ali" << setw(10) <<"90" <<endl;
	cout << "3" <<setw(10) << "Hassan" << setw(10) <<"91" <<endl;
	cout << "4" <<setw(10) << "Ahmar" << setw(10) <<"89"  <<endl;
	cout << "5" <<setw(10) << "Saad" << setw(10) <<"78"  <<endl;
	}
	
	
	
	/*
	Sr.        Name        Marks
	1          Arhum        87
	2          Ali          90
	3          Hassan       91
	4          Ahmar        89
	5          Saad         78
	*/
	
