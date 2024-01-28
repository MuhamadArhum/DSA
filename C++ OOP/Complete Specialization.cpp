#include<iostream>
#include<conio.h>
using namespace std;

// Complete Specialization.
template<int K1,int K2>

// Class Declaration.
class myClass
{
	// Variables declaration.
	int a,b;
	
	public:
		myClass(int Num1,int Num2)
		{
			a = Num1;
			b = Num2;
		}
		
		// Sum Function
		void sum()
		{
			cout << a+b << endl;
		}
};

main()
{
	// Creating Objects & Assigning Values.
	myClass <50,30> obj(50,30);
	
	// Object Calling.
	obj.sum();
}
