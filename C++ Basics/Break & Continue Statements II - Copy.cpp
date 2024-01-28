/* This Program is display a message about Password
   Correction or inavlidation.
   Program getting Password From user & check
   it according to the Criteria.
*/

#include<iostream>
using namespace std;
int main()
{
	string pass;               // String Data Type.
	int count;
	
	while(1)                  // While loop.
	{
		cout << "Enter a Password:";
	    getline(cin,pass);
	    
	    
		if(pass!="123")             // if statement
		{
			count++;
			if(count==3)            // Inner if statement
			{
				cout <<"You have made "<<count<<" Wrong attempts";
				break;
			}
			else                 // Inner Else Statement
			{
				continue;        // Continue Statement
			}
		}
		else                     // Outer Else Statement
		{
			cout <<"Correct Password" <<endl;
			break;
		}
	}
}
