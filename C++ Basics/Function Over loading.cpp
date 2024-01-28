/* In this , we will learn about Function over loading.
*/
#include<iostream>
using namespace std; 
int addition(int a, int b)  // 1st Function.
{
	return a+b;    // Return Type.
}
int addition(int a, int b, int c)  // 2nd Function.
{
	return a+b+c;  // Return Type.
}
int main()
{
	int a,b,c;
	a=20;
	b=40;
	c=30;
	cout <<"Addition of two Values = ";
	cout <<addition(a,b)<<endl;
	cout <<"Addition of Three Values = ";
	cout <<addition(a,b,c)<<endl;
}
