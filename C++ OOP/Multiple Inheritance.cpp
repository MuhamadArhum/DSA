#include<iostream>
#include<conio.h>
using namespace std;
class Women   // Class No 1
{
	public:
	void Walk()
	{
		cout << "Women Walk function" << endl;
	}
};
class Fish     // Class No 2
{
	public:
	void Swim()
	{
		cout << "Fish Swim function" << endl;
	}
};
class Mermaid : public Women,public Fish
{
	
};
main()
{
	Mermaid M;     // Making Object of Function
	M.Swim();
	M.Walk();
}
