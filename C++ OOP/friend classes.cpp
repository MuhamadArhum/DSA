#include<iostream>
using namespace std;

class Exmp_A{
	int i = 3;
	 // Declare the Friend Function
	 friend class Exmp_B;
	 
};
class Exmp_B{
	public:
		void display(Exmp_A obj)
		
		{
			cout << "The value of i is = " <<obj.i;
			
		}
		
};
int main()
{
	Exmp_A a;
	Exmp_B b;
	
	b.display(a);
	return 0;
}
