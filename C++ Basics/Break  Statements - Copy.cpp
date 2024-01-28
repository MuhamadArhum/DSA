#include<iostream>
using namespace std;
int main()
{
	string pass;
	
	while(1)
	{
		cout << "Enter a Password";
	    getline(cin,pass);
	    
		if(pass!="123")
		{
			cout <<"Invalid Password:" <<endl;
			break;
		}
		else
		{
			cout <<"Correct Password:" <<endl;
			break;
		}
	}
}
