/* This Program is used for checking grades of student 
and catagories in Different Grades.
:::::::::::::::::::::::::::::::::
    Program Grade Table
     Grade A+ (Above 90)
	 Grade A  (Above 80)
	 Grade B+ (Above 70)
	 Grade B  (Above 60)
	 Grade C+ (Above 50)
	 Grade C  (Above 40)
	 Grade D  (Above 33)
	 Grade F  (Below 33)
:::::::::::::::::::::::::::::::::	  
*/

#include<iostream>
using namespace std;
int main ()
{
	int marks;
	cout << " Please Enter Your marks:";
	cin >>marks;
	
	
	// Input validation:
	if(marks<0,marks>100)
	{
		cout << "Invaid Input--- Please Try Between (0-100):"<<endl;
	}
	
	// Condition # 1
	 else if(marks>=90)
	{
		cout << "Your Grade is A+";
	}
	
	// Condition # 2
	else if(marks>=80)
	{
		cout << "Your Grace is A";
	}
	
	// Condition # 3
	else if(marks>=70)
	{
		cout << "Your Grade is B+";
	}
	
	// Condition # 4
	else if(marks>=60)
	{
		cout << "Your Grade is B";
	}
	
	// Condition # 5 
	else if(marks>=50)
	{
		cout << "Your Grade is C+";
	}
	
	// Condition # 6
	else if(marks>=40)
	{
		cout << "Your Grade is C";
	}
	
	// Condition # 7
	else if(marks>=33)
	{
		cout << "Your Grade is D";
	}
	// Condition # 8
	else
	{
		cout << "Your Grade is F";
	}
}
