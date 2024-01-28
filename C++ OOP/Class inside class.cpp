#include<iostream>
using namespace std;

class A
{

public:

    string userId;
	
	class B
	{
		public:
			string address,city;
			
	};
	B n;
	
		void display()
		{
	             cout << userId << endl;
	             cout << n.address << endl;
	             cout << n.city << endl;
	             
	}
};
main()
{
	A M;
	M.userId = "ARHUM";
	M.n.address = "Chak No 338 G.B";
	M.n.city = "Toba";
	M.display();
	
	
	
}
