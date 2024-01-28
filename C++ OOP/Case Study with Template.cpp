// This Program is Displaying 2 Value of Integar & Float with the Help of Template.

#include<iostream>
#include<conio.h>
using namespace std;

// Template Class.
template<class T>
class myClass
{
	private:
		T a,b;
	public:
		myClass(T num1,T num2)
		{
			a = num1;
			b = num2;
		}
		// Sum Function
		T sum()
		{
			return a+b;
		}
};
main()
{
	// Object Creation.
	myClass<int> IntNum(100,50);
	myClass<float> FloatNum(1.78,7.12);
	
	// Objects Calling with Function.
	cout<< endl<< IntNum.sum();
	cout<< endl<< FloatNum.sum();
	
	return 0;
}
