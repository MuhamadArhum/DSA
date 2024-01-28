/* In this ,we will learn about user defined functions.
   What is pass by value & pass by reference.
*/

#include<iostream>
using namespace std;
float add(int &,int &,float &);  // Function Declaartion.
int main()
{
	int a,b;
	float c;
	cout <<"Enter Three Values";
	cin >>a>>b>>c;
	cout << add(a,b,c);   // Taking Parameters.
}

float add(int &x,int &y,float &z)  // Function Defination

{
	return x+y+z;
}
