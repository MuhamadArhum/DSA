#include<iostream>
#include<conio.h>
using namespace std;
class Planet
{
	public:
		Planet()          //Default constructor of parent class Planet
		{
			cout<<"Planet Constructor is called"<<endl;
		}
};
class Inner_Planet: Planet       //Inheritance between Planet(parent) and Inner_Planet(child)
{
	public:
	Inner_Planet()      //Default constructor of child class Inner_Planet
	{
		cout<<"Inner Planet Constructor is called"<<endl;
	}
};
class Outer_Planet: Planet         //Inheritance between Planet(parent) and Outer_Planet(child)
{
	public:
	Outer_Planet()             //Default constructor of child class Outer_Planet
	{
		cout<<"Outer Planet Constructor is called"<<endl;
	}
};
main()
{
	Inner_Planet IP;    
 //Object of child class Inner_Planet. It will print the default constructor of parent and then child class.
	cout<<"\n";
	Outer_Planet OP;       //Object of child class Outer_Planet. It will print the default constructor of parent and then child class.

	cout<<"\n";
	system("pause");
}
