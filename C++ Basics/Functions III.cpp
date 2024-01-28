/* In this we will leran about function parameters.
   and Leran about Loacl scope.
*/
#include<iostream>
using namespace std;
void test(int a,int b,float c);  // Function Declaration / Prototype.

int main()
{
	test(5,7,12.3); // Function Parameter.
}
void test(int a,int b,float c)  // Function Defination.
{
	cout << a+b+c;
}
