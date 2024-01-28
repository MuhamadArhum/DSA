#include<iostream>
using namespace std;

// This Program Gets input from User after execution
// performs any arthematic operation

int main(){
	int num1,num2,num3,sum,div,mul;
	
	cout << "Enter 1st Value";
	cin >> num1;
	
	cout << "Enter 2nd Value";
	cin >> num2;
	
	cout << "Enter 3rd Value";
	cin >> num3;
	
	sum = num1 + num2 + num3;
	div = num1/num2;
	mul = num2*num3;
	
	cout <<"The Sum is = ";
	cout << sum;
	cout << endl;
	
	cout <<"The Division is = ";
	cout << div;
	cout << endl;
	
	
	cout << "The mul is = ";
	cout << mul;
	cout << endl;
	
	
	return 0;
	
}
