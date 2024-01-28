/* In this, we wil add 2 numbers with the help of functions.
   The Inputs getting from User. 
*/
#include<iostream>
using namespace std;
void add();   // prototype or Declaration of Function

int main()
{
    add();
}
 void add()
 {
 	int a,b;       // Variable Declaration inside the Function.
 	cin >> a;      //  Taking Input 1
 	cin >>b;       //  Taking Input 2
 	cout <<a+b;    // Printing Output.
 }
