/* This Program display the value of total and average
   of some numbers which is getting from user. */
   
#include<iostream>
using namespace std;
int main()
{
	int A[5],total=0;         // variable declaration.
	float avg;                // variable declaration.
	
	for(int i=0 ; i<5 ;i++)
	{
		cout <<"Enter A Number for Index:"<<i<<" ";
		cin >>A[i];
	}
	for(int j=0 ;j<5 ;j++)
	{
		total =total +A[j];
	}
	
	avg = total/5;
	cout <<"The Total is:" <<total<<endl;
	cout <<"The Average is:" <<avg<<endl;
}
