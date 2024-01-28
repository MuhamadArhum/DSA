#include<iostream>
#include<conio.h>
using namespace std;

// Insertion Operator Overloading
class Test{
	public:
		string name;
		Test()
		{
			name="Arhum";
		}
		friend ostream &operator <<(ostream &output,Test &O)
		{
			output <<"Your Name: "<< O.name;
		}
};
main()
{
	Test T1;
	cout <<T1;
}
