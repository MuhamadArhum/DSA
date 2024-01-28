// This Program will display Different Arthematic Operators.

#include<iostream>
using namespace std;

int main(){
	
	int a,b; // Declaration of variable
	a = 10;  
	b = 7;
	
	int sum = a+b;  // Addition Operator
	int sub = a-b;  // Subtraction Operator
	int mul = a*b;  // Multiplicaton Operator
	int div = a/b;  // Division Operator
	int mod = a%b;  // Modulus Operator
	

	
	// These are Assignment Operators
	a += 10;  
	a -= 10;
	a *= 10;
	a /= 10;
	a %= 10;
	
	
	
    cout << "Sum is = ";
	cout << sum;   // Display the Output of Addition
	cout << endl; 
	
	cout << "Sub is = ";
	cout << sub;   // Display the Output of Subtraction
	cout << endl;
	
	cout << "Mull is = ";
	cout << mul;   // Display the Output of Multiplication
	cout << endl;
	
	cout << "Div is = ";
	cout << div;   // Display the Output of Division
	cout << endl;
	
	cout << "Mod is = ";
	cout << mod;   // Display the Output of Modulus
	cout << endl;
	
	return 0;
}
