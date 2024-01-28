#include<iostream>
#include<conio.h>
using namespace std;

class Student
{
	int a;
	public:
		Student()
		{
			
			a=10;
			cout <<"Value of A = "<< a <<endl;
		}
		~Student()
		{
			cout <<"This is destructor";
		}
};
int main()
{
	Student s;
	
}
