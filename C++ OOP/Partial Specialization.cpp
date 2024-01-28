#include<iostream>
#include<conio.h>
using namespace std;

// Partial Specialization.
template<class K1,int K2>

// Class Declaration.
class myClass
{
	K1 a;  
	int b;
	public:
		myClass(K1 Num1,int Num2)
		{
			a = Num1;
			b = Num2;
		}
		
		// Sum Function.
		void sum()
		{
			cout << a+b << endl;
		}
};

main()
{
	myClass <int,30> obj(100,30);
	obj.sum();
}
