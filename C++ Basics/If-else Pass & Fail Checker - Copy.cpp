/* This Program is use for checking Result of student 
who is pass or fail.*/
#include<iostream>
using namespace std;

int main()
{
	int marks;
	
	cout << "Enter Your Marks:";
	cin >> marks;
	
	// This is if statement
	// (marks>33) is condition.
	if(marks>=33)
	{
		cout << " Congratulations! You are Pass";
	}
	// This is ELSE Statement.
	else
	{
		cout << "Sorry! You are Fail";
	}
}
