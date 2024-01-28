#include<iostream>
using namespace std;

class box
{
	private:
		int length;
	public:
		
		friend int printlength(box); // This is friend function
		
};
    int printlength(box a)
{
	a.length +=10;
	return a.length;
	
}
int main()
{
	box a;
	cout << " Length of Box: " << printlength(a)<<endl;
	return 0;
	
}
