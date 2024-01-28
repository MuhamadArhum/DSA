#include<iostream>
#include<conio.h>
using namespace std;

class Address{
	public:
	Address(string a);
	{
		add=a;	
	}
};
class Employee{
	private:
		Address *add;
		string name;
		
	public:
		Employee(string n,Address *obj)
		{
			name=n;
			add=obj;
			
		}
		void display()
		{
			cout<<"Name:" <<endl;
			cout<<"Address" <<add->address<<endl;
		}
};
int main()
{
	Address A("Pakistan");
	Employee E("Arhum");
	A.Address();
	E.Employee();
}
