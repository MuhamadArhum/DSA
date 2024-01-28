/* In this ,we will learn about string catination.
   Basic purpose of strcat is combine the two or more 
   strings in one line.
*/

#include<iostream>
#include<string.h>     // header file of strings
using namespace std;
int main()
{
	char stdname[20] = "Arhum Waheed";
	char stdschool[20] = " T.T.S";
	
	strcat(stdname,stdschool);      // strcat function.
	
	cout<<stdname;
}
