// In this Code, We will learn about Templates of C++.
// and We learn Multiple Types Arguments in OOPs.

#include<iostream>
#include<conio.h>
using namespace std;

// K = int & J = double 
// Making Template Function
template<class K, class J>
void Print(K a,J b,K c)
{
	cout << a+b+c <<endl;
}


main()
{
	Print(10,20.5,45);
}
