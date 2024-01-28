#include<iostream>
#include<conio.h>
using namespace std;

// Extraction Operator Overloading
class Test{
	public:
		string name;
		int age;
		
		friend istream &operator >>(istream &input,Test &I)
		{
			input >> I.name;
			input >> I.age;
			
			return input;
			
		}
		
		friend ostream &operator <<(ostream &output,Test &O)
		{
			output <<"Your Name: "<< O.name << endl;
			output <<"Your Age: "<< O.age << endl;
		}
};
main()
{
	Test T1;
	cout<<"Enter Your Name" << endl;
	cout<<"Enter Your Age" << endl;
	cin >>T1;
	cout <<T1;
}
