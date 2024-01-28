/* In this Program we will learn about Built-in Functions
    of strings. ( strcpy)
*/

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char stdname[20] = "Arhum Waheed";
	char std[20];
	strcpy(std,stdname);     // string copy function is used.
	
	cout <<std;
}
