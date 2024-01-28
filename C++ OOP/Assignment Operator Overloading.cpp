#include<iostream>
#include<conio.h>

using namespace std;

// This is Operator Overloading Code snippet.

 class Test{
 	public:
 		string name;
 		Test(string name)
 		{
 			this -> name = name;
		}
		Test operator = (Test obj)
		{
			obj.name = name;
			return obj;
			
		}
 };
 main()
 {
 	Test T1("Arhum"),T2("Ahmar");
 	Test T3 = T1 = T2;
 	cout <<" T3 Name: "<<T3.name;
 }
